#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A5510(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A5510;

loc_800A5510:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A552C:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r6;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A5550;
    }
}

loc_800A5548:
{
    r3 = 0;
    goto loc_800A567C;
}

loc_800A5550:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r5 = (r5 + 8);
    r3 = MemoryInline::FlatRead8(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl0_0x800AD0B0:
{
}

loc_inl0_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x800AD0C0;
    }
}

loc_inl0_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800A5568:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A5678;
    }
}

loc_800A556C:
{
    r4 = MemoryInline::FlatRead32((r28 + 8));
    r3 = MemoryInline::FlatRead8((r4 + 24));
    r5 = (r4 + 8);
    r4 = MemoryInline::FlatRead32((r4 + 28));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl1_0x800AD0B0:
{
}

loc_inl1_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x800AD0C0;
    }
}

loc_inl1_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_return:
{
}

loc_inl1_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_800A5588:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800A5678;
    }
}

loc_800A558C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = MemoryInline::FlatRead32((r28 + 8));
    r6 = (r3 + r0);
    r5 = (r4 + 8);
    r3 = MemoryInline::FlatRead8((r6 + 4));
    r4 = MemoryInline::FlatRead32((r6 + 8));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl2_0x800AD0B0:
{
}

loc_inl2_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x800AD0C0;
    }
}

loc_inl2_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl2_cont_800AD0B0;
}

loc_inl2_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl2_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl2_cont_800AD0B0;
}

loc_inl2_return:
{
}

loc_inl2_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    r4 = r3;
    r5 = MemoryInline::FlatRead32((r28 + 8));
    r3 = MemoryInline::FlatRead8(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r5 = (r5 + 8);
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl3_0x800AD0B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl3_0x800AD0B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_0x800AD0C0;
    }
}

loc_inl3_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl3_cont_800AD0B0;
}

loc_inl3_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl3_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl3_cont_800AD0B0;
}

loc_inl3_return:
{
}

loc_inl3_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 46u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
            r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 2));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r30 + 2), r0);
        MemoryInline::WriteResolved16(guest_range_1, 0u, r30, r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 6));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r30 + 6), r0);
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r30 + 4), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 8));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 10));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r30 + 10), r0);
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r30 + 8), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 14));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r30 + 14), r0);
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r30 + 12), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 16));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r3 + 18));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r30 + 18), r0);
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r30 + 16), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 20));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r3 + 22));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r30 + 22), r0);
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r30 + 20), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 24));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r3 + 26));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r30 + 26), r0);
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r30 + 24), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r3 + 28));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r3 + 30));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r30 + 30), r0);
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r30 + 28), r4);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r30 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 34u, (r3 + 34));
    MemoryInline::WriteResolved16(guest_range_1, 34u, (r30 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 36u, (r3 + 36));
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r30 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 38u, (r3 + 38));
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r30 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r3 + 40));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 42u, (r3 + 42));
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 44u, (r3 + 44));
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
}

loc_800A5678:
{
    r3 = 1;
}

loc_800A567C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A5510 func_800A5510 preserves=true fpr_mask=0x00000000
