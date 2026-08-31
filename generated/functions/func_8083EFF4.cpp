#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083EFF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8083EFF4;

loc_8083EFF4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r30 = (r3 & 255);
    r29 = 0;
    r31 = 0;
    goto loc_8083F074;
}

loc_8083F028:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8083F030:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083F05C;
    }
}

loc_8083F034:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8083F048u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 2324));
    r4 = r3;
    r3 = (r0 + r31);
    // inline leaf 0x805F346C (10 guest instruction(s))
}

loc_inl1_0x805F346C:
{
}

loc_inl1_0x805F3470:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(131))) {
        goto loc_inl1_0x805F347C;
    }
}

loc_inl1_0x805F3474:
{
}

loc_inl1_0x805F3478:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(107))) {
        goto loc_inl1_0x805F3488;
    }
}

loc_inl1_0x805F347C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 384), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_805F346C;
}

loc_inl1_0x805F3488:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 384), static_cast<uint8_t>(r0));
}

loc_inl1_cont_805F346C:
{
    // end of inlined leaf 0x805F346C
    goto loc_8083F06C;
}

loc_8083F05C:
{
    r0 = MemoryInline::FlatRead32((r28 + 2324));
    r4 = MemoryInline::FlatRead32((r28 + 1004));
    r3 = (r0 + r31);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x805F346Cu>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_8083F06C:
{
    r31 = (r31 + 392);
    r29 = (r29 + 1);
}

loc_8083F074:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r30));
}

loc_8083F078:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8083F028;
    }
}

loc_8083F07C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8083EFF4 func_8083EFF4 preserves=true fpr_mask=0x00000000
