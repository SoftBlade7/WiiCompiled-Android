#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80173498(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r10_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    goto loc_80173498;

loc_80173498:
{
    r7 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r7 + 328));
    r8 = MemoryInline::FlatRead32((r7 + 332));
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r10 = (r10_rot_0 & 2047);
    r9 = (r0 & 2047);
    r7 = (r10 + -342);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(20));
    r0 = (r0_rot_0 & 2047);
    MemoryInline::FlatWrite32(r3, r7);
    r7 = (r9 + -342);
    r3 = (r0 - r10);
    r0 = (r8 & 2047);
    MemoryInline::FlatWrite32(r4, r7);
    r4 = (r3 + 1);
    r3 = (r0 - r9);
    MemoryInline::FlatWrite32(r5, r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r6, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007C gpr_write=0x00000799 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80173498 func_80173498 preserves=true fpr_mask=0x00000000
