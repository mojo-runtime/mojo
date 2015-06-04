#if defined(__arm__) || defined(__x86_64__) // generic
#  define F_SETLKW 7
#else
#  error
#endif
