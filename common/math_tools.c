#ifndef MATH_TOOLS
#define MATH_TOOLS
#include <stdint.h>

int32_t math_abs32(int32_t x)
{
    int32_t mask = (x >> 31);
    return (x + mask) ^ mask;
}
#endif /* MATH_TOOLS */
