#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001B1E4(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8001B1E4;

loc_8001B1E4:
{
    InvokeDirectCpu<0x8001B830u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003F gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x80000007 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8001B1E4 func_8001B1E4 preserves=true fpr_mask=0x00000000
