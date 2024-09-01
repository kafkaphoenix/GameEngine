#pragma once

#include <iostream>
#include <sstream>

#define APP_ASSERT(x, ...)                                             \
    if (!(x)) {                                                         \
         std::ostringstream oss;                                        \
         oss << "Assertion Failed: " << __VA_ARGS__;                    \
         std::cout << oss.str() << std::endl;                            \
    }