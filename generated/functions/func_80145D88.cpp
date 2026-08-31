#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80145D88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_10 = 0;
    uint32_t r6_addr_11 = 0;
    uint32_t r6_addr_12 = 0;
    uint32_t r6_addr_13 = 0;
    uint32_t r6_addr_14 = 0;
    uint32_t r6_addr_15 = 0;
    uint32_t r6_addr_16 = 0;
    uint32_t r6_addr_17 = 0;
    uint32_t r6_addr_18 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r6_addr_9 = 0;
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

    goto loc_80145D88;

loc_80145D88:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r7 = (r4 * 22);
    r0 = 0;
    r9 = 17;
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r8 = 12;
    r10 = (r7 + 4);
    r7 = (r10 & 65535);
}

loc_80145DBC:
{
    r0 = (r7 + -3);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(11))) {
        goto loc_80145DD8;
    }
}

loc_80145DD4:
{
    r4 = 11;
}

loc_80145DD8:
{
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r4));
    r7 = (r3 + 12);
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80145DE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80145F2C;
    }
}

loc_80145DEC:
{
    r0 = MemoryInline::FlatRead8((r5 + 5));
    r22 = 0;
    r23 = (15 - r22);
    r24 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 22u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r7, static_cast<uint8_t>(r0));
    r25 = (15 - r24);
    r26 = 2;
    r28 = 3;
    r0 = MemoryInline::FlatRead8((r5 + 4));
    r27 = (15 - r26);
    r29 = (15 - r28);
    r30 = 4;
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r7 + 1), static_cast<uint8_t>(r0));
    r31 = (15 - r30);
    r12 = 5;
    r10 = 6;
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r11 = (15 - r12);
    r9 = (15 - r10);
    r8 = 7;
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r7 + 2), static_cast<uint8_t>(r0));
    r4 = (15 - r8);
    r22 = 8;
    r24 = 9;
    r0 = MemoryInline::FlatRead8((r5 + 2));
    r26 = 10;
    r28 = 11;
    r30 = 12;
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r7 + 3), static_cast<uint8_t>(r0));
    r12 = 13;
    r10 = 14;
    r8 = 15;
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r7 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 6);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r7 + 5), static_cast<uint8_t>(r0));
    r6_addr_2 = (r6 + r23);
    r0 = MemoryInline::FlatRead8(r6_addr_2);
    r23 = (15 - r22);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r7 + 6), static_cast<uint8_t>(r0));
    r6_addr_3 = (r6 + r25);
    r0 = MemoryInline::FlatRead8(r6_addr_3);
    r25 = (15 - r24);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r7 + 7), static_cast<uint8_t>(r0));
    r6_addr_4 = (r6 + r27);
    r0 = MemoryInline::FlatRead8(r6_addr_4);
    r27 = (15 - r26);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r7 + 8), static_cast<uint8_t>(r0));
    r6_addr_5 = (r6 + r29);
    r0 = MemoryInline::FlatRead8(r6_addr_5);
    r29 = (15 - r28);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r7 + 9), static_cast<uint8_t>(r0));
    r6_addr_6 = (r6 + r31);
    r0 = MemoryInline::FlatRead8(r6_addr_6);
    r31 = (15 - r30);
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r7 + 10), static_cast<uint8_t>(r0));
    r6_addr_7 = (r6 + r11);
    r0 = MemoryInline::FlatRead8(r6_addr_7);
    r11 = (15 - r12);
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r7 + 11), static_cast<uint8_t>(r0));
    r6_addr_8 = (r6 + r9);
    r0 = MemoryInline::FlatRead8(r6_addr_8);
    r9 = (15 - r10);
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r7 + 12), static_cast<uint8_t>(r0));
    r6_addr_9 = (r6 + r4);
    r0 = MemoryInline::FlatRead8(r6_addr_9);
    r4 = (15 - r8);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(15) >= static_cast<uint32_t>(r8) ? 1u : 0u) << 29);
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r7 + 13), static_cast<uint8_t>(r0));
    r6_addr_10 = (r6 + r23);
    r0 = MemoryInline::FlatRead8(r6_addr_10);
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r7 + 14), static_cast<uint8_t>(r0));
    r6_addr_11 = (r6 + r25);
    r0 = MemoryInline::FlatRead8(r6_addr_11);
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r7 + 15), static_cast<uint8_t>(r0));
    r6_addr_12 = (r6 + r27);
    r0 = MemoryInline::FlatRead8(r6_addr_12);
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r7 + 16), static_cast<uint8_t>(r0));
    r6_addr_13 = (r6 + r29);
    r0 = MemoryInline::FlatRead8(r6_addr_13);
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r7 + 17), static_cast<uint8_t>(r0));
    r6_addr_14 = (r6 + r31);
    r0 = MemoryInline::FlatRead8(r6_addr_14);
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r7 + 18), static_cast<uint8_t>(r0));
    r6_addr_15 = (r6 + r11);
    r0 = MemoryInline::FlatRead8(r6_addr_15);
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r7 + 19), static_cast<uint8_t>(r0));
    r6_addr_16 = (r6 + r9);
    r0 = MemoryInline::FlatRead8(r6_addr_16);
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r7 + 20), static_cast<uint8_t>(r0));
    r6_addr_17 = (r6 + r4);
    r0 = MemoryInline::FlatRead8(r6_addr_17);
    r6 = (r6 + 16);
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r7 + 21), static_cast<uint8_t>(r0));
    r7 = (r7 + 22);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80145DEC;
    }
}

loc_80145F2C:
{
    ctx->lr = 0x80145F30u;
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
    InvokeDirectCpu<0x80142664u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r11 = (r1 + 48);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 52));
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80145D88 func_80145D88 preserves=true fpr_mask=0x00000000
