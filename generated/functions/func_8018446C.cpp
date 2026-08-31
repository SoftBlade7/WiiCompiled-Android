#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018446C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8018446C;

loc_8018446C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80184470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80184474:
{
    r7 = MemoryInline::FlatRead32((r3 + 76));
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r5 = (r5_rot_0 & 15);
    r8 = MemoryInline::FlatRead32((r3 + 88));
    r6 = (r5 * 20);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r12 = (r12_rot_0 & 15);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r5 = (r5_rot_1 & 480);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r12), static_cast<uint32_t>(r4));
}

loc_80184494:
{
    r0 = (r8 + r6);
    r11 = (r5 + r0);
    if (((cr & 0x08000000u) == 0)) {
        goto loc_801845B0;
    }
}

loc_801844A0:
{
    r0 = (r4 - r12);
    r9 = (r4 + -8);
}

loc_801844AC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_80184570;
    }
}

loc_801844B0:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80184570;
    }
}

loc_801844B4:
{
    r0 = (r9 + 7);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    r0 = (r0 - r12);
    r8 = 1;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r10 = (r11 + r5);
    r7 = 4;
    r6 = 60;
    r5 = 0;
    ctr = r0;
}

loc_801844E0:
{
    if ((static_cast<uint32_t>(r12) >= static_cast<uint32_t>(r9))) {
        goto loc_80184570;
    }
}

loc_801844E4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r10, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r10, static_cast<uint8_t>(r8));
    r12 = (r12 + 8);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r10 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r10 + 2), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r10 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r10 + 4), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r10 + 5), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r10 + 6), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r10 + 7), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r10 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r10 + 9), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r10 + 10), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r10 + 11), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r10 + 12), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r10 + 13), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r10 + 14), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r10 + 15), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r10 + 16), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r10 + 17), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r10 + 18), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r10 + 19), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r10 + 20), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r10 + 21), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r10 + 22), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r10 + 23), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r10 + 24), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r10 + 25), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r10 + 26), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r10 + 27), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r10 + 28), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r10 + 29), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r10 + 30), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r10 + 31), static_cast<uint8_t>(r5));
    r10 = (r10 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801844E4;
    }
}

loc_80184570:
{
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r5 = (r5_rot_4 & -4);
    r0 = (r4 - r12);
    r9 = (r11 + r5);
    r8 = 1;
    r7 = 4;
    r6 = 60;
    r5 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r12), static_cast<uint32_t>(r4));
}

loc_80184594:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801845B0;
    }
}

loc_80184598:
{
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r9 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r9 + 3), static_cast<uint8_t>(r5));
    r9 = (r9 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80184598;
    }
}

loc_801845B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r0_mrot_0 = (r0_rot_4 & 15728640);
    r0_mdest_0 = (r0 & -15728641);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r3 + 80), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FE1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8018446C func_8018446C preserves=true fpr_mask=0x00000000
