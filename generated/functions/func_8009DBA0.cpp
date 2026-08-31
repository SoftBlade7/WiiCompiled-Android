#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009DBA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_8009DBA0;

loc_8009DBA0:
{
    r3 = 0x802D0000u;
    r3 = (r3 + 23464);
    // inline leaf 0x8009D070 (12 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28152));
    r4 = 0x80270000u;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28148));
    r4 = (r4 + 18760);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28144));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28140));
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
    // end of inlined leaf 0x8009D070
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009DBA0 func_8009DBA0 preserves=true fpr_mask=0x00000000
