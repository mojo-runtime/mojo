ifndef __initialized
define __initialized :=
1
endef

// := ${dir ${lastword ${MAKEFILE_LIST}}}
ifeq (${//},./)
// :=
__top := 1
endif

__roots :=

####################################################################################################

Configuration.all :=

define Configuration

$0.all += $1

# Fields

$1.path      := $1
$1.flags     :=
$1.c-flags   :=
$1.c++-flags :=

# Properties

define $1.rules
$$>$1: | $$>
	mkdir $$$$@
$$>$1/%.c.s: $$/%.c | $$>$1
	$$$${$1.path} $$$$< -o $$$$@ $$$${$1.flags} $$$${$1.c-flags} -S
$$>$1/%.cxx.s: $$/%.cxx | $$>$1
	$$$${$1.path} $$$$< -o $$$$@ $$$${$1.flags} $$$${$1.c++-flags} -S
endef

# Functions

define $1.copy
$${call Configuration,$$1}
$$1.path      := $${$1.path}
$$1.flags     := $${$1.flags}
$$1.c-flags   := $${$1.c-flags}
$$1.c++-flags := $${$1.c++-flags}
endef

endef

####################################################################################################

${eval ${call Configuration,clang}}
${eval ${call Configuration,gcc}}

clang.flags += -fcolor-diagnostics
gcc.flags   += -fdiagnostics-color=always

clang.flags += -ferror-limit=1
gcc.flags   += -fmax-errors=1

clang.flags += -fno-asynchronous-unwind-tables -fno-exceptions
gcc.flags   += -fno-asynchronous-unwind-tables -fno-exceptions

clang.flags += -I${//}include
gcc.flags   += -I${//}include

clang.c++-flags += -I${//}include/c++
gcc.c++-flags   += -I${//}include/c++

clang.flags += -I${//}lib
gcc.flags   += -I${//}lib

clang.flags += -nostdinc -nostdlib
gcc.flags   += -nostdinc -nostdlib

clang.flags += -O3
gcc.flags   += -O3

clang.c-flags += -std=c11
gcc.c-flags   += -std=c11

clang.c++-flags += -std=c++1z
gcc.c++-flags   += -std=c++14

clang.flags += -Werror -Weverything -Wno-reserved-id-macro
gcc.flags   += -Werror -Wall -Wno-unknown-pragmas

clang.c++-flags += -Wno-c++98-compat -Wno-c++98-compat-pedantic
clang.c++-flags += -Wno-c99-extensions
clang.c++-flags += -Wno-old-style-cast

${eval ${call clang.copy,clang-arm-linux}}
${eval ${call clang.copy,clang-x86_64-freebsd}}
${eval ${call clang.copy,clang-x86_64-linux}}

clang-arm-linux.flags      += -target armv7-linux-android
clang-x86_64-freebsd.flags += -target x86_64-freebsd
clang-x86_64-linux.flags   += -target x86_64-linux

${eval ${call clang.copy,clang-debug}}

clang-debug.flags += -DDEBUG

define compile-all
${foreach c,${Configuration.all},${patsubst $/%,$>$c/%.s,$1}}
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

include include/Makefile
include lib/Makefile

else
#---------------------------------------------------------------------------------------------------
# We've been included.

/ := ${dir ${lastword ${filter-out ${lastword ${MAKEFILE_LIST}},${MAKEFILE_LIST}}}}

__roots := ${__roots} $/

ifeq ($/,./)
/ :=
endif

> := $/.build/
$>:
	mkdir $@

.PHONY:
__clean-$/.build:
	rm -r ${subst __clean-,,$@}

${foreach c,${Configuration.all},${eval ${$c.rules}}}

#---------------------------------------------------------------------------------------------------
endif
