#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806693F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806693F4;

loc_806693F4:
{
    r23 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r23 + 8512));
    ctx->lr = 0x80669400u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80677240u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r23 + 8512));
    // inline leaf 0x80677228 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80677228
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8066940C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80669720;
    }
}

loc_80669410:
{
    r3 = MemoryInline::FlatRead32((r23 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8066941C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806696FC;
    }
}

loc_80669420:
{
    r3 = MemoryInline::FlatRead32((r22 + 30072));
    r0 = (r3 + -5);
}

loc_8066942C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80669640;
    }
}

loc_80669430:
{
}

loc_80669434:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80669444;
    }
}

loc_80669438:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_8066943C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806695BC;
    }
}

loc_80669440:
{
    goto loc_80669704;
}

loc_80669444:
{
    r25 = (r22 + 16908);
    r24 = (r22 + 16900);
    r21 = r25;
    r23 = 1;
    r26 = 0;
    goto loc_80669478;
}

loc_8066945C:
{
    r3 = r21;
    ctx->lr = 0x80669464u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CB8B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80669468:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80669470;
    }
}

loc_8066946C:
{
    r23 = 0;
}

loc_80669470:
{
    r21 = (r21 + 84);
    r26 = (r26 + 1);
}

loc_80669478:
{
    r0 = MemoryInline::FlatRead32(r24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r0));
}

loc_80669480:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066945C;
    }
}

loc_80669484:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80669488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806695A8;
    }
}

loc_8066948C:
{
    r5 = MemoryInline::FlatRead32((r22 + 17748));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(32));
}

loc_80669494:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806694A8;
    }
}

loc_80669498:
{
    r4 = MemoryInline::FlatRead32((r22 + 17744));
    r3 = r22;
    r6 = r24;
    ctx->lr = 0x806694A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80669858u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806694A8:
{
    r5 = 1172832256;
    r4 = 65536;
    r3 = 274857984;
    r27 = r24;
    r29 = (r5 + -19853);
    r31 = (r4 + -5536);
    r30 = (r3 + 19923);
    r23 = 0;
    r26 = 0;
    r28 = 1;
    goto loc_80669588;
}

loc_806694D4:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r4 = r25;
    r3 = MemoryInline::FlatRead32((r22 + 16896));
    r5 = 76;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r29)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r3 = (r3 + r26);
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r28));
    r8 = (static_cast<int32_t>(r6) >> 14);
    r6 = (static_cast<int32_t>(r6) >> 14);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r6 = (r6 + r7);
    r6 = (r6 * r31);
    r7 = (r8 + r9);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r7));
    r6 = (r0 - r6);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r7 = (static_cast<int32_t>(r6) >> 6);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & 1);
    r7 = (r7 + r8);
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r7));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r6) >> 6);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & 1);
    r6 = (r6 + r7);
    r6 = (r6 * 1000);
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r22 + 16896));
    r3 = (r0 + r26);
    r21 = (r3 + 16);
    r3 = r21;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 76));
    r27 = (r27 + 84);
    MemoryInline::FlatWrite32((r21 + 76), r0);
    r26 = (r26 + 104);
    r23 = (r23 + 1);
    r0 = MemoryInline::FlatRead8((r25 + 77));
    MemoryInline::FlatWrite32((r21 + 80), r0);
    r0 = MemoryInline::FlatRead8((r25 + 78));
    MemoryInline::FlatWrite32((r21 + 84), r0);
    r0 = MemoryInline::FlatRead8((r25 + 79));
    r25 = (r25 + 84);
    MemoryInline::FlatWrite8((r21 + 88), static_cast<uint8_t>(r0));
}

loc_80669588:
{
    r4 = MemoryInline::FlatRead32(r24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(r4));
}

loc_80669590:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806694D4;
    }
}

loc_80669594:
{
    r3 = MemoryInline::FlatRead32((r22 + 16896));
    r0 = 1;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r22 + 20), r0);
    goto loc_80669704;
}

