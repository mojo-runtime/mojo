#if defined(__ELF__)
#  include "AT_BASE.h"
#  if defined(__linux__)
#    include "AT_BASE_PLATFORM.h"
#    include "AT_CLKTCK.h"
#  endif
#  include "AT_EGID.h"
#  include "AT_ENTRY.h"
#  include "AT_EUID.h"
#  include "AT_EXECFD.h"
#  if defined(__linux__)
#    include "AT_EXECFN.h"
#  endif
#  include "AT_FLAGS.h"
#  include "AT_GID.h"
#  if defined(__linux__)
#    include "AT_HWCAP.h"
#    include "AT_HWCAP2.h"
#  endif
#  include "AT_IGNORE.h"
#  include "AT_NOTELF.h"
#  include "AT_NULL.h"
#  include "AT_PAGESZ.h"
#  include "AT_PHDR.h"
#  include "AT_PHENT.h"
#  include "AT_PHNUM.h"
#  if defined(__linux__)
#    include "AT_PLATFORM.h"
#    include "AT_RANDOM.h"
#    include "AT_SECURE.h"
#  endif
#  include "AT_UID.h"
#endif

#if defined(__unix__)
#  include "CLD_CONTINUED.h"
#  include "CLD_DUMPED.h"
#  include "CLD_EXITED.h"
#  include "CLD_KILLED.h"
#  include "CLD_STOPPED.h"
#  include "CLD_TRAPPED.h"
#endif

#if defined(__unix__)
#  include "CLOCK_REALTIME.h"
#endif

#if defined(__unix__)
#  include "DT_BLK.h"
#  include "DT_CHR.h"
#  include "DT_DIR.h"
#  include "DT_FIFO.h"
#  include "DT_LNK.h"
#  include "DT_REG.h"
#  include "DT_SOCK.h"
#  include "DT_UNKNOWN.h"
#endif

#include "EDOM.h"
#include "EILSEQ.h"
#include "ERANGE.h"

#include "EXIT_FAILURE.h"
#include "EXIT_SUCCESS.h"

#if defined(__unix__)
#  include "F_DUPFD.h"
#  include "F_GETFD.h"
#  include "F_GETFL.h"
#  include "F_GETLK.h"
#  include "F_SETFD.h"
#  include "F_SETFL.h"
#  include "F_SETLK.h"
#  include "F_SETLKW.h"
#endif

#include "INT8_C.h"
#include "INT16_C.h"
#include "INT32_C.h"
#include "INT64_C.h"

#include "INT8_MAX.h"
#include "INT16_MAX.h"
#include "INT32_MAX.h"
#include "INT64_MAX.h"

#include "INT8_MIN.h"
#include "INT16_MIN.h"
#include "INT32_MIN.h"
#include "INT64_MIN.h"

#include "INTMAX_MAX.h"
#include "INTMAX_MIN.h"

#include "INTPTR_MAX.h"
#include "INTPTR_MIN.h"

#include "INT_FAST8_MAX.h"
#include "INT_FAST16_MAX.h"
#include "INT_FAST32_MAX.h"
#include "INT_FAST64_MAX.h"

#include "INT_FAST8_MIN.h"
#include "INT_FAST16_MIN.h"
#include "INT_FAST32_MIN.h"
#include "INT_FAST64_MIN.h"

#include "INT_LEAST8_MAX.h"
#include "INT_LEAST16_MAX.h"
#include "INT_LEAST32_MAX.h"
#include "INT_LEAST64_MAX.h"

#include "INT_LEAST8_MIN.h"
#include "INT_LEAST16_MIN.h"
#include "INT_LEAST32_MIN.h"
#include "INT_LEAST64_MIN.h"

#include "INT_MAX.h"

#if defined(__unix__)
#  include "MAP_ANONYMOUS.h"
// MAP_DENYWRITE: linux, ignored
#  include "MAP_PRIVATE.h"
#  include "MAP_SHARED.h"
#endif

#include "NULL.h"

