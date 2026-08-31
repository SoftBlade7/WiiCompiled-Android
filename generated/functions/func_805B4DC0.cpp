#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B4DC0(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_805B4DC0;

loc_805B4DC0:
{
    InvokeDirectCpu<0x805B4B54u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000A gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B4DC0 func_805B4DC0 preserves=true fpr_mask=0x00000000
