.DEFAULT_GOAL := all

ROOT  := ${realpath ${dir ${firstword ${MAKEFILE_LIST}}}}
BUILD := build

####################################################################################################

define path
${patsubst ${ROOT}/%,%,${abspath ${1}}}
endef

####################################################################################################

clang := clang
gcc   := gcc

clang += -fcolor-diagnostics
gcc   += -fdiagnostics-color=always

clang += -ferror-limit=1
# No equivalent.

clang += -fno-asynchronous-unwind-tables -fno-exceptions
gcc   += -fno-asynchronous-unwind-tables -fno-exceptions

clang += -iquoteinclude -Istandard/c
gcc   += -iquoteinclude -Istandard/c

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

####################################################################################################

all :=

compilers := \
	clang-arm-linux \
	clang-x86_64-freebsd \
	clang-x86_64-linux \
	gcc

directories := \
	include/io \
	include/std \
	include/system \
	include/terminal \
	standard/c \
	standard/c/sys

####################################################################################################

define define-tests

.     := $${call path,${ROOT}/${2}}
build := $${call path,${BUILD}/${1}/${2}}

#---------------------------------------------------------------------------------------------------

$${build}/_test:
	mkdir -p $$@

#---------------------------------------------------------------------------------------------------

sources := $${wildcard $${.}/_test/*.c}
targets := $${sources:$${.}/_test/%.c=$${build}/_test/%.s}

$${targets}: $${build}/_test/%.s: $${.}/_test/%.c $${.}/%.h | $${build}/_test
	$${${1}} -S -o $$@ -std=c11 $$<

all := $${all} $${targets}

#---------------------------------------------------------------------------------------------------

sources := $${wildcard $${.}/_test/*.cxx}
targets := $${sources:$${.}/_test/%.cxx=$${build}/_test/%.s}

$${targets}: $${build}/_test/%.s: $${.}/_test/%.cxx $${.}/% | $${build}/_test
	$${${1}} -S -o $$@ -std=c++14 $$<

all := $${all} $${targets}

#---------------------------------------------------------------------------------------------------

endef

${foreach c,${compilers},${foreach d,${directories},${eval ${call define-tests,${c},${d}}}}}

####################################################################################################

.PHONY: all
all: ${all}

.PHONY: clean
clean:
	rm -rf ${call path,${BUILD}}
