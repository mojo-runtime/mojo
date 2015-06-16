include ${dir ${lastword ${MAKEFILE_LIST}}}../Makefile

${build/}llvm/: | ${build/}
	mkdir $@



${build/}llvm/Makefile: cmake.flags :=\
	-D CMAKE_BUILD_TYPE:STRING=Release\
	-D CLANG_INCLUDE_DOCS:BOOL=OFF\
	-D CLANG_INCLUDE_TESTS:BOOL=OFF\
	-D LLVM_ENABLE_PIC:BOOL=OFF\
	-D LLVM_EXTERNAL_CLANG_SOURCE_DIR:PATH=${abspath $/clang}\
	-D LLVM_INCLUDE_EXAMPLES:BOOL=OFF\
	-D LLVM_INCLUDE_TESTS:BOOL=OFF\
	${abspath $/llvm}

${build/}llvm/Makefile: | ${build/}llvm/
	cd ${@D} && cmake ${cmake.flags}



clang := ${build/}llvm/bin/clang
${clang}: ${build/}llvm/Makefile
	${MAKE} --directory=${<D} ${@F}

__all__ += ${clang}
