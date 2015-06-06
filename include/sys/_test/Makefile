__level__ := ../../..

include ${dir ${lastword ${MAKEFILE_LIST}}}${__level__}/Makefile

tests += ${foreach x,${Configuration.instances},${foreach y,\
\
epoll\
inotify\
mman\
stat\
types\
utsname\
wait\
\
,${call $x.compile,$y.c}}}
