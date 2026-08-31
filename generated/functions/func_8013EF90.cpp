#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013EF90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013EF90;

loc_8013EF90:
{
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    r0 = MemoryInline::FlatRead16((r4 + 6238));
}

loc_8013EFA0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8013EFB8;
    }
}

loc_8013EFA4:
{
    r0 = MemoryInline::FlatRead16((r4 + 6236));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8013EFAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013EFB8;
    }
}

loc_8013EFB0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8013EFB8:
{
    r0 = MemoryInline::FlatRead16((r4 + 6290));
}

loc_8013EFC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8013EFD8;
    }
}

loc_8013EFC4:
{
    r0 = MemoryInline::FlatRead16((r4 + 6288));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8013EFCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013EFD8;
    }
}

loc_8013EFD0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8013EFD8:
{
    r0 = MemoryInline::FlatRead16((r4 + 6342));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8013EFE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013EFF8;
    }
}

loc_8013EFE4:
{
    r0 = MemoryInline::FlatRead16((r4 + 6340));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8013EFEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013EFF8;
    }
}

loc_8013EFF0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8013EFF8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013EF90 func_8013EF90 preserves=true fpr_mask=0x00000000
