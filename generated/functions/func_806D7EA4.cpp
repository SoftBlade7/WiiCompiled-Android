#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D7EA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t ctr = ctx->ctr;

    goto loc_806D7EA4;

loc_806D7EA4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 152);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite8((r3 + 445), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 544), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 545), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 448), r0);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806D7EECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteFloat32((r30 + 512), f0.d);
    r3 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 22600));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 22604));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 384));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 376));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 380));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 120));
    MemoryInline::FlatWriteFloat32((r30 + 532), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 524), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 528), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r30 + 520), f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 452), f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 516), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806D7EA4 func_806D7EA4 preserves=true fpr_mask=0x00000000
