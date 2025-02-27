//==------------ misc_intrin.hpp - DPC++ Explicit SIMD API -----------------==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
// Declares miscellaneous Explicit SIMD intrinsics.
//===----------------------------------------------------------------------===//

#pragma once

/// @cond ESIMD_DETAIL

__ESIMD_INTRIN void __esimd_set_kernel_properties(int prop_mask)
#ifdef __SYCL_DEVICE_ONLY__
    ;
#else
{
} // Only "double GRF" property is supported for now, safe to ignore on host.
#endif // __SYCL_DEVICE_ONLY__

/// @endcond ESIMD_DETAIL
