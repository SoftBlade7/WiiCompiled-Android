#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80226438(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80226438;

loc_80226438:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25252));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25256));
    MemoryInline::FlatWrite32((r3 + 192), r0);
    MemoryInline::FlatWrite16((r3 + 196), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 200), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 204), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 208), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 212), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 216), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80226438 func_80226438 preserves=true fpr_mask=0x00000000
