#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006A240(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006A240;

loc_8006A240:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8006A248:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8006A24C:
{
    MemoryInline::FlatWriteFloat32((r3 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 120), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 124), f3.d);
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x0000000E fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006A240 func_8006A240 preserves=true fpr_mask=0x00000000
