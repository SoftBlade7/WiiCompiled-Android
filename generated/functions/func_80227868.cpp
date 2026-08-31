#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80227868(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80227868;

loc_80227868:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r1 + 16);
    r6 = (r1 + 12);
    r7 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    r4 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80227CB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = r31;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f5.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f6.d = MemoryInline::FlatReadFloat32((r30 + 28));
    // inline leaf 0x8006A560 (16 guest instruction(s))
}

loc_inl0_0x8006A560:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x8006A568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8006A56C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 168), r0);
    MemoryInline::FlatWriteFloat32((r3 + 188), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 192), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 196), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 200), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f6.d);
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & -241);
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    goto loc_inl0_cont_8006A560;
}

loc_inl0_return:
{
}

loc_inl0_cont_8006A560:
{
    // end of inlined leaf 0x8006A560
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000211E gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80227868 func_80227868 preserves=true fpr_mask=0x00000000