#if defined(__unix__)
#  include "PROT_EXEC.h"
#  include "PROT_NONE.h"
#  include "PROT_READ.h"
#  include "PROT_WRITE.h"
#endif

#include "PTRDIFF_MAX.h"
#include "PTRDIFF_MIN.h"

#include "RAND_MAX.h"

#include "SIGABRT.h"
#include "SIGFPE.h"
#include "SIGILL.h"
#include "SIGINT.h"
#include "SIGSEGV.h"
#include "SIGTERM.h"

#include "SIG_ATOMIC_MAX.h"
#include "SIG_ATOMIC_MIN.h"

#include "SIG_DFL.h"
#include "SIG_ERR.h"
#include "SIG_IGN.h"

#include "SIZE_MAX.h"

#if defined(__unix__)
#  include "STDERR_FILENO.h"
#  include "STDIN_FILENO.h"
#  include "STDOUT_FILENO.h"
#endif

#if defined(__unix__)
#  include "TCGETS.h"
#  include "TCSETS.h"
#  include "TCSETS.h"
#  include "TCSETSW.h"
#endif

#include "UINT8_C.h"
#include "UINT16_C.h"
#include "UINT32_C.h"
#include "UINT64_C.h"

#include "UINT8_MAX.h"
#include "UINT16_MAX.h"
#include "UINT32_MAX.h"
#include "UINT64_MAX.h"

#include "UINTMAX_MAX.h"

#include "UINTPTR_MAX.h"

#include "UINT_FAST8_MAX.h"
#include "UINT_FAST16_MAX.h"
#include "UINT_FAST32_MAX.h"
#include "UINT_FAST64_MAX.h"

#include "UINT_LEAST8_MAX.h"
#include "UINT_LEAST16_MAX.h"
#include "UINT_LEAST32_MAX.h"
#include "UINT_LEAST64_MAX.h"

#include "WCHAR_MAX.h"
#include "WCHAR_MIN.h"

#include "WINT_MAX.h"
#include "WINT_MIN.h"

#if defined(__unix__)
#  include "WCONTINUED.h"
#  include "WEXITED.h"
#  include "WNOHANG.h"
#  include "WNOWAIT.h"
#  include "WSTOPPED.h"
#  include "WUNTRACED.h"
#endif

#include "_Exit.h"
#include "abs.h"
#include "alignas.h"
#include "alignof.h"
#include "alloca.h"
#include "assert.h"
#include "bool.h"
#include "char16_t.h"
#include "char32_t.h"
#include "div_t.h"
#include "errno_t.h"
#include "false.h"
#include "int8_t.h"
#include "int16_t.h"
#include "int32_t.h"
#include "int64_t.h"
#include "int_fast8_t.h"
#include "int_fast16_t.h"
#include "int_fast32_t.h"
#include "int_fast64_t.h"
#include "int_least8_t.h"
#include "int_least16_t.h"
#include "int_least32_t.h"
#include "int_least64_t.h"
#include "intmax_t.h"
#include "intptr_t.h"
#include "ldiv_t.h"
#include "lldiv_t.h"
#include "memcmp.h"
#include "memcpy.h"
#include "memset.h"
#include "noreturn.h"
#include "offsetof.h"
#include "ptrdiff_t.h"
#include "puts.h"
#include "sighandler_t.h"
#include "size_t.h"
#include "ssize_t.h"
#include "static_assert.h"
#include "strcmp.h"
#include "strlen.h"
#include "true.h"
#include "uint8_t.h"
#include "uint16_t.h"
#include "uint32_t.h"
#include "uint64_t.h"
#include "uint_fast8_t.h"
#include "uint_fast16_t.h"
#include "uint_fast32_t.h"
#include "uint_fast64_t.h"
#include "uint_least8_t.h"
#include "uint_least16_t.h"
#include "uint_least32_t.h"
#include "uint_least64_t.h"
#include "uintmax_t.h"
#include "uintptr_t.h"
#include "wchar_t.h"
#include "wint_t.h"
