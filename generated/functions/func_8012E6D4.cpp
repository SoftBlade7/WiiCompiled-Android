#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012E6D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r18_addr_0 = 0;
    uint32_t r18_addr_1 = 0;
    uint32_t r18_addr_2 = 0;
    uint32_t r18_addr_3 = 0;
    uint32_t r18_addr_4 = 0;
    uint32_t r19_addr_0 = 0;
    uint32_t r19_addr_1 = 0;
    uint32_t r19_addr_2 = 0;
    uint32_t r19_addr_3 = 0;
    uint32_t r19_addr_4 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r20_addr_4 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r21_addr_4 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_addr_4 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
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

    goto loc_8012E6D4;

loc_8012E6D4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
    r12 = (r4 + 3);
    r4 = 0x80310000u;
    r9 = (r12 & -4);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r11 = (r11_rot_0 & 1020);
    r26 = (r9 + 12);
    r4 = (r4 + -26176);
    r8 = (r26 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    r7 = (r8 * r5);
    r10 = (r4 + 84);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 510);
    r25 = (r10 + 196608);
    r12 = (r12 & 65532);
    r24 = (r25 + r11);
    r11 = (r6 + r7);
    MemoryInline::FlatWrite32((r24 + -30180), r6);
    r7 = (r25 + r4);
    r4 = 0;
    MemoryInline::FlatWrite32((r24 + -30144), r11);
    r11 = (r25 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8012E73C:
{
    MemoryInline::FlatWrite16((r7 + -30108), static_cast<uint16_t>(r26));
    r7 = 0;
    MemoryInline::FlatWrite16((r11 + -30316), static_cast<uint16_t>(r12));
    MemoryInline::FlatWrite16((r11 + -30314), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r11 + -30312), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r11 + -30310), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r11 + -30324), r6);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E8C8;
    }
}

loc_8012E75C:
{
}

loc_8012E760:
{
    r11 = (r5 + 65536);
    r11 = (r11 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_8012E87C;
    }
}

loc_8012E76C:
{
    r12 = (r11 & 65535);
    r27 = -574947328;
    r11 = (r12 + 7);
    r24 = 240;
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r11 = (r11_rot_1 & 536870911);
    r26 = (r27 + -8774);
    r25 = 0;
    ctr = r11;
}

loc_8012E790:
{
    if ((static_cast<uint32_t>(r12) <= static_cast<uint32_t>(0))) {
        goto loc_8012E87C;
    }
}

loc_8012E794:
{
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r24));
    r18 = (r6 + r8);
    r19 = (r18 + r8);
    r4 = (r6 + r9);
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r3));
    r20 = (r19 + r8);
    r21 = (r20 + r8);
    r27 = (r18 + r9);
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r25));
    r22 = (r21 + r8);
    r23 = (r22 + r8);
    r28 = (r19 + r9);
    MemoryInline::FlatWrite32((r4 + 8), r26);
    r4 = (r23 + r8);
    r31 = (r20 + r9);
    r30 = (r21 + r9);
    MemoryInline::FlatWrite32(r6, r18);
    r29 = (r22 + r9);
    r12 = (r23 + r9);
    r11 = (r4 + r9);
    MemoryInline::FlatWrite8((r18 + 5), static_cast<uint8_t>(r24));
    r6 = (r4 + r8);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r18 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r18 + 6), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite32((r27 + 8), r26);
    MemoryInline::FlatWrite32(r18, r19);
    MemoryInline::FlatWrite8((r19 + 5), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite8((r19 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r19 + 6), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r18_addr_2 = (r18 + r8);
    MemoryInline::FlatWrite32(r18_addr_2, r20);
    MemoryInline::FlatWrite8((r20 + 5), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite8((r20 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r20 + 6), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite32((r31 + 8), r26);
    r19_addr_2 = (r19 + r8);
    MemoryInline::FlatWrite32(r19_addr_2, r21);
    MemoryInline::FlatWrite8((r21 + 5), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite8((r21 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r21 + 6), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite32((r30 + 8), r26);
    r20_addr_2 = (r20 + r8);
    MemoryInline::FlatWrite32(r20_addr_2, r22);
    MemoryInline::FlatWrite8((r22 + 5), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite8((r22 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r22 + 6), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite32((r29 + 8), r26);
    r21_addr_2 = (r21 + r8);
    MemoryInline::FlatWrite32(r21_addr_2, r23);
    MemoryInline::FlatWrite8((r23 + 5), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite8((r23 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r23 + 6), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite32((r12 + 8), r26);
    r22_addr_2 = (r22 + r8);
    MemoryInline::FlatWrite32(r22_addr_2, r4);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite32((r11 + 8), r26);
    r23_addr_2 = (r23 + r8);
    MemoryInline::FlatWrite32(r23_addr_2, r6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012E794;
    }
}

loc_8012E87C:
{
    r12 = (r7 & 65535);
    r31 = -574947328;
    r11 = (r5 - r12);
    r29 = 240;
    r31 = (r31 + -8774);
    r30 = 0;
    ctr = r11;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r12), static_cast<uint32_t>(r5));
}

loc_8012E89C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E8C8;
    }
}

loc_8012E8A0:
{
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r29));
    r5 = (r6 + r9);
    r4 = r6;
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r30));
    r6 = (r6 + r8);
    MemoryInline::FlatWrite32((r5 + 8), r31);
    MemoryInline::FlatWrite32(r4, r6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012E8A0;
    }
}

loc_8012E8C8:
{
    r5 = 0;
    r3 = (r10 + 196608);
    MemoryInline::FlatWrite32(r4, r5);
    r3 = (r3 + r0);
    r11 = (r1 + 64);
    MemoryInline::FlatWrite32((r3 + -30320), r4);
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 68));
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC1FFB gpr_write=0xFFFC1FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012E6D4 func_8012E6D4 preserves=true fpr_mask=0x00000000
