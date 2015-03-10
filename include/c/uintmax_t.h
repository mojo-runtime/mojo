#ifndef _c_uintmax_t_h_
#define _c_uintmax_t_h_

typedef
#ifdef __UINTMAX_TYPE__
__UINTMAX_TYPE__
#else
#  error
#endif
uintmax_t;

#endif
