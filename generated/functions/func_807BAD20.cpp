#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BAD20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807BAD20;

loc_807BAD20:
{
    r8 = MemoryInline::FlatRead32((r4 + 4));
    r5 = 0x808A0000u;
    r5 = (r5 + 25400);
    r9 = 0;
    r7 = r8;
    r6 = 0;
    goto loc_807BAE00;
}

loc_807BAD3C:
{
    r0 = (r0 * 24);
    r9 = (r9 + 1);
    r0 = (r6 + r0);
    r6 = (r6 + 2);
    r4 = (r5 + r0);
    r4 = MemoryInline::FlatRead16((r4 + -24));
    r0 = (r4 + -1);
    r0 = (r0 & 65535);
    r0 = (r0 * 38);
    r4 = (r8 + r0);
    r8_addr_2 = (r8 + r0);
    r0 = MemoryInline::FlatRead16(r8_addr_2);
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 38u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r7, static_cast<uint16_t>(r0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 2), 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r7 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r7 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r7 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r7 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r7 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r7 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r4 + 14));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r7 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r7 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r4 + 18));
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r7 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 18u, (r4 + 20));
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r7 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 20u, (r4 + 22));
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r7 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 22u, (r4 + 24));
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r7 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 24u, (r4 + 26));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r7 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r7 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 28u, (r4 + 30));
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r7 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 30u, (r4 + 32));
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r7 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 32u, (r4 + 34));
    MemoryInline::WriteResolved16(guest_range_1, 34u, (r7 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 34u, (r4 + 36));
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r7 + 36), static_cast<uint16_t>(r0));
    r7 = (r7 + 38);
}

loc_807BAE00:
{
    r0 = MemoryInline::FlatRead32((r3 + 68));
}

loc_807BAE08:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r0))) {
        goto loc_807BAD3C;
    }
}

loc_807BAE0C:
{
    r4 = (r9 * 38);
    r0 = (12 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r3 = 0;
    r4 = (r8 + r4);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(12));
}

loc_807BAE24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_807BAE28:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 38u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r4, r3);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 2), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 4), r3);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r4 + 6), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r4 + 10), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 12), r3);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r4 + 14), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r4 + 18), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r4 + 20), r3);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r4 + 22), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r4 + 26), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r4 + 28), r3);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r4 + 30), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r4 + 32), r3);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r4 + 34), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r4 + 36), static_cast<uint16_t>(r3));
    r4 = (r4 + 38);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807BAE28;
    }
}

loc_807BAE7C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807BAD20 func_807BAD20 preserves=true fpr_mask=0x00000000
