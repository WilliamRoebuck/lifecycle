// (c) 2025 ETAS GmbH. All rights reserved.

#ifndef SYSEXIT_HPP_INCLUDED
#define SYSEXIT_HPP_INCLUDED

namespace etas {

namespace vrte {

namespace lcm {

namespace osal {

/// @brief Call the system exit function, which is marked [noreturn].
/// The purpose of wrapping this function is so that it may be mocked during tests.
/// @param status The exit status to be reported to the operating system
void sysexit(int status);
}  // namespace osal
}  // namespace lcm
}  // namespace vrte
}  // namespace etas
#endif
