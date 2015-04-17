$(eval $(call push-makefile))

$(foreach c,$(c++-compilers),$(eval $(call compile,$(c),include-all.cxx)))
$(foreach c,$(c++-compilers),$(eval $(call compile,$(c),type-traits.cxx)))

$(eval $(call pop-makefile))
