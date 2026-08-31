#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E9B1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801E9B1C;

loc_801E9B1C:
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
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r27 = r3;
    r28 = r4;
    r30 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E9B44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E9B50;
    }
}

loc_801E9B48:
{
    r3 = -3;
    goto loc_801E9D48;
}

loc_801E9B50:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 & 65535);
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r31 = (r31_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801E9B60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E9B8C;
    }
}

loc_801E9B64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E9B74;
    }
}

loc_801E9B68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E9B6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E9B80;
    }
}

loc_801E9B70:
{
    goto loc_801E9BA4;
}

loc_801E9B74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801E9B78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E9BA4;
    }
}

loc_801E9B7C:
{
    goto loc_801E9B98;
}

loc_801E9B80:
{
    r29 = 0x801F0000u;
    r29 = (r29 + -17616);
    goto loc_801E9BAC;
}

loc_801E9B8C:
{
    r29 = 0x801F0000u;
    r29 = (r29 + -17576);
    goto loc_801E9BAC;
}

loc_801E9B98:
{
    r29 = 0x801F0000u;
    r29 = (r29 + -17536);
    goto loc_801E9BAC;
}

loc_801E9BA4:
{
    r3 = -3;
    goto loc_801E9D48;
}

loc_801E9BAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E9BB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E9C28;
    }
}

loc_801E9BB8:
{
    r3 = (r1 + 8);
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E99E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_801E9C1C;
}

loc_801E9BC8:
{
    r12 = r29;
    r3 = MemoryInline::FlatRead16((r1 + 8));
    ctr = r12;
    ctx->lr = 0x801E9BD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801E9BE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E9C10;
    }
}

loc_801E9BE4:
{
    r4 = MemoryInline::FlatRead16((r1 + 8));
    r0 = MemoryInline::FlatRead32((r27 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_801E9BF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E9C10;
    }
}

loc_801E9BF4:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r27 + 4), r3);
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWrite32((r27 + 8), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_801E9D48;
}

loc_801E9C10:
{
    r3 = (r1 + 8);
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E99E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_801E9C1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E9C20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E9BC8;
    }
}

loc_801E9C24:
{
    goto loc_801E9C30;
}

loc_801E9C28:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_801E9C30:
{
    r0 = MemoryInline::FlatRead32(r27);
    r0 = (r0 & -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E9C38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E9C4C;
    }
}

loc_801E9C3C:
{
    r3 = 0x80000000u;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r27 + 4), r0);
    goto loc_801E9C58;
}

loc_801E9C4C:
{
    r3 = 0x80000000u;
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_801E9C58:
{
    r3 = (r1 + 8);
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E99E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_801E9D1C;
}

loc_801E9C68:
{
    r12 = r29;
    r3 = MemoryInline::FlatRead16((r1 + 8));
    ctr = r12;
    ctx->lr = 0x801E9C78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801E9C7C:
{
    r5 = MemoryInline::FlatRead32((r27 + 8));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801E9C9C;
    }
}

loc_801E9C84:
{
    r0 = (r5 ^ r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r5);
    r0 = (r4 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    goto loc_801E9CB0;
}

loc_801E9C9C:
{
    r0 = (r3 ^ r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r3);
    r0 = (r4 - r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_801E9CB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E9CB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E9D10;
    }
}

loc_801E9CB8:
{
}

loc_801E9CBC:
{
    r5 = MemoryInline::FlatRead32((r27 + 4));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801E9CDC;
    }
}

loc_801E9CC4:
{
    r0 = (r3 ^ r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r3);
    r0 = (r4 - r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    goto loc_801E9CF0;
}

loc_801E9CDC:
{
    r0 = (r5 ^ r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r5);
    r0 = (r4 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_801E9CF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E9CF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E9D10;
    }
}

loc_801E9CF8:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r30 = 1;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r27 + 4), r3);
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWrite32((r27 + 12), r0);
}

loc_801E9D10:
{
    r3 = (r1 + 8);
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E99E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_801E9D1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E9D20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E9C68;
    }
}

loc_801E9D24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801E9D28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E9D3C;
    }
}

loc_801E9D2C:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r3 = 0;
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_801E9D48;
}

loc_801E9D3C:
{
    r0 = 0;
    r3 = -15;
    MemoryInline::FlatWrite32((r27 + 20), r0);
}

loc_801E9D48:
{
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E9B1C func_801E9B1C preserves=true fpr_mask=0x00000000
