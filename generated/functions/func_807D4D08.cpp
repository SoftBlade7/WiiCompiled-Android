#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D4D08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_10 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_10 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;
    uint32_t r8_addr_8 = 0;
    uint32_t r8_addr_9 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807D4D08;

loc_807D4D08:
{
    MemoryInline::FlatWriteRam32((r1 + -1328), r1);
    r1 = (r1 + -1328);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1332), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 1324), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + 11192);
    MemoryInline::FlatWriteRam32((r1 + 1320), r30);
    r30 = r3;
    r4 = (r31 + 0);
    MemoryInline::FlatWriteRam32((r1 + 1316), r29);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r6 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r29 = MemoryInline::FlatRead32((r3 + 260));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 984));
    MemoryInline::FlatWriteRam32((r1 + 140), r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D4D58:
{
    MemoryInline::FlatWriteRam32((r1 + 144), r5);
    MemoryInline::FlatWriteRam32((r1 + 148), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D4D80;
    }
}

loc_807D4D64:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D4D80u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D4D80:
{
    r3 = MemoryInline::FlatRead32((r29 + 984));
}

loc_807D4D88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D4D94;
    }
}

loc_807D4D8C:
{
    r11 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D4D98;
}

loc_807D4D94:
{
    r11 = 0;
}

loc_807D4D98:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r3 = (r31 + 12);
    r5 = MemoryInline::FlatRead32((r31 + 12));
    r8 = (r1 + 876);
    r9 = (r0 * 12);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r7 = (r1 + 152);
    r6 = MemoryInline::FlatRead32((r1 + 140));
    r3 = (r1 + 296);
    r10 = (r8 + r9);
    r9 = MemoryInline::FlatRead32((r1 + 144));
    MemoryInline::FlatWrite32(r10, r6);
    r6 = 2;
    r8 = MemoryInline::FlatRead32((r1 + 148));
    MemoryInline::FlatWrite32((r10 + 4), r9);
    MemoryInline::FlatWrite32((r10 + 8), r8);
    r8 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 128), r5);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r7_addr_0 = (r7 + r5);
    MemoryInline::FlatWrite32(r7_addr_0, r11);
    r5 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 132), r4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r3_addr_0 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_0, r6);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r29 = MemoryInline::FlatRead32((r3 + 260));
    r0 = MemoryInline::FlatRead32((r29 + 1272));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D4E1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D4E3C;
    }
}

loc_807D4E20:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D4E3Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D4E3C:
{
    r3 = MemoryInline::FlatRead32((r29 + 1272));
}

loc_807D4E44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D4E50;
    }
}

loc_807D4E48:
{
    r10 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D4E54;
}

loc_807D4E50:
{
    r10 = 0;
}

loc_807D4E54:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r8 = (r1 + 876);
    r7 = MemoryInline::FlatRead32((r1 + 128));
    r5 = (r1 + 152);
    r9 = (r0 * 12);
    r6 = MemoryInline::FlatRead32((r1 + 132));
    r0 = MemoryInline::FlatRead32((r1 + 136));
    r3 = (r1 + 296);
    r4 = 2;
    r8_addr_0 = (r8 + r9);
    MemoryInline::FlatWrite32(r8_addr_0, r7);
    r8 = r8_addr_0;
    MemoryInline::FlatWrite32((r8 + 4), r6);
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_0, r10);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r4);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 331));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D4EB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D5028;
    }
}

loc_807D4EB8:
{
    r29 = MemoryInline::FlatRead32((r3 + 260));
    r3 = (r31 + 24);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r29 + 312));
    r5 = MemoryInline::FlatRead32((r31 + 24));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D4ED4:
{
    MemoryInline::FlatWriteRam32((r1 + 116), r5);
    MemoryInline::FlatWriteRam32((r1 + 120), r4);
    MemoryInline::FlatWriteRam32((r1 + 124), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D4F00;
    }
}

loc_807D4EE4:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D4F00u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D4F00:
{
    r3 = MemoryInline::FlatRead32((r29 + 312));
}

loc_807D4F08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D4F14;
    }
}

loc_807D4F0C:
{
    r11 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D4F18;
}

loc_807D4F14:
{
    r11 = 0;
}

