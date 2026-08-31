#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001BBE4(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8001BBE4;

loc_8001BBE4:
{
    InvokeDirectCpu<0x80017FD8u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800003FF gpr_write=0x800003FB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001BBE4 func_8001BBE4 preserves=true fpr_mask=0x00000000
