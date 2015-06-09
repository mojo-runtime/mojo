include ${dir ${lastword ${MAKEFILE_LIST}}}../../../Makefile

tests += ${foreach x,${Configuration.instances},${foreach y,\
\
close\
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
