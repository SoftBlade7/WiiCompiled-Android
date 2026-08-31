#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80217A28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80217A28;

loc_80217A28:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // inline leaf 0x801950D0 (7 guest instruction(s))
    r0 = (r3 * 1336);
    r3 = 0x80340000u;
    r3 = (r3 + 22496);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 140), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 144), f2.d);
    // end of inlined leaf 0x801950D0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000006 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80217A28 func_80217A28 preserves=true fpr_mask=0x00000000
