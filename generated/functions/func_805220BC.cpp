#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805220BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805220BC;

loc_805220BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80890000u;
    r11 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -832));
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r10 = 7;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -828));
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    r11 = (r11 + 12076);
    r7 = (r7 + 12064);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r4 = (r4 + 11736);
    r31 = -1;
    r29 = r3;
    r5 = MemoryInline::FlatRead8((r3 + 136));
    r0 = MemoryInline::FlatRead8((r3 + 188));
    r6 = (r5 & -193);
    r9 = MemoryInline::FlatRead8((r3 + 60));
    r8 = MemoryInline::FlatRead8((r3 + 84));
    r0 = (r0 & -193);
    r9 = (r9 & -129);
    MemoryInline::FlatWrite32(r3, r4);
    r8 = (r8 & -129);
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r30);
    r5 = 6;
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r3 + 40), r11);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r3 + 46), static_cast<uint16_t>(r30));
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    MemoryInline::FlatWrite8((r3 + 56), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r3 + 57), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r3 + 58), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 59), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite32((r3 + 64), r11);
    MemoryInline::FlatWrite16((r3 + 68), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r3 + 70), static_cast<uint16_t>(r30));
    MemoryInline::FlatWriteFloat32((r3 + 76), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
    MemoryInline::FlatWrite8((r3 + 80), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r3 + 81), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r3 + 82), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 83), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r3 + 88), r7);
    MemoryInline::FlatWrite16((r3 + 92), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r3 + 94), static_cast<uint16_t>(r30));
    MemoryInline::FlatWriteFloat32((r3 + 100), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 96), f1.d);
    MemoryInline::FlatWrite8((r3 + 112), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r3 + 113), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 128), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 124), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 132), f1.d);
    MemoryInline::FlatWrite8((r3 + 136), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r3 + 140), r7);
    MemoryInline::FlatWrite16((r3 + 144), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r3 + 146), static_cast<uint16_t>(r30));
    MemoryInline::FlatWriteFloat32((r3 + 152), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 148), f1.d);
    MemoryInline::FlatWrite8((r3 + 164), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r3 + 165), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteFloat32((r3 + 168), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 172), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f1.d);
    MemoryInline::FlatWrite8((r3 + 188), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 192), static_cast<uint16_t>(r30));
    r3 = (r3 + 204);
    ctx->lr = 0x80522204u;
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
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32((r29 + 212), r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80522210:
{
    MemoryInline::FlatWrite16((r29 + 192), static_cast<uint16_t>(r30));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80522234;
    }
}

loc_80522218:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (0 - r30);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x80522234u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80522234:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80522248u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808B0000u;
    r3 = 10100;
    r4 = (r4 + 11664);
    MemoryInline::FlatWrite32(r29, r4);
    ctx->lr = 0x8052225Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 216), r3);
    r3 = 28;
    ctx->lr = 0x80522268u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052226C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80522274;
    }
}

loc_80522270:
{
    ctx->lr = 0x80522274u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80524AC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80522274:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 232), r3);
    r3 = r29;
    MemoryInline::FlatWrite8((r29 + 228), static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80522294u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r29;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805220BC func_805220BC preserves=true fpr_mask=0x00000000
