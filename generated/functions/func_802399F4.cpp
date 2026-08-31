#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802399F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_802399F4;

loc_802399F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x802A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24544));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 15780);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24532));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24528));
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite32((r3 + 4), r31);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite8((r3 + 44), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    ctx->lr = 0x80239A3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80239D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24544));
    r3 = r30;
    // inline leaf 0x80239DAC (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 32), f1.d);
    // end of inlined leaf 0x80239DAC
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24540));
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    MemoryInline::FlatWrite8((r30 + 44), static_cast<uint8_t>(r31));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFEE gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF803FF8 fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802399F4 func_802399F4 preserves=true fpr_mask=0x00000000
