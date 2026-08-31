#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_8060B79C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
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
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8060B79C;

loc_8060B79C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -1392), 0, 1400u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -1392), r1);
    r1 = (r1 + -1392);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 1396u, (r1 + 1396), r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1348u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1348u, (r1 + 1348), r21);
        MemoryInline::WriteResolved32(guest_range_0, 1352u, (r1 + 1352), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1356u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1356u, (r1 + 1356), r23);
        MemoryInline::WriteResolved32(guest_range_0, 1360u, (r1 + 1360), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1364u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1364u, (r1 + 1364), r25);
        MemoryInline::WriteResolved32(guest_range_0, 1368u, (r1 + 1368), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1372u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1372u, (r1 + 1372), r27);
        MemoryInline::WriteResolved32(guest_range_0, 1376u, (r1 + 1376), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1380u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1380u, (r1 + 1380), r29);
        MemoryInline::WriteResolved32(guest_range_0, 1384u, (r1 + 1384), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1388u, (r1 + 1388), r31);
    r24 = r4;
    r21 = 0x809C0000u;
    r23 = r3;
    r4 = (r1 + 20);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r1 + 20), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r21 + 8516));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r0);
    ctx->lr = 0x8060B7D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_167C = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_167C[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_167C[1]);
    } else {
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
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r3 = 6602;
    MemoryInline::FlatWriteRam32((r1 + 84), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r0));
}

loc_8060B7E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060B7F8;
    }
}

loc_8060B7EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    goto loc_8060B808;
}

loc_8060B7F8:
{
    r3 = MemoryInline::FlatRead32((r21 + 8516));
    r4 = r24;
    ctx->lr = 0x8060B804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066C390u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam32((r1 + 204), r3);
}

loc_8060B808:
{
    r3 = (r23 + 1268);
    r5 = (r1 + 48);
    r4 = 6005;
    ctx->lr = 0x8060B818u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = 0;
    r4 = 0x80610000u;
    r5 = 0x80610000u;
    MemoryInline::FlatWrite32((r23 + 5812), r30);
    r3 = (r1 + 248);
    r4 = (r4 + -18964);
    r5 = (r5 + -18928);
    r26 = 0;
    r6 = 32;
    r7 = 34;
    ctx->lr = 0x8060B844u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80020FF4u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = 65536;
    r27 = (r1 + 248);
    r31 = 0;
    r21 = 0x809C0000u;
    r29 = (r28 + -29504);
    r25 = -1;
    r22 = 10;
}

loc_8060B860:
{
    r4 = (r31 & 255);
    r5 = MemoryInline::FlatRead32((r21 + -10424));
    r0 = (r29 * r4);
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
}

loc_8060B880:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20548))) {
        goto loc_8060B934;
    }
}

loc_8060B884:
{
    r0 = (r28 + -27664);
    r0 = (r0 * r4);
    r0 = (r5 + r0);
    r3 = (r0 + 56);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(56)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8060B894:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8060B934;
    }
}

loc_8060B898:
{
    r3 = (r3 + 65536);
    r4 = 0;
    ctr = r22;
}

loc_8060B8A4:
{
    r0 = (r4 & 255);
    r0 = (r0 * 20);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + -28270));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060B8B8:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8060B92C;
    }
}

loc_8060B8BC:
{
    r0 = MemoryInline::FlatRead32((r5 + -28268));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r24));
}

loc_8060B8C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060B92C;
    }
}

loc_8060B8C8:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8060B92C;
    }
}

loc_8060B8CC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r27, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r27, r30);
    r4 = (r27 + 28);
    r3 = MemoryInline::FlatRead32((r21 + -10424));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r27 + 4), r31);
    r0 = MemoryInline::FlatRead16((r5 + -28276));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r27 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + -28274));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r27 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + -28272));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r27 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + -28270));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r27 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + -28264));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r27 + 20), r0);
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r31);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r27 + 24), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r27 + 28), r25);
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
    goto loc_8060B934;
}

loc_8060B92C:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8060B8A4;
    }
}

loc_8060B934:
{
    r31 = (r31 + 1);
}

loc_8060B93C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_8060B860;
    }
}

loc_8060B940:
{
    r29 = 0x808B0000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & -32);
    r27 = (r1 + 248);
    r25 = 0;
    r27 = (r27 + r0);
    r29 = (r29 + 11588);
    r31 = 1;
    r30 = 0;
    r28 = 0x809C0000u;
    r22 = 10;
}

loc_8060B968:
{
    r3 = MemoryInline::FlatRead32((r28 + 7736));
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

loc_8060B980:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8060BA88;
    }
}

