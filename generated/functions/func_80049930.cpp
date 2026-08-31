#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049930(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80049930;

loc_80049930:
{
    r9 = MemoryInline::FlatRead32(r4);
    r8 = MemoryInline::FlatRead32((r4 + 4));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r6 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32(r3, r9);
    MemoryInline::FlatWrite32((r3 + 4), r8);
    MemoryInline::FlatWrite32((r3 + 8), r7);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    MemoryInline::FlatWrite32((r3 + 16), r4);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000003D1 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80049930 func_80049930 preserves=true fpr_mask=0x00000000
