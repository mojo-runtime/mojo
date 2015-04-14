#pragma once

#if defined(__unix__)
#  include "PATH_MAX.h"
#  define FILENAME_MAX PATH_MAX
#else
#  error
#endif
