#ifndef _c__NULL_h
#define _c__NULL_h

#ifdef __cplusplus
inline namespace c {
#endif

#ifdef __cplusplus
static const auto NULL = nullptr;
#else
static const void* const NULL = 0; // This might be going too far.
#endif

#ifdef __cplusplus
 } // inline namespace c
#endif

#endif
