#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022E7AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_8022E7AC;

loc_8022E7AC:
{
    r3 = (r3 + -40);
    // inline leaf 0x8022E4C4 (4 guest instruction(s))
    r3 = 0x80250000u;
    r3 = (r3 + 30936);
    r3 = (r3 + 6);
    // end of inlined leaf 0x8022E4C4
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022E7AC func_8022E7AC preserves=true fpr_mask=0x00000000
