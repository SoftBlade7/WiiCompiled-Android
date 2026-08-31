#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EF3D8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801EF3D8;

loc_801EF3D8:
{
    r0 = (r3 & 3);
}

loc_801EF3DC:
{
    r8 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EF47C;
    }
}

loc_801EF3E4:
{
    r0 = (r4 & 3);
}

loc_801EF3E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EF47C;
    }
}

loc_801EF3EC:
{
}

loc_801EF3F0:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r7 = (r7_rot_1 & 1073741823);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(3))) {
        goto loc_801EF47C;
    }
}

loc_801EF3F8:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r6 = (r6_rot_1 & 536870911);
}

loc_801EF3FC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0 = (0 - r0);
    ctr = r6;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801EF460;
    }
}

loc_801EF40C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r8, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r8, r6);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r8 + 4), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r8 + 8), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r8 + 12), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r8 + 16), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r8 + 20), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r8 + 24), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    r4 = (r4 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r8 + 28), r6);
    r8 = (r8 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801EF40C;
    }
}

loc_801EF458:
{
    r7 = (r7 & 7);
}

loc_801EF45C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801EF478;
    }
}

loc_801EF460:
{
    ctr = r7;
}

loc_801EF464:
{
    r6 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r8, r6);
    r8 = (r8 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801EF464;
    }
}

loc_801EF478:
{
    r5 = (r5 + r0);
}

loc_801EF47C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801EF480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801EF484:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EF488:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EF4E4;
    }
}

loc_801EF490:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r8, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r8, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r8 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r8 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r8 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r8 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r8 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r8 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r4 + 7));
    r4 = (r4 + 8);
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r8 + 7), static_cast<uint8_t>(r0));
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801EF490;
    }
}

loc_801EF4DC:
{
    r5 = (r5 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801EF4E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801EF4E4:
{
    ctr = r5;
}

loc_801EF4E8:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801EF4E8;
    }
}

loc_801EF4FC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801EF3D8 func_801EF3D8 preserves=true fpr_mask=0x00000000
