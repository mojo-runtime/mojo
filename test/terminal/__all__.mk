$(eval $(call push-makefile))

$(foreach c,$(c++-compilers),$(eval $(call compile,$(c),include-all.cxx)))

$(eval $(call pop-makefile))
