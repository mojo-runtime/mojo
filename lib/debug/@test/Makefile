include ${dir ${lastword ${MAKEFILE_LIST}}}../../../Makefile

__tests__ += ${foreach x,${Configuration.instances},${foreach y,\
\
assert\
todo\
unreachable\
\
,${call $x.compile,$y.cxx}}}
