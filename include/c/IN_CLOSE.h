#pragma once

#include "IN_CLOSE_NOWRITE.h"
#include "IN_CLOSE_WRITE.h"

#define IN_CLOSE (IN_CLOSE_WRITE | IN_CLOSE_NOWRITE)
