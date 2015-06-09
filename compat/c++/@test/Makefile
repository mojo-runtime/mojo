include ${dir ${lastword ${MAKEFILE_LIST}}}../../../Makefile

__tests__ += ${foreach x,${Configuration.instances},${foreach y,\
\
cstdarg\
cstddef\
cstdint\
cuchar\
type_traits\
utility\
\
,${call $x.compile,$y.cxx}}}
