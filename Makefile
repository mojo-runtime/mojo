.DEFAULT_GOAL := all

ROOT := $(realpath $(dir $(lastword $(MAKEFILE_LIST))))

####################################################################################################

__clang := clang
__gcc   := gcc

__clang += -fcolor-diagnostics
__gcc   += -fdiagnostics-color=always

__clang += -ferror-limit=1
# No equivalent.

__clang += -fno-asynchronous-unwind-tables -fno-exceptions
__gcc   += -fno-asynchronous-unwind-tables -fno-exceptions

__clang += -iquote$(ROOT)/include
__gcc   += -iquote$(ROOT)/include

__clang += -nostdinc -nostdlib
__gcc   += -nostdinc -nostdlib

__clang += -O3
__gcc   += -O3

__clang += -Werror -Weverything
__gcc   += -Werror -Wall

__clang += -Wno-c++98-compat -Wno-c++98-compat-pedantic
__gcc   += -Wno-unknown-pragmas

#---------------------------------------------------------------------------------------------------

clang   := $(__clang) -std=c11
gcc     := $(__gcc)   -std=c11

clang++ := $(__clang) -std=c++1z
g++     := $(__gcc)   -std=c++14

#---------------------------------------------------------------------------------------------------

clang++-arm-linux      := $(clang++) -target armv5-none-linux-elf -mfloat-abi=hard
clang++-x86_64-freebsd := $(clang++) -target x86_64-freebsd
clang++-x86_64-linux   := $(clang++) -target x86_64-linux

#---------------------------------------------------------------------------------------------------

c-compilers := \
	clang \
	gcc

c++-compilers := \
	clang++ \
	clang++-arm-linux \
	clang++-x86_64-freebsd \
	clang++-x86_64-linux \
	g++

####################################################################################################

__all__ :=

#---------------------------------------------------------------------------------------------------

define compile
_target := $(.)/.build/$(1)/$(2).s

$$(_target): $(.)/$(2) | $(.)/.build/$(1)
	$$($(1)) -o $$@ -S $$<

__all__ := $(__all__) $$(_target)
endef

define mkdir
@echo mkdir $(subst $(ROOT)/,,$(1))
@mkdir $(1)
endef

####################################################################################################

include include/c/_test/init.mk
include include/os/_test/init.mk
include include/program/_test/init.mk
include include/std/_test/init.mk
include include/terminal/_test/init.mk

####################################################################################################

.PHONY: all
all: $(__all__)

.PHONY: clean
clean:
	rm -rf include/c/_test/.build
	rm -rf include/os/_test/.build
	rm -rf include/program/_test/.build
	rm -rf include/std/_test/.build
	rm -rf include/terminal/_test/.build
