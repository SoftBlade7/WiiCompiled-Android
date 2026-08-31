#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_8060B308(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_8060B308;

loc_8060B308:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -1440), 0, 1448u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -1440), r1);
    r1 = (r1 + -1440);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 1444u, (r1 + 1444), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1400u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1400u, (r1 + 1400), r22);
        MemoryInline::WriteResolved32(guest_range_0, 1404u, (r1 + 1404), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1408u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1408u, (r1 + 1408), r24);
        MemoryInline::WriteResolved32(guest_range_0, 1412u, (r1 + 1412), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1416u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1416u, (r1 + 1416), r26);
        MemoryInline::WriteResolved32(guest_range_0, 1420u, (r1 + 1420), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1424u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1424u, (r1 + 1424), r28);
        MemoryInline::WriteResolved32(guest_range_0, 1428u, (r1 + 1428), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1432u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1432u, (r1 + 1432), r30);
        MemoryInline::WriteResolved32(guest_range_0, 1436u, (r1 + 1436), r31);
    }
    r23 = r3;
    r24 = r4;
    r3 = (r1 + 108);
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_F9C = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_F9C[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_F9C[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r0 = (r24 + 9360);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
    r3 = (r23 + 1268);
    r5 = (r1 + 108);
    r4 = 6005;
    ctx->lr = 0x8060B340u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r28 = 0;
    r4 = 0x80610000u;
    r5 = 0x80610000u;
    MemoryInline::FlatWrite32((r23 + 5812), r28);
    r3 = (r1 + 304);
    r4 = (r4 + -18964);
    r5 = (r5 + -18928);
    r26 = 0;
    r6 = 32;
    r7 = 34;
    ctx->lr = 0x8060B36Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r29 = 65536;
    r27 = (r1 + 304);
    r25 = 0;
    r22 = -1;
    r30 = (r29 + -29504);
    r31 = 0x809C0000u;
}

loc_8060B384:
{
    r4 = (r25 & 255);
    r5 = MemoryInline::FlatRead32((r31 + -10424));
    r0 = (r30 * r4);
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
}

loc_8060B3A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20548))) {
        goto loc_8060B43C;
    }
}

loc_8060B3A8:
{
    r0 = (r29 + -27664);
    r0 = (r0 * r4);
    r0 = (r5 + r0);
    r3 = (r0 + 56);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(56)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8060B3B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060B43C;
    }
}

loc_8060B3BC:
{
    r5 = r24;
    r4 = 0;
    ctx->lr = 0x8060B3C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80548E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8060B3CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8060B43C;
    }
}

loc_8060B3D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060B3D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060B43C;
    }
}

loc_8060B3DC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r27, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r27, r28);
    r4 = (r27 + 28);
    r5 = MemoryInline::FlatRead32((r31 + -10424));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r27 + 4), r25);
    r0 = MemoryInline::FlatRead16((r3 + 80));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r27 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 82));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r27 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 84));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r27 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 86));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r27 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r3 = r5;
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r27 + 20), r0);
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r25);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r27 + 24), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r27 + 28), r22);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054A9B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r27 = (r27 + 32);
    r26 = (r26 + 1);
}

loc_8060B43C:
{
    r25 = (r25 + 1);
}

loc_8060B444:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_8060B384;
    }
}

loc_8060B448:
{
    r30 = 0x808B0000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & -32);
    r28 = (r1 + 304);
    r25 = 0;
    r28 = (r28 + r0);
    r30 = (r30 + 11588);
    r29 = 0x809C0000u;
    r31 = 0;
    r27 = 1;
}

loc_8060B46C:
{
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r4 = r25;
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2900 (19 guest instruction(s))
}

loc_inl0_0x805D2900:
{
}

loc_inl0_0x805D2904:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl0_0x805D2944;
    }
}

loc_inl0_0x805D2908:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x805D2944;
    }
}

loc_inl0_0x805D2920:
{
    r4 = MemoryInline::FlatRead32((r4 + 464));
    r3 = 25;
    r4 = (r4 + -1);
    r0 = (25 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(25) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = (r3 | ~r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_6 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_inl0_cont_805D2900;
}

loc_inl0_0x805D2944:
{
    r3 = 0;
}

loc_inl0_cont_805D2900:
{
    // end of inlined leaf 0x805D2900
}

loc_8060B484:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8060B51C;
    }
}

loc_8060B488:
{
    MemoryInline::FlatWriteRam32((r1 + 84), r30);
    r4 = r25;
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    MemoryInline::FlatWriteRam16((r1 + 88), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 90), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam16((r1 + 92), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 94), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2890 (14 guest instruction(s))
}

