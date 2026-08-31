#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801014EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801014EC;

loc_801014EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(30));
}

loc_801014F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80101584;
    }
}

loc_801014F4:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80101584:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1900));
}

loc_80101588:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80101594;
    }
}

loc_8010158C:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80101594:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2079));
}

loc_80101598:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801015A4;
    }
}

loc_8010159C:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_801015A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801015CC;
    }
}

loc_801015A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_801015AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801015B8;
    }
}

loc_801015B0:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_801015B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801015CC;
    }
}

loc_801015BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_801015C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801015CC;
    }
}

loc_801015C4:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_801015CC:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801014EC func_801014EC preserves=true fpr_mask=0x00000000
