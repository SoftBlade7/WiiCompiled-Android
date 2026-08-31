#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808148AC(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_808148AC;

loc_808148AC:
{
    InvokeDirectCpu<0x80814EA8u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF0003FF gpr_write=0xFF0008FB gpr_return=0x00000018 fpr_read=0xF00000FF fpr_write=0xF00000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808148AC func_808148AC preserves=true fpr_mask=0x00000000