loc_8060B984:
{
    r3 = MemoryInline::FlatRead32((r28 + 7736));
    r4 = r25;
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2890 (14 guest instruction(s))
}

loc_inl1_0x805D2890:
{
}

loc_inl1_0x805D2894:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
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
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
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
    r9 = 0;
    ctr = r22;
}

loc_8060B9A0:
{
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r8 = (r8_rot_3 & 2040);
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r7 = (r3 + r8);
    r0 = MemoryInline::FlatRead32((r7 + 120));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r30));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060B9B8:
{
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r30));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r30));
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8060BA80;
    }
}

loc_8060B9C8:
{
}

loc_8060B9CC:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(r0))) {
        goto loc_8060BA80;
    }
}

loc_8060B9D0:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8060B9FC;
    }
}

loc_8060B9D4:
{
    r0 = MemoryInline::FlatRead32((r7 + 124));
    r4 = 1;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r31));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r5 = (r5_rot_3 & 1023);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r6 = (r6_rot_3 & 127);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_9 & 127);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r5));
    goto loc_8060BA00;
}

loc_8060B9FC:
{
    r4 = 0;
}

loc_8060BA00:
{
}

loc_8060BA04:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8060BA80;
    }
}

loc_8060BA08:
{
    MemoryInline::FlatWrite32(r27, r31);
    r4 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWrite32((r27 + 4), r25);
    r0 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite16((r27 + 12), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r1 + 16));
    MemoryInline::FlatWrite8((r27 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 18));
    MemoryInline::FlatWrite16((r27 + 16), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r27 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r7 + 120));
}

loc_8060BA38:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8060BA4C;
    }
}

loc_8060BA3C:
{
    r3 = (r3 + r8);
    r0 = MemoryInline::FlatRead32((r3 + 124));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_11 & 7);
    goto loc_8060BA50;
}

loc_8060BA4C:
{
    r0 = -1;
}

loc_8060BA50:
{
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r4 = r25;
    r3 = MemoryInline::FlatRead32((r28 + 7736));
    MemoryInline::FlatWrite8((r27 + 24), static_cast<uint8_t>(r30));
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
    MemoryInline::FlatWrite32((r27 + 28), r0);
    r27 = (r27 + 32);
    goto loc_8060BA88;
}

loc_8060BA80:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8060B9A0;
    }
}

loc_8060BA88:
{
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(30));
}

loc_8060BA90:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8060B968;
    }
}

loc_8060BA94:
{
    r6 = 0x80610000u;
    r4 = r26;
    r3 = (r1 + 248);
    r5 = 32;
    r6 = (r6 + -17576);
    ctx->lr = 0x8060BAACu;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011B00u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = r23;
    r21 = (r1 + 248);
    r25 = (r23 + 1640);
    r28 = 0;
    r24 = 0;
    r22 = 1;
}

loc_8060BAC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r26));
}

loc_8060BAC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060BAF0;
    }
}

loc_8060BACC:
{
    r3 = r25;
    r4 = r21;
    ctx->lr = 0x8060BAD8u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8060AAD4u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r27 + 1768), static_cast<uint8_t>(r24));
    r3 = r25;
    r4 = 55;
    r5 = 56;
    // inline leaf 0x8063D3A4 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 144), r4);
    MemoryInline::FlatWrite32((r3 + 148), r5);
    // end of inlined leaf 0x8063D3A4
    goto loc_8060BB04;
}

loc_8060BAF0:
{
    MemoryInline::FlatWrite8((r27 + 1768), static_cast<uint8_t>(r22));
    r3 = r25;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x8063D3A4 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 144), r4);
    MemoryInline::FlatWrite32((r3 + 148), r5);
    // end of inlined leaf 0x8063D3A4
}

loc_8060BB04:
{
    r28 = (r28 + 1);
    r25 = (r25 + 380);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(10));
}

loc_8060BB10:
{
    r27 = (r27 + 380);
    r21 = (r21 + 32);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8060BAC4;
    }
}

loc_8060BB1C:
{
    r0 = (0 - r26);
    r4 = 0x80610000u;
    r0 = (r0 & ~r26);
    r3 = (r1 + 248);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & 1);
    MemoryInline::FlatWrite8((r23 + 5568), static_cast<uint8_t>(r0));
    r4 = (r4 + -18928);
    r5 = 32;
    r6 = 34;
    ctx->lr = 0x8060BB44u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800210ECu>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 1348), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 1348));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 1352));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 1356));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 1360));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 1364));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 1368));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 1372));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 1376));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 1380));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 1384));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 1388));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r1 + 1396));
    ctx->lr = r0;
    r1 = (r1 + 1392);
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8060B79C func_8060B79C preserves=true fpr_mask=0x00000000
