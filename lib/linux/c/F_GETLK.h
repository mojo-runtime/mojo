#if defined(__arm__) || defined(__x86_64__) // generic
#  define F_GETLK 5
#else
#  error
#endif
