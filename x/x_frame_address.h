#ifndef x_frame_address
#  ifdef __GNUC__
#    define x_frame_address __builtin_frame_address
#  else
#    error
#  endif
#endif
