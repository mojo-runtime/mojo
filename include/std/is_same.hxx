#pragma once

#include "false_type.hxx"
#include "true_type.hxx"

namespace std {

template <typename __X, typename __Y>
struct is_same : false_type
{
};

template <typename __X>
struct is_same<__X, __X> : true_type
{
};

}
