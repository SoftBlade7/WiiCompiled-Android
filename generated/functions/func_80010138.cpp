#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80010138(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_stbu_ea_0 = 0;
    uint32_t r3_stbu_ea_1 = 0;
    uint32_t r3_stbu_ea_10 = 0;
    uint32_t r3_stbu_ea_11 = 0;
    uint32_t r3_stbu_ea_12 = 0;
    uint32_t r3_stbu_ea_13 = 0;
    uint32_t r3_stbu_ea_14 = 0;
    uint32_t r3_stbu_ea_15 = 0;
    uint32_t r3_stbu_ea_16 = 0;
    uint32_t r3_stbu_ea_17 = 0;
    uint32_t r3_stbu_ea_18 = 0;
    uint32_t r3_stbu_ea_19 = 0;
    uint32_t r3_stbu_ea_2 = 0;
    uint32_t r3_stbu_ea_3 = 0;
    uint32_t r3_stbu_ea_4 = 0;
    uint32_t r3_stbu_ea_5 = 0;
    uint32_t r3_stbu_ea_6 = 0;
    uint32_t r3_stbu_ea_7 = 0;
    uint32_t r3_stbu_ea_8 = 0;
    uint32_t r3_stbu_ea_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r6_subfic_ra_4 = 0;
    uint32_t r6_subfic_ra_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80010138;

loc_80010138:
{
    r28 = 0;
    r0 = 32;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r28));
    r3 = (r1 + 16);
    r4 = (r1 + 56);
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    ctx->lr = 0x80010154u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000DAFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 61));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(48));
}

loc_8001015C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80010174;
    }
}

loc_80010160:
{
}

loc_80010164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_8001017C;
    }
}

loc_80010168:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(78));
}

loc_8001016C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80010208;
    }
}

loc_80010170:
{
    goto loc_80010298;
}

loc_80010174:
{
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r28));
    goto loc_80010298;
}

loc_8001017C:
{
    r0 = MemoryInline::FlatRead8((r1 + 56));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800101C4;
    }
}

loc_80010188:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
    r28 = (r29 + -5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65));
}

loc_80010194:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800101AC;
    }
}

loc_80010198:
{
    r4 = 0x80240000u;
    r3 = r28;
    r4 = (r4 + 26152);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80010200;
}

loc_800101AC:
{
    r4 = 0x80240000u;
    r3 = r28;
    r4 = (r4 + 26152);
    r4 = (r4 + 5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80010200;
}

loc_800101C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
    r28 = (r29 + -4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65));
}

loc_800101D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800101EC;
    }
}

loc_800101D4:
{
    r4 = 0x80240000u;
    r3 = r28;
    r4 = (r4 + 26152);
    r4 = (r4 + 10);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80010200;
}

loc_800101EC:
{
    r4 = 0x80240000u;
    r3 = r28;
    r4 = (r4 + 26152);
    r4 = (r4 + 14);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80010200:
{
    r3 = r28;
    goto loc_8001048C;
}

loc_80010208:
{
    r0 = MemoryInline::FlatRead8((r1 + 56));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80010254;
    }
}

loc_80010214:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
    r28 = (r29 + -5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65));
}

loc_80010220:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001023C;
    }
}

loc_80010224:
{
    r4 = 0x80240000u;
    r3 = r28;
    r4 = (r4 + 26152);
    r4 = (r4 + 18);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80010290;
}

loc_8001023C:
{
    r4 = 0x80240000u;
    r3 = r28;
    r4 = (r4 + 26152);
    r4 = (r4 + 23);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80010290;
}

loc_80010254:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
    r28 = (r29 + -4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65));
}

loc_80010260:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001027C;
    }
}

loc_80010264:
{
    r4 = 0x80240000u;
    r3 = r28;
    r4 = (r4 + 26152);
    r4 = (r4 + 28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80010290;
}

loc_8001027C:
{
    r4 = 0x80240000u;
    r3 = r28;
    r4 = (r4 + 26152);
    r4 = (r4 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80010290:
{
    r3 = r28;
    goto loc_8001048C;
}

loc_80010298:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    r8 = 0;
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r9 = 1;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_1 & -131072);
    r7 = 100;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r0_mrot_1 = (r0_rot_2 & -33554432);
    r0_mdest_1 = (r0 & 33554431);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r9));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r5 = (r5_rot_1 & 2047);
    r4 = r29;
    r0 = (0 - r5);
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r9));
    r3 = (r0 | r5);
    r0 = (r5 + -1023);
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r8));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 31);
    r5 = (r1 + 24);
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r8));
    r3 = (r0 & r3);
    r6 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 48), r8);
    MemoryInline::FlatWriteRam32((r1 + 52), r9);
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    MemoryInline::FlatWriteRam32((r1 + 36), r9);
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8000FBFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_80010318:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(97))) {
        goto loc_80010328;
    }
}

