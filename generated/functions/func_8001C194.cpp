#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001C194(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001C194;

loc_8001C194:
{
    MemoryInline::FlatWriteRam32((r1 + -1296), r1);
    r1 = (r1 + -1296);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1300), r0);
    MemoryInline::FlatWriteRam32((r1 + 1292), r31);
    ctx->lr = 0x8001C1A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000B7ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001C1AC:
{
    r31 = r3;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8001C1BC;
    }
}

loc_8001C1B4:
{
    r3 = 0;
    goto loc_8001C1F4;
}

loc_8001C1BC:
{
    r4 = r31;
    r3 = (r1 + 8);
    ctx->lr = 0x8001C1C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000B850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001C1CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001C1E8;
    }
}

loc_8001C1D0:
{
    r3 = 0x802A0000u;
    r5 = r31;
    r3 = (r3 + 18864);
    r4 = (r1 + 8);
    ctx->lr = 0x8001C1E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BD68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8001C1F0;
}

loc_8001C1E8:
{
    r3 = -10009;
    goto loc_8001C1F4;
}

loc_8001C1F0:
{
    r3 = r31;
}

loc_8001C1F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 1300));
    r31 = MemoryInline::FlatRead32((r1 + 1292));
    ctx->lr = r0;
    r1 = (r1 + 1296);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC003FFB gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001C194 func_8001C194 preserves=true fpr_mask=0x00000000
