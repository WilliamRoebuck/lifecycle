// (c) 2025 ETAS GmbH. All rights reserved.
#include <grp.h>
#include <sys/types.h>
#include <unistd.h>

#include <etas/vrte/lcm/osal/setgroups.hpp>

namespace etas {

namespace vrte {

namespace lcm {

namespace osal {

int setgroups(size_t __n, const gid_t *__groups) noexcept(true) {
    return ::setgroups(__n, __n ? __groups : nullptr);
}
}  // namespace osal
}  // namespace lcm
}  // namespace vrte
}  // namespace etas
