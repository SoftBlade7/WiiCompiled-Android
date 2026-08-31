#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806ED3E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t ctr = ctx->ctr;

    goto loc_806ED3E4;

loc_806ED3E4:
{
    r4 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 2816));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEF gpr_write=0x00001010 gpr_return=0x00000010 fpr_read=0xFFFFFFF0 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x806ED3E4 func_806ED3E4 preserves=true fpr_mask=0x00000000
