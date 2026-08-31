#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806ABB1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806ABB1C;

loc_806ABB1C:
{
    r0 = MemoryInline::FlatRead8((r3 + 121));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806ABB24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806ABB28:
{
    r0 = MemoryInline::FlatRead8((r3 + 299));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806ABB30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806ABB38;
    }
}

loc_806ABB34:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_806ABB38:
{
    r4 = 0x808A0000u;
    r0 = 1;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1760));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -10480));
    MemoryInline::FlatWrite8((r3 + 121), static_cast<uint8_t>(r0));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_806ABB50:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_806ABB54:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806ABB5Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806ABB1C func_806ABB1C preserves=true fpr_mask=0x00000000
