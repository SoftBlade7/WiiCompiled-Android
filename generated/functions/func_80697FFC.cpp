#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80697FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80697FFC;

loc_80697FFC:
{
    r0 = MemoryInline::FlatRead8((r3 + 144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80698004:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80698008:
{
    r0 = MemoryInline::FlatRead32((r3 + 292));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80698010:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80698018;
    }
}

loc_80698014:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80698028u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80698018:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8069801C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80698020:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80698F70u>(ctx);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80697FFC func_80697FFC preserves=true fpr_mask=0x00000000
