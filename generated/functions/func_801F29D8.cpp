#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F29D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;

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

    goto loc_801F29D8;

loc_801F29D8:
{
    r0 = 0;
    r10 = 0x80360000u;
    MemoryInline::FlatWrite32(r5, r0);
    r9 = 13;
    r10 = (r10 + -23936);
    r8 = 0;
    r0 = 0;
    r11 = 0;
    ctr = r9;
}

loc_801F29FC:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r9 = (r9_rot_2 & 524280);
    r9 = (r10 + r9);
    r9 = MemoryInline::FlatRead32((r9 + 216));
}

loc_801F2A0C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801F2A30;
    }
}

loc_801F2A10:
{
    r11 = (r11 + 1);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r9 = (r9_rot_3 & 524280);
    r9 = (r10 + r9);
    r9 = MemoryInline::FlatRead32((r9 + 216));
}

loc_801F2A24:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801F2A30;
    }
}

loc_801F2A28:
{
    r11 = (r11 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F29FC;
    }
}

loc_801F2A30:
{
    r9 = (r11 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
}

loc_801F2A38:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F2A44;
    }
}

loc_801F2A3C:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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

loc_801F2A44:
{
    r10 = 0x80360000u;
    r9 = 13;
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r11));
    r10 = (r10 + -23936);
    r12 = 0;
    ctr = r9;
}

loc_801F2A5C:
{
    r7 = (r12 & 65535);
    r7 = (r7 * 44);
    r11 = (r10 + r7);
    r7 = MemoryInline::FlatRead32((r11 + 1876));
    r9 = (r11 + 1876);
    r7 = (r7 & 1);
}

loc_801F2A74:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801F2A8C;
    }
}

loc_801F2A78:
{
}

loc_801F2A7C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_801F2AB4;
    }
}

loc_801F2A80:
{
    r8 = r9;
    r0 = r12;
    goto loc_801F2AB4;
}

loc_801F2A8C:
{
    r7 = MemoryInline::FlatRead16((r11 + 1888));
}

loc_801F2A94:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r7))) {
        goto loc_801F2AB4;
    }
}

loc_801F2A98:
{
    r7 = MemoryInline::FlatRead32((r11 + 1880));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r3));
}

loc_801F2AA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F2AB4;
    }
}

loc_801F2AA4:
{
    MemoryInline::FlatWrite32(r5, r9);
    r3 = 0;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r12));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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

loc_801F2AB4:
{
    r12 = (r12 + 1);
    r7 = (r12 & 65535);
    r7 = (r7 * 44);
    r11 = (r10 + r7);
    r7 = MemoryInline::FlatRead32((r11 + 1876));
    r9 = (r11 + 1876);
    r7 = (r7 & 1);
}

loc_801F2AD0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801F2AE8;
    }
}

loc_801F2AD4:
{
}

loc_801F2AD8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_801F2B10;
    }
}

loc_801F2ADC:
{
    r8 = r9;
    r0 = r12;
    goto loc_801F2B10;
}

loc_801F2AE8:
{
    r7 = MemoryInline::FlatRead16((r11 + 1888));
}

loc_801F2AF0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r7))) {
        goto loc_801F2B10;
    }
}

loc_801F2AF4:
{
    r7 = MemoryInline::FlatRead32((r11 + 1880));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r3));
}

loc_801F2AFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F2B10;
    }
}

loc_801F2B00:
{
    MemoryInline::FlatWrite32(r5, r9);
    r3 = 0;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r12));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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

loc_801F2B10:
{
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F2A5C;
    }
}

loc_801F2B18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_801F2B1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F2B28;
    }
}

loc_801F2B20:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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

loc_801F2B28:
{
    r7 = MemoryInline::FlatRead32(r8);
    r9 = 0x80360000u;
    r7 = (r7 | 1);
    MemoryInline::FlatWrite32(r8, r7);
    r7 = MemoryInline::FlatRead16((r9 + -23936));
    r7 = (r7 + 1);
    MemoryInline::FlatWriteRam16((r9 + -23936), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r8 + 4), r3);
    r3 = 0;
    MemoryInline::FlatWrite16((r8 + 12), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32(r5, r8);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001F89 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F29D8 func_801F29D8 preserves=true fpr_mask=0x00000000
