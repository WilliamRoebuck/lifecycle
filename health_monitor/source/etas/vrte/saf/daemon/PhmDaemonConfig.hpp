// (c) 2025 ETAS GmbH. All rights reserved.

#ifndef PHMDAEMONCONFIG_HPP_INCLUDED
#define PHMDAEMONCONFIG_HPP_INCLUDED

#include <cstdint>

namespace etas
{
namespace vrte
{
namespace saf
{
namespace daemon
{

/// @brief Configuration parameters of the PHM daemon
class PhmDaemonConfig
{
public:
    /// @brief Get the Adaptive platform release as string
    /// @return Adaptive Platform release in the format of Rxx-yy as constant string
    static constexpr const char* getApRelease() noexcept
    {
        return "R24-11";
    }
};

}  // namespace daemon
}  // namespace saf
}  // namespace vrte
}  // namespace etas

#endif
