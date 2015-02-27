#ifndef SIG_ATOMIC_MIN
#  ifdef __SIG_ATOMIC_MIN__
#    define SIG_ATOMIC_MIN __SIG_ATOMIC_MIN__
#  elif defined(__SIG_ATOMIC_WIDTH__)
#    if __SIG_ATOMIC_WIDTH__ == 32
#      define SIG_ATOMIC_MIN (-2147483648)
#    else
#      error
#    endif
#  endif
#endif
