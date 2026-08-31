#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80144A90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_11 = 0;
    uint32_t r31_addr_12 = 0;
    uint32_t r31_addr_13 = 0;
    uint32_t r31_addr_14 = 0;
    uint32_t r31_addr_15 = 0;
    uint32_t r31_addr_16 = 0;
    uint32_t r31_addr_17 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;
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

    goto loc_80144A90;

loc_80144A90:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
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
    r30 = r3;
    r31 = r4;
    r3 = 2;
    ctx->lr = 0x80144AB4u;
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
    InvokeDirectCpu<0x8012ED54u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80144AB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80144AC4;
    }
}

loc_80144ABC:
{
    r3 = 0;
    goto loc_80144C18;
}

loc_80144AC4:
{
    r0 = 25;
    r4 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 31u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = 11;
    r6 = 4;
    r5 = 22;
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 4), static_cast<uint16_t>(r4));
    r24 = (15 - r4);
    r25 = 1;
    r27 = 2;
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 8), static_cast<uint8_t>(r0));
    r26 = (15 - r25);
    r28 = (15 - r27);
    r4 = 3;
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 9), static_cast<uint8_t>(r6));
    r29 = (15 - r4);
    r9 = 5;
    r10 = (15 - r6);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 10), static_cast<uint8_t>(r5));
    r8 = (15 - r9);
    r7 = 6;
    r5 = 7;
    r4 = MemoryInline::FlatRead8((r30 + 5));
    r6 = (15 - r7);
    r23 = 8;
    r25 = 9;
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 11), static_cast<uint8_t>(r4));
    r4 = (15 - r5);
    r27 = 10;
    r11 = 12;
    r5 = MemoryInline::FlatRead8((r30 + 4));
    r9 = 13;
    r7 = 14;
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 12), static_cast<uint8_t>(r5));
    r5 = 15;
    r12 = MemoryInline::FlatRead8((r30 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r3 + 13), static_cast<uint8_t>(r12));
    r12 = MemoryInline::FlatRead8((r30 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r3 + 14), static_cast<uint8_t>(r12));
    r12 = MemoryInline::FlatRead8((r30 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r3 + 15), static_cast<uint8_t>(r12));
    r12 = MemoryInline::FlatRead8(r30);
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r3 + 16), static_cast<uint8_t>(r12));
    r31_addr_1 = (r31 + r24);
    r12 = MemoryInline::FlatRead8(r31_addr_1);
    r24 = (15 - r23);
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r3 + 17), static_cast<uint8_t>(r12));
    r31_addr_2 = (r31 + r26);
    r12 = MemoryInline::FlatRead8(r31_addr_2);
    r26 = (15 - r25);
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r3 + 18), static_cast<uint8_t>(r12));
    r31_addr_3 = (r31 + r28);
    r12 = MemoryInline::FlatRead8(r31_addr_3);
    r28 = (15 - r27);
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r3 + 19), static_cast<uint8_t>(r12));
    r31_addr_4 = (r31 + r29);
    r12 = MemoryInline::FlatRead8(r31_addr_4);
    r29 = (15 - r0);
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r3 + 20), static_cast<uint8_t>(r12));
    r31_addr_5 = (r31 + r10);
    r0 = MemoryInline::FlatRead8(r31_addr_5);
    r10 = (15 - r11);
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r3 + 21), static_cast<uint8_t>(r0));
    r31_addr_6 = (r31 + r8);
    r0 = MemoryInline::FlatRead8(r31_addr_6);
    r8 = (15 - r9);
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 22), static_cast<uint8_t>(r0));
    r31_addr_7 = (r31 + r6);
    r0 = MemoryInline::FlatRead8(r31_addr_7);
    r6 = (15 - r7);
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r3 + 23), static_cast<uint8_t>(r0));
    r31_addr_8 = (r31 + r4);
    r0 = MemoryInline::FlatRead8(r31_addr_8);
    r4 = (15 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(15) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r3 + 24), static_cast<uint8_t>(r0));
    r31_addr_9 = (r31 + r24);
    r12 = MemoryInline::FlatRead8(r31_addr_9);
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r3 + 25), static_cast<uint8_t>(r12));
    r31_addr_10 = (r31 + r26);
    r12 = MemoryInline::FlatRead8(r31_addr_10);
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r3 + 26), static_cast<uint8_t>(r12));
    r31_addr_11 = (r31 + r28);
    r12 = MemoryInline::FlatRead8(r31_addr_11);
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r3 + 27), static_cast<uint8_t>(r12));
    r31_addr_12 = (r31 + r29);
    r12 = MemoryInline::FlatRead8(r31_addr_12);
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r3 + 28), static_cast<uint8_t>(r12));
    r31_addr_13 = (r31 + r10);
    r0 = MemoryInline::FlatRead8(r31_addr_13);
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r3 + 29), static_cast<uint8_t>(r0));
    r31_addr_14 = (r31 + r8);
    r0 = MemoryInline::FlatRead8(r31_addr_14);
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r3 + 30), static_cast<uint8_t>(r0));
    r31_addr_15 = (r31 + r6);
    r0 = MemoryInline::FlatRead8(r31_addr_15);
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r3 + 31), static_cast<uint8_t>(r0));
    r31_addr_16 = (r31 + r4);
    r0 = MemoryInline::FlatRead8(r31_addr_16);
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r3 + 32), static_cast<uint8_t>(r0));
    ctx->lr = 0x80144C14u;
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
    ctx->cr = cr;
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
    r3 = 1;
}

loc_80144C18:
{
    r11 = (r1 + 48);
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
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80144A90 func_80144A90 preserves=true fpr_mask=0x00000000
