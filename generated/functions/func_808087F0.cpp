#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808087F0(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_808087F0;

loc_808087F0:
{
    InvokeDirectCpu<0x808088A0u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF0003FF gpr_write=0xFF000BFB gpr_return=0x00000018 fpr_read=0xE000000F fpr_write=0xE000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808087F0 func_808087F0 preserves=true fpr_mask=0x00000000
