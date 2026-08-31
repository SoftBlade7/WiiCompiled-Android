#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807E91DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_807E91DC;

loc_807E91DC:
{
    r3 = (r3 + -24);
    // inline leaf 0x807E879C (4 guest instruction(s))
    r3 = 0x808B0000u;
    r3 = (r3 + -29280);
    r3 = (r3 + 20);
    // end of inlined leaf 0x807E879C
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807E91DC func_807E91DC preserves=true fpr_mask=0x00000000
