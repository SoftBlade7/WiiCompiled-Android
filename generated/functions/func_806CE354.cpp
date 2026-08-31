#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CE354(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CE354;

loc_806CE354:
{
    r0 = MemoryInline::FlatRead8((r3 + 357));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CE35C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CE368;
    }
}

loc_806CE360:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 328));
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CBE48u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_806CE368:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806CE36C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CE378;
    }
}

loc_806CE370:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 328));
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CBE48u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_806CE378:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_806CE37C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CE388;
    }
}

loc_806CE380:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 332));
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CBE48u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_806CE388:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806CE38C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806CE390:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 336));
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CBE48u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x00001009 gpr_return=0x00000008 fpr_read=0xFFFFFFFD fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x806CE354 func_806CE354 preserves=true fpr_mask=0x00000000
