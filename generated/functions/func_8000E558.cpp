#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000E558(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8000E558;

loc_8000E558:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 28));
    r0 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r0 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E5D0;
    }
}

loc_8000E584:
{
    r12 = MemoryInline::FlatRead32((r30 + 64));
    r4 = r5;
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r5 = (r30 + 40);
    r3 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r30 + 72));
    ctr = r12;
    ctx->lr = 0x8000E5A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8000E5A8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8000E5B4;
    }
}

loc_8000E5AC:
{
    r0 = MemoryInline::FlatRead32((r30 + 40));
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8000E5B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000E5B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E5C0;
    }
}

loc_8000E5BC:
{
    goto loc_8000E5F8;
}

loc_8000E5C0:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r30 + 24), r0);
}

loc_8000E5D0:
{
    r4 = MemoryInline::FlatRead32((r30 + 24));
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r6 = MemoryInline::FlatRead32((r30 + 28));
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r4 & r0);
    MemoryInline::FlatWrite32((r30 + 36), r6);
    r0 = (r5 - r0);
    MemoryInline::FlatWrite32((r30 + 40), r0);
    MemoryInline::FlatWrite32((r30 + 52), r4);
}

loc_8000E5F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8000E558 func_8000E558 preserves=true fpr_mask=0x00000000
