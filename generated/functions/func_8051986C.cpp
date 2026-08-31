#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051986C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
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

    goto loc_8051986C;

loc_8051986C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_80519898:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80519968;
    }
}

loc_8051989C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 80), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r31 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805198A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80519950;
    }
}

loc_805198A8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r31 + 80));
    r4 = 99;
}

loc_805198B4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_805198BC;
    }
}

loc_805198B8:
{
    r4 = r0;
}

loc_805198BC:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r31 + 80));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r6 = (r6_rot_1 & -8);
    r5 = (r30 + r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_805198D0:
{
    r0 = MemoryInline::FlatRead32((r5 + 200));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(25));
    r0_mrot_1 = (r0_rot_1 & -33554432);
    r0_mdest_1 = (r0 & 33554431);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r5 + 200), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805198E8;
    }
}

loc_805198E0:
{
    r4 = 59;
    goto loc_805198EC;
}

loc_805198E8:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 82));
}

loc_805198EC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r31 + 80));
    r3 = MemoryInline::FlatRead32((r5 + 200));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(18));
    r3_mrot_1 = (r3_rot_1 & 33292288);
    r3_mdest_1 = (r3 & -33292289);
    r3 = (r3_mdest_1 | r3_mrot_1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_805198FC:
{
    MemoryInline::FlatWrite32((r5 + 200), r3);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051990C;
    }
}

loc_80519904:
{
    r0 = 999;
    goto loc_80519910;
}

loc_8051990C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 84));
}

loc_80519910:
{
    r6 = (r30 + r6);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 88));
    r5 = MemoryInline::FlatRead32((r6 + 200));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5_mrot_1 = (r5_rot_1 & 261888);
    r5_mdest_1 = (r5 & -261889);
    r5 = (r5_mdest_1 | r5_mrot_1);
    MemoryInline::FlatWrite32((r6 + 200), r5);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 92));
    r3 = MemoryInline::FlatRead32((r6 + 204));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(25));
    r3_mrot_2 = (r3_rot_2 & 2113929216);
    r3_mdest_2 = (r3 & -2113929217);
    r3 = (r3_mdest_2 | r3_mrot_2);
    MemoryInline::FlatWrite32((r6 + 204), r3);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5_mrot_2 = (r5_rot_2 & 252);
    r5_mdest_2 = (r5 & -253);
    r5 = (r5_mdest_2 | r5_mrot_2);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 96));
    MemoryInline::FlatWrite32((r6 + 200), r5);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r3_mrot_3 = (r3_rot_3 & 29360128);
    r3_mdest_3 = (r3 & -29360129);
    r3 = (r3_mdest_3 | r3_mrot_3);
    r0 = (r3 | -2147483648);
    MemoryInline::FlatWrite32((r6 + 204), r0);
    goto loc_80519968;
}

loc_80519950:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r3 + 204), r0);
}

loc_80519968:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051986C func_8051986C preserves=true fpr_mask=0x00000000
