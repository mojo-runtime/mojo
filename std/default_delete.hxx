#pragma once

namespace std {

template <typename T>
struct default_delete;

template <typename T>
struct default_delete<T[]>;

}
