${eval ${call push-makefile}}

${eval ${call test-c-compilers,include-all.c}}

${eval ${call pop-makefile}}
