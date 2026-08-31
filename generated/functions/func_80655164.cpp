#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80655164(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r6_addic_src_0 = 0;
    uint32_t r6_addic_src_1 = 0;
    uint32_t r6_addic_src_2 = 0;
    uint32_t r6_addic_src_3 = 0;
    uint32_t r6_addic_src_4 = 0;
    uint32_t r6_addic_src_5 = 0;
    uint32_t r6_addic_src_6 = 0;
    uint32_t r6_addic_src_7 = 0;
    uint32_t r6_addic_src_8 = 0;
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
    uint32_t r20 = ctx->gpr[20];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80655164;

loc_80655164:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r22);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r24);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r26);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r28);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r30);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r31);
    }
    r22 = r3;
    r23 = 0;
    r28 = 1;
    r25 = 0x809C0000u;
    r26 = 0x809C0000u;
    r27 = 0;
    r29 = 2;
    r30 = 65536;
    r31 = 0x809C0000u;
    r20 = 0x809C0000u;
    r21 = 2;
}

loc_806551A0:
{
    r4 = MemoryInline::FlatRead32((r31 + 8408));
    r0 = (r23 & 255);
    r24 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r24 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80655480;
    }
}

loc_806551C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_806551CC:
{
    if ((static_cast<uint32_t>(r23) == static_cast<uint32_t>(r0))) {
        goto loc_80655480;
    }
}

loc_806551D0:
{
    r5 = MemoryInline::FlatRead32((r25 + -10448));
    r7 = 0;
    r3 = MemoryInline::FlatRead32((r26 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 2964));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r27));
    r0 = MemoryInline::FlatRead32((r3 + 2936));
}

loc_806551F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80655200;
    }
}

loc_806551FC:
{
    r7 = (r7 | -2147483648);
}

loc_80655200:
{
    r8 = (r3 + 40);
    r6 = 0;
    ctr = r29;
}

loc_8065520C:
{
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 204));
}

loc_80655220:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8065522C;
    }
}

loc_80655224:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r6));
    r7 = (r7 | r0);
}

loc_8065522C:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 204));
}

loc_80655244:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80655250;
    }
}

loc_80655248:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r6));
    r7 = (r7 | r0);
}

loc_80655250:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 204));
}

loc_80655268:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80655274;
    }
}

loc_8065526C:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r6));
    r7 = (r7 | r0);
}

loc_80655274:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 204));
}

loc_8065528C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80655298;
    }
}

loc_80655290:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r6));
    r7 = (r7 | r0);
}

loc_80655298:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 204));
}

loc_806552B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806552BC;
    }
}

loc_806552B4:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r6));
    r7 = (r7 | r0);
}

loc_806552BC:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 204));
}

loc_806552D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806552E0;
    }
}

loc_806552D8:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r6));
    r7 = (r7 | r0);
}

loc_806552E0:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8065520C;
    }
}

loc_806552E8:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    r5 = MemoryInline::FlatRead32((r26 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2920));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead32((r5 + 2960));
    r0 = (r0 & 1);
}

loc_80655304:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80655310;
    }
}

loc_80655308:
{
    r0 = 3;
    goto loc_80655324;
}

loc_80655310:
{
    r3 = MemoryInline::FlatRead32((r3 + 2924));
    r0 = 1;
}

loc_8065531C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80655324;
    }
}

loc_80655320:
{
    r0 = 2;
}

loc_80655324:
{
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r5 = (r1 + 8);
    r6 = 0;
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r27));
    ctr = r21;
}

loc_80655338:
{
}

loc_8065533C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_80655354;
    }
}

loc_80655340:
{
}

loc_80655344:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_80655354;
    }
}

loc_80655348:
{
    r3 = (r4 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80655358;
}

loc_80655354:
{
    r0 = 255;
}

loc_80655358:
{
    r6_addic_src_3 = r6;
    r6 = (r6_addic_src_3 + 1);
}

loc_8065535C:
{
    MemoryInline::FlatWrite8((r5 + 24), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_80655378;
    }
}

loc_80655364:
{
}

loc_80655368:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_80655378;
    }
}

loc_8065536C:
{
    r3 = (r4 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_8065537C;
}

loc_80655378:
{
    r0 = 255;
}

loc_8065537C:
{
    r6_addic_src_4 = r6;
    r6 = (r6_addic_src_4 + 1);
}

loc_80655380:
{
    MemoryInline::FlatWrite8((r5 + 25), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_8065539C;
    }
}

loc_80655388:
{
}

loc_8065538C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_8065539C;
    }
}

loc_80655390:
{
    r3 = (r4 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_806553A0;
}

loc_8065539C:
{
    r0 = 255;
}

loc_806553A0:
{
    r6_addic_src_5 = r6;
    r6 = (r6_addic_src_5 + 1);
}

loc_806553A4:
{
    MemoryInline::FlatWrite8((r5 + 26), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_806553C0;
    }
}

loc_806553AC:
{
}

loc_806553B0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_806553C0;
    }
}

loc_806553B4:
{
    r3 = (r4 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_806553C4;
}

loc_806553C0:
{
    r0 = 255;
}

loc_806553C4:
{
    r6_addic_src_6 = r6;
    r6 = (r6_addic_src_6 + 1);
}

loc_806553C8:
{
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_806553E4;
    }
}

loc_806553D0:
{
}

loc_806553D4:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_806553E4;
    }
}

loc_806553D8:
{
    r3 = (r4 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_806553E8;
}

loc_806553E4:
{
    r0 = 255;
}

loc_806553E8:
{
    r6_addic_src_7 = r6;
    r6 = (r6_addic_src_7 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_addic_src_7)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_806553EC:
{
    MemoryInline::FlatWrite8((r5 + 28), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80655408;
    }
}

loc_806553F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(12));
}

loc_806553F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80655408;
    }
}

loc_806553FC:
{
    r3 = (r4 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_8065540C;
}

loc_80655408:
{
    r0 = 255;
}

loc_8065540C:
{
    MemoryInline::FlatWrite8((r5 + 29), static_cast<uint8_t>(r0));
    r5 = (r5 + 6);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80655338;
    }
}

loc_8065541C:
{
    r4 = MemoryInline::FlatRead32((r31 + 8408));
    r0 = (r30 + -1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
    r3 = (r4 + r3);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r27));
    r5 = 40;
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r27));
    r0 = MemoryInline::FlatRead32((r3 + 10092));
    r0 = (r0 * 48);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x8065545Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8065A34Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r20 + 8456));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80655468:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80655480;
    }
}

loc_8065546C:
{
    r0 = MemoryInline::FlatRead32((r22 + 4));
    r0 = (r0 & r24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80655480;
    }
}

loc_80655478:
{
    r4 = (r23 & 255);
    ctx->lr = 0x80655480u;
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
    InvokeDirectCpu<0x80662ABCu>(ctx);
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
}

loc_80655480:
{
    r23 = (r23 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(12));
}

loc_80655488:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806551A0;
    }
}

loc_8065548C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 48), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 56));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 64));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 72));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 80));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 88));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 92));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[20] = r20;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF001FB gpr_write=0xFFF001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80655164 func_80655164 preserves=true fpr_mask=0x00000000
