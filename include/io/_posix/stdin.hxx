// -*- C++ -*-

#pragma once

#include "c/STDIN_FILENO.h"
#include "Reader.hxx"

namespace io { inline namespace _posix {

static constexpr
Reader
stdin(STDIN_FILENO);

}}
