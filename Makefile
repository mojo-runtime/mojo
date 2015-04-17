.DEFAULT_GOAL := all

####################################################################################################

BUILD := build
$(BUILD):
	mkdir $@

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

COMPILERS := $(c-compilers) $(c++-compilers)

####################################################################################################

__all   :=
__file  := $(lastword $(MAKEFILE_LIST))

$(__file)-build := $(BUILD)

#---------------------------------------------------------------------------------------------------

define push-makefile
_parent := $(__file)

$(eval $(call __set,$(lastword $(MAKEFILE_LIST))))

$$(__file)-build  := $$(build)
$$(__file)-parent := $$(_parent)

$$(build): | $$($$(_parent)-build)
	mkdir $$@

$(COMPILERS:%=$$(build)/%): %: | $$(build)
	mkdir $$@

endef

#---------------------------------------------------------------------------------------------------

define pop-makefile
$(eval $(call __set,$$($$(__file)-parent)))
endef

#---------------------------------------------------------------------------------------------------

define __set
__file := $(1)
.      := $$(subst /$$(notdir $$(__file)),,$$(__file))
build  := $$(BUILD)/$$(.)
endef

####################################################################################################

define compile
_source := $(.)/$(2)
_target := $(build)/$(1)/$(2).s

$$(_target): $$(_source) | $(build)/$(1)
	$$($(1)) -o $$@ -S $$<

__all := $(__all) $$(_target)
endef

####################################################################################################

include test/__all__.mk

####################################################################################################

.PHONY: all
all: $(__all)

.PHONY: clean
clean:
	rm -rf $(BUILD)
