#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A0F40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A0F40;

loc_801A0F40:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = (r4 + -32);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 * 12);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r5 = MemoryInline::FlatRead32((r13 + -25420));
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r31 = (r5 + r0);
}

loc_801A0F68:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801A0F78;
    }
}

loc_801A0F70:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r6, r0);
}

loc_801A0F78:
{
    r5 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801A0F80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A0F8C;
    }
}

loc_801A0F84:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    goto loc_801A0F94;
}

loc_801A0F8C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
}

loc_801A0F94:
{
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0D9Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r31 + 4), r3);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800020FB gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A0F40 func_801A0F40 preserves=true fpr_mask=0x00000000
