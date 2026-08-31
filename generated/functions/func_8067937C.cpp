#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067937C(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8067937C;

loc_8067937C:
{
    InvokeDirectCpu<0x801DE348u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8067937C func_8067937C preserves=true fpr_mask=0x00000000
