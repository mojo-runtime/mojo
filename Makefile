ifndef __initialized
define __initialized :=
1
endef

// := ${dir ${lastword ${MAKEFILE_LIST}}}
ifeq (${//},./)
// :=
__top := 1
endif

__all   :=
__roots :=

####################################################################################################

define Compiler
$1.path  = $${error never set}
$1.flags = $${error never set}
define $1.rules
$${build/}$1:
	mkdir -p $$$$@
$${build/}$1/%.c.s: $$/%.c | $${build/}$1
	$$$${$1.path} $$$${$1.flags} -S -o $$$$@ $$$$< -std=c11
$${build/}$1/%.cxx.s: $$/%.cxx | $${build/}$1
	$$$${$1.path} $$$${$1.flags} -S -o $$$$@ $$$$< -std=c++14
endef
endef

${eval ${call Compiler,clang}}

clang.path  := clang
clang.flags := -cxx-isystem ${//}standard/c++
clang.flags += -fcolor-diagnostics
clang.flags += -ferror-limit=1
clang.flags += -fno-asynchronous-unwind-tables
clang.flags += -fno-exceptions
clang.flags += -iquote${//}include
clang.flags += -I${//}standard/c
clang.flags += -nostdinc
clang.flags += -nostdlib
clang.flags += -O3
clang.flags += -Werror
clang.flags += -Weverything
clang.flags += -Wno-c++98-compat
clang.flags += -Wno-c++98-compat-pedantic

${eval ${call Compiler,clang-arm-linux}}

clang-arm-linux.path  := ${clang.path}
clang-arm-linux.flags := ${clang.flags}
clang-arm-linux.flags += -target armv7-linux-android

${eval ${call Compiler,clang-x86_64-freebsd}}

clang-x86_64-freebsd.path  := ${clang.path}
clang-x86_64-freebsd.flags := ${clang.flags}
clang-x86_64-freebsd.flags += -target x86_64-freebsd

${eval ${call Compiler,clang-x86_64-linux}}

clang-x86_64-linux.path  := ${clang.path}
clang-x86_64-linux.flags := ${clang.flags}
clang-x86_64-linux.flags += -target x86_64-linux

${eval ${call Compiler,gcc}}

gcc.path  := gcc
gcc.flags := -fdiagnostics-color=always
gcc.flags += -fmax-errors=1
gcc.flags += -fno-asynchronous-unwind-tables
gcc.flags += -fno-exceptions
gcc.flags += -I${//}standard/c
gcc.flags += -iquote${//}include
gcc.flags += -isystem${//}standard/c++
gcc.flags += -Wall
gcc.flags += -Werror
gcc.flags += -Wno-unknown-pragmas

#---------------------------------------------------------------------------------------------------

compilers := \
	clang-arm-linux \
	clang-x86_64-freebsd \
	clang-x86_64-linux \
	gcc

####################################################################################################

define compile-all
${foreach c,${compilers},
__all += $${patsubst $$/%,$${build/}${c}/%.s,$1}
}
endef

####################################################################################################

.SECONDEXPANSION:
.PHONY: all
all: $${__all}

.PHONY: clean
clean:
	rm -rf ${__roots}

####################################################################################################
endif # First time only
####################################################################################################

ifdef __top
undefine __top
#---------------------------------------------------------------------------------------------------
# We're the Makefile.

include ${//}include/Makefile
include ${//}standard/Makefile

else
#---------------------------------------------------------------------------------------------------
# We've been included.

/ := ${dir ${lastword ${filter-out ${lastword ${MAKEFILE_LIST}},${MAKEFILE_LIST}}}}
ifeq ($/,./)
/ :=
endif

build/ := $/.build/

${build/}:
	mkdir $@

__roots += ${build/}

${foreach c,${compilers},${eval ${${c}.rules}}}

#---------------------------------------------------------------------------------------------------
endif
