#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040080(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80040080;

loc_80040080:
{
    r3 = MemoryInline::FlatRead32((r4 + 36));
    r0 = MemoryInline::FlatRead8((r3 + 330));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004008C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800400B4;
    }
}

loc_80040090:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80040094:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800400C0;
    }
}

loc_80040098:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8004009C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800400CC;
    }
}

loc_800400A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_800400A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800400D8;
    }
}

loc_800400A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_800400AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800400E4;
    }
}

loc_800400B0:
{
    goto loc_800400F0;
}

loc_800400B4:
{
    r3 = 0x80040000u;
    r3 = (r3 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800400C0:
{
    r3 = 0x80040000u;
    r3 = (r3 + 480);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800400CC:
{
    r3 = 0x80040000u;
    r3 = (r3 + 672);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800400D8:
{
    r3 = 0x80040000u;
    r3 = (r3 + 704);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800400E4:
{
    r3 = 0x80040000u;
    r3 = (r3 + 992);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800400F0:
{
    r3 = 0x80040000u;
    r3 = (r3 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000011 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80040080 func_80040080 preserves=true fpr_mask=0x00000000
