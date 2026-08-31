#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BF63C(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_801BF63C;

loc_801BF63C:
{
    InvokeDirectCpu<0x801CDF3Cu>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00027FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801BF63C func_801BF63C preserves=true fpr_mask=0x00000000
