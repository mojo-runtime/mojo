ROOT := $(realpath $(dir $(lastword $(MAKEFILE_LIST))))

ifeq ($(shell pwd),$(ROOT))
BUILD   := build
INCLUDE := include
TEST    := test
else
BUILD   := $(ROOT)/build
INCLUDE := $(ROOT)/include
TEST    := $(ROOT)/test
endif

.DEFAULT_GOAL := test

####################################################################################################

clang := \
	clang \
	-fcolor-diagnostics \
	-ferror-limit=1 \
	-fno-asynchronous-unwind-tables \
	-fno-exceptions \
	-iquote$(INCLUDE) \
	-nostdlib \
	-nostdinc \
	-std=c11 \
	-O3 \
	-Werror \
	-Weverything

clang++ := \
	clang \
	-fcolor-diagnostics \
	-ferror-limit=1 \
	-fno-asynchronous-unwind-tables \
	-fno-exceptions \
	-iquote$(INCLUDE) \
	-nostdlib \
	-nostdinc \
	-nostdinc++ \
	-std=c++1z \
	-O3 \
	-Werror \
	-Weverything \
	-Wno-c++98-compat \
	-Wno-c++98-compat-pedantic

clang++-arm-linux := \
	$(clang++) \
	-mfloat-abi=hard \
	-target armv5-none-linux-elf

clang++-x86_64-freebsd := \
	$(clang++) \
	-target x86_64-freebsd

clang++-x86_64-linux := \
	$(clang++) \
	-target x86_64-linux

gcc := \
	gcc \
	-fdiagnostics-color=always \
	-iquote$(INCLUDE) \
	-nostdlib \
	-nostdinc \
	-std=c11 \
	-O3 \
	-Wall \
	-Werror \
	-Wno-unknown-pragmas

####################################################################################################

$(BUILD):
	mkdir $@

$(BUILD)/test: | $(BUILD)
	mkdir $@

####################################################################################################

all :=

source-directory  := $(TEST)
target-directory := $(BUILD)/test

#---------------------------------------------------------------------------------------------------

define test-template
input    := $(source-directory)/$(1)
output   := $(target-directory)/$(1).$(2).asm

$$(output): $$(input) | $(target-directory)
	$$($(2)) -o $$@ -S $$<

all := $(all) $$(output)
endef

#---------------------------------------------------------------------------------------------------

$(eval $(call test-template,include-all.c,clang))
$(eval $(call test-template,include-all.c,gcc))

#---------------------------------------------------------------------------------------------------

$(eval $(call test-template,include-all.cxx,clang++-arm-linux))
$(eval $(call test-template,include-all.cxx,clang++-x86_64-freebsd))
$(eval $(call test-template,include-all.cxx,clang++-x86_64-linux))

#---------------------------------------------------------------------------------------------------

.PHONY: test
test: $(all)

####################################################################################################

.PHONY: clean
clean:
	rm -rf $(BUILD)

