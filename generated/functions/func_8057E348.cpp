#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057E348(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8057E348;

loc_8057E348:
{
    r0 = MemoryInline::FlatRead16((r3 + 596));
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 6656));
    r5 = 0;
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r3 + 596), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteFloat32((r3 + 156), f0.d);
    MemoryInline::FlatWrite32((r3 + 204), r5);
    MemoryInline::FlatWrite32((r3 + 208), r5);
    MemoryInline::FlatWrite16((r3 + 252), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 256), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 254), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 258), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteFloat32((r3 + 260), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -524289);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -134217729);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -1048577);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -268435457);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWriteFloat32((r3 + 456), f0.d);
    MemoryInline::FlatWrite32((r3 + 204), r5);
    MemoryInline::FlatWrite16((r3 + 460), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057E348 func_8057E348 preserves=true fpr_mask=0x00000000
