#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051EBA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8051EBA8;

loc_8051EBA8:
{
    r0 = MemoryInline::FlatRead8((r3 + 140));
    r6 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + -832));
    r4 = 0x80890000u;
    r9 = 0;
    r8 = 7;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -828));
    r11 = 0x808B0000u;
    r5 = MemoryInline::FlatRead8((r3 + 76));
    r10 = 0x808B0000u;
    r7 = MemoryInline::FlatRead8((r3 + 24));
    r6 = 0x808B0000u;
    r6 = (r6 + 12064);
    r11 = (r11 + 11992);
    r10 = (r10 + 12076);
    r7 = (r7 & -129);
    r0 = (r0 & -193);
    r4 = (r5 & -193);
    MemoryInline::FlatWrite32(r3, r11);
    MemoryInline::FlatWrite32((r3 + 4), r10);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r9));
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite32((r3 + 28), r6);
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r9));
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
    MemoryInline::FlatWrite8((r3 + 76), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 80), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite32((r3 + 84), r8);
    MemoryInline::FlatWrite8((r3 + 88), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite32((r3 + 92), r6);
    MemoryInline::FlatWrite16((r3 + 96), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r3 + 98), static_cast<uint16_t>(r9));
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 100), f1.d);
    MemoryInline::FlatWrite8((r3 + 116), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 117), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 132), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 128), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 136), f1.d);
    MemoryInline::FlatWrite8((r3 + 140), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051EBA8 func_8051EBA8 preserves=true fpr_mask=0x00000000
