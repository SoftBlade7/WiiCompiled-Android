#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067F2DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8067F2DC;

loc_8067F2DC:
{
    r5 = 0x808A0000u;
    r4 = 473;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -11848));
    MemoryInline::FlatWriteFloat32((r3 + 432), f1.d);
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x808204FCu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFCF gpr_write=0x00001038 gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8067F2DC func_8067F2DC preserves=true fpr_mask=0x00000000
