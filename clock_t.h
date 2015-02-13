#ifndef c_clock_t_h_
#define c_clock_t_h_

#ifdef __cplusplus
__c_namespace_open
#endif

typedef
#ifdef __linux__
#  ifdef __x86_64__
long // int64_t
#  else
#    error
#  endif
#else
#  error
#endif
clock_t;

#ifdef __cplusplus
__c_namespace_close
#endif

#endif
