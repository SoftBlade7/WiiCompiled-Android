#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011167C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t cr6_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011167C;

loc_8011167C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80111688:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801116A8;
    }
}

loc_801116A0:
{
    r3 = 0;
    goto loc_80111760;
}

loc_801116A8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801116AC:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_801116B8;
    }
}

loc_801116B0:
{
    r3 = 0;
    goto loc_80111760;
}

loc_801116B8:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801116BC:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_801116C8;
    }
}

loc_801116C0:
{
    r3 = 0;
    goto loc_80111760;
}

loc_801116C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801116CC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801116D8;
    }
}

loc_801116D0:
{
    r3 = 0;
    goto loc_80111760;
}

loc_801116D8:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 32), r0);
    if (((cr & 0x00000020u) == 0)) {
        goto loc_8011170C;
    }
}

loc_80111704:
{
    r0 = 0;
    goto loc_80111740;
}

loc_8011170C:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80111718;
    }
}

loc_80111710:
{
    r0 = 0;
    goto loc_80111740;
}

loc_80111718:
{
    r4 = r31;
    r3 = 0;
    ctx->lr = 0x80111724u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80111728:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80111734;
    }
}

loc_8011172C:
{
    r0 = 0;
    goto loc_80111740;
}

loc_80111734:
{
    MemoryInline::FlatWrite32((r30 + 4), r3);
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 8), r31);
}

loc_80111740:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111744:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111750;
    }
}

loc_80111748:
{
    r3 = 0;
    goto loc_80111760;
}

loc_80111750:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_80111760:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xC000103B gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x43 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8011167C func_8011167C preserves=true fpr_mask=0x00000000
