// (c) 2025 ETAS GmbH. All rights reserved.

#include "score/lcm/MonitorImplWrapper.h"

#include "score/lcm/hmlib/MonitorImpl.h"
#include "score/lcm/Monitor.h"

namespace score
{
namespace lcm
{

MonitorImplWrapper::MonitorImplWrapper(
    const std::string_view& f_instanceSpecifier_r) noexcept(false) :
    // coverity[autosar_cpp14_a15_5_2_violation] This warning comes from pipc-sa(external library)
    monitorImplPtr(std::make_unique<MonitorImpl>(f_instanceSpecifier_r))
{
}

MonitorImplWrapper::~MonitorImplWrapper() noexcept(true)
{
    monitorImplPtr.reset();
}

void MonitorImplWrapper::ReportCheckpoint(score::lcm::Checkpoint f_checkpointId) const noexcept(true)
{
    if (monitorImplPtr.get() != nullptr)
    {
        monitorImplPtr->ReportCheckpoint(f_checkpointId);
    }
}

}  // namespace lcm
}  // namespace score
