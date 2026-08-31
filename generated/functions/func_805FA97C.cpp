#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FA97C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805FA97C;

loc_805FA97C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r5 = (r4 * 36);
}

loc_805FA988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FA9A4;
    }
}

loc_805FA98C:
{
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FA998:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FA9A4;
    }
}

loc_805FA99C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805FA9A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805FA9AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FA9C8;
    }
}

loc_805FA9B0:
{
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FA9BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FA9C8;
    }
}

loc_805FA9C0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805FA9C8:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_805FA9D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FA9EC;
    }
}

loc_805FA9D4:
{
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FA9E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FA9EC;
    }
}

loc_805FA9E4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805FA9EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_805FA9F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FAA10;
    }
}

loc_805FA9F8:
{
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FAA04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FAA10;
    }
}

loc_805FAA08:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805FAA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_805FAA18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FAA34;
    }
}

loc_805FAA1C:
{
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FAA28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FAA34;
    }
}

loc_805FAA2C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805FAA34:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_805FAA3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FAA58;
    }
}

loc_805FAA40:
{
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FAA4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FAA58;
    }
}

loc_805FAA50:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805FAA58:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FAA60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FAA7C;
    }
}

loc_805FAA64:
{
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FAA70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FAA7C;
    }
}

loc_805FAA74:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805FAA7C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805FA97C func_805FA97C preserves=true fpr_mask=0x00000000
