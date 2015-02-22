#ifndef x_likely
#  include "x_expect.h"
#  define x_likely(x) x_expect(x, 1)
#endif
