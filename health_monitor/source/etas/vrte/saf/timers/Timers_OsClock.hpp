// (c) 2025 ETAS GmbH. All rights reserved.
#ifndef TIMERS_OSCLOCK_HPP_INCLUDED
#define TIMERS_OSCLOCK_HPP_INCLUDED

#include <cstdint>

namespace etas
{
namespace vrte
{
namespace saf
{
namespace timers
{

/// Special type for storing nanoseconds.
// NOTE: It is only an alias for uint64_t to make is visible that the value has the physical unit nanoseconds!
//       That means that the macros UINT64_MIN and UINT64_MAX can be used if needed.
using NanoSecondType = uint64_t;

/// Operating system clock interface
/// The OsClock class provides methods to interact with the operating system
/// specific clock interfaces.
class OsClock
{
public:
    /// Constructor
    OsClock() = default;
    /// Copy and Move operations on the class objects are
    /// not allowed!
    OsClock(const OsClock&) = delete;
    OsClock& operator=(const OsClock&) = delete;
    OsClock(OsClock&&) = delete;
    OsClock& operator=(OsClock&&) = delete;
    /// Destructor
    virtual ~OsClock() = default;

    /// Get monotonic increasing system Clock
    /// @return System clock in nanoseconds or error indicator.
    /// @retval 0 in case of an error.
    static NanoSecondType getMonotonicSystemClock(void) noexcept(true);
};

}  // namespace timers
}  // namespace saf
}  // namespace vrte
}  // namespace etas

#endif