loc_807D4F18:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r3 = (r31 + 36);
    r5 = MemoryInline::FlatRead32((r31 + 36));
    r8 = (r1 + 876);
    r9 = (r0 * 12);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r7 = (r1 + 152);
    r6 = MemoryInline::FlatRead32((r1 + 116));
    r3 = (r1 + 296);
    r10 = (r8 + r9);
    r9 = MemoryInline::FlatRead32((r1 + 120));
    MemoryInline::FlatWrite32(r10, r6);
    r6 = 2;
    r8 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::FlatWrite32((r10 + 4), r9);
    MemoryInline::FlatWrite32((r10 + 8), r8);
    r8 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 104), r5);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r7_addr_1 = (r7 + r5);
    MemoryInline::FlatWrite32(r7_addr_1, r11);
    r5 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 108), r4);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r3_addr_2 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_2, r6);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r29 = MemoryInline::FlatRead32((r3 + 260));
    r0 = MemoryInline::FlatRead32((r29 + 600));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D4F9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D4FBC;
    }
}

loc_807D4FA0:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D4FBCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D4FBC:
{
    r3 = MemoryInline::FlatRead32((r29 + 600));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D4FC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D4FD0;
    }
}

loc_807D4FC8:
{
    r10 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D4FD4;
}

loc_807D4FD0:
{
    r10 = 0;
}

loc_807D4FD4:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r8 = (r1 + 876);
    r7 = MemoryInline::FlatRead32((r1 + 104));
    r5 = (r1 + 152);
    r9 = (r0 * 12);
    r6 = MemoryInline::FlatRead32((r1 + 108));
    r0 = MemoryInline::FlatRead32((r1 + 112));
    r3 = (r1 + 296);
    r4 = 2;
    r8_addr_1 = (r8 + r9);
    MemoryInline::FlatWrite32(r8_addr_1, r7);
    r8 = r8_addr_1;
    MemoryInline::FlatWrite32((r8 + 4), r6);
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5_addr_1 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_1, r10);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_3, r4);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
}

loc_807D5028:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r4 = (r31 + 48);
    r6 = MemoryInline::FlatRead32((r31 + 48));
    r29 = MemoryInline::FlatRead32((r3 + 260));
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r29 + 24));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D5048:
{
    MemoryInline::FlatWriteRam32((r1 + 92), r6);
    MemoryInline::FlatWriteRam32((r1 + 96), r5);
    MemoryInline::FlatWriteRam32((r1 + 100), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D5074;
    }
}

loc_807D5058:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D5074u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D5074:
{
    r3 = MemoryInline::FlatRead32((r29 + 24));
}

loc_807D507C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D5088;
    }
}

loc_807D5080:
{
    r10 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D508C;
}

loc_807D5088:
{
    r10 = 0;
}

loc_807D508C:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r8 = (r1 + 876);
    r7 = MemoryInline::FlatRead32((r1 + 92));
    r5 = (r1 + 152);
    r9 = (r0 * 12);
    r6 = MemoryInline::FlatRead32((r1 + 96));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r3 = (r1 + 296);
    r4 = 2;
    r8_addr_3 = (r8 + r9);
    MemoryInline::FlatWrite32(r8_addr_3, r7);
    r8 = r8_addr_3;
    MemoryInline::FlatWrite32((r8 + 4), r6);
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5_addr_3 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_3, r10);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_5, r4);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r0 = MemoryInline::FlatRead8((r30 + 652));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D50E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D531C;
    }
}

loc_807D50EC:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r4 = (r31 + 60);
    r6 = MemoryInline::FlatRead32((r31 + 60));
    r29 = MemoryInline::FlatRead32((r3 + 260));
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r29 + 2424));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D510C:
{
    MemoryInline::FlatWriteRam32((r1 + 80), r6);
    MemoryInline::FlatWriteRam32((r1 + 84), r5);
    MemoryInline::FlatWriteRam32((r1 + 88), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D5138;
    }
}

loc_807D511C:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D5138u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D5138:
{
    r3 = MemoryInline::FlatRead32((r29 + 2424));
}

loc_807D5140:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D514C;
    }
}

loc_807D5144:
{
    r11 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D5150;
}

loc_807D514C:
{
    r11 = 0;
}

