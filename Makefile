.DEFAULT_GOAL := all

ROOT  := ${realpath ${dir ${firstword ${MAKEFILE_LIST}}}}
BUILD := ${ROOT}/build

####################################################################################################
# ${ }: variable containing a single space

null :=
space := ${null} ${null}
${space} := ${space}

undefine null
undefine space

####################################################################################################
# ${.}: variable containing the current directory

. := ${ROOT}

####################################################################################################

define directory
${patsubst %/,%,${dir ${1}}}
endef

define path-from
${patsubst ${abspath ${1}}/%,%,${abspath ${2}}}
endef

define path
${patsubst ${ROOT}/%,%,${abspath ${1}}}
endef

####################################################################################################
# pushd/popd

__stack :=

define pushd

_directory := ${1}

ifeq ($${words $${_directory}},0)
$${error `pushd` called with no arguments}
endif

__stack := $${subst $${ },~*~,$${.}} $${__stack}
.       := $${.}/$${_directory}

endef

#---------------------------------------------------------------------------------------------------

define popd
ifeq ($${words $${__stack}},0)
$${error `popd` from empty stack}
endif

ifeq ($${words $${__stack}},1)
.       := $${strip $${__stack}}
__stack :=
else
.       := $${word 1,$${__stack}}
__stack := $${wordlist 2,$${words $${__stack}},$${__stack}}
endif

. := $${subst ~*~,${ },$${.}}

endef

####################################################################################################
# push-makefile/pop-makefile

define push-makefile
${call pushd,$${call path-from,${.},$${dir $${lastword $${MAKEFILE_LIST}}}}}

build := $${BUILD}/$${call path,$${.}}

$${build}: | $${call directory,$${build}}
	mkdir $${call path,$$@}
endef

#---------------------------------------------------------------------------------------------------

define pop-makefile
$${eval $${call popd}}

build := $${BUILD}/$${call path,$${.}}
endef

####################################################################################################

${BUILD}:
	mkdir ${call path,$@}

####################################################################################################

__clang := clang
__gcc   := gcc

__clang += -fcolor-diagnostics
__gcc   += -fdiagnostics-color=always

__clang += -ferror-limit=1
# No equivalent.

__clang += -fno-asynchronous-unwind-tables -fno-exceptions
__gcc   += -fno-asynchronous-unwind-tables -fno-exceptions

__clang += -iquoteinclude
__gcc   += -iquoteinclude

__clang += -nostdinc -nostdlib
__gcc   += -nostdinc -nostdlib

__clang += -O3
__gcc   += -O3

__clang += -Werror -Weverything
__gcc   += -Werror -Wall

__clang += -Wno-c++98-compat -Wno-c++98-compat-pedantic
__gcc   += -Wno-unknown-pragmas

#---------------------------------------------------------------------------------------------------

clang   := ${__clang} -std=c11
gcc     :=   ${__gcc} -std=c11

clang++ := ${__clang} -std=c++1z
g++     :=   ${__gcc} -std=c++14

#---------------------------------------------------------------------------------------------------

clang++-arm-linux      := ${clang++} -target armv5-none-linux-elf -mfloat-abi=hard
clang++-x86_64-freebsd := ${clang++} -target x86_64-freebsd
clang++-x86_64-linux   := ${clang++} -target x86_64-linux

#---------------------------------------------------------------------------------------------------

__c-compilers := \
	clang \
	gcc

__c++-compilers := \
	clang++ \
	clang++-arm-linux \
	clang++-x86_64-freebsd \
	clang++-x86_64-linux \
	g++

####################################################################################################

define __compiler-rules
%/${1}: | %
	mkdir $${call path,$$@}
endef

${foreach c,${__c-compilers} ${__c++-compilers},${eval ${call __compiler-rules,${c}}}}

####################################################################################################

__all :=

define test-c-compilers
${foreach c,${__c-compilers},${eval ${call __compile,${c},${value 1}}}}
endef

define test-c++-compilers
${foreach c,${__c++-compilers},${eval ${call __compile,${c},${value 1}}}}
endef

#---------------------------------------------------------------------------------------------------

define __compile

_source := $${call path,${.}/${2}}
_target := $${call path,$${build}/${1}/${2}.s}

$${_target}: $${_source} | $${build}/${1}
	$${${1}} -o $$@ -S $$<

__all := ${__all} $${_target}
endef

####################################################################################################

include test/__all__.mk

####################################################################################################

.PHONY: all
all: ${__all}

.PHONY: clean
clean:
	rm -rf ${call path,${BUILD}}
