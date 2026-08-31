#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A23D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_mtcrf_preserve_0 = 0;
    uint32_t r3_mtcrf_src_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A23D8;

loc_801A23D8:
{
    r5 = ctx->msr;
    r5 = (r5 | 8192);
    ctx->msr = r5;
    // isync @ 0x801A23E4 (no-op)
    r5 = MemoryInline::FlatRead32((r4 + 412));
    r5 = (r5 | 8192);
    ctx->srr1 = r5;
    r3 = 0x80000000u;
    r5 = MemoryInline::FlatRead32((r3 + 216));
    MemoryInline::FlatWriteRam32((r3 + 216), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r4));
}

loc_801A2404:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A2418;
    }
}

loc_801A2408:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801A240C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A2414;
    }
}

loc_801A2410:
{
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1D40u>(ctx);
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_801A2414:
{
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1C1Cu>(ctx);
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_801A2418:
{
    r3 = MemoryInline::FlatRead32((r4 + 128));
    r3_mtcrf_src_0 = (r3 & -1);
    r3_mtcrf_preserve_0 = (cr & 0);
    cr = (r3_mtcrf_preserve_0 | r3_mtcrf_src_0);
    r3 = MemoryInline::FlatRead32((r4 + 132));
    ctx->lr = r3;
    r3 = MemoryInline::FlatRead32((r4 + 408));
    ctx->srr0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 136));
    ctr = r3;
    r3 = MemoryInline::FlatRead32((r4 + 140));
    xer = r3;
    r3 = MemoryInline::FlatRead16((r4 + 418));
    r3 = (r3 & -3);
    MemoryInline::FlatWrite16((r4 + 418), static_cast<uint16_t>(r3));
    r5 = MemoryInline::FlatRead32((r4 + 20));
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000030 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801A23D8 func_801A23D8 preserves=true fpr_mask=0x00000000
