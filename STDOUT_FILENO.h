#ifndef c_STDOUT_FILENO_h_
#define c_STDOUT_FILENO_h_

#include "c/FileDescriptor.h"

#ifdef __cplusplus
inline namespace c {
#endif

static const FileDescriptor STDOUT_FILENO = 1;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
