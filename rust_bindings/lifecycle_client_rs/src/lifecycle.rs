// (c) 2025 ETAS GmbH. All rights reserved.

use libc::c_int;

#[link(name = "lifecycle_client")]
unsafe extern "C" {
    fn score_lcm_ReportExecutionStateRunning() -> c_int;
}

pub fn report_execution_state_running() -> bool {
    unsafe {
        score_lcm_ReportExecutionStateRunning() == 0
    }
}