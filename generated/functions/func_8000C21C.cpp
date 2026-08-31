#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000C21C(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8000C21C;

loc_8000C21C:
{
    InvokeDirectCpu<0x8000C174u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000C21C func_8000C21C preserves=true fpr_mask=0x00000000
