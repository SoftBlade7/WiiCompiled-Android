#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808638E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808638E8;

loc_808638E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808638EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863920;
    }
}

loc_808638F0:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_808638F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863908;
    }
}

loc_808638FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_80863900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863914;
    }
}

loc_80863904:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80863908:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80863914:
{
    r0 = 19;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80863920:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8086382Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808638E8 func_808638E8 preserves=true fpr_mask=0x00000000
