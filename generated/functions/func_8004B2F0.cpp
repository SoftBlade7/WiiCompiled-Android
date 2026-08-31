#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B2F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004B2F0;

loc_8004B2F0:
{
    r3 = MemoryInline::FlatRead32((r4 + 36));
    r0 = MemoryInline::FlatRead8((r3 + 330));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004B2FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004B32C;
    }
}

loc_8004B300:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8004B304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004B338;
    }
}

loc_8004B308:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8004B30C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004B344;
    }
}

loc_8004B310:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8004B314:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004B350;
    }
}

loc_8004B318:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8004B31C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004B35C;
    }
}

loc_8004B320:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8004B324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004B368;
    }
}

loc_8004B328:
{
    goto loc_8004B3A8;
}

loc_8004B32C:
{
    r3 = 0x80040000u;
    r3 = (r3 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8004B338:
{
    r3 = 0x80040000u;
    r3 = (r3 + 480);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8004B344:
{
    r3 = 0x80040000u;
    r3 = (r3 + 672);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8004B350:
{
    r3 = 0x80050000u;
    r3 = (r3 + -19520);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8004B35C:
{
    r3 = 0x80040000u;
    r3 = (r3 + 11072);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8004B368:
{
    r0 = MemoryInline::FlatRead8((r3 + 334));
    r0 = (r0 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8004B374:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004B384;
    }
}

loc_8004B378:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8004B37C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004B390;
    }
}

loc_8004B380:
{
    goto loc_8004B39C;
}

loc_8004B384:
{
    r3 = 0x80050000u;
    r3 = (r3 + -18608);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8004B390:
{
    r3 = 0x80050000u;
    r3 = (r3 + -17904);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8004B39C:
{
    r3 = 0x80050000u;
    r3 = (r3 + -19232);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8004B3A8:
{
    r3 = 0x80040000u;
    r3 = (r3 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004B2F0 func_8004B2F0 preserves=true fpr_mask=0x00000000