loc_inl1_0x805D2890:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
}

loc_inl1_0x805D2894:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl1_0x805D28C0;
    }
}

loc_inl1_0x805D2898:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x805D28B8;
    }
}

loc_inl1_0x805D28B0:
{
    r3 = (r4 + 8);
    goto loc_inl1_cont_805D2890;
}

loc_inl1_0x805D28B8:
{
    r3 = 0;
    goto loc_inl1_cont_805D2890;
}

loc_inl1_0x805D28C0:
{
    r3 = 0;
}

loc_inl1_cont_805D2890:
{
    // end of inlined leaf 0x805D2890
    r5 = r24;
    r4 = (r1 + 8);
    ctx->lr = 0x8060B4BCu;
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
    InvokeDirectCpu<0x80519780u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead8((r1 + 94));
}

loc_8060B4C4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8060B51C;
    }
}

loc_8060B4C8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r28, 0, 25u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r28, r27);
    r4 = r25;
    r3 = MemoryInline::FlatRead16((r1 + 88));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r28 + 4), r25);
    r0 = MemoryInline::FlatRead8((r1 + 90));
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r28 + 12), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r1 + 92));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r28 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r28 + 16), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    MemoryInline::WriteResolved8(guest_range_2, 18u, (r28 + 18), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r28 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_2, 24u, (r28 + 24), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2890 (14 guest instruction(s))
}

loc_inl2_0x805D2890:
{
}

loc_inl2_0x805D2894:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl2_0x805D28C0;
    }
}

loc_inl2_0x805D2898:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_7);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x805D28B8;
    }
}

loc_inl2_0x805D28B0:
{
    r3 = (r4 + 8);
    goto loc_inl2_cont_805D2890;
}

loc_inl2_0x805D28B8:
{
    r3 = 0;
    goto loc_inl2_cont_805D2890;
}

loc_inl2_0x805D28C0:
{
    r3 = 0;
}

loc_inl2_cont_805D2890:
{
    // end of inlined leaf 0x805D2890
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r26 = (r26 + 1);
    MemoryInline::FlatWrite32((r28 + 28), r0);
    r28 = (r28 + 32);
}

loc_8060B51C:
{
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(30));
}

loc_8060B524:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8060B46C;
    }
}

loc_8060B528:
{
    r6 = 0x80610000u;
    r4 = r26;
    r3 = (r1 + 304);
    r5 = 32;
    r6 = (r6 + -17576);
    ctx->lr = 0x8060B540u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80011B00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r28 = r23;
    r22 = (r1 + 304);
    r27 = (r23 + 1640);
    r29 = 0;
    r25 = 0;
    r24 = 1;
}

loc_8060B558:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r26));
}

loc_8060B55C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060B584;
    }
}

loc_8060B560:
{
    r3 = r27;
    r4 = r22;
    ctx->lr = 0x8060B56Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x8060AAD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    MemoryInline::FlatWrite8((r28 + 1768), static_cast<uint8_t>(r25));
    r3 = r27;
    r4 = 55;
    r5 = 56;
    // inline leaf 0x8063D3A4 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 144), r4);
    MemoryInline::FlatWrite32((r3 + 148), r5);
    // end of inlined leaf 0x8063D3A4
    goto loc_8060B598;
}

loc_8060B584:
{
    MemoryInline::FlatWrite8((r28 + 1768), static_cast<uint8_t>(r24));
    r3 = r27;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x8063D3A4 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 144), r4);
    MemoryInline::FlatWrite32((r3 + 148), r5);
    // end of inlined leaf 0x8063D3A4
}

loc_8060B598:
{
    r29 = (r29 + 1);
    r27 = (r27 + 380);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(10));
}

loc_8060B5A4:
{
    r28 = (r28 + 380);
    r22 = (r22 + 32);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8060B558;
    }
}

loc_8060B5B0:
{
    r0 = (0 - r26);
    r4 = 0x80610000u;
    r0 = (r0 & ~r26);
    r3 = (r1 + 304);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    MemoryInline::FlatWrite8((r23 + 5568), static_cast<uint8_t>(r0));
    r4 = (r4 + -18928);
    r5 = 32;
    r6 = 34;
    ctx->lr = 0x8060B5D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 1400), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 1400));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 1404));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 1408));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 1412));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 1416));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 1420));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 1424));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 1428));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 1432));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r1 + 1436));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r1 + 1444));
    ctx->lr = r0;
    r1 = (r1 + 1440);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
// RECOMP_REGISTRATION base 0x8060B308 func_8060B308 preserves=true fpr_mask=0x00000000
