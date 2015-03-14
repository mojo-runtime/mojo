#include "AT_BASE.h"
#if defined(__linux__)
#  include "AT_BASE_PLATFORM.h"
#  include "AT_CLKTCK.h"
#endif
#include "AT_EGID.h"
#include "AT_ENTRY.h"
#include "AT_EUID.h"
#include "AT_EXECFD.h"
#if defined(__linux__)
#  include "AT_EXECFN.h"
#endif
#include "AT_FLAGS.h"
#include "AT_GID.h"
#if defined(__linux__)
#  include "AT_HWCAP.h"
#  include "AT_HWCAP2.h"
#endif
#include "AT_IGNORE.h"
#include "AT_NOTELF.h"
#include "AT_NULL.h"
#include "AT_PAGESZ.h"
#include "AT_PHDR.h"
#include "AT_PHENT.h"
#include "AT_PHNUM.h"
#if defined(__linux__)
#  include "AT_PLATFORM.h"
#  include "AT_RANDOM.h"
#  include "AT_SECURE.h"
#endif
#include "AT_UID.h"

#include "auxv_t.h"
