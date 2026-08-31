#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80218C2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r11_mdest_0 = 0;
    uint32_t r11_mdest_1 = 0;
    uint32_t r11_mdest_2 = 0;
    uint32_t r11_mdest_3 = 0;
    uint32_t r11_mrot_0 = 0;
    uint32_t r11_mrot_1 = 0;
    uint32_t r11_mrot_2 = 0;
    uint32_t r11_mrot_3 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80218C2C;

loc_80218C2C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r5 = 16;
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r8 = MemoryInline::FlatRead8((r3 + 6));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r7 = MemoryInline::FlatRead8((r3 + 4));
    r9 = MemoryInline::FlatRead8((r3 + 7));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r9_mrot_0 = (r9_rot_0 & 65280);
    r9_mdest_0 = (r9 & -65281);
    r9 = (r9_mdest_0 | r9_mrot_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r0_mrot_0 = (r0_rot_1 & -16777216);
    r0_mdest_0 = (r0 & 16777215);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r8 = 0;
    r0 = (r9 | r0);
    goto loc_80218DA4;
}

loc_80218C68:
{
    r9 = (r6 & 255);
}

loc_80218C6C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80218C7C;
    }
}

loc_80218C70:
{
    r3_addr_2 = (r3 + r5);
    r7 = MemoryInline::FlatRead8(r3_addr_2);
    r6 = 128;
    r5 = (r5 + 1);
}

loc_80218C7C:
{
    r9 = (r6 & 255);
    r9 = (r7 & r9);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80218C9C;
    }
}

loc_80218C88:
{
    r3_addr_4 = (r3 + r5);
    r9 = MemoryInline::FlatRead8(r3_addr_4);
    r5 = (r5 + 1);
    r4_addr_2 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r9));
    r8 = (r8 + 1);
    goto loc_80218DA0;
}

loc_80218C9C:
{
    r10 = (r3 + r5);
    r3_addr_5 = (r3 + r5);
    r9 = MemoryInline::FlatRead8(r3_addr_5);
    r11 = MemoryInline::FlatRead8((r10 + 1));
    r5 = (r5 + 2);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r11_mrot_2 = (r11_rot_2 & 65280);
    r11_mdest_2 = (r11 & -65281);
    r11 = (r11_mdest_2 | r11_mrot_2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r11);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r10 = (static_cast<int32_t>(r11) >> 12);
    r9 = (r11 & 4095);
    r31 = (r8 - r9);
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80218CD0;
    }
}

loc_80218CC0:
{
    r3_addr_6 = (r3 + r5);
    r9 = MemoryInline::FlatRead8(r3_addr_6);
    r5 = (r5 + 1);
    r30 = (r9 + 18);
    goto loc_80218CD4;
}

loc_80218CD0:
{
    r30 = (r10 + 2);
}

loc_80218CD4:
{
}

loc_80218CD8:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_80218DA0;
    }
}

loc_80218CDC:
{
}

loc_80218CE0:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_80218D70;
    }
}

loc_80218CE4:
{
}

loc_80218CE8:
{
    r9 = 0;
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(-1))) {
        goto loc_80218CF4;
    }
}

loc_80218CF0:
{
    r9 = 1;
}

loc_80218CF4:
{
}

loc_80218CF8:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80218D70;
    }
}

loc_80218CFC:
{
    r9 = (r30 + -1);
    r10 = (r4 + r8);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_2 & 536870911);
    ctr = r9;
}

loc_80218D10:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_80218D70;
    }
}

loc_80218D14:
{
    r12 = (r4 + r31);
    r11 = (r8 + r4);
    r9 = MemoryInline::FlatRead8((r12 + -1));
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r9));
    r10 = (r10 + 8);
    r30 = (r30 + -8);
    r4_addr_4 = (r4 + r31);
    r9 = MemoryInline::FlatRead8(r4_addr_4);
    r31 = (r31 + 8);
    MemoryInline::FlatWrite8((r11 + 1), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead8((r12 + 1));
    MemoryInline::FlatWrite8((r11 + 2), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead8((r12 + 2));
    MemoryInline::FlatWrite8((r11 + 3), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead8((r12 + 3));
    MemoryInline::FlatWrite8((r11 + 4), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead8((r12 + 4));
    MemoryInline::FlatWrite8((r11 + 5), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead8((r12 + 5));
    MemoryInline::FlatWrite8((r11 + 6), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead8((r12 + 6));
    MemoryInline::FlatWrite8((r11 + 7), static_cast<uint8_t>(r9));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80218D14;
    }
}

loc_80218D70:
{
    r9 = (r4 + r8);
    ctr = r30;
}

loc_80218D7C:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_80218DA0;
    }
}

loc_80218D80:
{
    r10 = (r4 + r31);
    r31 = (r31 + 1);
    r10 = MemoryInline::FlatRead8((r10 + -1));
    r30 = (r30 + -1);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r10));
    r9 = (r9 + 1);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80218D80;
    }
}

loc_80218DA0:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(31));
    r6 = (r6_rot_2 & 127);
}

loc_80218DA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_80218DA8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80218C68;
    }
}

loc_80218DAC:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r0;
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80218C2C func_80218C2C preserves=true fpr_mask=0x00000000
