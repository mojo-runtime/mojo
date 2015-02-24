#ifndef linux_Word_hxx_
#define linux_Word_hxx_

namespace linux {

using __Word =
#ifdef __x86_64__
 unsigned long
#else
#  error
#endif
 ;

} // namespace linux

#endif
