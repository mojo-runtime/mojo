ifndef __initialized
define __initialized :=
1
endef

ROOT/ := ${dir ${lastword ${MAKEFILE_LIST}}}
ifeq (${ROOT/},./)
ROOT/ :=
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
# No equivalent.

clang += -fno-asynchronous-unwind-tables -fno-exceptions
gcc   += -fno-asynchronous-unwind-tables -fno-exceptions

clang += -iquote${ROOT/}include -I${ROOT/}standard/c -cxx-isystem ${ROOT/}standard/c++
gcc   += -iquote${ROOT/}include -I${ROOT/}standard/c -isystem${ROOT/}standard/c++

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
$${foreach c,$${compilers},$${eval $${call compile-one,$${c},${value 1}}}}
endef

#---------------------------------------------------------------------------------------------------

define compile-one
__all := $${__all} $${patsubst $$/%,$$>/$1/%.s,$2}
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

include include/builtin/__test/Makefile
include include/io/__test/Makefile
include include/std/__test/Makefile
include include/os/__test/Makefile
include include/terminal/__test/Makefile
include standard/c/__test/Makefile
include standard/c/sys/__test/Makefile
include standard/c++/__test/Makefile

else
#---------------------------------------------------------------------------------------------------
# We've been included.

/ := ${dir ${lastword ${filter-out ${lastword ${MAKEFILE_LIST}},${MAKEFILE_LIST}}}}
ifeq ($/,./)
/ :=
endif

> := $/.build

__roots := ${__roots} $>

$>:
	mkdir $@

${foreach c,${compilers},${eval ${call define-rules,${c}}}}

#---------------------------------------------------------------------------------------------------
endif
