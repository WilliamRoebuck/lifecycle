// (c) 2025 ETAS GmbH. All rights reserved.

/// @file

#ifndef SCORE_LCM_EXECUTION_ERROR_EVENT_H_
#define SCORE_LCM_EXECUTION_ERROR_EVENT_H_

#include <score/lcm/identifier_hash.hpp>

namespace score {

namespace lcm {

/// @brief Represents the execution error.
using ExecutionError = std::uint32_t;

/// @brief Represents an execution error event which happens in a Process Group.
///
// RULECHECKER_comment(1, 1, check_incomplete_data_member_construction, "wi 45913 - This struct is POD, which doesn't have user-declared constructor. The rule doesn’t apply.", false)
struct ExecutionErrorEvent final {
   public:
    /// @brief The execution error of the Process which unexpectedly terminated
    ExecutionError executionError;

    /// @brief The process group in which the error occurred
    IdentifierHash processGroup;
};

}  // namespace lcm

}  // namespace score

#endif  // SCORE_LCM_EXECUTION_ERROR_EVENT_H_
