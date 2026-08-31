#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80199358(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80199358;

loc_80199358:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80199378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80199384;
    }
}

loc_8019937C:
{
    r3 = (r3 + 32);
    ctx->lr = 0x80199384u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7EE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80199384:
{
    r5 = MemoryInline::FlatRead32((r30 + 64));
}

loc_8019938C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80199398;
    }
}

loc_80199390:
{
    r31 = 0;
    goto loc_80199400;
}

loc_80199398:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r3 = (r5 + r3);
    r3 = (r3 + 16);
}

loc_801993AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801993B8;
    }
}

loc_801993B0:
{
    r31 = 0;
    goto loc_80199400;
}

loc_801993B8:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_801993C4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801993D0;
    }
}

loc_801993C8:
{
    MemoryInline::FlatWrite32((r4 + 12), r3);
    goto loc_801993D4;
}

loc_801993D0:
{
    MemoryInline::FlatWrite32((r30 + 60), r3);
}

loc_801993D4:
{
}

loc_801993D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801993E4;
    }
}

loc_801993DC:
{
    MemoryInline::FlatWrite32((r3 + 8), r4);
    goto loc_801993E8;
}

loc_801993E4:
{
    MemoryInline::FlatWrite32((r30 + 64), r4);
}

loc_801993E8:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r3 = (r3 + 16);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    r31 = (r0 - r30);
}

loc_80199400:
{
    r0 = MemoryInline::FlatRead32((r30 + 56));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80199408:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80199414;
    }
}

loc_8019940C:
{
    r3 = (r30 + 32);
    ctx->lr = 0x80199414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80199414:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80199358 func_80199358 preserves=true fpr_mask=0x00000000
