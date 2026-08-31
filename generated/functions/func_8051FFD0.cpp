#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051FFD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t ctr = ctx->ctr;

    goto loc_8051FFD0;

loc_8051FFD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x808B0000u;
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r8 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -832));
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -828));
    r12 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r11 = 0;
    r10 = 7;
    r8 = (r8 + 12064);
    r7 = MemoryInline::FlatRead8((r3 + 76));
    r6 = (r6 + 11992);
    r0 = MemoryInline::FlatRead8((r3 + 140));
    r31 = (r31 + 12076);
    r7 = (r7 & -129);
    r9 = MemoryInline::FlatRead8((r3 + 24));
    MemoryInline::FlatWrite32(r3, r6);
    r5 = (r0 & -193);
    r9 = (r9 & -129);
    r12 = (r12 + 11848);
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 76), static_cast<uint8_t>(r7));
    r6 = (r7 & -65);
    r30 = r3;
    MemoryInline::FlatWrite32((r3 + 4), r31);
    r4 = 0;
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r11));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r11));
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite32((r3 + 28), r8);
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r11));
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r11));
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
    MemoryInline::FlatWrite8((r3 + 76), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 80), static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite32((r3 + 84), r10);
    MemoryInline::FlatWrite8((r3 + 88), static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite32((r3 + 92), r8);
    MemoryInline::FlatWrite16((r3 + 96), static_cast<uint16_t>(r11));
    MemoryInline::FlatWrite16((r3 + 98), static_cast<uint16_t>(r11));
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 100), f1.d);
    MemoryInline::FlatWrite8((r3 + 116), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r3 + 117), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 132), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 128), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 136), f1.d);
    MemoryInline::FlatWrite8((r3 + 140), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32(r3, r12);
    MemoryInline::FlatWrite32((r3 + 156), r0);
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x805200FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r3 = r30;
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE00E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFC fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8051FFD0 func_8051FFD0 preserves=true fpr_mask=0x00000000
