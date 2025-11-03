// (c) 2025 ETAS GmbH. All rights reserved.
#include <unistd.h>

#include <etas/vrte/lcm/osal/setgroups.hpp>

namespace etas {

namespace vrte {

namespace lcm {

namespace osal {

int setgroups(size_t __n, const gid_t* __groups) noexcept(true) {
    return ::setgroups(static_cast<int>(__n & 0X7FFFFFFFUL), __n ? __groups : NULL);
}

}  // namespace osal
}  // namespace lcm
}  // namespace vrte
}  // namespace etas
