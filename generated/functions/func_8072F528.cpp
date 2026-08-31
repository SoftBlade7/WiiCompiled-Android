#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072F528(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8072F528;

loc_8072F528:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 280), r0);
    r5 = 0x808D0000u;
    r4 = 0x808A0000u;
    MemoryInline::FlatWrite32((r3 + 284), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 9792));
    f1.d = MemoryInline::FlatReadFloat32((r5 + -23652));
    MemoryInline::FlatWriteFloat32((r3 + 272), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 276), f0.d);
    MemoryInline::FlatWrite8((r3 + 296), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8072F528 func_8072F528 preserves=true fpr_mask=0x00000000