loc_8001031C:
{
    r0 = 112;
    r3_stbu_ea_1 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_1, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_1;
    goto loc_80010330;
}

loc_80010328:
{
    r0 = 80;
    r3_stbu_ea_2 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_2, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_2;
}

loc_80010330:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r8 = (r1 + 8);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r9 = (r4 + 11);
    ctr = r0;
}

loc_80010348:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_800103E4;
    }
}

loc_8001034C:
{
}

loc_80010350:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(64))) {
        goto loc_800103D4;
    }
}

loc_80010354:
{
    r4 = (static_cast<int32_t>(r9) >> 3);
    r0 = (r9 + -4);
    r7 = (r8 + r4);
    r6 = (r9 & 7);
    r4 = (r9 & -8);
    r0 = (r0 & -8);
    r5 = MemoryInline::FlatRead8(r7);
    r6_subfic_ra_2 = r6;
    r6 = (7 - r6_subfic_ra_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80010378:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r4 = (r0 & 255);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80010398;
    }
}

loc_80010384:
{
    r0 = MemoryInline::FlatRead8((r7 + -1));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r4 | r0);
    r4 = (r0 & 255);
}

loc_80010398:
{
    r4 = (r4 & 15);
}

loc_800103A0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(10))) {
        goto loc_800103B0;
    }
}

loc_800103A4:
{
    r0 = (r4 + 48);
    r4 = (r0 & 255);
    goto loc_800103D8;
}

loc_800103B0:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_800103B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(97))) {
        goto loc_800103C8;
    }
}

loc_800103BC:
{
    r0 = (r4 + 87);
    r4 = (r0 & 255);
    goto loc_800103D8;
}

loc_800103C8:
{
    r0 = (r4 + 55);
    r4 = (r0 & 255);
    goto loc_800103D8;
}

loc_800103D4:
{
    r4 = 48;
}

loc_800103D8:
{
    r3_stbu_ea_5 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_5, static_cast<uint8_t>(r4));
    r3 = r3_stbu_ea_5;
    r9 = (r9 + -4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001034C;
    }
}

loc_800103E4:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
}

loc_800103EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800103FC;
    }
}

loc_800103F0:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
}

loc_800103F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80010400;
    }
}

loc_800103FC:
{
    r3_stbu_ea_7 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_7, static_cast<uint8_t>(r31));
    r3 = r3_stbu_ea_7;
}

loc_80010400:
{
    f1.d = std::fabs(f31.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32544));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8001040C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001041C;
    }
}

loc_80010410:
{
    r0 = 49;
    r3_stbu_ea_9 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_9, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_9;
    goto loc_80010424;
}

loc_8001041C:
{
    r0 = 48;
    r3_stbu_ea_10 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_10, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_10;
}

loc_80010424:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_8001042C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(97))) {
        goto loc_8001043C;
    }
}

loc_80010430:
{
    r0 = 120;
    r3_stbu_ea_12 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_12, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_12;
    goto loc_80010444;
}

loc_8001043C:
{
    r0 = 88;
    r3_stbu_ea_13 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_13, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_13;
}

loc_80010444:
{
    r0 = 48;
    r3_stbu_ea_15 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_15, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_15;
    r0 = MemoryInline::FlatRead8((r1 + 56));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80010464;
    }
}

loc_80010458:
{
    r0 = 45;
    r3_stbu_ea_16 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_16, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_16;
    goto loc_8001048C;
}

loc_80010464:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8001046C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001047C;
    }
}

loc_80010470:
{
    r0 = 43;
    r3_stbu_ea_17 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_17, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_17;
    goto loc_8001048C;
}

loc_8001047C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80010480:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001048C;
    }
}

loc_80010484:
{
    r0 = 32;
    r3_stbu_ea_18 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_18, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_18;
}

loc_8001048C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 148));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    r29 = MemoryInline::FlatRead32((r1 + 116));
    r28 = MemoryInline::FlatRead32((r1 + 112));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0001FFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80010138 func_80010138 preserves=false fpr_mask=0x80000000
