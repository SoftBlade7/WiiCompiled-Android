#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EC320(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_800EC320;

loc_800EC320:
{
    InvokeDirectCpu<0x800EC324u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FEA gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EC320 func_800EC320 preserves=true fpr_mask=0x00000000
