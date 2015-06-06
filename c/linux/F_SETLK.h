#if defined(__arm__) || defined(__x86_64__) // generic
#  define F_SETLK 6
#else
#  error
#endif
