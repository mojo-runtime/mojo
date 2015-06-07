#include "../is_same.hxx"
#include "../remove_cv_t.hxx"

static_assert(std::is_same<std::remove_cv_t<               int>, int>(), "");
static_assert(std::is_same<std::remove_cv_t<const          int>, int>(), "");
static_assert(std::is_same<std::remove_cv_t<      volatile int>, int>(), "");
static_assert(std::is_same<std::remove_cv_t<const volatile int>, int>(), "");
