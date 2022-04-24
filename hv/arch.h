#pragma once

#include <intrin.h>
#include <ia32.hpp>

extern "C" {

// https://docs.microsoft.com/en-us/cpp/intrinsics/x64-amd64-intrinsics-list
void _sgdt(segment_descriptor_register_64* gdtr);
void _lgdt(segment_descriptor_register_64* gdtr);

} // extern "C"

namespace hv {

// defined in arch.asm
segment_selector read_cs();
segment_selector read_ss();
segment_selector read_ds();
segment_selector read_es();
segment_selector read_fs();
segment_selector read_gs();
segment_selector read_tr();
segment_selector read_ldtr();

} // namespace hv

