ifndef __initialized
define __initialized :=
1
endef

.PHONY: all
.SECONDEXPANSION:
all: $${__all__}

.PHONY: clean
.SECONDEXPANSION:
clean: $${__clean__}

.PHONY: test
.SECONDEXPANSION:
tests: $${__tests__}

__all__   := tests
__clean__ :=
__tests__ :=



/ROOT := ${abspath ${dir ${lastword ${MAKEFILE_LIST}}}}
ifeq (${/ROOT},${CURDIR})
ROOT/ :=
__top := 1
else ifeq (${words ${/ROOT}},1)
empty  :=
space  := ${empty} ${empty}
ROOT/  := ${subst ${space},/,${patsubst %,..,${subst /,${space},${CURDIR:${/ROOT}/%=%}}}}/
else
${error todo}
endif


# Target-specific variables

define @preprocessor-flags :=
endef



define Configuration
${eval

ifneq (${filter-out _%,$1},)
ifdef $0.__names
$0.__names += $1
else
$0.__names := $1
endif
endif

# Fields
#--------

$0[$1].base     =
$0[$1].cc       = $${if $${$0[$1].base},$${$0[$${$0[$1].base}].cc},      $${error todo - cc}}
$0[$1].cflags   = $${if $${$0[$1].base},$${$0[$${$0[$1].base}].cflags},  $${error todo - cflags}}
$0[$1].cppflags = $${if $${$0[$1].base},$${$0[$${$0[$1].base}].cppflags},$${error todo - cppflags}}
$0[$1].cxx      = $${if $${$0[$1].base},$${$0[$${$0[$1].base}].cxx},     $${error todo - cxx}}
$0[$1].cxxflags = $${if $${$0[$1].base},$${$0[$${$0[$1].base}].cxxflags},$${error todo - cxxflags}}
$0[$1].ld       = $${if $${$0[$1].base},$${$0[$${$0[$1].base}].ld},      $${error todo - ld}}
$0[$1].ldflags  = $${if $${$0[$1].base},$${$0[$${$0[$1].base}].ldflags}, $${error todo - ldflags}}

# Properties
#------------

define $0[$1].rules
$${__build/}$1/: | $${__build/}
	mkdir $$$$@
$${__build/}$1/%.c.s: $$/%.c | $${__build/}$1/
	$$$${$0[$1].cc} $$$${$0[$1].cppflags} $$$${$0[$1].cflags} -o $$$$@ -S $$$$< $$$${@preprocessor-flags}
$${__build/}$1/%.cxx.s: $$/%.cxx | $${__build/}$1/
	$$$${$0[$1].cxx} $$$${$0[$1].cppflags} $$$${$0[$1].cxxflags} -o $$$$@ -S $$$$< $$$${@preprocessor-flags}
endef

# Functions
#-----------

define $0[$1].compile
$${__build/}$1/$$1.s
endef

}$0[$1]
endef

# Properties
#============

define Configuration.all
${Configuration.__names:%=Configuration[%]}
endef



_ := ${call Configuration,_top}

$_.cflags   := -std=c11
$_.cppflags := \
	-I${ROOT/}lib \
	-O3 \
	-Wall \
	-Werror \
	-fno-exceptions \
	-nostdinc
$_.cxxflags := \
	-nostdinc++ \
	-std=c++14
$_.ldflags  := \
	-fno-asynchronous-unwind-tables \
	-nostdlib

_ := ${call Configuration,clang}

$_.base     := _top
$_.cc       := clang
$_.cppflags += \
	-fcolor-diagnostics \
	-ferror-limit=1 \
	-Weverything \
	-Wno-reserved-id-macro
$_.cxx      := clang++
$_.cxxflags += \
	-std=c++1z \
	-Wno-c99-extensions \
	-Wno-c++98-compat \
	-Wno-c++98-compat-pedantic \
	-Wno-gnu-zero-variadic-macro-arguments \
	-Wno-old-style-cast

_ := ${call Configuration,clang-arm-linux}

$_.base     := clang
$_.cppflags += -target armv7-linux-android

_ := ${call Configuration,clang-x86_64-freebsd}

$_.base     := clang
$_.cppflags += -target x86_64-freebsd

_ := ${call Configuration,clang-x86_64-linux}

$_.base     := clang
$_.cppflags += -target x86_64-linux

_ := ${call Configuration,clang-debug}

$_.base     := clang
$_.cppflags += -DDEBUG

_ := ${call Configuration,gcc}

$_.base     := _top
$_.cc       := gcc
$_.cppflags += -fdiagnostics-color=always -fmax-errors=1 -Wno-unknown-pragmas
$_.cxx      := g++

endif # First time only


ifdef __top
undefine __top

# We're the Makefile.

include compat/Makefile
include lib/Makefile

else

# We've been included.

/ := ${dir ${lastword ${filter-out ${lastword ${MAKEFILE_LIST}},${MAKEFILE_LIST}}}}
ifeq ($/,./)
/ :=
endif

__build/ := $/.build/

${__build/}:
	mkdir $@

ifdef MAKECMDGOALS
ifeq (${MAKECMDGOALS},clean)
ifneq (${realpath ${__build/}},)
phony     := _<clean>-${__build/}
__clean__ += ${phony}
.PHONY: ${phony}
${phony}:
	rm -r ${subst _<clean>-,,$@}
endif
endif
endif

${foreach c,${Configuration.all},${eval ${$c.rules}}}


endif
