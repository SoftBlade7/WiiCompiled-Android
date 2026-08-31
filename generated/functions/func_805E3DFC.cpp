#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E3DFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E3DFC;

loc_805E3DFC:
{
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E3E04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E3EF0;
    }
}

loc_805E3E08:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_805E3E18:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_805E3E28;
    }
}

loc_805E3E1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_805E3E20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E3ED4;
    }
}

loc_805E3E24:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805E3E28:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805E3E30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E3E48;
    }
}

loc_805E3E34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805E3E38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E3E54;
    }
}

loc_805E3E3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805E3E40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E3E60;
    }
}

loc_805E3E44:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805E3E48:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805E3E54:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805E3E60:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_805E3E70:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_805E3E88;
    }
}

loc_805E3E74:
{
}

loc_805E3E78:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_805E3E90;
    }
}

loc_805E3E7C:
{
}

loc_805E3E80:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_805E3E9C;
    }
}

loc_805E3E84:
{
    goto loc_805E3EA4;
}

loc_805E3E88:
{
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_805E3EA4;
}

loc_805E3E90:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_805E3EA4;
}

loc_805E3E9C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_805E3EA4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E3EAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E3EBC;
    }
}

loc_805E3EB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805E3EB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E3EC8;
    }
}

loc_805E3EB8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805E3EBC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805E3EC8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805E3ED4:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 1;
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805E3EF0:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E3DFC func_805E3DFC preserves=true fpr_mask=0x00000000
