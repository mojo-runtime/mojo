include ${dir ${lastword ${MAKEFILE_LIST}}}../../../Makefile

tests := ${foreach x,${Configuration.instances},${foreach y,\
\
cstdarg\
cstddef\
cstdint\
cuchar\
type_traits\
utility\
\
,${call $x.compile,$y.cxx}}}

${tests} : @preprocessor-flags += -I$/compat/c++

__tests__ += ${tests}
