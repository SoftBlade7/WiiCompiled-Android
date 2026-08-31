#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80548964(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r8_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80548964;

loc_80548964:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054896C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80548A28;
    }
}

loc_80548970:
{
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r8 = (r8_rot_0 & -8);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 4));
    r5 = (r3 + r8);
    r6 = 99;
    r0 = MemoryInline::FlatRead16((r5 + 21956));
}

loc_80548988:
{
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite16((r5 + 21956), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(99))) {
        goto loc_80548998;
    }
}

loc_80548994:
{
    r6 = r7;
}

loc_80548998:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 4));
    r7 = (r3 + r8);
    r5 = MemoryInline::FlatRead32((r7 + 21952));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(25));
    r5_mrot_0 = (r5_rot_0 & -33554432);
    r5_mdest_0 = (r5 & 33554431);
    r5 = (r5_mdest_0 | r5_mrot_0);
}

loc_805489AC:
{
    MemoryInline::FlatWrite32((r7 + 21952), r5);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_805489BC;
    }
}

loc_805489B4:
{
    r6 = 59;
    goto loc_805489C0;
}

loc_805489BC:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 6));
}

loc_805489C0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 4));
    r5 = MemoryInline::FlatRead32((r7 + 21952));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r5_mrot_1 = (r5_rot_1 & 33292288);
    r5_mdest_1 = (r5 & -33292289);
    r5 = (r5_mdest_1 | r5_mrot_1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_805489D0:
{
    MemoryInline::FlatWrite32((r7 + 21952), r5);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805489E0;
    }
}

loc_805489D8:
{
    r0 = 999;
    goto loc_805489E4;
}

loc_805489E0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 8));
}

loc_805489E4:
{
    r7 = (r3 + r8);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 12));
    r6 = MemoryInline::FlatRead32((r7 + 21952));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r6_mrot_0 = (r6_rot_0 & 261888);
    r6_mdest_0 = (r6 & -261889);
    r6 = (r6_mdest_0 | r6_mrot_0);
    MemoryInline::FlatWrite32((r7 + 21952), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 16));
    r3 = MemoryInline::FlatRead16((r7 + 21956));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r3_mrot_0 = (r3_rot_0 & 32512);
    r3_mdest_0 = (r3 & -32513);
    r3 = (r3_mdest_0 | r3_mrot_0);
    MemoryInline::FlatWrite16((r7 + 21956), static_cast<uint16_t>(r3));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6_mrot_1 = (r6_rot_1 & 252);
    r6_mdest_1 = (r6 & -253);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 20));
    MemoryInline::FlatWrite32((r7 + 21952), r6);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r3_mrot_1 = (r3_rot_1 & 224);
    r3_mdest_1 = (r3 & -225);
    r3 = (r3_mdest_1 | r3_mrot_1);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 24));
    MemoryInline::FlatWrite16((r7 + 21956), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r7 + 21958), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80548A28:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 21956));
    r0 = (r0 & -32769);
    MemoryInline::FlatWrite16((r3 + 21956), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80548964 func_80548964 preserves=true fpr_mask=0x00000000
