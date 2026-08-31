#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FB598(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_807FB598;

loc_807FB598:
{
    InvokeDirectCpu<0x807FBE6Cu>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0003FF gpr_write=0xFE000BFB gpr_return=0x00000018 fpr_read=0xF000005F fpr_write=0xF000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FB598 func_807FB598 preserves=true fpr_mask=0x00000000
