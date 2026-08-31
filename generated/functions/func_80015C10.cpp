#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80015C10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r6_sthu_ea_0 = 0;
    uint32_t r6_sthu_ea_1 = 0;
    uint32_t r6_sthu_ea_10 = 0;
    uint32_t r6_sthu_ea_2 = 0;
    uint32_t r6_sthu_ea_3 = 0;
    uint32_t r6_sthu_ea_4 = 0;
    uint32_t r6_sthu_ea_5 = 0;
    uint32_t r6_sthu_ea_6 = 0;
    uint32_t r6_sthu_ea_7 = 0;
    uint32_t r6_sthu_ea_8 = 0;
    uint32_t r6_sthu_ea_9 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80015C10;

loc_80015C10:
{
}

loc_80015C14:
{
    r8 = 0;
    MemoryInline::FlatWrite16((r4 + -2), static_cast<uint16_t>(r8));
    r6 = (r4 + -2);
    r7 = 0;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80015C54;
    }
}

loc_80015C28:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80015C30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80015C54;
    }
}

loc_80015C34:
{
    r0 = MemoryInline::FlatRead8((r5 + 3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80015C3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80015C4C;
    }
}

loc_80015C40:
{
    r0 = MemoryInline::FlatRead16((r5 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(111));
}

loc_80015C48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80015C54;
    }
}

loc_80015C4C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80015C54:
{
    r9 = MemoryInline::FlatRead16((r5 + 6));
}

loc_80015C5C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(100))) {
        goto loc_80015C8C;
    }
}

loc_80015C60:
{
}

loc_80015C64:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(105))) {
        goto loc_80015C8C;
    }
}

loc_80015C68:
{
}

loc_80015C6C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(111))) {
        goto loc_80015CB0;
    }
}

loc_80015C70:
{
}

loc_80015C74:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(117))) {
        goto loc_80015CC0;
    }
}

loc_80015C78:
{
}

loc_80015C7C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(120))) {
        goto loc_80015CD0;
    }
}

loc_80015C80:
{
}

loc_80015C84:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(88))) {
        goto loc_80015CD0;
    }
}

loc_80015C88:
{
    goto loc_80015CDC;
}

loc_80015C8C:
{
}

loc_80015C90:
{
    r0 = 10;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80015CDC;
    }
}

loc_80015C98:
{
    r8 = (r3 + -2147483648);
}

loc_80015CA0:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(0))) {
        goto loc_80015CA8;
    }
}

loc_80015CA4:
{
    r3 = (0 - r3);
}

loc_80015CA8:
{
    r8 = 1;
    goto loc_80015CDC;
}

loc_80015CB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 8;
    goto loc_80015CDC;
}

loc_80015CC0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 10;
    goto loc_80015CDC;
}

loc_80015CD0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 16;
}

loc_80015CDC:
{
    r9 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r9 = (r9 * r0);
    r11 = (r3 - r9);
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80015CF0:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(10))) {
        goto loc_80015CFC;
    }
}

loc_80015CF4:
{
    r11 = (r11 + 48);
    goto loc_80015D14;
}

loc_80015CFC:
{
    r9 = MemoryInline::FlatRead16((r5 + 6));
    r10 = (r11 + 55);
}

loc_80015D08:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(120))) {
        goto loc_80015D10;
    }
}

loc_80015D0C:
{
    r10 = (r11 + 87);
}

loc_80015D10:
{
    r11 = r10;
}

loc_80015D14:
{
}

loc_80015D18:
{
    MemoryInline::FlatWrite16((r6 + -2), static_cast<uint16_t>(r11));
    r6 = (r6 + -2);
    r7 = (r7 + 1);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80015CDC;
    }
}

loc_80015D28:
{
}

loc_80015D2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_80015D54;
    }
}

loc_80015D30:
{
    r3 = MemoryInline::FlatRead8((r5 + 3));
}

loc_80015D38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80015D54;
    }
}

loc_80015D3C:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_80015D44:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(48))) {
        goto loc_80015D54;
    }
}

loc_80015D48:
{
    r3 = 48;
    r6_sthu_ea_1 = (r6 + -2);
    MemoryInline::FlatWrite16(r6_sthu_ea_1, static_cast<uint16_t>(r3));
    r6 = r6_sthu_ea_1;
    r7 = (r7 + 1);
}

loc_80015D54:
{
    r3 = MemoryInline::FlatRead8(r5);
}

loc_80015D5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_80015DA8;
    }
}

loc_80015D60:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
}

loc_80015D68:
{
    MemoryInline::FlatWrite32((r5 + 12), r3);
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80015D7C;
    }
}

loc_80015D70:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
}

loc_80015D78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80015D88;
    }
}

loc_80015D7C:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r3 + -1);
    MemoryInline::FlatWrite32((r5 + 12), r3);
}

loc_80015D88:
{
}

loc_80015D8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_80015DA8;
    }
}

loc_80015D90:
{
    r3 = MemoryInline::FlatRead8((r5 + 3));
}

loc_80015D98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80015DA8;
    }
}

loc_80015D9C:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r3 + -2);
    MemoryInline::FlatWrite32((r5 + 12), r3);
}

loc_80015DA8:
{
    r4 = (r4 - r6);
    r9 = MemoryInline::FlatRead32((r5 + 12));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r3 = (r3 + r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 1);
    r3 = (r9 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(509));
}

loc_80015DC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80015DD0;
    }
}

loc_80015DC8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80015DD0:
{
    r4 = 48;
    goto loc_80015DE0;
}

loc_80015DD8:
{
    r6_sthu_ea_4 = (r6 + -2);
    MemoryInline::FlatWrite16(r6_sthu_ea_4, static_cast<uint16_t>(r4));
    r6 = r6_sthu_ea_4;
    r7 = (r7 + 1);
}

loc_80015DE0:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80015DE8:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r3))) {
        goto loc_80015DD8;
    }
}

loc_80015DEC:
{
}

loc_80015DF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_80015E10;
    }
}

loc_80015DF4:
{
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_80015DFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80015E10;
    }
}

loc_80015E00:
{
    r3 = MemoryInline::FlatRead16((r5 + 6));
    r0 = 48;
    MemoryInline::FlatWrite16((r6 + -2), static_cast<uint16_t>(r3));
    r6_sthu_ea_5 = (r6 + -4);
    MemoryInline::FlatWrite16(r6_sthu_ea_5, static_cast<uint16_t>(r0));
    r6 = r6_sthu_ea_5;
}

loc_80015E10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80015E14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80015E24;
    }
}

loc_80015E18:
{
    r0 = 45;
    r6_sthu_ea_7 = (r6 + -2);
    MemoryInline::FlatWrite16(r6_sthu_ea_7, static_cast<uint16_t>(r0));
    r6 = r6_sthu_ea_7;
    goto loc_80015E4C;
}

loc_80015E24:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80015E2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015E3C;
    }
}

loc_80015E30:
{
    r0 = 43;
    r6_sthu_ea_8 = (r6 + -2);
    MemoryInline::FlatWrite16(r6_sthu_ea_8, static_cast<uint16_t>(r0));
    r6 = r6_sthu_ea_8;
    goto loc_80015E4C;
}

loc_80015E3C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80015E40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015E4C;
    }
}

loc_80015E44:
{
    r0 = 32;
    r6_sthu_ea_9 = (r6 + -2);
    MemoryInline::FlatWrite16(r6_sthu_ea_9, static_cast<uint16_t>(r0));
    r6 = r6_sthu_ea_9;
}

loc_80015E4C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FD9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80015C10 func_80015C10 preserves=true fpr_mask=0x00000000
