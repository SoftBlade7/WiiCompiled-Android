#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A0404(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    int32_t r4_ea_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A0404;

loc_801A0404:
{
    // nop
    r3 = ctx->msr;
    r3 = (r3 | 48);
    ctx->srr1 = r3;
    r3 = 0;
    r4_ea_0 = 212;
    r4 = MemoryInline::FlatRead32(r4_ea_0);
    r5 = (r5 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801A0420:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A0434;
    }
}

loc_801A0424:
{
    r5 = 0x801A0000u;
    r5 = (r5 + 1096);
    ctx->srr0 = r5;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801A0434:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & 1020);
    r5 = MemoryInline::FlatRead32((r5 + 12288));
    ctx->srr0 = r5;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000028 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A0404 func_801A0404 preserves=true fpr_mask=0x00000000
