#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054884C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
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

    goto loc_8054884C;

loc_8054884C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 80), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80548854:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80548944;
    }
}

loc_80548858:
{
    r10 = (r5 * 3072);
    r0 = 38;
    r7 = (r4 + -1);
    r9 = (r6 * 96);
    r5 = (r3 + r10);
    r8 = (r5 + r9);
    r5 = MemoryInline::FlatRead8((r8 + 3600));
    r6 = (r8 + 3519);
    r5 = (r5 | 128);
    MemoryInline::FlatWrite8((r8 + 3600), static_cast<uint8_t>(r5));
    ctr = r0;
}

loc_80548884:
{
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r7 = (r7 + 2);
    r0 = MemoryInline::FlatRead8(r7);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r5));
    r6_stbu_ea_2 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80548884;
    }
}

loc_80548898:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 80));
    r5 = 99;
}

loc_805488A4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_805488AC;
    }
}

loc_805488A8:
{
    r5 = r0;
}

loc_805488AC:
{
    r0 = (r3 + r10);
    r6 = (r0 + r9);
    r0 = MemoryInline::FlatRead32((r6 + 3596));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(25));
    r0_mrot_0 = (r0_rot_0 & -33554432);
    r0_mdest_0 = (r0 & 33554431);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r6 + 3596), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 80));
}

loc_805488C8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_805488D4;
    }
}

loc_805488CC:
{
    r5 = 59;
    goto loc_805488D8;
}

loc_805488D4:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 82));
}

loc_805488D8:
{
    r0 = MemoryInline::FlatRead32((r6 + 3596));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(18));
    r0_mrot_1 = (r0_rot_1 & 33292288);
    r0_mdest_1 = (r0 & -33292289);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r6 + 3596), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 80));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_805488EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805488F8;
    }
}

loc_805488F0:
{
    r6 = 999;
    goto loc_805488FC;
}

loc_805488F8:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 84));
}

loc_805488FC:
{
    r0 = (r3 + r10);
    r5 = (r0 + r9);
    r0 = MemoryInline::FlatRead32((r5 + 3596));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_2 & 261888);
    r0_mdest_2 = (r0 & -261889);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r5 + 3596), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 88));
    r0 = MemoryInline::FlatRead8((r8 + 3600));
    r0_mrot_3 = (r3 & 127);
    r0_mdest_3 = (r0 & -128);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite8((r8 + 3600), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 92));
    r0 = MemoryInline::FlatRead32((r5 + 3596));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_4 = (r0_rot_3 & 252);
    r0_mdest_4 = (r0 & -253);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite32((r5 + 3596), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 96));
    r0 = MemoryInline::FlatRead8((r5 + 3601));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0_mrot_5 = (r0_rot_4 & 224);
    r0_mdest_5 = (r0 & -225);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite8((r5 + 3601), static_cast<uint8_t>(r0));
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

loc_80548944:
{
    r4 = (r5 * 3072);
    r0 = (r6 * 96);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3600));
    r0 = (r0 & -129);
    MemoryInline::FlatWrite8((r3 + 3600), static_cast<uint8_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x00000779 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054884C func_8054884C preserves=true fpr_mask=0x00000000
