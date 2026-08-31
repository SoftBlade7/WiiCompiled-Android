#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80154AC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80154AC4;

loc_80154AC4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r0 = MemoryInline::FlatRead8((r3 + 109));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80154AF4:
{
    r0 = 1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80154B00;
    }
}

loc_80154AFC:
{
    r0 = 0;
}

loc_80154B00:
{
    r3 = MemoryInline::FlatRead16((r5 + 4));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 254);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r3 = (r3 + -3);
}

loc_80154B14:
{
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r3));
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(127))) {
        goto loc_80154B28;
    }
}

loc_80154B1C:
{
    r3 = (r3 & 65535);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
}

loc_80154B28:
{
}

loc_80154B2C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80154B3C;
    }
}

loc_80154B30:
{
    r0 = MemoryInline::FlatRead16((r5 + 6));
    r0 = (r0 & 255);
    goto loc_80154B40;
}

loc_80154B3C:
{
    r0 = 0;
}

loc_80154B40:
{
}

loc_80154B44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80154B54;
    }
}

loc_80154B48:
{
    r3 = MemoryInline::FlatRead16((r5 + 4));
    r3 = (r3 + -1);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r3));
}

loc_80154B54:
{
    r3 = (0 - r0);
    r7 = MemoryInline::FlatRead16((r5 + 4));
    r3 = (r3 | r0);
    r6 = (r6 | 1);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & 1020);
    r7 = (r5 + r7);
    r4 = (r6 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r3 & 16);
    MemoryInline::FlatWrite8((r7 + 8), static_cast<uint8_t>(r4));
    r3 = (r3 | 239);
    r4 = (r7 + 10);
    MemoryInline::FlatWrite8((r7 + 9), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead16((r5 + 2));
}

loc_80154B90:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(127))) {
        goto loc_80154BB4;
    }
}

loc_80154B94:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 131070);
    r3 = (r3 | 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    r4 = (r4 + 1);
    r3 = MemoryInline::FlatRead16((r5 + 2));
    r3 = (r3 + 3);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r3));
    goto loc_80154BD8;
}

loc_80154BB4:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 254);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead16((r5 + 2));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 7);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    r4 = (r4 + 2);
    r3 = MemoryInline::FlatRead16((r5 + 2));
    r3 = (r3 + 4);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r3));
}

loc_80154BD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80154BDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80154BF0;
    }
}

loc_80154BE0:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
}

loc_80154BF0:
{
    r4 = MemoryInline::FlatRead16((r5 + 2));
    r3 = 2;
    r6 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r4 + 1);
    r6 = (r5 + r6);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r28 = (r6 + r4);
    r4 = (r6 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80155E38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80154C18:
{
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r3));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80154C30;
    }
}

loc_80154C20:
{
    r3 = r29;
    r4 = r31;
    ctx->lr = 0x80154C2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801565B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80154C3C;
}

loc_80154C30:
{
    r3 = MemoryInline::FlatRead16((r29 + 104));
    r4 = r31;
    ctx->lr = 0x80154C3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8014A920u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80154C3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80154AC4 func_80154AC4 preserves=true fpr_mask=0x00000000
