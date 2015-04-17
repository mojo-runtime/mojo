$(eval $(call push-makefile))

$(foreach c,$(c-compilers),$(eval $(call compile,$(c),include-all.c)))

$(eval $(call pop-makefile))
