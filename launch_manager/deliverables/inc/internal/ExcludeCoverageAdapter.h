// (c) 2025 ETAS GmbH. All rights reserved.

#ifndef EXCLUDE_COVERAGE_ADAPTER_H_INCLUDED
#define EXCLUDE_COVERAGE_ADAPTER_H_INCLUDED

#ifdef __CTC__
#define EXCLUDE_COVERAGE_START(justification) _Pragma("CTC ANNOTATION justification") _Pragma("CTC SKIP")
#else
#define EXCLUDE_COVERAGE_START(justification)
#endif

#ifdef __CTC__
#define EXCLUDE_COVERAGE_END _Pragma("CTC ENDSKIP")
#else
#define EXCLUDE_COVERAGE_END
#endif

#endif