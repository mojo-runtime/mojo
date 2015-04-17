#pragma once

#include "c/AT_BASE.h"
#if defined(__linux__)
#  include "c/AT_BASE_PLATFORM.h"
#  include "c/AT_CLKTCK.h"
#endif
#include "c/AT_EGID.h"
#include "c/AT_ENTRY.h"
#include "c/AT_EUID.h"
#include "c/AT_EXECFD.h"
#if defined(__linux__)
#  include "c/AT_EXECFN.h"
#endif
#include "c/AT_FLAGS.h"
#include "c/AT_GID.h"
#if defined(__linux__)
#  include "c/AT_HWCAP.h"
#  include "c/AT_HWCAP2.h"
#endif
#include "c/AT_IGNORE.h"
#include "c/AT_NOTELF.h"
#include "c/AT_NULL.h"
#include "c/AT_PAGESZ.h"
#include "c/AT_PHDR.h"
#include "c/AT_PHENT.h"
#include "c/AT_PHNUM.h"
#if defined(__linux__)
#  include "c/AT_PLATFORM.h"
#  include "c/AT_RANDOM.h"
#  include "c/AT_SECURE.h"
#endif
#include "c/AT_UID.h"
