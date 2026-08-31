#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806DDA54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806DDA54;

loc_806DDA54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806DDA58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806DDA64;
    }
}

loc_806DDA5C:
{
    r3 = r5;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_806DDA64:
{
    r4 = 0x808A0000u;
    r3 = r5;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 1112));
    MemoryInline::FlatWriteFloat32((r7 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 4), f0.d);
    MemoryInline::FlatWriteFloat32(r7, f0.d);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000B0 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806DDA54 func_806DDA54 preserves=true fpr_mask=0x00000000
