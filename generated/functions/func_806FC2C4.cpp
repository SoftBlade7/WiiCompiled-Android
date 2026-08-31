#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FC2C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FC2C4;

loc_806FC2C4:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FC2CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC2D8;
    }
}

loc_806FC2D0:
{
    r4 = 0;
    ctx->lr = 0x806FC2D8u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FC2D8:
{
    r4 = MemoryInline::FlatRead8((r30 + 20));
    r3 = r30;
    r4 = (r4 + 645);
    ctx->lr = 0x806FC2E8u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCBA0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    cr = ctx->cr;
    xer = ctx->xer;
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r30 = ctx->gpr[30];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FC2C4 func_806FC2C4 preserves=true fpr_mask=0x00000000
