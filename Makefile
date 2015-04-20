ifndef ROOT

CWD  := ${realpath ${dir ${firstword ${MAKEFILE_LIST}}}}
ROOT := ${realpath ${dir ${lastword ${MAKEFILE_LIST}}}}

.DEFAULT_GOAL := all
.SECONDEXPANSION:

__all   :=
__roots :=
ifeq (${CWD},${ROOT})
__top := 1
endif

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

clang-arm-linux      := ${clang} -target armv5-none-linux-elf -mfloat-abi=hard
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

$${build}/${1}: | $${build}
	mkdir $${call relative,$$@}

$${build}/${1}/%.c.s: $${.}/%.c | $${build}/${1}
	$${${1}} -S -o $${call relative,$$@} $${call relative,$$<} -std=c11

$${build}/${1}/%.cxx.s: $${.}/%.cxx | $${build}/${1}
	$${${1}} -S -o $${call relative,$$@} $${call relative,$$<} -std=c++14

endef

#---------------------------------------------------------------------------------------------------

define directory
${patsubst %/,%,${dir ${1}}}
endef

#---------------------------------------------------------------------------------------------------

define relative
${patsubst ${CWD}/%,%,${1}}
endef

#---------------------------------------------------------------------------------------------------

define compile-all
$${foreach c,$${compilers},$${eval $${call compile-one,$${c},${value 1}}}}
endef

#---------------------------------------------------------------------------------------------------

define compile-one
_sources := ${2}
__all := $${__all} $${_sources:$${.}/%=$${build}/${1}/%.s}
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

ifdef __top
#---------------------------------------------------------------------------------------------------
# We're the Makefile.

undefine __top

include include/io/_test/Makefile
include include/std/_test/Makefile
include include/system/_test/Makefile
include include/terminal/_test/Makefile
include standard/c/_test/Makefile
include standard/c/sys/_test/Makefile
include standard/c++/_test/Makefile

else
#---------------------------------------------------------------------------------------------------
# We've been included.

.       := ${realpath ${dir ${lastword ${filter-out ${lastword ${MAKEFILE_LIST}},${MAKEFILE_LIST}}}}}
build   := ${.}/.build
__roots := ${__roots} ${build}

${build}:
	mkdir ${call relative,$@}

${foreach c,${compilers},${eval ${call define-rules,${c}}}}

#---------------------------------------------------------------------------------------------------
endif
