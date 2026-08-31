#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051E904(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8051E904;

loc_8051E904:
{
    r5 = MemoryInline::FlatRead8((r3 + 48));
    r8 = 0;
    r6 = 7;
    r7 = 0x80890000u;
    r5 = (r5 & -129);
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r7 + -832));
    r0 = (r5 & -65);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -828));
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051E904 func_8051E904 preserves=true fpr_mask=0x00000000
