ifndef __initialized
define __initialized :=
1
endef

.PHONY: all clean test
.SECONDEXPANSION:
.SUFFIXES:

all  :: test
clean::
test ::



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
$${build/}$1/: | $${build/}
	mkdir $$$$@
$${build/}$1/%.c.s: $${./}%.c | $${build/}$1/
	$$$${$0[$1].cc} $$$${$0[$1].cppflags} $$$${$0[$1].cflags} -o $$$$@ -S $$$$< $$$${@preprocessor-flags}
$${build/}$1/%.cxx.s: $${./}%.cxx | $${build/}$1/
	$$$${$0[$1].cxx} $$$${$0[$1].cppflags} $$$${$0[$1].cxxflags} -o $$$$@ -S $$$$< $$$${@preprocessor-flags}
endef

# Functions
#-----------

define $0[$1].compile
$${foreach source,$$1,$${build/}$1/$${source}.s}
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
	-I${or ${ROOT/},.} \
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

_ := ${call Configuration,_clang}

$_.base     := _top
$_.cc       := _clang
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

$_.base     := _clang
$_.cppflags += -target armv7-linux-android

_ := ${call Configuration,clang-x86_64-freebsd}

$_.base     := _clang
$_.cppflags += -target x86_64-freebsd

_ := ${call Configuration,clang-x86_64-linux}

$_.base     := _clang
$_.cppflags += -target x86_64-linux

_ := ${call Configuration,clang-debug}

$_.base     := _clang
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

include ${patsubst %,${ROOT/}%/@test/Makefile,\
	debug\
	os\
	std\
}

else

# We've been included.

./ := ${dir ${lastword ${filter-out ${lastword ${MAKEFILE_LIST}},${MAKEFILE_LIST}}}}
ifeq (${./},./)
./ :=
endif

build/ := ${./}.build/

${build/}:
	mkdir $@

ifdef MAKECMDGOALS
ifeq (${MAKECMDGOALS},clean)
ifneq (${realpath ${build/}},)

clean:: ${build/}
	rm -r $<

endif
endif
endif

${foreach c,${Configuration.all},${eval ${$c.rules}}}


endif
