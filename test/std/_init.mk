. := $(realpath $(dir $(lastword $(MAKEFILE_LIST))))

#---------------------------------------------------------------------------------------------------

$(.)/.build:
	mkdir $@

$(c++-compilers:%=$(.)/.build/%): %: | $(.)/.build
	mkdir $@

#---------------------------------------------------------------------------------------------------

$(foreach c,$(c++-compilers),$(eval $(call compile,$(c),include-all.cxx)))
$(foreach c,$(c++-compilers),$(eval $(call compile,$(c),type-traits.cxx)))
