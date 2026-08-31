#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A0F80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_800A0F80;

loc_800A0F80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r31 = MemoryInline::FlatRead32(r4);
    r0 = (r31 + 35);
    r3 = (r0 & -4);
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800A0FC4;
    }
}

loc_800A0FBC:
{
    r3 = 0;
    goto loc_800A102C;
}

loc_800A0FC4:
{
}

loc_800A0FC8:
{
    MemoryInline::FlatWrite32(r4, r3);
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800A0FDC;
    }
}

loc_800A0FD0:
{
    r3 = r31;
    // inline leaf 0x80097E00 (12 guest instruction(s))
    r4 = 0x80270000u;
    r0 = 0;
    r4 = (r4 + 18472);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    }
    // end of inlined leaf 0x80097E00
    r31 = r3;
}

loc_800A0FDC:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 31);
    r4 = (r0 & -32);
    MemoryInline::FlatWrite32(r28, r4);
    r3 = (r30 + r4);
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    r0 = (r3 - r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800A1008;
    }
}

loc_800A1000:
{
    r3 = 0;
    goto loc_800A102C;
}

loc_800A1008:
{
    MemoryInline::FlatWrite32(r28, r3);
    r3 = r31;
    r5 = r30;
    // inline leaf 0x80097F00 (12 guest instruction(s))
}

loc_inl1_0x80097F00:
{
    r0 = (r4 + 31);
    r4 = (r5 + r4);
    r0 = (r0 & -32);
}

loc_inl1_0x80097F10:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r4))) {
        goto loc_inl1_0x80097F1C;
    }
}

loc_inl1_0x80097F14:
{
    r3 = 0;
    goto loc_inl1_cont_80097F00;
}

loc_inl1_0x80097F1C:
{
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 16), r4);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r3 = 1;
}

loc_inl1_cont_80097F00:
{
    // end of inlined leaf 0x80097F00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A101C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A1028;
    }
}

loc_800A1020:
{
    r3 = r31;
    goto loc_800A102C;
}

loc_800A1028:
{
    r3 = 0;
}

loc_800A102C:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A0F80 func_800A0F80 preserves=true fpr_mask=0x00000000