loc_807D5150:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r3 = (r31 + 72);
    r5 = MemoryInline::FlatRead32((r31 + 72));
    r8 = (r1 + 876);
    r9 = (r0 * 12);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r7 = (r1 + 152);
    r6 = MemoryInline::FlatRead32((r1 + 80));
    r3 = (r1 + 296);
    r10 = (r8 + r9);
    r9 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWrite32(r10, r6);
    r6 = 2;
    r8 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWrite32((r10 + 4), r9);
    MemoryInline::FlatWrite32((r10 + 8), r8);
    r8 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 68), r5);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    r7_addr_3 = (r7 + r5);
    MemoryInline::FlatWrite32(r7_addr_3, r11);
    r5 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 72), r4);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r3_addr_6 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_6, r6);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r29 = MemoryInline::FlatRead32((r3 + 260));
    r0 = MemoryInline::FlatRead32((r29 + 2520));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D51D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D51F4;
    }
}

loc_807D51D8:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D51F4u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D51F4:
{
    r3 = MemoryInline::FlatRead32((r29 + 2520));
}

loc_807D51FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D5208;
    }
}

loc_807D5200:
{
    r11 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D520C;
}

loc_807D5208:
{
    r11 = 0;
}

loc_807D520C:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r3 = (r31 + 84);
    r5 = MemoryInline::FlatRead32((r31 + 84));
    r8 = (r1 + 876);
    r9 = (r0 * 12);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r7 = (r1 + 152);
    r6 = MemoryInline::FlatRead32((r1 + 68));
    r3 = (r1 + 296);
    r10 = (r8 + r9);
    r9 = MemoryInline::FlatRead32((r1 + 72));
    MemoryInline::FlatWrite32(r10, r6);
    r6 = 2;
    r8 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWrite32((r10 + 4), r9);
    MemoryInline::FlatWrite32((r10 + 8), r8);
    r8 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 56), r5);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_4 & -4);
    r7_addr_4 = (r7 + r5);
    MemoryInline::FlatWrite32(r7_addr_4, r11);
    r5 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r3_addr_7 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_7, r6);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r29 = MemoryInline::FlatRead32((r3 + 260));
    r0 = MemoryInline::FlatRead32((r29 + 2616));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D5290:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D52B0;
    }
}

loc_807D5294:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D52B0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D52B0:
{
    r3 = MemoryInline::FlatRead32((r29 + 2616));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D52B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D52C4;
    }
}

loc_807D52BC:
{
    r10 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D52C8;
}

loc_807D52C4:
{
    r10 = 0;
}

loc_807D52C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r8 = (r1 + 876);
    r7 = MemoryInline::FlatRead32((r1 + 56));
    r5 = (r1 + 152);
    r9 = (r0 * 12);
    r6 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 64));
    r3 = (r1 + 296);
    r4 = 2;
    r8_addr_4 = (r8 + r9);
    MemoryInline::FlatWrite32(r8_addr_4, r7);
    r8 = r8_addr_4;
    MemoryInline::FlatWrite32((r8 + 4), r6);
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r5_addr_4 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_4, r10);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3_addr_8 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_8, r4);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
}

loc_807D531C:
{
    r12 = MemoryInline::FlatRead32((r30 + 12));
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x807D5330u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D5334:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D54C4;
    }
}

loc_807D5338:
{
    r0 = MemoryInline::FlatRead32((r30 + 724));
    r4 = (r31 + 96);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r0 * 96);
    r6 = MemoryInline::FlatRead32((r31 + 96));
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r29 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 24));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D5368:
{
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D5390;
    }
}

loc_807D5374:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D5390u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D5390:
{
    r3 = MemoryInline::FlatRead32((r29 + 24));
}

loc_807D5398:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D53A4;
    }
}

loc_807D539C:
{
    r11 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D53A8;
}

loc_807D53A4:
{
    r11 = 0;
}

loc_807D53A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r3 = (r31 + 108);
    r5 = MemoryInline::FlatRead32((r31 + 108));
    r8 = (r1 + 444);
    r9 = (r0 * 12);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r7 = (r1 + 152);
    r6 = MemoryInline::FlatRead32((r1 + 44));
    r3 = (r1 + 296);
    r10 = (r8 + r9);
    r9 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::FlatWrite32(r10, r6);
    r6 = 1;
    r8 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWrite32((r10 + 4), r9);
    MemoryInline::FlatWrite32((r10 + 8), r8);
    r8 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_6 & -4);
    r7_addr_6 = (r7 + r5);
    MemoryInline::FlatWrite32(r7_addr_6, r11);
    r5 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_6 & -4);
    r3_addr_10 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_10, r6);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r0 = MemoryInline::FlatRead32((r30 + 728));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r0 * 96);
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r29 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D5438:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D5458;
    }
}

