#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800962E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mdest_4 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_mrot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mdest_3 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_mrot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800962E0;

loc_800962E0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r7 = MemoryInline::FlatRead32((r4 + 84));
    r25 = r3;
    r31 = MemoryInline::FlatRead32((r4 + 236));
    r26 = r4;
    r6 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r6);
    r27 = r5;
    r30 = 0;
    r28 = MemoryInline::FlatRead8(r7);
    r3 = 0;
    r29 = 1;
}

loc_80096324:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(162))) {
        goto loc_80096344;
    }
}

loc_80096328:
{
    r5 = MemoryInline::FlatRead8((r4 + 88));
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r0);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r28 = MemoryInline::FlatRead8(r6);
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r29 = (r29_rot_1 & 1);
}

loc_80096344:
{
}

loc_80096348:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(163))) {
        goto loc_80096364;
    }
}

loc_8009634C:
{
    r6 = MemoryInline::FlatRead32((r4 + 84));
    r30 = 2;
    r5 = (r6 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r5);
    r28 = MemoryInline::FlatRead8(r6);
    goto loc_800963A0;
}

loc_80096364:
{
}

loc_80096368:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(164))) {
        goto loc_80096384;
    }
}

loc_8009636C:
{
    r6 = MemoryInline::FlatRead32((r4 + 84));
    r30 = 4;
    r5 = (r6 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r5);
    r28 = MemoryInline::FlatRead8(r6);
    goto loc_800963A0;
}

loc_80096384:
{
}

loc_80096388:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(165))) {
        goto loc_800963A0;
    }
}

loc_8009638C:
{
    r6 = MemoryInline::FlatRead32((r4 + 84));
    r30 = 5;
    r5 = (r6 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r5);
    r28 = MemoryInline::FlatRead8(r6);
}

loc_800963A0:
{
}

loc_800963A4:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(160))) {
        goto loc_800963C4;
    }
}

loc_800963A8:
{
    r6 = MemoryInline::FlatRead32((r4 + 84));
    r0 = 4;
    r3 = 1;
    r5 = (r6 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r5);
    r28 = MemoryInline::FlatRead8(r6);
    goto loc_800963E4;
}

loc_800963C4:
{
}

loc_800963C8:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(161))) {
        goto loc_800963E4;
    }
}

loc_800963CC:
{
    r6 = MemoryInline::FlatRead32((r4 + 84));
    r0 = 5;
    r3 = 1;
    r5 = (r6 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r5);
    r28 = MemoryInline::FlatRead8(r6);
}

loc_800963E4:
{
    r5 = (r28 & 128);
}

loc_800963E8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800964BC;
    }
}

loc_800963EC:
{
    r7 = MemoryInline::FlatRead32((r4 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800963F4:
{
    r3 = r25;
    r5 = r31;
    r6 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r6);
    r4 = (r4 + 84);
    r6 = r26;
    r24 = MemoryInline::FlatRead8(r7);
    r7 = 3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096418;
    }
}

loc_80096414:
{
    r7 = r0;
}

loc_80096418:
{
    ctx->lr = 0x8009641Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800971B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r26 + 186));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80096424:
{
    r23 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r28 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009643C;
    }
}

loc_80096434:
{
    r3 = 0;
    goto loc_80096954;
}

loc_8009643C:
{
}

loc_80096440:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(127))) {
        goto loc_8009644C;
    }
}

loc_80096444:
{
    r5 = 127;
    goto loc_80096454;
}

loc_8009644C:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r3) >> 31);
    r5 = (r3 & ~r0);
}

loc_80096454:
{
    r0 = MemoryInline::FlatRead8((r26 + 124));
}

loc_8009645C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80096498;
    }
}

loc_80096460:
{
}

loc_80096464:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80096498;
    }
}

loc_80096468:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_8009646C:
{
    r3 = r25;
    r4 = r26;
    r6 = r24;
    r7 = -1;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80096484;
    }
}

loc_80096480:
{
    r7 = r23;
}

loc_80096484:
{
    r12 = MemoryInline::FlatRead32(r3);
    r8 = MemoryInline::FlatRead8((r26 + 90));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80096498u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80096498:
{
    r0 = MemoryInline::FlatRead8((r26 + 89));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800964A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096950;
    }
}

loc_800964A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_800964A8:
{
    MemoryInline::FlatWrite32((r26 + 120), r23);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80096950;
    }
}

loc_800964B0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 126), static_cast<uint8_t>(r0));
    goto loc_80096950;
}

loc_800964BC:
{
    r5 = (r28 & 240);
    r23 = 0;
}

loc_800964C8:
{
    r27 = 0;
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(128))) {
        goto loc_80096504;
    }
}

loc_800964D0:
{
}

