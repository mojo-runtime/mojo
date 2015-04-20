#pragma once

#include "c/STDOUT_FILENO.h"
#include "Writer.hxx"

namespace io { inline namespace _posix {

static constexpr
Writer
stdout(STDOUT_FILENO);

}}
