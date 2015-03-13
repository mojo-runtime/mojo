#ifndef _std_size_t_hxx_
#define _std_size_t_hxx_

namespace std {

#if defined(__SIZE_TYPE__)
typedef __SIZE_TYPE__ size_t;
#else
#  error
#endif

} // namespace std

#endif
