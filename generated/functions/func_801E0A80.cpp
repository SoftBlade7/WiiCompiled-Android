#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E0A80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_801E0A80;

loc_801E0A80:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = 8;
    r6 = 0;
    r4 = -1;
    ctr = r0;
}

loc_801E0AA4:
{
    r3_addr_2 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r4));
    r5 = (r3 + r6);
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r4));
    r5 = (r3 + r6);
    r3_addr_3 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r4));
    r5 = (r3 + r6);
    r3_addr_4 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r4));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r4));
    r5 = (r3 + r6);
    r3_addr_5 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r4));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E0AA4;
    }
}

loc_801E0B48:
{
    r12 = 0;
    r11 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 43), 0, 80u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 65), static_cast<uint8_t>(r12));
    r10 = 2;
    r9 = 3;
    r8 = 4;
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r3 + 66), static_cast<uint8_t>(r11));
    r7 = 5;
    r6 = 6;
    r5 = 7;
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 67), static_cast<uint8_t>(r10));
    r12 = 8;
    r11 = 9;
    r10 = 10;
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r3 + 68), static_cast<uint8_t>(r9));
    r9 = 11;
    r4 = 24;
    r0 = 25;
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r3 + 69), static_cast<uint8_t>(r8));
    r8 = 12;
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r3 + 70), static_cast<uint8_t>(r7));
    r7 = 13;
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 71), static_cast<uint8_t>(r6));
    r6 = 14;
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r3 + 72), static_cast<uint8_t>(r5));
    r5 = 15;
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r3 + 73), static_cast<uint8_t>(r12));
    r12 = 16;
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r3 + 74), static_cast<uint8_t>(r11));
    r11 = 17;
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 75), static_cast<uint8_t>(r10));
    r10 = 18;
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r3 + 76), static_cast<uint8_t>(r9));
    r9 = 19;
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r3 + 77), static_cast<uint8_t>(r8));
    r8 = 20;
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r3 + 78), static_cast<uint8_t>(r7));
    r7 = 21;
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r3 + 79), static_cast<uint8_t>(r6));
    r6 = 22;
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r3 + 80), static_cast<uint8_t>(r5));
    r5 = 23;
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r3 + 81), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r3 + 82), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 83), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r3 + 84), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r3 + 85), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r3 + 86), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r3 + 87), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r3 + 88), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r3 + 89), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 47u, (r3 + 90), static_cast<uint8_t>(r0));
    r25 = 26;
    r26 = 27;
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r3 + 97), static_cast<uint8_t>(r25));
    r27 = 28;
    r28 = 29;
    r29 = 30;
    MemoryInline::WriteResolved8(guest_range_0, 55u, (r3 + 98), static_cast<uint8_t>(r26));
    r30 = 31;
    r31 = 32;
    r12 = 33;
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r3 + 99), static_cast<uint8_t>(r27));
    r25 = 34;
    r26 = 35;
    r27 = 36;
    MemoryInline::WriteResolved8(guest_range_0, 57u, (r3 + 100), static_cast<uint8_t>(r28));
    r28 = 37;
    r11 = 50;
    r10 = 51;
    MemoryInline::WriteResolved8(guest_range_0, 58u, (r3 + 101), static_cast<uint8_t>(r29));
    r29 = 38;
    r9 = 52;
    r8 = 53;
    MemoryInline::WriteResolved8(guest_range_0, 59u, (r3 + 102), static_cast<uint8_t>(r30));
    r30 = 39;
    r7 = 54;
    r6 = 55;
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r3 + 103), static_cast<uint8_t>(r31));
    r31 = 40;
    r5 = 56;
    r4 = 62;
    MemoryInline::WriteResolved8(guest_range_0, 61u, (r3 + 104), static_cast<uint8_t>(r12));
    r12 = 41;
    r0 = 63;
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r3 + 105), static_cast<uint8_t>(r25));
    r25 = 42;
    MemoryInline::WriteResolved8(guest_range_0, 63u, (r3 + 106), static_cast<uint8_t>(r26));
    r26 = 43;
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r3 + 107), static_cast<uint8_t>(r27));
    r27 = 44;
    MemoryInline::WriteResolved8(guest_range_0, 65u, (r3 + 108), static_cast<uint8_t>(r28));
    r28 = 45;
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r3 + 109), static_cast<uint8_t>(r29));
    r29 = 46;
    MemoryInline::WriteResolved8(guest_range_0, 67u, (r3 + 110), static_cast<uint8_t>(r30));
    r30 = 47;
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r3 + 111), static_cast<uint8_t>(r31));
    r31 = 48;
    MemoryInline::WriteResolved8(guest_range_0, 69u, (r3 + 112), static_cast<uint8_t>(r12));
    r12 = 49;
    MemoryInline::WriteResolved8(guest_range_0, 70u, (r3 + 113), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_0, 71u, (r3 + 114), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_0, 72u, (r3 + 115), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 73u, (r3 + 116), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_0, 74u, (r3 + 117), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 75u, (r3 + 118), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 76u, (r3 + 119), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 77u, (r3 + 120), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 78u, (r3 + 121), static_cast<uint8_t>(r11));
    r11 = (r1 + 48);
    MemoryInline::WriteResolved8(guest_range_0, 79u, (r3 + 122), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 48), static_cast<uint8_t>(r9));
    r9 = 57;
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 49), static_cast<uint8_t>(r8));
    r8 = 58;
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 50), static_cast<uint8_t>(r7));
    r7 = 59;
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 51), static_cast<uint8_t>(r6));
    r6 = 60;
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 52), static_cast<uint8_t>(r5));
    r5 = 61;
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 53), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 54), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 55), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 56), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 57), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 43), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 47), static_cast<uint8_t>(r0));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFE00001A gpr_write=0xFE001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E0A80 func_801E0A80 preserves=true fpr_mask=0x00000000
