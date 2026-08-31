#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054A868(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8054A868;

loc_8054A868:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 65536;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = (r4 + -29504);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 0;
    r31 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8054A898:
{
    r0 = (r28 & 255);
    r0 = (r0 * r29);
    r3 = (r31 + r0);
    r3 = (r3 + 8);
    ctx->lr = 0x8054A8ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80548300u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(4));
}

loc_8054A8B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8054A898;
    }
}

loc_8054A8B8:
{
    r3 = (r31 + 131072);
    r4 = 0;
    r5 = 14340;
    r3 = (r3 + 13064);
    ctx->lr = 0x8054A8CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r8 = (r31 + 131072);
    r9 = -1;
    MemoryInline::FlatWrite32((r8 + 13072), r9);
    r0 = 0;
    r4 = (r31 + 4500);
    r3 = r8;
    MemoryInline::FlatWrite32((r8 + 13972), r9);
    r7 = (r0 | 39);
    r29 = 1380646912;
    r6 = 0x80380000u;
    MemoryInline::FlatWrite32((r8 + 14872), r9);
    r0 = (r29 + 18244);
    r5 = 5360;
    MemoryInline::FlatWrite32((r8 + 15772), r9);
    MemoryInline::FlatWrite32((r8 + 16672), r9);
    r8 = (r4 + 131072);
    r4 = 0;
    MemoryInline::FlatWrite32((r8 + 13072), r9);
    MemoryInline::FlatWrite32((r8 + 13972), r9);
    MemoryInline::FlatWrite32((r8 + 14872), r9);
    MemoryInline::FlatWrite32((r8 + 15772), r9);
    MemoryInline::FlatWrite32((r8 + 16672), r9);
    MemoryInline::FlatWrite32((r3 + 13068), r7);
    r7 = MemoryInline::FlatRead32((r6 + 24576));
    r6 = MemoryInline::FlatRead16((r3 + 27402));
    r7 = MemoryInline::FlatRead32((r7 + 132));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(12));
    r6_mrot_0 = (r6_rot_0 & 61440);
    r6_mdest_0 = (r6 & -61441);
    r6 = (r6_mdest_0 | r6_mrot_0);
    MemoryInline::FlatWrite16((r3 + 27402), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r3 + 13064), r0);
    r3 = (r3 + 27404);
    ctx->lr = 0x8054A948u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r29 + 21316);
    MemoryInline::FlatWrite32(r31, r0);
    r3 = 808452096;
    r4 = 131072;
    r0 = (r3 + 12342);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r3 = r31;
    r4 = (r4 + 32764);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D1CA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    r5 = (r31 + 131072);
    r4 = 0x80550000u;
    MemoryInline::FlatWrite32((r5 + 32764), r3);
    r3 = (r30 + 131072);
    r0 = 1;
    r4 = (r4 + -22724);
    MemoryInline::FlatWrite8((r3 + 20480), static_cast<uint8_t>(r0));
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r6 = 0;
    ctx->lr = 0x8054A998u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80242C18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFDDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8054A868 func_8054A868 preserves=true fpr_mask=0x00000000
