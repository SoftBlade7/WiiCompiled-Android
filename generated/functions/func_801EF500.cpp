#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EF500(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801EF500;

loc_801EF500:
{
    r9 = r3;
    goto loc_801EF514;
}

loc_801EF508:
{
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r4));
    r9 = (r9 + 1);
    r5 = (r5 + -1);
}

loc_801EF514:
{
    r0 = (r9 & 3);
}

loc_801EF518:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801EF524;
    }
}

loc_801EF51C:
{
}

loc_801EF520:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801EF508;
    }
}

loc_801EF524:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r7 = (r7_rot_0 & -256);
}

loc_801EF52C:
{
    r8 = (r4 | r7);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r6 = (r6_rot_0 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r7 = (r7_rot_1 & 1073741823);
    r0 = (r6 | r0);
    r8 = (r8 | r0);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(3))) {
        goto loc_801EF5A0;
    }
}

loc_801EF548:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r6 = (r6_rot_1 & 536870911);
}

loc_801EF54C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0 = (0 - r0);
    ctr = r6;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801EF58C;
    }
}

loc_801EF55C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r9, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r9, r8);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r9 + 4), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r9 + 8), r8);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r9 + 12), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r9 + 16), r8);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r9 + 20), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r9 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r9 + 28), r8);
    }
    r9 = (r9 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801EF55C;
    }
}

loc_801EF584:
{
    r7 = (r7 & 7);
}

loc_801EF588:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801EF59C;
    }
}

loc_801EF58C:
{
    ctr = r7;
}

loc_801EF590:
{
    MemoryInline::FlatWrite32(r9, r8);
    r9 = (r9 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801EF590;
    }
}

loc_801EF59C:
{
    r5 = (r5 + r0);
}

loc_801EF5A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801EF5A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801EF5A8:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EF5AC:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EF5E4;
    }
}

loc_801EF5B4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r9, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r9, static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r9 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r9 + 2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r9 + 3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r9 + 4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r9 + 5), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r9 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r9 + 7), static_cast<uint8_t>(r4));
    r9 = (r9 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801EF5B4;
    }
}

loc_801EF5DC:
{
    r5 = (r5 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801EF5E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801EF5E4:
{
    ctr = r5;
}

loc_801EF5E8:
{
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r4));
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801EF5E8;
    }
}

loc_801EF5F4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801EF500 func_801EF500 preserves=true fpr_mask=0x00000000
