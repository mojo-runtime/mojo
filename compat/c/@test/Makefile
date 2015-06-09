include ${dir ${lastword ${MAKEFILE_LIST}}}../../../Makefile

tests := ${foreach x,${Configuration.instances},${foreach y,\
\
assert\
limits\
stdalign\
stdarg\
stdbool\
stddef\
stdint\
stdlib\
stdnoreturn\
string\
uchar\
\
,${call $x.compile,$y.c}}}

${tests} : @preprocessor-flags += -I${ROOT/}compat/c

__tests__ += ${tests}
