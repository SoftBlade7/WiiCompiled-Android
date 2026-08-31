#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80240F68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80240F68;

loc_80240F68:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead16((r13 + -27720));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80240F7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80240F9C;
    }
}

loc_80240F80:
{
    ctx->lr = 0x80240F84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80240FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    cr = ctx->cr;
    ctx->lr = 0x80240F88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    InvokeDirectCpu<0x802411C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    cr = ctx->cr;
    ctx->lr = 0x80240F8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    InvokeDirectCpu<0x802410ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x80240F90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80241240u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x80240F94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    InvokeDirectCpu<0x802412C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    cr = ctx->cr;
    ctx->lr = 0x80240F98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80241380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x80240F9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80241530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    cr = ctx->cr;
}

loc_80240F9C:
{
    ctx->lr = 0x80240FA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x802415E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFED06 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80240F68 func_80240F68 preserves=true fpr_mask=0x00000000
