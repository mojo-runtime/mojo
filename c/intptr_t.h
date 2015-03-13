#ifndef _c_intptr_t_h_
#define _c_intptr_t_h_

typedef
#ifdef __INTPTR_TYPE__
__INTPTR_TYPE__
#else
#  error
#endif
intptr_t;

#endif
