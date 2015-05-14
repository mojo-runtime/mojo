#pragma once

//--------------------------------------------------------------------------------------------------
// Constants

#if 1 // Nonstandard
#  include "c/DT_BLK.h"
#  include "c/DT_CHR.h"
#  include "c/DT_DIR.h"
#  include "c/DT_FIFO.h"
#  include "c/DT_LNK.h"
#  include "c/DT_REG.h"
#  include "c/DT_SOCK.h"
#  include "c/DT_UNKNOWN.h"
#endif

//--------------------------------------------------------------------------------------------------
// Types

// DIR
#include "c/ino_t.h" // [XSI]
// struct dirent

//--------------------------------------------------------------------------------------------------
// Functions

// closedir
// opendir
// readdir
// readdir_r
// rewinddirs
// seekdir
// telldir
