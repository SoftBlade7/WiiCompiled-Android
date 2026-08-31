#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805484F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_stbu_ea_0 = 0;
    uint32_t r7_stbu_ea_1 = 0;
    uint32_t r7_stbu_ea_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_805484F4;

loc_805484F4:
{
    r9 = (r5 * 768);
    r8 = (r6 * 96);
    r0 = (r3 + r9);
    r5 = (r0 + r8);
    r0 = MemoryInline::FlatRead8((r5 + 530));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054850C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805485AC;
    }
}

loc_80548510:
{
    r0 = 38;
    r7 = (r4 + -1);
    r6 = (r5 + 447);
    ctr = r0;
}

loc_80548520:
{
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    r7_stbu_ea_2 = (r7 + 2);
    MemoryInline::FlatWrite8(r7_stbu_ea_2, static_cast<uint8_t>(r0));
    r7 = r7_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80548520;
    }
}

loc_80548534:
{
    r3 = (r3 + r9);
    r0 = 1;
    r5 = (r3 + r8);
    r3 = MemoryInline::FlatRead32((r5 + 524));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r7 = (r7_rot_0 & 1023);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r6 = (r6_rot_0 & 127);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
    r3 = (r3_rot_0 & 127);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 80), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r4 + 86), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r4 + 80), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 82), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 84), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead16((r5 + 528));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_1 & 63);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 88), r0);
    r0 = MemoryInline::FlatRead16((r5 + 528));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_2 & 63);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 92), r0);
    r0 = MemoryInline::FlatRead16((r5 + 528));
    r0 = (r0 & 15);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 96), r0);
    r0 = MemoryInline::FlatRead32((r5 + 524));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_3 & 3);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 100), r0);
    r0 = MemoryInline::FlatRead32((r5 + 524));
    r0 = (r0 & 63);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r4 + 104), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 524));
    r0 = (r0 & 63);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 108), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805485AC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 86), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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

// RECOMP_GUEST_ABI gpr_read=0x00000378 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805484F4 func_805484F4 preserves=true fpr_mask=0x00000000
