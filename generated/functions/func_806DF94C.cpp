#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806DF94C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806DF94C;

loc_806DF94C:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806DF954:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806DF958:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081FCECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEF gpr_write=0x00001011 gpr_return=0x00000010 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x806DF94C func_806DF94C preserves=true fpr_mask=0x00000000
