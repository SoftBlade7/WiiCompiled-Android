#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80170098(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f6 = ctx->fpr[6];

    goto loc_80170098;

loc_80170098:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26784));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26760));
    f6.d = f1.d;
    MemoryInline::FlatWriteFloat32((r30 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f6.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[6] = f6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x40000006 gpr_write=0xC0000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x0000004A fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80170098 func_80170098 preserves=true fpr_mask=0x00000000
