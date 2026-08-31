#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065A4F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065A4F8;

loc_8065A4F8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 8516));
    r4 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067686Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065A520:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065A5CC;
    }
}

loc_8065A524:
{
    r11 = 0x808C0000u;
    r11 = (r11 + 2408);
    guest_range_0 = MemoryInline::ResolveRangeHost(r11, 0, 20u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 2u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r11 + 2));
            r9 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r11 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 6u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r11 + 6));
            r7 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r11 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 10u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r11 + 10));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r11 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 14u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r11 + 14));
            r3 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r11 + 16));
        }
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r11 + 18));
    r11 = MemoryInline::ReadResolved16(guest_range_0, 0u, r11);
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, r31, r11);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r31 + 2), r10);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r31 + 4), r9);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r31 + 6), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r31 + 8), r7);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r31 + 10), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r31 + 12), r5);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r31 + 14), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r31 + 16), r3);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r31 + 18), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r31 + 20), r11);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r31 + 22), r10);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r31 + 24), r9);
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r31 + 26), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r31 + 28), r7);
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r31 + 30), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 32u, (r31 + 32), r5);
        MemoryInline::WriteResolved16(guest_range_1, 34u, (r31 + 34), r4);
    }
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r31 + 36), static_cast<uint16_t>(r3));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 20u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, (r1 + 8), r11);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r1 + 10), r10);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r1 + 12), r9);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r1 + 14), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r1 + 16), r7);
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r1 + 18), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r1 + 20), r5);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r1 + 22), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 16u, (r1 + 24), r3);
        MemoryInline::WriteResolved16(guest_range_2, 18u, (r1 + 26), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r31 + 38), static_cast<uint16_t>(r0));
}

loc_8065A5CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80000FFB gpr_write=0x80000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065A4F8 func_8065A4F8 preserves=true fpr_mask=0x00000000
