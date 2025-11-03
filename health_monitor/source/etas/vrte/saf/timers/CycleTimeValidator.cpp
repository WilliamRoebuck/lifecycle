// (c) 2025 ETAS GmbH. All rights reserved.
#include "CycleTimeValidator.hpp"

namespace etas
{
namespace vrte
{
namespace saf
{
namespace timers
{

int64_t CycleTimeValidator::getMonotonicClockAccuracy(
    etas::vrte::saf::timers::OsClockInterface const& f_clock_sys) noexcept(true)
{
    struct timespec clockResolution
    {
    };
    int64_t accuracyNs{-1};
    const int getResResult{f_clock_sys.clockGetRes(&clockResolution)};

    if (0 == getResResult)
    {
        accuracyNs = clockResolution.tv_nsec;
    }

    return accuracyNs;
}

int64_t CycleTimeValidator::adjustCycleTimeOnClockAccuracy(
    const int64_t f_requested_interval_ns, const etas::vrte::saf::timers::OsClockInterface& f_clock_sys) noexcept(true)
{
    int64_t intervalNs{-1};  // start with an invalid value

    const int64_t accuracyNs{etas::vrte::saf::timers::CycleTimeValidator::getMonotonicClockAccuracy(f_clock_sys)};

    if (0 < accuracyNs)
    {
        if (f_requested_interval_ns >= accuracyNs)
        {
            intervalNs = f_requested_interval_ns;
        }
        else
        {
            intervalNs = accuracyNs;
        }
    }

    return intervalNs;
}

}  // namespace timers
}  // namespace saf
}  // namespace vrte
}  // namespace etas
