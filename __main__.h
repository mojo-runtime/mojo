#ifndef _c______main___h
#define _c______main___h

#include "c/_Application.h"
#include "c/_start.h"

#ifdef __cplusplus
extern "C" {
#endif

__attribute__((used))
__attribute__((visibility("internal")))
void
__main__(const _Application* application); // `application` can be safely omitted by the implementor

#ifdef __cplusplus
} // extern "C"
#endif

#endif
