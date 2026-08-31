#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073999C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8073999C;

loc_8073999C:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = MemoryInline::FlatRead32((r4 + 2924));
    r6 = MemoryInline::FlatRead32((r4 + 2940));
}

loc_807399B0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807399C8;
    }
}

loc_807399B4:
{
}

loc_807399B8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_807399D4;
    }
}

loc_807399BC:
{
}

loc_807399C0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_807399E0;
    }
}

loc_807399C4:
{
    goto loc_807399E8;
}

loc_807399C8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_807399E8;
}

loc_807399D4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_807399E8;
}

loc_807399E0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 24), r0);
}

loc_807399E8:
{
    r4 = 0x809C0000u;
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_807399FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80739A08;
    }
}

loc_80739A00:
{
}

loc_80739A04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(7))) {
        goto loc_80739A0C;
    }
}

loc_80739A08:
{
    r0 = 1;
}

loc_80739A0C:
{
}

loc_80739A10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80739A48;
    }
}

loc_80739A14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80739A18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80739A28;
    }
}

loc_80739A1C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80739A28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_80739A2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80739A3C;
    }
}

loc_80739A30:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80739A3C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80739A48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80739A4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80739A5C;
    }
}

loc_80739A50:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80739A5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_80739A60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80739A70;
    }
}

loc_80739A64:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80739A70:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073999C func_8073999C preserves=true fpr_mask=0x00000000
