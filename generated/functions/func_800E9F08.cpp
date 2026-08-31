#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E9F08(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_800E9F08;

loc_800E9F08:
{
    InvokeDirectCpu<0x801A0514u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002049 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E9F08 func_800E9F08 preserves=true fpr_mask=0x00000000
