#ifndef c_NULL_h_
#define c_NULL_h_

#ifdef __cplusplus
inline namespace c {
#endif

#ifdef __cplusplus
static const auto NULL = nullptr;
#else
static void* NULL = 0; // This might be going too far.
#endif

#ifdef __cplusplus
 } // inline namespace c
#endif

#endif
