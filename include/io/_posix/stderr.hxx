// -*- C++ -*-

#pragma once

#include "c/STDERR_FILENO.h"
#include "Writer.hxx"

namespace io { inline namespace _posix {

static constexpr
Writer
stderr(STDERR_FILENO);

}}
