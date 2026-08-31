#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80866170(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80866170;

loc_80866170:
{
    r4 = 0x808B0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -1200));
    r4 = -1;
    MemoryInline::FlatWrite32((r3 + 264), r4);
    MemoryInline::FlatWrite32((r3 + 268), r0);
    MemoryInline::FlatWriteFloat32((r3 + 272), f0.d);
    MemoryInline::FlatWrite8((r3 + 280), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 276), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80866170 func_80866170 preserves=true fpr_mask=0x00000000
