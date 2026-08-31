#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808676D8(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_808676D8;

loc_808676D8:
{
    InvokeDirectCpu<0x805555CCu>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000FE9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808676D8 func_808676D8 preserves=true fpr_mask=0x00000000
