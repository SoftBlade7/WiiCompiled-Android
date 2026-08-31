#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054DF6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8054DF6C;

loc_8054DF6C:
{
    r4 = 0x80890000u;
    r0 = 255;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 3748));
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 34), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    r3 = 1;
    // inline leaf 0x80565654 (4 guest instruction(s))
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 6224));
    MemoryInline::FlatWrite8((r4 + 136), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x80565654
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054DF6C func_8054DF6C preserves=true fpr_mask=0x00000000
