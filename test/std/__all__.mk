${eval ${call push-makefile}}

${eval ${call test-c++-compilers,include-all.cxx}}
${eval ${call test-c++-compilers,type-traits.cxx}}

${eval ${call pop-makefile}}
