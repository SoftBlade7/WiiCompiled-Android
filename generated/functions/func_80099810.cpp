#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80099810(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_sthu_ea_0 = 0;
    uint32_t r5_sthu_ea_1 = 0;
    uint32_t r5_sthu_ea_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80099810;

loc_80099810:
{
    r0 = MemoryInline::FlatRead8((r13 + -27160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80099818:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009986C;
    }
}

loc_8009981C:
{
    r5 = 0x802D0000u;
    r0 = -1;
    r5_sthu_ea_1 = (r5 + 23432);
    MemoryInline::FlatWriteRam16(r5_sthu_ea_1, static_cast<uint16_t>(r0));
    r5 = r5_sthu_ea_1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 2), 0, 30u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r5 + 2), r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r5 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r5 + 6), r0);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r5 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r5 + 10), r0);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r5 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r5 + 14), r0);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r5 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r5 + 18), r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r5 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r5 + 22), r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r5 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r5 + 26), r0);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r5 + 28), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r5 + 30), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27160), static_cast<uint8_t>(r0));
}

loc_8009986C:
{
    r5 = 0x802D0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r5 = (r5 + 23432);
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWrite16(r5_addr_0, static_cast<uint16_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80099810 func_80099810 preserves=true fpr_mask=0x00000000
