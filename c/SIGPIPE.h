#ifndef SIGPIPE
#  ifdef __linux__
#    define SIGPIPE 13
#  else
#    error
#  endif
#endif
