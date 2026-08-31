#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80710308(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t ctr = ctx->ctr;

    goto loc_80710308;

loc_80710308:
{
    r5 = 0x808A0000u;
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 7816));
    r6 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 7808));
    r4 = (r3 + 24);
    MemoryInline::FlatWriteFloat32((r3 + 32), f1.d);
    r5 = 274;
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    r3 = MemoryInline::FlatRead32((r6 + 10392));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 180));
    ctr = r12;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEF8F gpr_write=0x00001078 gpr_return=0x00000018 fpr_read=0xFFFFFFFC fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80710308 func_80710308 preserves=true fpr_mask=0x00000000
