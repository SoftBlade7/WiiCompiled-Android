#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80127E28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80127E28;

loc_80127E28:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r30 + 150), r0);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r30 + 154), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r30 + 158), r0);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    MemoryInline::FlatWrite32((r30 + 162), r0);
    r0 = MemoryInline::FlatRead16((r31 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_80127E70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80127E90;
    }
}

loc_80127E74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80127E84;
    }
}

loc_80127E78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80127E7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80127EF4;
    }
}

loc_80127E80:
{
    goto loc_80127EF4;
}

loc_80127E84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(25));
}

loc_80127E88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80127EC4;
    }
}

loc_80127E8C:
{
    goto loc_80127EF4;
}

loc_80127E90:
{
    r4 = 0;
    r0 = 134217728;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 166), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 166), r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 170), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 174), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 178), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 182), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 186), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 190), r4);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 194), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 198), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 202), r4);
    }
    goto loc_80127EF4;
}

loc_80127EC4:
{
    r4 = 0;
    r0 = 16777216;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 166), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r30 + 166), r4);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 170), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 174), r4);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 178), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r30 + 182), r4);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r30 + 186), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r30 + 190), r4);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r30 + 194), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r30 + 198), r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r30 + 202), r4);
    }
}

loc_80127EF4:
{
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r0 & -30721);
    r0 = (r0 | 33792);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80127E28 func_80127E28 preserves=true fpr_mask=0x00000000
