#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FDA80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t ctr = ctx->ctr;

    goto loc_805FDA80;

loc_805FDA80:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 3428), r0);
    r6 = 0x80890000u;
    r4 = 67;
    r12 = MemoryInline::FlatRead32(r3);
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 25608));
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEF8E gpr_write=0x00001071 gpr_return=0x00000010 fpr_read=0xFFFFFFFD fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x805FDA80 func_805FDA80 preserves=true fpr_mask=0x00000000
