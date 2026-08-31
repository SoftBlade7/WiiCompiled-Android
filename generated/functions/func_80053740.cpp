#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80053740(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80053740;

loc_80053740:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r9 = MemoryInline::FlatRead16((r4 + 52));
}

loc_80053750:
{
    r3 = MemoryInline::FlatRead16((r4 + 54));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80053760;
    }
}

loc_80053758:
{
    r5 = (r4 + r0);
    goto loc_80053764;
}

loc_80053760:
{
    r5 = 0;
}

loc_80053764:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_8005376C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80053778;
    }
}

loc_80053770:
{
    r6 = (r4 + r0);
    goto loc_8005377C;
}

loc_80053778:
{
    r6 = 0;
}

loc_8005377C:
{
}

loc_80053780:
{
    r10 = 0;
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(1))) {
        goto loc_8005382C;
    }
}

loc_80053788:
{
}

loc_8005378C:
{
    r7 = (r9 + -8);
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(8))) {
        goto loc_80053804;
    }
}

loc_80053794:
{
}

loc_80053798:
{
    r8 = 0;
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(0))) {
        goto loc_800537B4;
    }
}

loc_800537A0:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_800537AC:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r0))) {
        goto loc_800537B4;
    }
}

loc_800537B0:
{
    r8 = 1;
}

loc_800537B4:
{
}

loc_800537B8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80053804;
    }
}

loc_800537BC:
{
    r0 = (r7 + 7);
    r8 = r5;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r4 = 0;
    ctr = r0;
}

loc_800537D4:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_80053804;
    }
}

loc_800537D8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r8, r4);
    r10 = (r10 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r8 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r8 + 8), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r8 + 12), r4);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r8 + 16), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r8 + 20), r4);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r8 + 24), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r8 + 28), r4);
    r8 = (r8 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800537D8;
    }
}

loc_80053804:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0 = (r9 - r10);
    r5 = (r5 + r4);
    r4 = 0;
    ctr = r0;
}

loc_8005381C:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r9))) {
        goto loc_8005382C;
    }
}

loc_80053820:
{
    MemoryInline::FlatWrite32(r5, r4);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80053820;
    }
}

loc_8005382C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80053830:
{
    r8 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80053838:
{
}

loc_8005383C:
{
    r5 = (r3 + -8);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_800538B4;
    }
}

loc_80053844:
{
}

loc_80053848:
{
    r7 = 0;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80053864;
    }
}

loc_80053850:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_8005385C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_80053864;
    }
}

loc_80053860:
{
    r7 = 1;
}

loc_80053864:
{
}

loc_80053868:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800538B4;
    }
}

loc_8005386C:
{
    r0 = (r5 + 7);
    r7 = r6;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    r4 = 0;
    ctr = r0;
}

loc_80053884:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_800538B4;
    }
}

loc_80053888:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r7, r4);
    r8 = (r8 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r7 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r7 + 8), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r7 + 12), r4);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r7 + 16), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r7 + 20), r4);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r7 + 24), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r7 + 28), r4);
    r7 = (r7 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80053888;
    }
}

loc_800538B4:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r0 = (r3 - r8);
    r5 = (r6 + r4);
    r4 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r3));
}

loc_800538CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_800538D0:
{
    MemoryInline::FlatWrite32(r5, r4);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800538D0;
    }
}

loc_800538DC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80053740 func_80053740 preserves=true fpr_mask=0x00000000
