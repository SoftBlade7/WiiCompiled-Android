#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80806450(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80806450;

loc_80806450:
{
    InvokeDirectCpu<0x80806C24u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF8003FF gpr_write=0xFF80087B gpr_return=0x00000018 fpr_read=0xF00000FF fpr_write=0xF00000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80806450 func_80806450 preserves=true fpr_mask=0x00000000