loc_800964D4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(176))) {
        goto loc_800966E0;
    }
}

loc_800964D8:
{
}

loc_800964DC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(192))) {
        goto loc_800966E0;
    }
}

loc_800964E0:
{
}

loc_800964E4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(208))) {
        goto loc_800966E0;
    }
}

loc_800964E8:
{
}

loc_800964EC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(144))) {
        goto loc_80096774;
    }
}

loc_800964F0:
{
}

loc_800964F4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(224))) {
        goto loc_800967A4;
    }
}

loc_800964F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(240));
}

loc_800964FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800967F8;
    }
}

loc_80096500:
{
    goto loc_80096950;
}

loc_80096504:
{
}

loc_80096508:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(128))) {
        goto loc_80096530;
    }
}

loc_8009650C:
{
}

loc_80096510:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(129))) {
        goto loc_80096564;
    }
}

loc_80096514:
{
}

loc_80096518:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(136))) {
        goto loc_800965B8;
    }
}

loc_8009651C:
{
}

loc_80096520:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(137))) {
        goto loc_80096620;
    }
}

loc_80096524:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(138));
}

loc_80096528:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096680;
    }
}

loc_8009652C:
{
    goto loc_80096950;
}

loc_80096530:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80096534:
{
    r3 = r25;
    r5 = r31;
    r6 = r26;
    r7 = 3;
    r4 = (r4 + 84);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096550;
    }
}

loc_8009654C:
{
    r7 = r0;
}

loc_80096550:
{
    ctx->lr = 0x80096554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800971B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80096558:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096950;
    }
}

loc_8009655C:
{
    MemoryInline::FlatWrite32((r26 + 120), r3);
    goto loc_80096950;
}

loc_80096564:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80096568:
{
    r3 = r25;
    r5 = r31;
    r6 = r26;
    r7 = 3;
    r4 = (r4 + 84);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096584;
    }
}

loc_80096580:
{
    r7 = r0;
}

loc_80096584:
{
    ctx->lr = 0x80096588u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800971B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8009658C:
{
    r6 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096950;
    }
}

loc_80096594:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r4 = r26;
    r5 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    r7 = 0;
    ctr = r12;
    ctx->lr = 0x800965B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80096950;
}

loc_800965B8:
{
    r3 = MemoryInline::FlatRead32((r4 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800965C0:
{
    r5 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r5);
    r7 = (r5 + 1);
    r6 = MemoryInline::FlatRead8(r3);
    r3 = (r7 + 1);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r7);
    r5 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite32((r4 + 84), r3);
    r7 = MemoryInline::FlatRead8(r7);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r7_mrot_1 = (r7_rot_1 & 65280);
    r7_mdest_1 = (r7 & -65281);
    r7 = (r7_mdest_1 | r7_mrot_1);
    MemoryInline::FlatWrite32((r4 + 84), r0);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_2 & -256);
    r0 = MemoryInline::FlatRead8(r3);
    r7 = (r7 | r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096950;
    }
}

loc_80096600:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r4 = r26;
    r5 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x8009661Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80096950;
}

loc_80096620:
{
    r5 = MemoryInline::FlatRead32((r4 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80096628:
{
    r6 = (r5 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r6);
    r3 = (r6 + 1);
    r5 = MemoryInline::FlatRead8(r5);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r3);
    r6 = MemoryInline::FlatRead8(r6);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r6_mrot_2 = (r6_rot_3 & 65280);
    r6_mdest_2 = (r6 & -65281);
    r6 = (r6_mdest_2 | r6_mrot_2);
    MemoryInline::FlatWrite32((r4 + 84), r0);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r6 = (r6_rot_4 & -256);
    r0 = MemoryInline::FlatRead8(r3);
    r6 = (r6 | r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096950;
    }
}

loc_8009665C:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r4 = r26;
    r5 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    r7 = 0;
    ctr = r12;
    ctx->lr = 0x8009667Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80096950;
}

loc_80096680:
{
    r5 = MemoryInline::FlatRead32((r4 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80096688:
{
    r6 = (r5 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r6);
    r3 = (r6 + 1);
    r5 = MemoryInline::FlatRead8(r5);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r3);
    r6 = MemoryInline::FlatRead8(r6);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r6_mrot_1 = (r6_rot_1 & 65280);
    r6_mdest_1 = (r6 & -65281);
    r6 = (r6_mdest_1 | r6_mrot_1);
    MemoryInline::FlatWrite32((r4 + 84), r0);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r6 = (r6_rot_2 & -256);
    r0 = MemoryInline::FlatRead8(r3);
    r6 = (r6 | r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096950;
    }
}

loc_800966BC:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r4 = r26;
    r5 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    r7 = 0;
    ctr = r12;
    ctx->lr = 0x800966DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80096950;
}

loc_800966E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800966E4:
{
    r3 = r25;
    r5 = r31;
    r6 = r26;
    r7 = 1;
    r4 = (r4 + 84);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096700;
    }
}

loc_800966FC:
{
    r7 = r0;
}

loc_80096700:
{
    ctx->lr = 0x80096704u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800971B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80096708:
{
    r24 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009672C;
    }
}

loc_80096710:
{
    r3 = r25;
    r5 = r31;
    r6 = r26;
    r7 = r30;
    r4 = (r26 + 84);
    ctx->lr = 0x80096728u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800971B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = r3;
}

loc_8009672C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80096730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096950;
    }
}

