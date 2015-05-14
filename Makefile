ifndef __initialized
define __initialized :=
1
endef

// := ${dir ${lastword ${MAKEFILE_LIST}}}
ifeq (${//},./)
// :=
__top := 1
endif

####################################################################################################

define Compiler
# Fields
$1.path      := $1
$1.flags     :=
$1.c-flags   :=
$1.c++-flags :=
# Properties
define $1.rules
$$/.build/$1:
	mkdir -p $$$$@
$$/.build/$1/%.c.s: $$/%.c | $$/.build/$1
	$$$${$1.path} $$$$< -o $$$$@ $$$${$1.flags} $$$${$1.c-flags} -S
$$/.build/$1/%.cxx.s: $$/%.cxx | $$/.build/$1
	$$$${$1.path} $$$$< -o $$$$@ $$$${$1.flags} $$$${$1.c++-flags} -S
endef
# Functions
define $1.copy
$${call Compiler,$$1}
$$1.path      := $${$1.path}
$$1.flags     := $${$1.flags}
$$1.c-flags   := $${$1.c-flags}
$$1.c++-flags := $${$1.c++-flags}
endef
endef

${eval ${call Compiler,clang}}

clang.flags := \
	-fcolor-diagnostics \
	-ferror-limit=1 \
	-fno-asynchronous-unwind-tables \
	-fno-exceptions \
	-iquote${//}c/include \
	-I${//}c/system \
	-nostdinc \
	-nostdlib \
	-O3 \
	-Werror \
	-Weverything

clang.c-flags := \
	-std=c11

clang.c++-flags := \
	-I${//}c++/system \
	-iquote${//}c++/include \
	-std=c++14 \
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
	-iquote${//}c/include \
	-Wall \
	-Werror \
	-Wno-unknown-pragmas

gcc.c-flags := \
	-std=c11

gcc.c++-flags := \
	-iquote${//}c++/include \
	-I${//}c++/system \
	-std=c++14

compilers := \
	clang \
	clang-arm-linux \
	clang-x86_64-freebsd \
	clang-x86_64-linux \
	gcc

define compile-all
${foreach c,${compilers},${patsubst $/%,$/.build/$c/%.s,$1}}
endef

####################################################################################################

.SECONDEXPANSION:
.PHONY: all
all: tests

.PHONY: clean
clean: $${foreach x,$${__roots},$${if $${realpath $$x.build},__clean-$$x.build}}

.PHONY: tests
tests: $${tests}
tests :=

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
