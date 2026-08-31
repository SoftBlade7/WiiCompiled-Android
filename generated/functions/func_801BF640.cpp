#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BF640(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_801BF640;

loc_801BF640:
{
    InvokeDirectCpu<0x801CDC74u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00007EA gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801BF640 func_801BF640 preserves=true fpr_mask=0x00000000
