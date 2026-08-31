#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F2C80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F2C80;

loc_801F2C80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2C84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F2C90;
    }
}

loc_801F2C88:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801F2C90:
{
    r9 = (r3 & 255);
    r0 = (r3 & 65280);
}

loc_801F2C9C:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(26))) {
        goto loc_801F2CA8;
    }
}

loc_801F2CA0:
{
}

loc_801F2CA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1024))) {
        goto loc_801F2CB0;
    }
}

loc_801F2CA8:
{
    r4 = 1;
    goto loc_801F2D3C;
}

loc_801F2CB0:
{
    r4 = (r9 * 44);
    r5 = 0x80360000u;
    r0 = 13;
    r5 = (r5 + -23936);
    r4 = (r5 + r4);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r8 = (r8_rot_0 & 65535);
    r7 = (r4 + 1876);
    r6 = 0;
    ctr = r0;
}

loc_801F2CD4:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & 524280);
    r10 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r10 + 216));
}

loc_801F2CE4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r7))) {
        goto loc_801F2CF4;
    }
}

loc_801F2CE8:
{
    r4 = MemoryInline::FlatRead32((r10 + 212));
}

loc_801F2CF0:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r4))) {
        goto loc_801F2D20;
    }
}

loc_801F2CF4:
{
    r6 = (r6 + 1);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r4 = (r4_rot_3 & 524280);
    r10 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r10 + 216));
}

loc_801F2D08:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r7))) {
        goto loc_801F2D18;
    }
}

loc_801F2D0C:
{
    r4 = MemoryInline::FlatRead32((r10 + 212));
}

loc_801F2D14:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r4))) {
        goto loc_801F2D20;
    }
}

loc_801F2D18:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F2CD4;
    }
}

loc_801F2D20:
{
    r6 = (r6 & 65535);
    r5 = 26;
    r4 = (r6 + -26);
    r5 = (r6 | ~r5);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_5 & 2147483647);
    r4 = (r5 - r4);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_6 & 1);
}

loc_801F2D3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F2D40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2D4C;
    }
}

loc_801F2D44:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801F2D4C:
{
    r4 = (r9 * 44);
    r5 = 0x80360000u;
    r5 = (r5 + -23936);
    r4 = (r5 + r4);
    r6 = MemoryInline::FlatRead32((r4 + 1876));
    r8 = (r4 + 1876);
    r4 = (r6 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F2D68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F2D74;
    }
}

loc_801F2D6C:
{
    r3 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801F2D74:
{
    r4 = (r6 & 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
}

loc_801F2D7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F2D88;
    }
}

loc_801F2D80:
{
    r3 = 13;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801F2D88:
{
    r4 = 13;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_0 & 65535);
    r6 = 0;
    ctr = r4;
}

loc_801F2D98:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & 524280);
    r4 = (r5 + r3);
    r3 = MemoryInline::FlatRead32((r4 + 216));
}

loc_801F2DA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r8))) {
        goto loc_801F2DB8;
    }
}

loc_801F2DAC:
{
    r3 = MemoryInline::FlatRead32((r4 + 212));
}

loc_801F2DB4:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r3))) {
        goto loc_801F2DE4;
    }
}

loc_801F2DB8:
{
    r6 = (r6 + 1);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r3 = (r3_rot_3 & 524280);
    r4 = (r5 + r3);
    r3 = MemoryInline::FlatRead32((r4 + 216));
}

loc_801F2DCC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r8))) {
        goto loc_801F2DDC;
    }
}

loc_801F2DD0:
{
    r3 = MemoryInline::FlatRead32((r4 + 212));
}

loc_801F2DD8:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r3))) {
        goto loc_801F2DE4;
    }
}

loc_801F2DDC:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F2D98;
    }
}

loc_801F2DE4:
{
    r3 = (r6 & 65535);
}

loc_801F2DEC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(26))) {
        goto loc_801F2DF8;
    }
}

loc_801F2DF0:
{
    r3 = 1;
    goto loc_801F2E00;
}

loc_801F2DF8:
{
    r0 = r6;
    r3 = 0;
}

loc_801F2E00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2E04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_801F2E08:
{
    r3 = MemoryInline::FlatRead16((r8 + 14));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_801F2E10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F2E30;
    }
}

loc_801F2E14:
{
    r3 = MemoryInline::FlatRead32(r8);
    r4 = 0x80360000u;
    r3 = (r3 & -2);
    MemoryInline::FlatWrite32(r8, r3);
    r3 = MemoryInline::FlatRead16((r4 + -23936));
    r3 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r4 + -23936), static_cast<uint16_t>(r3));
}

loc_801F2E30:
{
    r4 = MemoryInline::FlatRead16((r8 + 14));
    r3 = 0x80360000u;
    r3 = (r3 + -23936);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 524280);
    r4 = (r4 + -1);
    r5 = 0;
    MemoryInline::FlatWrite16((r8 + 14), static_cast<uint16_t>(r4));
    r4 = (r3 + r0);
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 216), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F2C80 func_801F2C80 preserves=true fpr_mask=0x00000000
