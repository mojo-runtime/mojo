#ifndef _c__linux__x86_64___environment_pointers_h
#define _c__linux__x86_64___environment_pointers_h

#include "c/linux/x86_64/_Program.h"
#include "c/__internal/__c_REINTERPRET_CAST.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

/*
 * Per the ABI: TODO URL
 *
 *         Purpose                 Start Address           Length
 * -------------------------------------------------------------------------
 * Unspecified                     High Addresses
 * -------------------------------------------------------------------------
 * Information block, including                            varies
 * argument strings,
 * environment strings,
 * auxiliary information...
 * -------------------------------------------------------------------------
 * Unspecified
 * -------------------------------------------------------------------------
 * Null auxiliary vector entry                             1 eightbyte
 * -------------------------------------------------------------------------
 * Auxiliary vector entries...                             2 eightbytes each
 * -------------------------------------------------------------------------
 * 0                                                       eightbyte
 * -------------------------------------------------------------------------
 * Environment pointers...                                 1 eightbyte each
 * -------------------------------------------------------------------------
 * 0                               8+8*argc+%rsp           eightbyte
 * -------------------------------------------------------------------------
 * Argument pointers               8+%rsp                  argc eightbytes
 * -------------------------------------------------------------------------
 * Argument count                  %rsp                    eightbyte
 * -------------------------------------------------------------------------
 * Undefined                       Low addresses
 * -------------------------------------------------------------------------
 */

static
const char* const*
_environment_pointers(const _Program* program)
{

    return __c_REINTERPRET_CAST(const char* const*, program)
       + (*__c_REINTERPRET_CAST(const uint64_t*,    program)) // argc
       + 2;
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
