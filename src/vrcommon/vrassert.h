#ifndef VR_CORE_ASSERT_H
#define VR_CORE_ASSERT_H

#include <iostream>
#include <string>

inline void AssertMsg(bool ok, const std::string& msg) {
    std::cout << msg << std::endl;
}

#endif // VR_CORE_ASSERT_H