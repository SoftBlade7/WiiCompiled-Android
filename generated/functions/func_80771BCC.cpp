#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80771BCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80771BCC;

loc_80771BCC:
{
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16060));
    r0 = (r0 | 8);
    MemoryInline::FlatWriteFloat32((r3 + 296), f0.d);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80771BCC func_80771BCC preserves=true fpr_mask=0x00000000
