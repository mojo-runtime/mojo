__level__ := ../../..

include ${dir ${lastword ${MAKEFILE_LIST}}}${__level__}/Makefile

tests += ${foreach x,${Configuration.instances},${foreach y,\
\
assert\
todo\
unreachable\
\
,${call $x.compile,$y.cxx}}}
