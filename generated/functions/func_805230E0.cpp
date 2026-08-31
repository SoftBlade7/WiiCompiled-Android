#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805230E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805230E0;

loc_805230E0:
{
    r4 = 0x809C0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805230E8:
{
    r3 = MemoryInline::FlatRead32((r4 + -10484));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805230F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 16728));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805230F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80523118;
    }
}

loc_805230FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80523100:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80523118;
    }
}

loc_80523104:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80523108:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80523124;
    }
}

loc_8052310C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80523110:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80523130;
    }
}

loc_80523114:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80523118:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16728), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80523124:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 16728), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80523130:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16728), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805230E0 func_805230E0 preserves=true fpr_mask=0x00000000
