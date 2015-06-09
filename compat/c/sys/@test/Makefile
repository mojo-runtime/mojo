include ${dir ${lastword ${MAKEFILE_LIST}}}../../../../Makefile

__tests__ += ${foreach x,${Configuration.instances},${foreach y,\
\
epoll\
inotify\
ioctl\
mman\
stat\
types\
utsname\
wait\
\
,${call $x.compile,$y.c}}}
