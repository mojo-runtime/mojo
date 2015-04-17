$(eval $(call initialize))

#---------------------------------------------------------------------------------------------------

$(foreach c,$(c++-compilers),$(eval $(call compile,$(c),include-all.cxx)))
$(foreach c,$(c++-compilers),$(eval $(call compile,$(c),type-traits.cxx)))
