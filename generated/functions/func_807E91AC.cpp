#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807E91AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_807E91AC;

loc_807E91AC:
{
    r3 = (r3 + -24);
    // inline leaf 0x807E82F4 (3 guest instruction(s))
    r3 = 0x808B0000u;
    r3 = (r3 + -29280);
    // end of inlined leaf 0x807E82F4
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807E91AC func_807E91AC preserves=true fpr_mask=0x00000000
