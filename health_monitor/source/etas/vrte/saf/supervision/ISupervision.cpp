// (c) 2025 ETAS GmbH. All rights reserved.

#include "etas/vrte/saf/supervision/ISupervision.hpp"

namespace etas
{
namespace vrte
{
namespace saf
{
namespace supervision
{

ISupervision::ISupervision(const char* const f_supervisionConfigName_p) : k_cfgName(f_supervisionConfigName_p)
{
    // Satisfy Misra for minimum number of instructions
    static_cast<void>(0);
}

const char* ISupervision::getConfigName(void) const
{
    return static_cast<const char*>(k_cfgName.c_str());
}

}  // namespace supervision
}  // namespace saf
}  // namespace vrte
}  // namespace etas
