#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DDF44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mrot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DDF44;

loc_801DDF44:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r5 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDF4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDF58;
    }
}

loc_801DDF50:
{
    r0 = (r5 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDF54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDF60;
    }
}

loc_801DDF58:
{
    r3 = -7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801DDF60:
{
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDF64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DDF70;
    }
}

loc_801DDF68:
{
    r3 = -4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801DDF70:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r4_mrot_0 = (r0 & -65536);
    r4_mdest_0 = (r4 & 65535);
    r4 = (r4_mdest_0 | r4_mrot_0);
    MemoryInline::FlatWrite32((r3 + 20), r4);
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DDF44 func_801DDF44 preserves=true fpr_mask=0x00000000
