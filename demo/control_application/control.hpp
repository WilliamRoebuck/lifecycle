// (c) 2025 ETAS GmbH. All rights reserved.
#ifndef CONTROL_HPP
#define CONTROL_HPP

#include <cstddef>

struct ProcessGroupInfo {
    char processGroupStatePath[1024]{};
};

static constexpr char const* control_socket_path = "/sm_control";
static constexpr std::size_t control_socket_capacity = 32;

#endif