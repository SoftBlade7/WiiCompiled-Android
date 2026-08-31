#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052A048(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8052A048;

loc_8052A048:
{
    InvokeDirectCpu<0x80552564u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052A048 func_8052A048 preserves=true fpr_mask=0x00000000
