#ifndef _c_wint_t_h_
#define _c_wint_t_h_

typedef
#ifdef __WINT_TYPE__
__WINT_TYPE__
#else
#  error
#endif
wint_t;

#endif