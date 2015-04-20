#pragma once

#include "IN_ACCESS.h"
#include "IN_ATTRIB.h"
#include "IN_CLOSE_WRITE.h"
#include "IN_CLOSE_NOWRITE.h"
#include "IN_CREATE.h"
#include "IN_DELETE.h"
#include "IN_DELETE_SELF.h"
#include "IN_MODIFY.h"
#include "IN_MOVE_SELF.h"
#include "IN_MOVED_FROM.h"
#include "IN_MOVED_TO.h"
#include "IN_OPEN.h"

#define IN_ALL_EVENTS (                                     \
    IN_ACCESS |                                             \
    IN_ATTRIB |                                             \
    IN_CLOSE_WRITE |                                        \
    IN_CLOSE_NOWRITE |                                      \
    IN_CREATE |                                             \
    IN_DELETE |                                             \
    IN_DELETE_SELF |                                        \
    IN_MODIFY |                                             \
    IN_MOVE_SELF |                                          \
    IN_MOVED_FROM |                                         \
    IN_MOVED_TO |                                           \
    IN_OPEN)
