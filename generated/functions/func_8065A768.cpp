#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065A768(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t xer = ctx->xer;

    goto loc_8065A768;

loc_8065A768:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8065A770:
{
    r3 = 0x808A0000u;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 88u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 48), r20);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 52), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 56), r22);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 60), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 64), r24);
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 68), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 72), r26);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 76), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 80), r28);
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r1 + 84), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 80u, (r1 + 88), r30);
        MemoryInline::WriteResolved32(guest_range_3, 84u, (r1 + 92), r31);
    }
    r30 = 0x808A0000u;
    r5 = (r1 + 8);
    r3 = (r3 + -24112);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 20u, true, false);
    r20 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
    r30 = (r30 + -24092);
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 20u, true, false);
    r31 = MemoryInline::ReadResolved16(guest_range_1, 0u, r30);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 2u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 2));
            r22 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 6u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 6));
            r24 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 10u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 10));
            r26 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 14u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 14));
            r28 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 16));
        }
    }
    r29 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r3 + 18));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 2u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r30 + 2));
            r11 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r30 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 6u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r30 + 6));
            r9 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r30 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 10u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r30 + 10));
            r7 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r30 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 14u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r30 + 14));
            r3 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r30 + 16));
        }
    }
    r0 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r30 + 18));
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r20)) << 16) | static_cast<uint16_t>(r21)))) {
        MemoryInline::WriteResolved16(guest_range_3, 20u, (r1 + 28), r20);
        MemoryInline::WriteResolved16(guest_range_3, 22u, (r1 + 30), r21);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r22)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 24u, (r1 + 32), r22);
        MemoryInline::WriteResolved16(guest_range_3, 26u, (r1 + 34), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r24)) << 16) | static_cast<uint16_t>(r25)))) {
        MemoryInline::WriteResolved16(guest_range_3, 28u, (r1 + 36), r24);
        MemoryInline::WriteResolved16(guest_range_3, 30u, (r1 + 38), r25);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r26)) << 16) | static_cast<uint16_t>(r27)))) {
        MemoryInline::WriteResolved16(guest_range_3, 32u, (r1 + 40), r26);
        MemoryInline::WriteResolved16(guest_range_3, 34u, (r1 + 42), r27);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_3, 36u, (r1 + 44), r28);
        MemoryInline::WriteResolved16(guest_range_3, 38u, (r1 + 46), r29);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r12)))) {
        MemoryInline::WriteResolved16(guest_range_3, 0u, (r1 + 8), r31);
        MemoryInline::WriteResolved16(guest_range_3, 2u, (r1 + 10), r12);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_3, 4u, (r1 + 12), r11);
        MemoryInline::WriteResolved16(guest_range_3, 6u, (r1 + 14), r10);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_3, 8u, (r1 + 16), r9);
        MemoryInline::WriteResolved16(guest_range_3, 10u, (r1 + 18), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_3, 12u, (r1 + 20), r7);
        MemoryInline::WriteResolved16(guest_range_3, 14u, (r1 + 22), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 16u, (r1 + 24), r3);
        MemoryInline::WriteResolved16(guest_range_3, 18u, (r1 + 26), r0);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065A828;
    }
}

loc_8065A824:
{
    r5 = (r1 + 28);
}

loc_8065A828:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, r5);
    r3 = 5;
}

loc_8065A834:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8065A84C;
    }
}

loc_8065A838:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r5 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8065A840:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8065A84C;
    }
}

loc_8065A844:
{
    r3 = 0;
    goto loc_8065A8C8;
}

loc_8065A84C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r5 + 4));
}

loc_8065A854:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8065A86C;
    }
}

loc_8065A858:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r5 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8065A860:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8065A86C;
    }
}

loc_8065A864:
{
    r3 = 1;
    goto loc_8065A8C8;
}

loc_8065A86C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r5 + 8));
}

loc_8065A874:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8065A88C;
    }
}

loc_8065A878:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r5 + 10));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8065A880:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8065A88C;
    }
}

loc_8065A884:
{
    r3 = 2;
    goto loc_8065A8C8;
}

loc_8065A88C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r5 + 12));
}

loc_8065A894:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8065A8AC;
    }
}

loc_8065A898:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r5 + 14));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8065A8A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8065A8AC;
    }
}

loc_8065A8A4:
{
    r3 = 3;
    goto loc_8065A8C8;
}

loc_8065A8AC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r5 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8065A8B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065A8C8;
    }
}

loc_8065A8B8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 18u, (r5 + 18));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8065A8C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8065A8C8;
    }
}

loc_8065A8C4:
{
    r3 = 4;
}

loc_8065A8C8:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r1 + 48));
            r21 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r1 + 56));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r1 + 64));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r1 + 72));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 80));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r1 + 88));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r1 + 92));
        }
    }
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF0003B gpr_write=0xFFF01FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065A768 func_8065A768 preserves=true fpr_mask=0x00000000
