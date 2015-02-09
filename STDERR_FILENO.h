#ifndef c_STDERR_FILENO_h_
#define c_STDERR_FILENO_h_

#include "c/FileDescriptor.h"

#ifdef __cplusplus
inline namespace c {
#endif

static const FileDescriptor STDERR_FILENO = 2;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
