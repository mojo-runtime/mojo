ifndef __initialized
define __initialized :=
1
endef

// := ${dir ${lastword ${MAKEFILE_LIST}}}
ifeq (${//},./)
// :=
__top := 1
endif

__all   :=
__roots :=

####################################################################################################

clang := clang-3.7
gcc   := gcc-4.9

clang += -fcolor-diagnostics
gcc   += -fdiagnostics-color=always

clang += -ferror-limit=1
gcc   += -fmax-errors=1

clang += -fno-asynchronous-unwind-tables -fno-exceptions
gcc   += -fno-asynchronous-unwind-tables -fno-exceptions

clang += -iquote${//}include -I${//}standard/c -cxx-isystem ${//}standard/c++
gcc   += -iquote${//}include -I${//}standard/c -isystem${//}standard/c++

clang += -nostdinc -nostdlib
gcc   += -nostdinc -nostdlib

clang += -O3
gcc   += -O3

clang += -Werror -Weverything
gcc   += -Werror -Wall

clang += -Wno-c++98-compat -Wno-c++98-compat-pedantic
gcc   += -Wno-unknown-pragmas

#---------------------------------------------------------------------------------------------------

clang-arm-linux      := ${clang} -target armv7-linux-android
clang-x86_64-freebsd := ${clang} -target x86_64-freebsd
clang-x86_64-linux   := ${clang} -target x86_64-linux

#---------------------------------------------------------------------------------------------------

compilers := \
	clang-arm-linux \
	clang-x86_64-freebsd \
	clang-x86_64-linux \
	gcc

####################################################################################################

define define-rules

$$>/$1: | $$>
	mkdir $$@

$$>/$1/%.c.s: $$/%.c | $$>/$1
	$${$1} -S -o $$@ $$< -std=c11

$$>/$1/%.cxx.s: $$/%.cxx | $$>/$1
	$${$1} -S -o $$@ $$< -std=c++14

endef

#---------------------------------------------------------------------------------------------------

define compile-all
${foreach c,${compilers},
__all += $${patsubst $$/%,$$>/${c}/%.s,$1}
}
endef

####################################################################################################

.SECONDEXPANSION:
.PHONY: all
all: $${__all}

.PHONY: clean
clean:
	rm -rf ${patsubst ${CURDIR}/%,%,${__roots}}

####################################################################################################
endif # First time only
####################################################################################################

ifdef __top
undefine __top
#---------------------------------------------------------------------------------------------------
# We're the Makefile.

include ${//}include/Makefile
include ${//}standard/Makefile

else
#---------------------------------------------------------------------------------------------------
# We've been included.

/ := ${dir ${lastword ${filter-out ${lastword ${MAKEFILE_LIST}},${MAKEFILE_LIST}}}}
ifeq ($/,./)
/ :=
endif

> := $/.build

__roots += $>

$>:
	mkdir $@

${foreach c,${compilers},${eval ${call define-rules,${c}}}}

#---------------------------------------------------------------------------------------------------
endif
