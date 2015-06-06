__level__ := ../../..

include ${dir ${lastword ${MAKEFILE_LIST}}}${__level__}/Makefile

tests += ${foreach x,${Configuration.instances},${foreach y,\
\
cstdarg\
cstddef\
cstdint\
cuchar\
type_traits\
utility\
\
,${call $x.compile,$y.cxx}}}
