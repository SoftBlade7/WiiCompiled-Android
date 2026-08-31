#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020C400(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8020C400;

loc_8020C400:
{
    InvokeDirectCpu<0x80208FD8u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020C400 func_8020C400 preserves=true fpr_mask=0x00000000
