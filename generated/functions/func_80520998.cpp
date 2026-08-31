#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80520998(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_80520998;

loc_80520998:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x805209BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead8((r31 + 24));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -832));
    r6 = 0;
    r5 = 7;
    r4 = (r4 & -129);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r6));
    r3 = -1;
    r7 = MemoryInline::FlatRead32((r31 + 148));
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 24), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r7 + 8), r3);
    MemoryInline::FlatWrite16((r7 + 16), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r7 + 20), r0);
    r4 = MemoryInline::FlatRead32((r31 + 152));
    MemoryInline::FlatWrite32((r4 + 8), r3);
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r4 + 20), r0);
    r4 = MemoryInline::FlatRead32((r31 + 156));
    MemoryInline::FlatWrite32((r4 + 8), r3);
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r4 + 20), r0);
    MemoryInline::FlatWrite8((r31 + 166), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 80), static_cast<uint8_t>(r0));
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
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80520998 func_80520998 preserves=true fpr_mask=0x00000000
