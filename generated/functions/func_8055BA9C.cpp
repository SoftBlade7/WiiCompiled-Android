#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055BA9C(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8055BA9C;

loc_8055BA9C:
{
    InvokeDirectCpu<0x8004CF70u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800001EA gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055BA9C func_8055BA9C preserves=true fpr_mask=0x00000000
