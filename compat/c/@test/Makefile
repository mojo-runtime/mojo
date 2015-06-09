include ${dir ${lastword ${MAKEFILE_LIST}}}../../../Makefile

tests += ${foreach x,${Configuration.instances},${foreach y,\
\
assert\
dirent\
errno\
fcntl\
limits\
poll\
signal\
stdalign\
stdarg\
stdbool\
stddef\
stdint\
stdlib\
stdnoreturn\
string\
termios\
time\
uchar\
unistd\
\
,${call $x.compile,$y.c}}}
