#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806614B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_806614B0;

loc_806614B0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r23);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r23 = 0x809C0000u;
    r24 = r3;
    r3 = MemoryInline::FlatRead32((r23 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl0_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl0_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F34:
{
    r6 = 1;
}

loc_inl0_0x80656F38:
{
    r3 = r6;
}

loc_inl0_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
}

loc_806614D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806614E0;
    }
}

loc_806614D8:
{
    r0 = 1;
    goto loc_80661518;
}

loc_806614E0:
{
    r3 = MemoryInline::FlatRead32((r23 + 8408));
    r4 = 1;
    r5 = MemoryInline::FlatRead32((r24 + 992));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
    r3 = MemoryInline::FlatRead32((r3 + 72));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r5 = (r5 | r0);
    r0 = (r3 & r5);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_80661518:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066151C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80661920;
    }
}

loc_80661520:
{
    r28 = r24;
    r27 = (r24 + 64);
    r25 = 0;
    r29 = 0x809C0000u;
    r30 = 1;
    r31 = 2;
    r23 = 2;
}

loc_8066153C:
{
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r0 = (r25 & 255);
    r26 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r26 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066190C;
    }
}

loc_80661560:
{
    r4 = MemoryInline::FlatRead8((r3 + 89));
}

loc_80661568:
{
    if ((static_cast<uint32_t>(r25) == static_cast<uint32_t>(r4))) {
        goto loc_8066190C;
    }
}

loc_8066156C:
{
    r0 = MemoryInline::FlatRead8((r3 + 90));
}

loc_80661574:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_806617B0;
    }
}

loc_80661578:
{
    r0 = MemoryInline::FlatRead8((r24 + 61));
}

loc_80661580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661590;
    }
}

loc_80661584:
{
}

loc_80661588:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80661644;
    }
}

loc_8066158C:
{
    goto loc_80661890;
}

loc_80661590:
{
    r3 = MemoryInline::FlatRead32((r24 + 44));
}

loc_80661598:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806615D4;
    }
}

loc_8066159C:
{
    r0 = MemoryInline::FlatRead32((r28 + 100));
}

loc_806615A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806615D4;
    }
}

loc_806615A8:
{
    r3 = MemoryInline::FlatRead32((r24 + 40));
    r0 = MemoryInline::FlatRead32((r28 + 96));
}

loc_806615B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806615D4;
    }
}

loc_806615B8:
{
    r3 = MemoryInline::FlatRead8((r24 + 63));
    r0 = MemoryInline::FlatRead8((r28 + 119));
}

loc_806615C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806615D4;
    }
}

loc_806615C8:
{
    r0 = MemoryInline::FlatRead32((r24 + 1000));
    r0 = (r0 | r26);
    MemoryInline::FlatWrite32((r24 + 1000), r0);
}

loc_806615D4:
{
    r4 = MemoryInline::FlatRead32((r24 + 1000));
}

loc_806615DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_806615E8;
    }
}

loc_806615E0:
{
    r0 = 0;
    goto loc_80661634;
}

loc_806615E8:
{
    r0 = MemoryInline::FlatRead32((r24 + 44));
}

loc_806615F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661610;
    }
}

loc_806615F4:
{
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
    r4 = (r4 | r0);
}

loc_80661610:
{
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r3 & r4);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
}

loc_80661634:
{
}

loc_80661638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661890;
    }
}

loc_8066163C:
{
    MemoryInline::FlatWrite8((r24 + 61), static_cast<uint8_t>(r30));
    goto loc_80661890;
}

loc_80661644:
{
    r0 = MemoryInline::FlatRead8((r24 + 60));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80661650:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_8066173C;
    }
}

loc_80661654:
{
    r0 = MemoryInline::FlatRead8((r28 + 116));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80661660:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8066173C;
    }
}

loc_80661664:
{
    r3 = MemoryInline::FlatRead8((r24 + 62));
    r0 = MemoryInline::FlatRead8((r28 + 118));
}

loc_80661670:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8066173C;
    }
}

loc_80661674:
{
    r4 = (r24 + 48);
    r3 = (r27 + 40);
    r6 = 0;
    ctr = r23;
}

loc_80661684:
{
    r5 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80661690:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8066169C;
    }
}

loc_80661694:
{
    r0 = 0;
    goto loc_80661728;
}

loc_8066169C:
{
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_806616A8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_806616B4;
    }
}

loc_806616AC:
{
    r0 = 0;
    goto loc_80661728;
}

loc_806616B4:
{
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_806616C0:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_806616CC;
    }
}

loc_806616C4:
{
    r0 = 0;
    goto loc_80661728;
}

loc_806616CC:
{
    r5 = MemoryInline::FlatRead8((r4 + 3));
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_806616D8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_806616E4;
    }
}

loc_806616DC:
{
    r0 = 0;
    goto loc_80661728;
}

loc_806616E4:
{
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_806616F0:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_806616FC;
    }
}

loc_806616F4:
{
    r0 = 0;
    goto loc_80661728;
}

loc_806616FC:
{
    r5 = MemoryInline::FlatRead8((r4 + 5));
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_80661708:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_80661714;
    }
}

loc_8066170C:
{
    r0 = 0;
    goto loc_80661728;
}

loc_80661714:
{
    r6 = (r6 + 6);
    r3 = (r3 + 6);
    r4 = (r4 + 6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80661684;
    }
}

loc_80661724:
{
    r0 = 1;
}

