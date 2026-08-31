#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80806498(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80806498;

loc_80806498:
{
    InvokeDirectCpu<0x80806554u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF8003FF gpr_write=0xFF80083B gpr_return=0x00000018 fpr_read=0xE00000FF fpr_write=0xE00000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80806498 func_80806498 preserves=true fpr_mask=0x00000000
