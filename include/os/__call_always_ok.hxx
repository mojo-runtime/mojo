#pragma once

namespace os {

template <typename Ok>
static inline
Ok
__call_always_ok(int number) noexcept
{
    Ok
    ok;

#if defined(__x86_64__)
#  if defined(__linux__)
    asm volatile ("syscall" : "=a" (ok) : "0" (number) : "rcx", "r11");
#  elif defined(__FreeBSD__)
    asm volatile ("syscall" : "=a" (ok) : "0" (number)); // VERIFY ME
#  else
#    error
#  endif
#else
#  error
#endif

    return ok;
}

}
