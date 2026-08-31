#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051E85C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8051E85C;

loc_8051E85C:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -832));
    r5 = 0;
    r4 = 7;
    r0 = (r0 & -129);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051E85C func_8051E85C preserves=true fpr_mask=0x00000000
