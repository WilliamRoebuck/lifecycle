// (c) 2025 ETAS GmbH. All rights reserved.

#include <cstdlib>

namespace etas {

namespace vrte {

namespace lcm {

namespace osal {
#if defined(__CTC__)
/* RULECHECKER_comment(1:0,2:0, check_pragma_usage, "External tooling requires pragma", true_no_defect) */
#pragma CTC ANNOTATION The end of this function cannot be reached by tests after std::abort() is called, but the business logic before it is tested.
#pragma CTC SKIP
#endif
/// @brief Call the system exit function, which is marked [noreturn].
/// The purpose of wrapping this function is so that it may be mocked during tests.
/// @param status The exit status to be reported to the operating system
void sysexit(int status) {
#ifdef __CTC__
    _Pragma("CTC APPEND");
#endif
    std::_Exit(status);
}
#if defined(__CTC__)
/* RULECHECKER_comment(1:0,1:0, check_pragma_usage, "External tooling requires pragma", true_no_defect) */
#pragma CTC ENDSKIP
#endif
}  // namespace osal
}  // namespace lcm
}  // namespace vrte
}  // namespace etas
