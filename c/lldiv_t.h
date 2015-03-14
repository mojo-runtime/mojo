#pragma once

// Minimum (POSIX) definition

typedef struct
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++98-compat-pedantic" // long long
    long long
    quot;

    long long
    rem;
#pragma clang diagnostic pop
}
lldiv_t;
