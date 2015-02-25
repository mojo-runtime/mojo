#ifndef c_speed_t_h_
#define c_speed_t_h_

typedef
#ifdef __linux__
unsigned int
#else
#  error
#endif
speed_t;

#endif