loc_806695A8:
{
    r3 = -10318;
    r0 = 3;
    MemoryInline::FlatWrite32((r22 + 24), r3);
    MemoryInline::FlatWrite32((r22 + 20), r0);
    goto loc_80669704;
}

loc_806695BC:
{
    r0 = MemoryInline::FlatRead32((r22 + 16900));
    r5 = (r22 + 16896);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(512));
}

loc_806695C8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806695E0;
    }
}

loc_806695CC:
{
    r3 = 3;
    r0 = -10365;
    MemoryInline::FlatWrite32((r22 + 20), r3);
    MemoryInline::FlatWrite32((r22 + 24), r0);
    goto loc_80669704;
}

loc_806695E0:
{
    r4 = MemoryInline::FlatRead32((r5 + 72));
    r3 = MemoryInline::FlatRead32(r5);
}

loc_806695EC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_806695F8;
    }
}

loc_806695F0:
{
    r3 = 0;
    goto loc_80669618;
}

loc_806695F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_806695FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80669608;
    }
}

loc_80669600:
{
    r3 = 0;
    goto loc_80669618;
}

loc_80669608:
{
    r4 = (r5 + r4);
    r5 = 6;
    r4 = (r4 + 8);
    ctx->lr = 0x80669618u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067512Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80669618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066961C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80669634;
    }
}

loc_80669620:
{
    r3 = 3;
    r0 = -10369;
    MemoryInline::FlatWrite32((r22 + 20), r3);
    MemoryInline::FlatWrite32((r22 + 24), r0);
    goto loc_80669704;
}

loc_80669634:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r22 + 20), r0);
    goto loc_80669704;
}

loc_80669640:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_80669644:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80669668;
    }
}

loc_80669648:
{
    r0 = MemoryInline::FlatRead32((r22 + 16904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80669650:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80669668;
    }
}

loc_80669654:
{
    r3 = 3;
    r0 = -10345;
    MemoryInline::FlatWrite32((r22 + 20), r3);
    MemoryInline::FlatWrite32((r22 + 24), r0);
    goto loc_80669704;
}

loc_80669668:
{
    r3 = MemoryInline::FlatRead32((r22 + 16900));
    r4 = (r22 + 16912);
    r5 = MemoryInline::FlatRead32((r22 + 16896));
    ctx->lr = 0x80669678u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067512Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066967C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806696C0;
    }
}

loc_80669680:
{
    r3 = MemoryInline::FlatRead32((r22 + 30072));
    r0 = 3;
    MemoryInline::FlatWrite32((r22 + 20), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_80669690:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806696A0;
    }
}

loc_80669694:
{
    r0 = -10339;
    MemoryInline::FlatWrite32((r22 + 24), r0);
    goto loc_80669704;
}

loc_806696A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_806696A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806696B4;
    }
}

loc_806696A8:
{
    r0 = -10359;
    MemoryInline::FlatWrite32((r22 + 24), r0);
    goto loc_80669704;
}

loc_806696B4:
{
    r0 = -10349;
    MemoryInline::FlatWrite32((r22 + 24), r0);
    goto loc_80669704;
}

loc_806696C0:
{
    r0 = MemoryInline::FlatRead32((r22 + 30072));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_806696C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806696DC;
    }
}

loc_806696CC:
{
    r4 = MemoryInline::FlatRead32((r22 + 16900));
    r3 = r22;
    ctx->lr = 0x806696D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80669734u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806696F0;
}

loc_806696DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_806696E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806696F0;
    }
}

loc_806696E4:
{
    r4 = MemoryInline::FlatRead32((r22 + 16908));
    r3 = r22;
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
    InvokeDirectCpu<0x8066B2D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
}

loc_806696F0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r22 + 20), r0);
    goto loc_80669704;
}

loc_806696FC:
{
    r3 = r22;
    ctx->lr = 0x80669704u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067552Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80669704:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8512));
    ctx->lr = 0x80669710u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067721Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r22 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r22 + 30072), r0);
    MemoryInline::FlatWrite32((r22 + 16), r0);
}

loc_80669720:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806693F4 func_806693F4 preserves=true fpr_mask=0x00000000
