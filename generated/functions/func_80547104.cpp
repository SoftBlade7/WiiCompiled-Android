#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80547104(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r8_stbu_ea_0 = 0;
    uint32_t r8_stbu_ea_1 = 0;
    uint32_t r8_stbu_ea_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_80547104;

loc_80547104:
{
    r8 = 65536;
    r9 = r5;
    r0 = (r8 + -29504);
    r5 = r6;
    r0 = (r9 * r0);
    r6 = r7;
    r3 = (r3 + r0);
    r3 = (r3 + 8);
}

loc_80548714:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 80), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054871C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054882C;
    }
}

loc_80548720:
{
    r10 = (r5 * 768);
    r0 = 38;
    r7 = (r4 + -1);
    r9 = (r6 * 96);
    r5 = (r3 + r10);
    r5 = (r5 + r9);
    r6 = MemoryInline::FlatRead8((r5 + 530));
    r8 = (r5 + 447);
    r6 = (r6 | 128);
    MemoryInline::FlatWrite8((r5 + 530), static_cast<uint8_t>(r6));
    ctr = r0;
}

loc_8054874C:
{
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r7 = (r7 + 2);
    r0 = MemoryInline::FlatRead8(r7);
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r6));
    r8_stbu_ea_2 = (r8 + 2);
    MemoryInline::FlatWrite8(r8_stbu_ea_2, static_cast<uint8_t>(r0));
    r8 = r8_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8054874C;
    }
}

loc_80548760:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 80));
    r6 = 99;
}

loc_8054876C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_80548774;
    }
}

loc_80548770:
{
    r6 = r0;
}

loc_80548774:
{
    r0 = (r3 + r10);
    r7 = (r0 + r9);
    r0 = MemoryInline::FlatRead32((r7 + 524));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(25));
    r0_mrot_0 = (r0_rot_0 & -33554432);
    r0_mdest_0 = (r0 & 33554431);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r7 + 524), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 80));
}

loc_80548790:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8054879C;
    }
}

loc_80548794:
{
    r6 = 59;
    goto loc_805487A0;
}

loc_8054879C:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 82));
}

loc_805487A0:
{
    r0 = MemoryInline::FlatRead32((r7 + 524));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r0_mrot_1 = (r0_rot_1 & 33292288);
    r0_mdest_1 = (r0 & -33292289);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r7 + 524), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 80));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_805487B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805487C0;
    }
}

loc_805487B8:
{
    r8 = 999;
    goto loc_805487C4;
}

loc_805487C0:
{
    r8 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 84));
}

loc_805487C4:
{
    r0 = (r3 + r10);
    r7 = (r0 + r9);
    r6 = MemoryInline::FlatRead32((r7 + 524));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r6_mrot_0 = (r6_rot_0 & 261888);
    r6_mdest_0 = (r6 & -261889);
    r6 = (r6_mdest_0 | r6_mrot_0);
    MemoryInline::FlatWrite32((r7 + 524), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 88));
    r3 = MemoryInline::FlatRead16((r7 + 528));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3_mrot_0 = (r3_rot_0 & 1008);
    r3_mdest_0 = (r3 & -1009);
    r3 = (r3_mdest_0 | r3_mrot_0);
    MemoryInline::FlatWrite16((r7 + 528), static_cast<uint16_t>(r3));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 92));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r3_mrot_1 = (r3_rot_1 & 64512);
    r3_mdest_1 = (r3 & -64513);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite16((r7 + 528), static_cast<uint16_t>(r3));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 96));
    r3_mrot_2 = (r0 & 15);
    r3_mdest_2 = (r3 & -16);
    r3 = (r3_mdest_2 | r3_mrot_2);
    MemoryInline::FlatWrite16((r7 + 528), static_cast<uint16_t>(r3));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 100));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r6_mrot_1 = (r6_rot_1 & 192);
    r6_mdest_1 = (r6 & -193);
    r6 = (r6_mdest_1 | r6_mrot_1);
    MemoryInline::FlatWrite32((r7 + 524), r6);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r4 + 104));
    r6_mrot_2 = (r0 & 63);
    r6_mdest_2 = (r6 & -64);
    r6 = (r6_mdest_2 | r6_mrot_2);
    MemoryInline::FlatWrite32((r7 + 524), r6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 108));
    r0 = MemoryInline::FlatRead8((r5 + 530));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0_mrot_2 = (r0_rot_2 & 112);
    r0_mdest_2 = (r0 & -113);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite8((r5 + 530), static_cast<uint8_t>(r0));
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

loc_8054882C:
{
    r4 = (r5 * 768);
    r0 = (r6 * 96);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 530));
    r0 = (r0 & -129);
    MemoryInline::FlatWrite8((r3 + 530), static_cast<uint8_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x000006F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80547104 func_80547104 preserves=true fpr_mask=0x00000000
