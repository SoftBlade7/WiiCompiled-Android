#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004FE70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004FE70;

loc_8004FE70:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r28 = r3;
    r27 = r4;
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    r7 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004FDA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004FEAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004FED8;
    }
}

loc_8004FEB0:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_8004FEB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(255))) {
        goto loc_8004FED8;
    }
}

loc_8004FEBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8004FEC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_8004FED8;
    }
}

loc_8004FEC8:
{
    r0 = MemoryInline::FlatRead32(r28);
    r4 = 255;
    r3 = (r0 + r3);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
}

loc_8004FED8:
{
}

loc_8004FEDC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(255))) {
        goto loc_8004FEEC;
    }
}

loc_8004FEE0:
{
    r0 = MemoryInline::FlatRead32(r28);
    r3 = (r0 + r29);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r30));
}

loc_8004FEEC:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r27 & 1);
    r4 = (r3 + r27);
    r6 = MemoryInline::FlatRead32(r28);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r4) >> 1);
    r3 = 0x80270000u;
    r5 = (r8 * 48);
    r4 = (0 - r0);
    r0 = (r31 & 15);
    r3 = (r3 + 10240);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    r5 = (r6 + r5);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r6 = (r6_rot_0 & 56);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(255));
}

loc_8004FF24:
{
    r9 = (r4 & 12);
    r3 = 1023;
    r4 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r9));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r7 = (r7_rot_0 & -128);
    r3 = (r5 + 138);
    r6_mrot_0 = (r30 & 7);
    r6_mdest_0 = (r6 & -8);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r5 = (r4 | -16777216);
    r4 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004FF54;
    }
}

loc_8004FF48:
{
    r0 = (r30 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004FF4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004FF54;
    }
}

loc_8004FF50:
{
    r4 = 1;
}

loc_8004FF54:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r4 = (r4_rot_0 & -64);
    r0 = (r8 + 40);
    r4 = (r6 | r4);
    r4 = (r7 | r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & -16777216);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r4 = (r4 | r0);
    // inline leaf 0x8004BD60 (22 guest instruction(s))
    r6 = MemoryInline::FlatRead8((r3 + 2));
    r8 = 97;
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r9 = (r4 & r5);
    r7 = MemoryInline::FlatRead8((r3 + 1));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & -65536);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6_mrot_1 = (r6_rot_2 & -16777216);
    r6_mdest_1 = (r6 & 16777215);
    r6 = (r6_mdest_1 | r6_mrot_1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r8));
    r6 = (r6 | r4);
    r6 = (r6 | r0);
    r0 = (r6 & ~r5);
    r0 = (r9 | r0);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_0 & 255);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4 = (r4_rot_2 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004BD60
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80003FB gpr_write=0xF8000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004FE70 func_8004FE70 preserves=true fpr_mask=0x00000000
