#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__alignas)
#  if defined(__has_feature)
#    define __has_cxx_alignas __has_feature(cxx_alignas)
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    define __has_cxx_alignas __has_gnuc(4, 8)
#  else
#    error
#  endif
#  if __has_cxx_alignas
#    define __alignas alignas
#  endif
#  undef __has_cxx_alignas
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__alignas)
#  if defined(__has_feature)
#    define __has_c_alignas __has_feature(c_alignas)
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    define __has_c_alignas __has_gnuc(4, 7)
#  else
#    error
#  endif
#  if __has_c_alignas
#    define __alignas _Alignas
#  endif
#  undef __has_c_alignas
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__alignas)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic push
