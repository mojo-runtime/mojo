ifndef __initialized
define __initialized :=
1
endef

// := ${dir ${lastword ${MAKEFILE_LIST}}}
ifeq (${//},./)
// :=
__top := 1
endif

test :=

####################################################################################################

define build/
$/.build/
endef

####################################################################################################

define Compiler
# Fields
$1.path  := $1
$1.flags :=
# Properties
define $1.rules
$${build/}$1:
	mkdir -p $$$$@
$${build/}$1/%.c.s: $$/%.c | $${build/}$1
	$$$${$1.path} $$$$< -o $$$$@ $$$${$1.flags} -S -std=c11
$${build/}$1/%.cxx.s: $$/%.cxx | $${build/}$1
	$$$${$1.path} $$$$< -o $$$$@ $$$${$1.flags} -S -std=c++14
endef
# Functions
define $1.copy
$${call Compiler,$$1}
$$1.path  := $${$1.path}
$$1.flags := $${$1.flags}
endef
endef

${eval ${call Compiler,clang}}

clang.flags := \
	-fcolor-diagnostics \
	-ferror-limit=1 \
	-fno-asynchronous-unwind-tables \
	-fno-exceptions \
	-iquote${//}c/include \
	-iquote${//}c++/include \
	-I${//}c/system \
	-I${//}c++/system \
	-nostdinc \
	-nostdlib \
	-O3 \
	-Werror \
	-Weverything \
	-Wno-c++98-compat \
	-Wno-c++98-compat-pedantic

${eval ${call clang.copy,clang-arm-linux}}
${eval ${call clang.copy,clang-x86_64-freebsd}}
${eval ${call clang.copy,clang-x86_64-linux}}

clang-arm-linux.flags      += -target armv7-linux-android
clang-x86_64-freebsd.flags += -target x86_64-freebsd
clang-x86_64-linux.flags   += -target x86_64-linux

${eval ${call Compiler,gcc}}

gcc.flags := \
	-fdiagnostics-color=always \
	-fmax-errors=1 \
	-fno-asynchronous-unwind-tables \
	-fno-exceptions \
	-I${//}c/system \
	-I${//}c++/system \
	-iquote${//}c/include \
	-iquote${//}c++/include \
	-Wall \
	-Werror \
	-Wno-unknown-pragmas

compilers := \
	clang \
	clang-arm-linux \
	clang-x86_64-freebsd \
	clang-x86_64-linux \
	gcc

define compile-all
${foreach c,${compilers},${patsubst $/%,${build/}$c/%.s,$1}}
endef

####################################################################################################

.SECONDEXPANSION:
.PHONY: all
all: test

.PHONY: clean
clean: $${foreach x,$${__roots},$${if $${realpath $$x.build},__clean-$$x.build}}

.PHONY: test
test: $${test}

####################################################################################################
endif # First time only
####################################################################################################

ifdef __top
undefine __top
#---------------------------------------------------------------------------------------------------
# We're the Makefile.

include c/Makefile
include c++/Makefile

else
#---------------------------------------------------------------------------------------------------
# We've been included.

/ := ${dir ${lastword ${filter-out ${lastword ${MAKEFILE_LIST}},${MAKEFILE_LIST}}}}

ifdef __roots
__roots := ${__roots} $/
else
__roots := $/
endif

ifeq ($/,./)
/ :=
endif

.PHONY:
__clean-$/.build:
	rm -r ${subst __clean-,,$@}

${foreach c,${compilers},${eval ${$c.rules}}}

#---------------------------------------------------------------------------------------------------
endif