loc_80661728:
{
}

loc_8066172C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066173C;
    }
}

loc_80661730:
{
    r0 = MemoryInline::FlatRead32((r24 + 1004));
    r0 = (r0 | r26);
    MemoryInline::FlatWrite32((r24 + 1004), r0);
}

loc_8066173C:
{
    r4 = MemoryInline::FlatRead32((r24 + 1004));
}

loc_80661744:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80661750;
    }
}

loc_80661748:
{
    r0 = 0;
    goto loc_806617A0;
}

loc_80661750:
{
    r0 = MemoryInline::FlatRead8((r24 + 60));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8066175C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8066177C;
    }
}

loc_80661760:
{
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
    r4 = (r4 | r0);
}

loc_8066177C:
{
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r3 & r4);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
}

loc_806617A0:
{
}

loc_806617A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661890;
    }
}

loc_806617A8:
{
    MemoryInline::FlatWrite8((r24 + 61), static_cast<uint8_t>(r31));
    goto loc_80661890;
}

loc_806617B0:
{
}

loc_806617B4:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(r0))) {
        goto loc_80661890;
    }
}

loc_806617B8:
{
    r0 = MemoryInline::FlatRead8((r24 + 61));
}

loc_806617C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806617D0;
    }
}

loc_806617C4:
{
}

loc_806617C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_806617FC;
    }
}

loc_806617CC:
{
    goto loc_80661890;
}

loc_806617D0:
{
    r0 = MemoryInline::FlatRead32((r28 + 100));
    MemoryInline::FlatWrite32((r24 + 44), r0);
    r0 = MemoryInline::FlatRead32((r28 + 96));
    MemoryInline::FlatWrite32((r24 + 40), r0);
    r0 = MemoryInline::FlatRead8((r28 + 119));
    MemoryInline::FlatWrite8((r24 + 63), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 117));
}

loc_806617F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661890;
    }
}

loc_806617F4:
{
    MemoryInline::FlatWrite8((r24 + 61), static_cast<uint8_t>(r30));
    goto loc_80661890;
}

loc_806617FC:
{
    r3 = MemoryInline::FlatRead32((r24 + 1008));
}

loc_80661804:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80661810;
    }
}

loc_80661808:
{
    r0 = 0;
    goto loc_80661834;
}

loc_80661810:
{
    r0 = MemoryInline::FlatRead8((r24 + 30));
}

loc_80661818:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(67))) {
        goto loc_80661824;
    }
}

loc_8066181C:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r3 = (r3 | r0);
}

loc_80661824:
{
    r0 = (r5 & r3);
    r0 = (r0 - r5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_8 & 134217727);
}

loc_80661834:
{
}

loc_80661838:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661880;
    }
}

loc_8066183C:
{
    r4 = MemoryInline::FlatRead8((r28 + 118));
    r6 = MemoryInline::FlatRead8((r28 + 116));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r0 & r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80661868;
    }
}

loc_80661854:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(-1));
}

loc_80661858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80661868;
    }
}

loc_8066185C:
{
    r0 = (r4 * 56);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 86), static_cast<uint8_t>(r6));
}

loc_80661868:
{
    MemoryInline::FlatWrite8((r24 + 62), static_cast<uint8_t>(r4));
    r3 = (r24 + 48);
    r4 = (r27 + 40);
    r5 = 12;
    MemoryInline::FlatWrite8((r24 + 60), static_cast<uint8_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80661880:
{
    r0 = MemoryInline::FlatRead8((r28 + 117));
}

loc_80661888:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80661890;
    }
}

loc_8066188C:
{
    MemoryInline::FlatWrite8((r24 + 61), static_cast<uint8_t>(r31));
}

loc_80661890:
{
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl1_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80656F38;
    }
}

loc_inl1_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl1_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl1_0x80656F38;
    }
}

loc_inl1_0x80656F34:
{
    r6 = 1;
}

loc_inl1_0x80656F38:
{
    r3 = r6;
}

loc_inl1_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
}

loc_8066189C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806618A8;
    }
}

loc_806618A0:
{
    r0 = 1;
    goto loc_806618DC;
}

loc_806618A8:
{
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r4 = MemoryInline::FlatRead32((r24 + 992));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
    r3 = MemoryInline::FlatRead32((r3 + 72));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
    r4 = (r4 | r0);
    r0 = (r3 & r4);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_11 & 134217727);
}

loc_806618DC:
{
}

loc_806618E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806618FC;
    }
}

loc_806618E4:
{
    r0 = MemoryInline::FlatRead8((r28 + 86));
}

loc_806618EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(67))) {
        goto loc_806618FC;
    }
}

loc_806618F0:
{
    r0 = MemoryInline::FlatRead32((r24 + 1008));
    r0 = (r0 | r26);
    MemoryInline::FlatWrite32((r24 + 1008), r0);
}

loc_806618FC:
{
    r0 = MemoryInline::FlatRead32((r24 + 996));
}

loc_80661904:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066190C;
    }
}

loc_80661908:
{
    MemoryInline::FlatWrite8((r24 + 61), static_cast<uint8_t>(r31));
}

loc_8066190C:
{
    r25 = (r25 + 1);
    r27 = (r27 + 56);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(12));
}

loc_80661918:
{
    r28 = (r28 + 56);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066153C;
    }
}

loc_80661920:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 12));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF80007B gpr_write=0xFF80007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806614B0 func_806614B0 preserves=true fpr_mask=0x00000000
