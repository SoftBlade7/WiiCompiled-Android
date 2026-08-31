#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801306BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801306BC;

loc_801306BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r5 = MemoryInline::FlatRead16(r4);
    r27 = r4;
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_801306E0:
{
    r3 = (r4 + r0);
    r6 = (r3 + 8);
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(8448))) {
        goto loc_801306F4;
    }
}

loc_801306EC:
{
    r28 = 2;
    goto loc_80130710;
}

loc_801306F4:
{
}

loc_801306F8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(8704))) {
        goto loc_80130704;
    }
}

loc_801306FC:
{
    r28 = 3;
    goto loc_80130710;
}

loc_80130704:
{
}

loc_80130708:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(8192))) {
        goto loc_80130710;
    }
}

loc_8013070C:
{
    r28 = 0;
}

loc_80130710:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(8448));
}

loc_80130714:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80130834;
    }
}

loc_80130718:
{
    r3 = 0x80330000u;
    r4 = MemoryInline::FlatRead16((r4 + 2));
    r30 = (r3 + 23888);
    r0 = MemoryInline::FlatRead16((r30 + 126));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8013072C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80130834;
    }
}

loc_80130730:
{
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r3 = MemoryInline::FlatRead8(r6);
    r6 = (r6 + 2);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 65280);
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    r0 = (r0 & 53247);
}

loc_8013074C:
{
    r31 = (r0 | 4096);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r31);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r29 = (static_cast<int32_t>(r31) >> 8);
    goto loc_80130824;
}

loc_80130758:
{
    r4 = r6;
    r3 = r28;
    r6 = r27;
    ctx->lr = 0x80130768u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8013129Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r27 + 4));
    r0 = MemoryInline::FlatRead16((r30 + 124));
    r4 = MemoryInline::FlatRead16((r27 + 2));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r27 + 4), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r30 + 124));
    r6 = (r3 + 10);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite16((r27 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead16((r27 + 2));
    r0 = MemoryInline::FlatRead16((r30 + 126));
}

loc_801307A8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_801307C8;
    }
}

loc_801307AC:
{
    r0 = MemoryInline::FlatRead16((r30 + 124));
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 124));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    r6 = (r6 + 2);
    goto loc_801307E4;
}

loc_801307C8:
{
    r0 = (r3 + -4);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r27 + 2));
    r0 = (r3 + -4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    r6 = (r6 + 2);
}

loc_801307E4:
{
    r3 = MemoryInline::FlatRead16((r27 + 6));
}

loc_801307EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80130824;
    }
}

loc_801307F0:
{
    r3 = (r3 + -1);
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801307F8:
{
    MemoryInline::FlatWrite16((r27 + 6), static_cast<uint16_t>(r3));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80130824;
    }
}

loc_80130800:
{
    r0 = 6400;
    r3 = 0x80330000u;
    MemoryInline::FlatWrite16(r27, static_cast<uint16_t>(r0));
    r3 = (r3 + 9376);
    r5 = r27;
    r4 = 0;
    r3 = MemoryInline::FlatRead8((r3 + 31));
    ctx->lr = 0x80130820u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8012EFF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_80130850;
}

loc_80130824:
{
    r5 = MemoryInline::FlatRead16((r30 + 126));
    r0 = MemoryInline::FlatRead16((r27 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80130830:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80130758;
    }
}

loc_80130834:
{
    r5 = MemoryInline::FlatRead16((r27 + 2));
    r4 = r6;
    r3 = r28;
    r6 = r27;
    ctx->lr = 0x80130848u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8013129Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r27;
    ctx->lr = 0x80130850u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80130850:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801306BC func_801306BC preserves=true fpr_mask=0x00000000
