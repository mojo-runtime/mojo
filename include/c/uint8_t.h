#ifndef c_uint8_t_h_
#define c_uint8_t_h_

typedef
#ifdef __UINT8_TYPE__
__UINT8_TYPE__
#else
#  error
#endif
uint8_t;

#endif
