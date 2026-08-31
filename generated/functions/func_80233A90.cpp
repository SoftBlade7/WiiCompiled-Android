#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80233A90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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

    goto loc_80233A90;

loc_80233A90:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 192u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r8 = 0x80250000u;
    r3 = 1374420992;
    r9 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r21);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r1 + 152), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r1 + 156), r23);
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r1 + 160), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r25);
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r1 + 168), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r1 + 172), r27);
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r1 + 176), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 180), r29);
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r1 + 184), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 188u, (r1 + 188), r31);
    r21 = 0;
    r8 = (r8 + 31048);
    r7 = (r3 + -31457);
    r0 = 16;
}

loc_80233AB4:
{
    r10 = (r1 + 8);
    r3 = r8;
    r10 = (r10 + r9);
    r11 = 0;
    ctr = r0;
}

loc_80233AC8:
{
    r6 = MemoryInline::FlatRead8(r3);
    r6 = (r5 * r6);
    r6 = (r6 + 50);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r6)) >> 32));
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r12 = (r12_rot_3 & 134217727);
}

loc_80233ADC:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_80233AE4;
    }
}

loc_80233AE0:
{
    r12 = 1;
}

loc_80233AE4:
{
}

loc_80233AE8:
{
    if ((static_cast<uint32_t>(r12) <= static_cast<uint32_t>(255))) {
        goto loc_80233AF0;
    }
}

loc_80233AEC:
{
    r12 = 255;
}

loc_80233AF0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r12));
    r6 = (r5 * r6);
    r6 = (r6 + 50);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r6)) >> 32));
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r12 = (r12_rot_4 & 134217727);
}

loc_80233B08:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_80233B10;
    }
}

loc_80233B0C:
{
    r12 = 1;
}

loc_80233B10:
{
}

loc_80233B14:
{
    if ((static_cast<uint32_t>(r12) <= static_cast<uint32_t>(255))) {
        goto loc_80233B1C;
    }
}

loc_80233B18:
{
    r12 = 255;
}

loc_80233B1C:
{
    r6 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r12));
    r6 = (r5 * r6);
    r6 = (r6 + 50);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r6)) >> 32));
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r12 = (r12_rot_5 & 134217727);
}

loc_80233B34:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_80233B3C;
    }
}

loc_80233B38:
{
    r12 = 1;
}

loc_80233B3C:
{
}

loc_80233B40:
{
    if ((static_cast<uint32_t>(r12) <= static_cast<uint32_t>(255))) {
        goto loc_80233B48;
    }
}

loc_80233B44:
{
    r12 = 255;
}

loc_80233B48:
{
    r6 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite8((r10 + 2), static_cast<uint8_t>(r12));
    r6 = (r5 * r6);
    r6 = (r6 + 50);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r6)) >> 32));
    r12_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r12 = (r12_rot_6 & 134217727);
}

loc_80233B60:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_80233B68;
    }
}

loc_80233B64:
{
    r12 = 1;
}

loc_80233B68:
{
}

loc_80233B6C:
{
    if ((static_cast<uint32_t>(r12) <= static_cast<uint32_t>(255))) {
        goto loc_80233B74;
    }
}

loc_80233B70:
{
    r12 = 255;
}

loc_80233B74:
{
    MemoryInline::FlatWrite8((r10 + 3), static_cast<uint8_t>(r12));
    r10 = (r10 + 4);
    r11 = (r11 + 4);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80233AC8;
    }
}

loc_80233B88:
{
    r21 = (r21 + 1);
    r9 = (r9 + 64);
}

loc_80233B94:
{
    r8 = (r8 + 64);
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(2))) {
        goto loc_80233AB4;
    }
}

loc_80233B9C:
{
    r29 = 0;
    r11 = 0;
    r9 = 67108864;
    r10 = 0x80250000u;
    r0 = 8;
}

loc_80233BB0:
{
    r31 = (r1 + 8);
    r30 = r4;
    r12 = (r10 + 31176);
    r31 = (r31 + r11);
    ctr = r0;
}

loc_80233BC4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r12, 0, 16u, true, false);
    r21 = MemoryInline::ReadResolved16(guest_range_1, 0u, r12);
    guest_range_2 = MemoryInline::ResolveRangeHost(r31, 0, 8u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_2, 0u, r31);
    r22 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r12 + 2));
    r21 = (r21 * r3);
    r5 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r31 + 1));
    r23 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r12 + 4));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r31 + 2));
    r24 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r12 + 6));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r31 + 3));
    r22 = (r22 * r5);
    r25 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r12 + 8));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r31 + 4));
    r26 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r12 + 10));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r31 + 5));
    r27 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r12 + 12));
    r23 = (r23 * r3);
    r5 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r31 + 6));
    r28 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r12 + 14));
    r12 = (r12 + 16);
    r3 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r31 + 7));
    r31 = (r31 + 8);
    r21 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r21));
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 564), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r30 + 564), r21);
    r24 = (r24 * r8);
    r8 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r22));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r30 + 568), r8);
    r25 = (r25 * r7);
    r7 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r23));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r30 + 572), r7);
    r26 = (r26 * r6);
    r6 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r24));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r30 + 576), r6);
    r27 = (r27 * r5);
    r5 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r25));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r30 + 580), r5);
    r28 = (r28 * r3);
    r3 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r26));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r30 + 584), r3);
    r3 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r27));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r30 + 588), r3);
    r3 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r28));
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r30 + 592), r3);
    r30 = (r30 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80233BC4;
    }
}

loc_80233C74:
{
    r29 = (r29 + 1);
    r4 = (r4 + 256);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
}

loc_80233C80:
{
    r11 = (r11 + 64);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80233BB0;
    }
}

loc_80233C88:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 148), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r1 + 148));
            r22 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r1 + 152));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r1 + 156));
            r24 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r1 + 160));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r1 + 164));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r1 + 168));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r1 + 172));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r1 + 176));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 180));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r1 + 184));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r1 + 188));
    r1 = (r1 + 192);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFE01FFB gpr_write=0xFFE01FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80233A90 func_80233A90 preserves=true fpr_mask=0x00000000
