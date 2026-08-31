#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807E47C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_807E47C8;

loc_807E47C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + -32224);
    f0.d = MemoryInline::FlatReadFloat32((r5 + -32284));
    r4 = (r4 + 248);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteFloat32((r3 + 372), f0.d);
    r3 = (r3 + 168);
    ctx->lr = 0x807E47FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x805E8368u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 393), static_cast<uint8_t>(r0));
    r6 = 0x802A0000u;
    r4 = 0x808B0000u;
    MemoryInline::FlatWrite32((r31 + 376), r3);
    r5 = (r6 + 16640);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -32280));
    r0 = 255;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16640));
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    r3 = MemoryInline::FlatRead32((r31 + 376));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWrite8((r3 + 184), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 376));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFCE gpr_write=0x8000107B gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x807E47C8 func_807E47C8 preserves=true fpr_mask=0x00000000
