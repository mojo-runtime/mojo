ifndef ROOT

CWD  := ${realpath ${dir ${firstword ${MAKEFILE_LIST}}}}
ROOT := ${realpath ${dir ${lastword ${MAKEFILE_LIST}}}}

.DEFAULT_GOAL := all
.SECONDEXPANSION:

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

clang += -iquote${ROOT}/include -I${ROOT}/standard/c -cxx-isystem ${ROOT}/standard/c++
gcc   += -iquote${ROOT}/include -I${ROOT}/standard/c -isystem${ROOT}/standard/c++

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
	mkdir $${call relative,$$@}

$$>/$1/%.c.s: $$./%.c | $$>/$1
	$${$1} -S -o $${call relative,$$@} $${call relative,$$<} -std=c11

$$>/$1/%.cxx.s: $$./%.cxx | $$>/$1
	$${$1} -S -o $${call relative,$$@} $${call relative,$$<} -std=c++14

endef

#---------------------------------------------------------------------------------------------------

define relative
${patsubst ${CWD}/%,%,$1}
endef

#---------------------------------------------------------------------------------------------------

define compile-all
$${foreach c,$${compilers},$${eval $${call compile-one,$${c},${value 1}}}}
endef

#---------------------------------------------------------------------------------------------------

define compile-one
_sources := $2
__all := $${__all} $${_sources:$$./%=$$>/$1/%.s}
endef

####################################################################################################

.PHONY: all
all: $${__all}

.PHONY: clean
clean:
	rm -rf ${patsubst ${CWD}/%,%,${__roots}}

####################################################################################################
endif # First time only
####################################################################################################

ifeq (${words ${MAKEFILE_LIST}},1)
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

. := ${realpath ${dir ${lastword ${filter-out ${lastword ${MAKEFILE_LIST}},${MAKEFILE_LIST}}}}}
> := $./.build

__roots := ${__roots} $>

$>:
	mkdir ${call relative,$@}

${foreach c,${compilers},${eval ${call define-rules,${c}}}}

#---------------------------------------------------------------------------------------------------
endif
