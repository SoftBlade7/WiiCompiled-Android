#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AEA78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_807AEA78;

loc_807AEA78:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x808D0000u;
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = 0x80240000u;
    r4 = (r4 + 8968);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 23700));
    r7 = (r7 + 28832);
    r6 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r5 = MemoryInline::FlatRead32((r7 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r4 + 4), r6);
    MemoryInline::FlatWriteRam32((r4 + 8), r5);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    MemoryInline::FlatWriteRam32((r4 + 32), r6);
    MemoryInline::FlatWriteRam32((r4 + 36), r5);
    MemoryInline::FlatWriteRam32((r4 + 40), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRamFloat32((r3 + 13916), f1.d);
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000006 gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807AEA78 func_807AEA78 preserves=true fpr_mask=0x00000000
