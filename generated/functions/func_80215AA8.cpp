#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80215AA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_10 = 0;
    uint32_t r5_addr_11 = 0;
    uint32_t r5_addr_12 = 0;
    uint32_t r5_addr_13 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80215AA8;

loc_80215AA8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r5 = 0x80380000u;
    r0 = 8;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r5 = (r5 + 13584);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    ctr = r0;
}

loc_80215AC8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r5, r4);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r5 + 2), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r5 + 4), r4);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r5 + 6), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r5 + 8), r4);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r5 + 10), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r5 + 12), r4);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r5 + 14), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r5 + 16), r4);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r5 + 18), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r5 + 20), r4);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r5 + 22), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r5 + 24), r4);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r5 + 26), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r5 + 28), r4);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r5 + 30), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r5 + 32), r4);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r5 + 34), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 36u, (r5 + 36), r4);
        MemoryInline::WriteResolved16(guest_range_0, 38u, (r5 + 38), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 40u, (r5 + 40), r4);
        MemoryInline::WriteResolved16(guest_range_0, 42u, (r5 + 42), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 44u, (r5 + 44), r4);
        MemoryInline::WriteResolved16(guest_range_0, 46u, (r5 + 46), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 48u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 48u, (r5 + 48), r4);
        MemoryInline::WriteResolved16(guest_range_0, 50u, (r5 + 50), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 52u, (r5 + 52), r4);
        MemoryInline::WriteResolved16(guest_range_0, 54u, (r5 + 54), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 56u, (r5 + 56), r4);
        MemoryInline::WriteResolved16(guest_range_0, 58u, (r5 + 58), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 60u, (r5 + 60), r4);
        MemoryInline::WriteResolved16(guest_range_0, 62u, (r5 + 62), r4);
    }
    r5 = (r5 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80215AC8;
    }
}

loc_80215B50:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80215B54:
{
    r7 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80215CA8;
    }
}

loc_80215B5C:
{
}

loc_80215B60:
{
    r6 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_80215C6C;
    }
}

loc_80215B68:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80215B84;
    }
}

loc_80215B70:
{
    r5 = 0x80000000u;
    r0 = (r5 + -2);
}

loc_80215B7C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80215B84;
    }
}

loc_80215B80:
{
    r8 = 1;
}

loc_80215B84:
{
}

loc_80215B88:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80215C6C;
    }
}

loc_80215B8C:
{
    r0 = (r6 + 7);
    r5 = 0x80380000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r5 = (r5 + 13584);
    ctr = r0;
}

loc_80215BA4:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_80215C6C;
    }
}

loc_80215BA8:
{
    r3_addr_2 = (r3 + r7);
    r9 = MemoryInline::FlatRead8(r3_addr_2);
    r6 = (r3 + r7);
    r11 = (r4 - r7);
    r8 = MemoryInline::FlatRead8((r6 + 1));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & -2);
    r10 = (-2 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-2) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r11 = (r11 + -1);
    r0 = (r7 + 2);
    r5_addr_2 = (r5 + r9);
    MemoryInline::FlatWrite16(r5_addr_2, static_cast<uint16_t>(r11));
    r9 = (r4 - r0);
    r0 = MemoryInline::FlatRead8((r6 + 2));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & -2);
    r10 = (r10 + r4);
    r5_addr_3 = (r5 + r8);
    MemoryInline::FlatWrite16(r5_addr_3, static_cast<uint16_t>(r10));
    r8 = MemoryInline::FlatRead8((r6 + 3));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & -2);
    r11 = (r9 + -1);
    r0 = (r7 + 3);
    r9 = (r4 - r0);
    r5_addr_4 = (r5 + r10);
    MemoryInline::FlatWrite16(r5_addr_4, static_cast<uint16_t>(r11));
    r12 = MemoryInline::FlatRead8((r6 + 4));
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r30 = (r30_rot_2 & -2);
    r0 = (r7 + 4);
    r29 = (r9 + -1);
    r31 = (r4 - r0);
    r10 = MemoryInline::FlatRead8((r6 + 5));
    r0 = (r7 + 5);
    r8 = MemoryInline::FlatRead8((r6 + 6));
    r11 = (r4 - r0);
    r5_addr_5 = (r5 + r30);
    MemoryInline::FlatWrite16(r5_addr_5, static_cast<uint16_t>(r29));
    r0 = (r7 + 6);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_2 & -2);
    r9 = (r4 - r0);
    r0 = MemoryInline::FlatRead8((r6 + 7));
    r6 = (r7 + 7);
    r31 = (r31 + -1);
    r6 = (r4 - r6);
    r5_addr_6 = (r5 + r12);
    MemoryInline::FlatWrite16(r5_addr_6, static_cast<uint16_t>(r31));
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r10 = (r10_rot_3 & -2);
    r11 = (r11 + -1);
    r5_addr_7 = (r5 + r10);
    MemoryInline::FlatWrite16(r5_addr_7, static_cast<uint16_t>(r11));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_3 & -2);
    r9 = (r9 + -1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r5_addr_8 = (r5 + r8);
    MemoryInline::FlatWrite16(r5_addr_8, static_cast<uint16_t>(r9));
    r6 = (r6 + -1);
    r7 = (r7 + 8);
    r5_addr_9 = (r5 + r0);
    MemoryInline::FlatWrite16(r5_addr_9, static_cast<uint16_t>(r6));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80215BA8;
    }
}

loc_80215C6C:
{
    r5 = 0x80380000u;
    r0 = (r4 - r7);
    r5 = (r5 + 13584);
    r3 = (r3 + r7);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r4));
}

loc_80215C84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80215CA8;
    }
}

loc_80215C88:
{
    r0 = MemoryInline::FlatRead8(r3);
    r6 = (r4 - r7);
    r6 = (r6 + -1);
    r7 = (r7 + 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = (r3 + 1);
    r5_addr_12 = (r5 + r0);
    MemoryInline::FlatWrite16(r5_addr_12, static_cast<uint16_t>(r6));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80215C88;
    }
}

loc_80215CA8:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80215AA8 func_80215AA8 preserves=true fpr_mask=0x00000000