loc_807D543C:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D5458u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D5458:
{
    r3 = MemoryInline::FlatRead32((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D5460:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D546C;
    }
}

loc_807D5464:
{
    r10 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D5470;
}

loc_807D546C:
{
    r10 = 0;
}

loc_807D5470:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r8 = (r1 + 444);
    r7 = MemoryInline::FlatRead32((r1 + 32));
    r5 = (r1 + 152);
    r9 = (r0 * 12);
    r6 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    r3 = (r1 + 296);
    r4 = 1;
    r8_addr_6 = (r8 + r9);
    MemoryInline::FlatWrite32(r8_addr_6, r7);
    r8 = r8_addr_6;
    MemoryInline::FlatWrite32((r8 + 4), r6);
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r5_addr_6 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_6, r10);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3_addr_11 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_11, r4);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
}

loc_807D54C4:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r4 = (r31 + 120);
    r6 = MemoryInline::FlatRead32((r31 + 120));
    r29 = MemoryInline::FlatRead32((r3 + 260));
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r29 + 696));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D54E4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D5510;
    }
}

loc_807D54F4:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D5510u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D5510:
{
    r3 = MemoryInline::FlatRead32((r29 + 696));
}

loc_807D5518:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D5524;
    }
}

loc_807D551C:
{
    r10 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D5528;
}

loc_807D5524:
{
    r10 = 0;
}

loc_807D5528:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r8 = (r1 + 876);
    r7 = MemoryInline::FlatRead32((r1 + 20));
    r5 = (r1 + 152);
    r9 = (r0 * 12);
    r6 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r3 = (r1 + 296);
    r4 = 2;
    r8_addr_8 = (r8 + r9);
    MemoryInline::FlatWrite32(r8_addr_8, r7);
    r8 = r8_addr_8;
    MemoryInline::FlatWrite32((r8 + 4), r6);
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r5_addr_8 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_8, r10);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3_addr_13 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_13, r4);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 327));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D5588:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D5640;
    }
}

loc_807D558C:
{
    r29 = MemoryInline::FlatRead32((r3 + 260));
    r3 = (r31 + 132);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r29 + 1368));
    r5 = MemoryInline::FlatRead32((r31 + 132));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D55A8:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D55D4;
    }
}

loc_807D55B8:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18248);
    r4 = 56;
    r5 = (r5 + 18216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D55D4u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D55D4:
{
    r3 = MemoryInline::FlatRead32((r29 + 1368));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D55DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D55E8;
    }
}

loc_807D55E0:
{
    r10 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D55EC;
}

loc_807D55E8:
{
    r10 = 0;
}

loc_807D55EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r8 = (r1 + 876);
    r7 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r1 + 152);
    r9 = (r0 * 12);
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r1 + 296);
    r4 = 2;
    r8_addr_9 = (r8 + r9);
    MemoryInline::FlatWrite32(r8_addr_9, r7);
    r8 = r8_addr_9;
    MemoryInline::FlatWrite32((r8 + 4), r6);
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r5_addr_9 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_9, r10);
    r0 = MemoryInline::FlatRead32((r1 + 440));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3_addr_14 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_14, r4);
    r3 = MemoryInline::FlatRead32((r1 + 440));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
}

loc_807D5640:
{
    r3 = (r1 + 152);
    r4 = (r30 + 132);
    r5 = (r30 + 136);
    r6 = (r30 + 140);
    r7 = (r30 + 564);
    r8 = (r30 + 568);
    ctx->lr = 0x807D565Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807D4B20u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 144), r0);
    r31 = MemoryInline::FlatRead32((r1 + 1324));
    r30 = MemoryInline::FlatRead32((r1 + 1320));
    r29 = MemoryInline::FlatRead32((r1 + 1316));
    r0 = MemoryInline::FlatRead32((r1 + 1332));
    ctx->lr = r0;
    r1 = (r1 + 1328);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D4D08 func_807D4D08 preserves=true fpr_mask=0x00000000
