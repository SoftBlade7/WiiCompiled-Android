#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052CCA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r10_ca_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r9_rot_0 = 0;

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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052CCA4;

loc_8052CCA4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r11 = (r0 - r4);
    r7 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r26);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r11);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r11) >> 3);
    r10_ca_0 = (xer >> 29) & 1u;
    r10 = (r0 + r10_ca_0);
    r8 = 0;
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r9 = (r9_rot_0 & -8);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r6) >> 3);
    r0_addze_src_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_0 + r0_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addze_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7 = (r7 + -308);
    r10 = (r3 + r10);
    r9 = (r11 - r9);
    r5 = (r5 + r0);
    goto loc_8052CDB0;
}

loc_8052CCE4:
{
    r11 = (r4 - r8);
    r3 = (8 - r9);
}

loc_8052CCF0:
{
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(r3))) {
        goto loc_8052CCF8;
    }
}

loc_8052CCF4:
{
    r11 = r3;
}

loc_8052CCF8:
{
    r0 = (r6 + r8);
    r0 = (r0 & 7);
    r12 = (8 - r0);
}

loc_8052CD08:
{
    r0 = r12;
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(r12))) {
        goto loc_8052CD14;
    }
}

loc_8052CD10:
{
    r0 = r11;
}

loc_8052CD14:
{
    r31 = MemoryInline::FlatRead8(r5);
    r29 = (r12 - r0);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r30 = (r30_rot_2 & -4);
    r28 = (r11 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
    r29 = PPC_Sraw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r29));
    r7_addr_2 = (r7 + r30);
    r31 = MemoryInline::FlatRead32(r7_addr_2);
    r30 = (8 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r26 = 0;
    r31 = (r29 & r31);
    r29 = (r9 + r0);
    r30 = (r30 - r9);
    r30 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r30));
    r27 = (r30 & 255);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052CD68;
    }
}

loc_8052CD4C:
{
    r30 = (8 - r28);
    r31 = MemoryInline::FlatRead8((r5 + 1));
    r30_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r30 = (r30_rot_3 & -4);
    r7_addr_3 = (r7 + r30);
    r30 = MemoryInline::FlatRead32(r7_addr_3);
    r30 = (r31 & ~r30);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r30);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r29) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r30 = PPC_Sraw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r29));
    r26 = (r30 & 255);
}

loc_8052CD68:
{
    r9 = (r9 + r11);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r31 = (r31_rot_2 & -4);
    r3 = (8 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r7_addr_5 = (r7 + r31);
    r9 = MemoryInline::FlatRead32(r7_addr_5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r30 = (r27 | r26);
    r7_addr_6 = (r7 + r3);
    r3 = MemoryInline::FlatRead32(r7_addr_6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r12));
}

loc_8052CD88:
{
    r12 = (r30 & 255);
    r8 = (r8 + r11);
    r0 = (r9 & ~r3);
    r0 = (r0 & 255);
    r0 = (r12 & r0);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
    r10 = (r10 + 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052CDAC;
    }
}

loc_8052CDA8:
{
    r5 = (r5 + 1);
}

loc_8052CDAC:
{
    r9 = 0;
}

loc_8052CDB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r4));
}

loc_8052CDB4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052CCE4;
    }
}

loc_8052CDB8:
{
    r26 = MemoryInline::FlatRead32((r1 + 8));
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = (r6 + r4);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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

// RECOMP_GUEST_ABI gpr_read=0xFC001FFA gpr_write=0xFC001FAB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052CCA4 func_8052CCA4 preserves=true fpr_mask=0x00000000
