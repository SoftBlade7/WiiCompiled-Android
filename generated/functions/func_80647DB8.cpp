#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80647DB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80647DB8;

loc_80647DB8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    r4 = -1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_80647DE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647E90;
    }
}

loc_80647DE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647E28;
    }
}

loc_80647DE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(125));
}

loc_80647DEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647E7C;
    }
}

loc_80647DF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647E1C;
    }
}

loc_80647DF4:
{
}

loc_80647DF8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(91))) {
        goto loc_80647E10;
    }
}

loc_80647DFC:
{
}

loc_80647E00:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(88))) {
        goto loc_80647E90;
    }
}

loc_80647E04:
{
}

loc_80647E08:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(85))) {
        goto loc_80647E64;
    }
}

loc_80647E0C:
{
    goto loc_80647E90;
}

loc_80647E10:
{
}

loc_80647E14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(94))) {
        goto loc_80647E90;
    }
}

loc_80647E18:
{
    goto loc_80647E64;
}

loc_80647E1C:
{
}

loc_80647E20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(127))) {
        goto loc_80647E90;
    }
}

loc_80647E24:
{
    goto loc_80647E84;
}

loc_80647E28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(161));
}

loc_80647E2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647E7C;
    }
}

loc_80647E30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647E4C;
    }
}

loc_80647E34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(135));
}

loc_80647E38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647E84;
    }
}

loc_80647E3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647E90;
    }
}

loc_80647E40:
{
}

loc_80647E44:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(133))) {
        goto loc_80647E90;
    }
}

loc_80647E48:
{
    goto loc_80647E6C;
}

loc_80647E4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(165));
}

loc_80647E50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647E74;
    }
}

loc_80647E54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647E90;
    }
}

loc_80647E58:
{
}

loc_80647E5C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(163))) {
        goto loc_80647E90;
    }
}

loc_80647E60:
{
    goto loc_80647E8C;
}

loc_80647E64:
{
    r4 = 65;
    goto loc_80647E90;
}

loc_80647E6C:
{
    r4 = 122;
    goto loc_80647E90;
}

loc_80647E74:
{
    r4 = 158;
    goto loc_80647E90;
}

loc_80647E7C:
{
    r4 = -1;
    goto loc_80647E90;
}

loc_80647E84:
{
    r4 = 122;
    goto loc_80647E90;
}

loc_80647E8C:
{
    r4 = 158;
}

loc_80647E90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80647E94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647EB8;
    }
}

loc_80647E98:
{
    r31 = 0x809C0000u;
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    ctx->lr = 0x80647EA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = 0;
    r5 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635AC8u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_80647EB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80647DB8 func_80647DB8 preserves=true fpr_mask=0x00000000
