#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80037BF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80037BF0;

loc_80037BF0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1024));
}

loc_80037C0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80037D54;
    }
}

loc_80037C10:
{
    r0 = (r0 * 48);
    r25 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 10u, true, false);
    r27 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r27 = (r27 << 16);
    r27 = (static_cast<int32_t>(r27) >> 16);
}

loc_80037C20:
{
    r28 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r10 = (r3 + r0);
    MemoryInline::FlatWrite8((r10 + 4), static_cast<uint8_t>(r25));
    r29 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r0 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r0 = (r0 * 48);
    r31 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r26 = (r3 + r0);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r25));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 9));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = (r4 * 48);
    r4 = (r3 + r4);
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r7));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = (r4 * 48);
    r4 = (r3 + r4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 8), 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r4 + 8), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 10), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 11), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 12), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 13), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 14), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 15), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r4 + 16), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r4 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 20), r5);
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 24), r6);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80037D04;
    }
}

loc_80037CC8:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 5));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32(r8);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 36), f0.d);
}

loc_80037D04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_80037D08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80037D48;
    }
}

loc_80037D0C:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 5));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32(r9);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r9 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r9 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 48), f0.d);
}

loc_80037D48:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80037D54:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE001FFB gpr_write=0xFE001C13 gpr_return=0x00000010 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80037BF0 func_80037BF0 preserves=true fpr_mask=0x00000000
