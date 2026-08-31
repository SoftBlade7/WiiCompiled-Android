#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CA520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_stbu_ea_0 = 0;
    uint32_t r8_stbu_ea_1 = 0;
    uint32_t r8_stbu_ea_2 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
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
    uint32_t ctr = ctx->ctr;

    goto loc_800CA520;

loc_800CA520:
{
    MemoryInline::FlatWriteRam32((r1 + -1376), r1);
    r1 = (r1 + -1376);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1380), r0);
    r11 = (r1 + 1376);
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
    r6 = 0x80250000u;
    r0 = 648;
    r6 = (r6 + -17536);
    r8 = (r1 + 31);
    r7 = (r6 + -1);
    ctr = r0;
    // nop
}

loc_800CA550:
{
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r7 = (r7 + 2);
    r0 = MemoryInline::FlatRead8(r7);
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r6));
    r8_stbu_ea_2 = (r8 + 2);
    MemoryInline::FlatWrite8(r8_stbu_ea_2, static_cast<uint8_t>(r0));
    r8 = r8_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800CA550;
    }
}

loc_800CA564:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r7 = (r7_rot_0 & -8);
    r6 = 0x80250000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = (r6 + -16240);
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 18u, true, false);
    r23 = MemoryInline::ReadResolved8(guest_range_1, 0u, r6);
    r7 = (r7 + r3);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 8), static_cast<uint8_t>(r23));
    r3 = (r0 - r4);
    r24 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r6 + 1));
    r0 = (r5 + r7);
    r25 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r6 + 2));
    r0 = (r3 + r0);
    r26 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r6 + 3));
    r27 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r6 + 4));
    r31 = (r0 & 255);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r6 + 5));
    r29 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r6 + 6));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r6 + 7));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r6 + 8));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r6 + 9));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r6 + 10));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r6 + 11));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r6 + 12));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r6 + 13));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r6 + 14));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r6 + 15));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r6 + 16));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r6 + 17));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 9), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r1 + 10), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r1 + 11), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r1 + 12), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r1 + 13), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r1 + 14), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r1 + 15), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r1 + 16), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r1 + 17), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_3, 10u, (r1 + 18), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_3, 11u, (r1 + 19), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r1 + 20), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r1 + 21), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 14u, (r1 + 22), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r1 + 23), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 16u, (r1 + 24), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 17u, (r1 + 25), static_cast<uint8_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r5 = (r1 + 8);
    r4 = (r1 + 32);
    r5_addr_0 = (r5 + r31);
    r6 = MemoryInline::FlatRead8(r5_addr_0);
    r0 = (r31 * 72);
    r11 = (r1 + 1376);
    r5 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r6));
    r5 = (r5 * r6);
    r3 = (r3 - r5);
    r0 = (r3 + r0);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead8(r4_addr_0);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 1380));
    ctx->lr = r0;
    r1 = (r1 + 1376);
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
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF80003A gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CA520 func_800CA520 preserves=true fpr_mask=0x00000000
