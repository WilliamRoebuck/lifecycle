// (c) 2025 ETAS GmbH. All rights reserved.
#include <secpol/secpol.h>

#include <etas/vrte/lcm/osal/securitypolicy.hpp>
#include <cerrno>
namespace etas {

namespace vrte {

namespace lcm {

namespace osal {

int setSecurityPolicy(const char* policy) {
    int res = secpol_transition_type(nullptr, policy, 1U);

    if (res == 0 || (res == -1 && errno == ENOTSUP)) {
        // If no security policy is in effect continue without error
        return 0;
    } else {
        // If the policy transition failed for any other reason, return the error code
        return res;
    }
}

}  // namespace osal

}  // namespace lcm

}  // namespace vrte

}  // namespace etas
