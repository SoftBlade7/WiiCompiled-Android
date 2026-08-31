#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F1FE8(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_800F1FE8;

loc_800F1FE8:
{
    InvokeDirectCpu<0x801A7EACu>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x80000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F1FE8 func_800F1FE8 preserves=true fpr_mask=0x00000000
