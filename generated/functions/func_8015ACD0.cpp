#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015ACD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8015ACD0;

loc_8015ACD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x80340000u;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 4;
    r3 = (r3 + -24768);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r3 + 60);
    ctr = r0;
}

loc_8015ACF8:
{
    r0 = MemoryInline::FlatRead8(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015AD00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015AD20;
    }
}

loc_8015AD04:
{
    r3 = r31;
    r4 = 0;
    r5 = 1144;
    ctx->lr = 0x8015AD14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 24), r31);
    r3 = r31;
    goto loc_8015AD30;
}

loc_8015AD20:
{
    r4 = (r4 + 1);
    r31 = (r31 + 1144);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015ACF8;
    }
}

loc_8015AD2C:
{
    r3 = 0;
}

loc_8015AD30:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800000D3 gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8015ACD0 func_8015ACD0 preserves=true fpr_mask=0x00000000
