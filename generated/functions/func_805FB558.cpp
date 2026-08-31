#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FB558(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_805FB558;

loc_805FB558:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r5 = 0x808C0000u;
    r5 = (r5 + -24800);
    r0 = 9;
    r7 = (r1 + 4);
    r6 = (r5 + -4);
    ctr = r0;
}

loc_805FB574:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805FB574;
    }
}

loc_805FB588:
{
    r5 = MemoryInline::FlatRead32((r3 + 156));
    r0 = (r1 + 8);
    r6 = MemoryInline::FlatRead32((r3 + 168));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r5 = (r4 * 36);
    r4 = (r6 * 12);
    r0 = (r0 + r5);
    r0 = (r4 + r0);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805FB558 func_805FB558 preserves=true fpr_mask=0x00000000
