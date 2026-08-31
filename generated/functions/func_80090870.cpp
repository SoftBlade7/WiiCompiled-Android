#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80090870(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80090870;

loc_80090870:
{
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 160), f1.d);
    MemoryInline::FlatWrite32((r3 + 168), r4);
    MemoryInline::FlatWrite8((r3 + 56), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 164), r0);
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80090870 func_80090870 preserves=true fpr_mask=0x00000000
