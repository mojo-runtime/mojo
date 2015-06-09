include ${dir ${lastword ${MAKEFILE_LIST}}}../../../Makefile

__tests__ += ${foreach x,${Configuration.instances},${foreach y,\
\
close\
execve\
fork\
fstat\
ioctl\
mmap\
munmap\
open\
read\
stat\
write\
\
,${call $x.compile,$y.cxx}}}
