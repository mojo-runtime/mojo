#ifndef x_unlikely
#  include "x_expect.h"
#  define x_unlikely(x) x_expect(x, 0)
#endif
