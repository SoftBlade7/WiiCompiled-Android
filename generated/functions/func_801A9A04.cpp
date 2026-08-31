#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A9A04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A9A04;

loc_801A9A04:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 712));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801A9A28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A9B9C;
    }
}

loc_801A9A2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A9A40;
    }
}

loc_801A9A30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801A9A34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A9A4C;
    }
}

loc_801A9A38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A9B90;
    }
}

loc_801A9A3C:
{
    goto loc_801A9B9C;
}

loc_801A9A40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_801A9A44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A9B9C;
    }
}

loc_801A9A48:
{
    goto loc_801A9AB8;
}

loc_801A9A4C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A9960u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x80340000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r3 + 30640);
    MemoryInline::FlatWrite32((r30 + 720), r31);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r30 + 732), r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801A9A70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A9A7C;
    }
}

loc_801A9A74:
{
    MemoryInline::FlatWrite32(r3, r30);
    goto loc_801A9A80;
}

loc_801A9A7C:
{
    MemoryInline::FlatWrite32((r4 + 736), r30);
}

loc_801A9A80:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 740), r4);
    r4 = MemoryInline::FlatRead32((r30 + 732));
    r3 = 1;
    MemoryInline::FlatWrite32((r30 + 736), r0);
    MemoryInline::FlatWrite32((r4 + 4), r30);
    r0 = MemoryInline::FlatRead32((r30 + 720));
    r4 = MemoryInline::FlatRead32((r13 + -25312));
    r0_subfic_ra_1 = r0;
    r0 = (31 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r13 + -25312), r0);
    MemoryInline::FlatWrite32((r13 + -25316), r3);
    goto loc_801A9B9C;
}

loc_801A9AB8:
{
    r6 = MemoryInline::FlatRead32((r3 + 736));
    r7 = MemoryInline::FlatRead32((r3 + 740));
}

loc_801A9AC4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801A9AD4;
    }
}

loc_801A9AC8:
{
    r5 = MemoryInline::FlatRead32((r3 + 732));
    MemoryInline::FlatWrite32((r5 + 4), r7);
    goto loc_801A9AD8;
}

loc_801A9AD4:
{
    MemoryInline::FlatWrite32((r6 + 740), r7);
}

loc_801A9AD8:
{
}

loc_801A9ADC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801A9AEC;
    }
}

loc_801A9AE0:
{
    r5 = MemoryInline::FlatRead32((r3 + 732));
    MemoryInline::FlatWrite32(r5, r6);
    goto loc_801A9AF0;
}

loc_801A9AEC:
{
    MemoryInline::FlatWrite32((r7 + 736), r6);
}

loc_801A9AF0:
{
    MemoryInline::FlatWrite32((r3 + 720), r4);
    r5 = MemoryInline::FlatRead32((r3 + 732));
    r6 = MemoryInline::FlatRead32(r5);
    goto loc_801A9B04;
}

loc_801A9B00:
{
    r6 = MemoryInline::FlatRead32((r6 + 736));
}

loc_801A9B04:
{
}

loc_801A9B08:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801A9B1C;
    }
}

loc_801A9B0C:
{
    r4 = MemoryInline::FlatRead32((r6 + 720));
    r0 = MemoryInline::FlatRead32((r3 + 720));
}

loc_801A9B18:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_801A9B00;
    }
}

loc_801A9B1C:
{
}

loc_801A9B20:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801A9B54;
    }
}

loc_801A9B24:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_801A9B2C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801A9B38;
    }
}

loc_801A9B30:
{
    MemoryInline::FlatWrite32(r5, r3);
    goto loc_801A9B3C;
}

loc_801A9B38:
{
    MemoryInline::FlatWrite32((r4 + 736), r3);
}

loc_801A9B3C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 740), r4);
    r4 = MemoryInline::FlatRead32((r3 + 732));
    MemoryInline::FlatWrite32((r3 + 736), r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    goto loc_801A9B7C;
}

loc_801A9B54:
{
    MemoryInline::FlatWrite32((r3 + 736), r6);
    r4 = MemoryInline::FlatRead32((r6 + 740));
    MemoryInline::FlatWrite32((r6 + 740), r3);
}

loc_801A9B64:
{
    MemoryInline::FlatWrite32((r3 + 740), r4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801A9B78;
    }
}

loc_801A9B6C:
{
    r4 = MemoryInline::FlatRead32((r3 + 732));
    MemoryInline::FlatWrite32(r4, r3);
    goto loc_801A9B7C;
}

loc_801A9B78:
{
    MemoryInline::FlatWrite32((r4 + 736), r3);
}

loc_801A9B7C:
{
    r3 = MemoryInline::FlatRead32((r3 + 752));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A9B84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A9B9C;
    }
}

loc_801A9B88:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_801A9BA0;
}

loc_801A9B90:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25316), r0);
    MemoryInline::FlatWrite32((r3 + 720), r4);
}

loc_801A9B9C:
{
    r3 = 0;
}

loc_801A9BA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00020FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801A9A04 func_801A9A04 preserves=true fpr_mask=0x00000000
