${eval ${call push-makefile}}
#---------------------------------------------------------------------------------------------------

include ${.}/c/_test.mk
include ${.}/std/_test.mk
include ${.}/system/_test.mk
include ${.}/terminal/_test.mk

#---------------------------------------------------------------------------------------------------

${eval ${call pop-makefile}}
