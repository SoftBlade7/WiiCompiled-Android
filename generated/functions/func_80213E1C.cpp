#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80213E1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80213E1C;

loc_80213E1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25880));
    r4 = 0x802A0000u;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r4 = (r4 + 10624);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80213E1C func_80213E1C preserves=true fpr_mask=0x00000000
