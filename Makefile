ROOT  := $(realpath $(dir $(lastword $(MAKEFILE_LIST))))
BUILD := $(ROOT)/build
TEST  := $(ROOT)/test

CXX := clang \
	-fcolor-diagnostics \
	-ferror-limit=1 \
	-fno-asynchronous-unwind-tables \
	-fno-exceptions \
	-iquote$(ROOT)/include \
	-nostdlib \
	-nostdinc \
	-nostdinc++ \
	-std=c++1z \
	-O3 \
	-Werror \
	-Weverything \
	-Wno-c++98-compat \
	-Wno-c++98-compat-pedantic

.DEFAULT_GOAL := test

####################################################################################################

tests :=

####################################################################################################

$(BUILD):
	mkdir $@

####################################################################################################

input  := include-all.cxx
target := x86_64-freebsd
output := $(BUILD)/$(input).$(target).asm

$(output): $(TEST)/$(input) | $(BUILD)
	$(CXX) -target x86_64-freebsd -o $@ -S $<

tests := $(tests) $(output)

####################################################################################################

input  := include-all.cxx
target := x86_64-linux
output := $(BUILD)/$(input).$(target).asm

$(output): $(TEST)/$(input) | $(BUILD)
	$(CXX) -target x86_64-linux -o $@ -S $<

tests := $(tests) $(output)

####################################################################################################

input  := include-all.cxx
target := armv5-none-linux-elf
output := $(BUILD)/$(input).$(target).asm

$(output): $(TEST)/$(input) | $(BUILD)
	$(CXX) -target armv5-none-linux-elf -mfloat-abi=hard -o $@ -S $<

tests := $(tests) $(output)

####################################################################################################

.PHONY: clean
clean:
	rm -rf $(BUILD)

.PHONY: test
test: $(tests)
