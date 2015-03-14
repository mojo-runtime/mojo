#ifndef __stdalign_h_
#define __stdalign_h_

#if !defined(__cplusplus)
#  include "../__alignas.h"
#  include "../__alignof.h"
#  define alignas __alignas
#  define alignof __alignof
#endif

#define __alignas_is_defined 1
#define __alignof_is_defined 1

#endif