loc_80096734:
{
    r0 = (r28 + -195);
    r3 = r25;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80096740:
{
    r4 = r26;
    r5 = r28;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80096758;
    }
}

loc_8009674C:
{
    r6 = (r24 & 255);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    goto loc_8009675C;
}

loc_80096758:
{
    r6 = (r24 & 255);
}

loc_8009675C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r7 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x80096770u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80096950;
}

loc_80096774:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80096778:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096950;
    }
}

loc_8009677C:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r4 = r26;
    r5 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    r6 = 0;
    r7 = 0;
    ctr = r12;
    ctx->lr = 0x800967A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80096950;
}

loc_800967A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800967A8:
{
    r3 = r25;
    r5 = r31;
    r6 = r26;
    r7 = 2;
    r4 = (r4 + 84);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800967C4;
    }
}

loc_800967C0:
{
    r7 = r0;
}

loc_800967C4:
{
    ctx->lr = 0x800967C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800971B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800967CC:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096950;
    }
}

loc_800967D4:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r4 = r26;
    r5 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    r7 = 0;
    ctr = r12;
    ctx->lr = 0x800967F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80096950;
}

loc_800967F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(254));
}

loc_800967FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096814;
    }
}

loc_80096800:
{
}

loc_80096804:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(255))) {
        goto loc_80096824;
    }
}

loc_80096808:
{
}

loc_8009680C:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(240))) {
        goto loc_80096834;
    }
}

loc_80096810:
{
    goto loc_80096924;
}

loc_80096814:
{
    r3 = MemoryInline::FlatRead32((r4 + 84));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r4 + 84), r0);
    goto loc_80096950;
}

loc_80096824:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80096828:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096950;
    }
}

loc_8009682C:
{
    r3 = 1;
    goto loc_80096954;
}

loc_80096834:
{
    r6 = MemoryInline::FlatRead32((r4 + 84));
    r5 = (r6 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r5);
    r24 = MemoryInline::FlatRead8(r6);
    r5 = (r24 & 240);
}

loc_8009684C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(224))) {
        goto loc_80096864;
    }
}

loc_80096850:
{
}

loc_80096854:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(128))) {
        goto loc_800968C0;
    }
}

loc_80096858:
{
}

loc_8009685C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(144))) {
        goto loc_800968C0;
    }
}

loc_80096860:
{
    goto loc_80096924;
}

loc_80096864:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80096868:
{
    r3 = r25;
    r5 = r31;
    r6 = r26;
    r7 = 2;
    r4 = (r4 + 84);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096884;
    }
}

loc_80096880:
{
    r7 = r0;
}

loc_80096884:
{
    ctx->lr = 0x80096888u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800971B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8009688C:
{
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096924;
    }
}

loc_80096894:
{
    r12 = MemoryInline::FlatRead32(r25);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r3 = r25;
    r4 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    r6 = r23;
    r5 = (r0 + r24);
    r7 = 0;
    ctr = r12;
    ctx->lr = 0x800968BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80096924;
}

loc_800968C0:
{
    r7 = MemoryInline::FlatRead32((r4 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800968C8:
{
    r3 = r25;
    r5 = r31;
    r6 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 84), r6);
    r4 = (r4 + 84);
    r6 = r26;
    r23 = MemoryInline::FlatRead8(r7);
    r7 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800968EC;
    }
}

loc_800968E8:
{
    r7 = r0;
}

loc_800968EC:
{
    ctx->lr = 0x800968F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800971B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800968F4:
{
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096924;
    }
}

loc_800968FC:
{
    r12 = MemoryInline::FlatRead32(r25);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r3 = r25;
    r4 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    r6 = r23;
    r7 = r27;
    r5 = (r0 + r24);
    ctr = r12;
    ctx->lr = 0x80096924u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80096924:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80096928:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096950;
    }
}

loc_8009692C:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r4 = r26;
    r5 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    r6 = r23;
    r7 = r27;
    ctr = r12;
    ctx->lr = 0x80096950u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80096950:
{
    r3 = 0;
}

loc_80096954:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800962E0 func_800962E0 preserves=true fpr_mask=0x00000000
