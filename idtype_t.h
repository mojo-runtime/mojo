#ifndef c_idtype_t_h_
#define c_idtype_t_h_

typedef
#ifdef __linux__
int
#else
#  error
#endif
idtype_t;

#endif
