__level__ := ../../..

include ${dir ${lastword ${MAKEFILE_LIST}}}${__level__}/Makefile

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
