#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80548AFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80548AFC;

loc_80548AFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 14340;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x80548B1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    r6 = -1;
    MemoryInline::FlatWrite32((r31 + 8), r6);
    r0 = 0;
    r4 = 0x80380000u;
    MemoryInline::FlatWrite32((r31 + 908), r6);
    r5 = (r0 | 39);
    r3 = 1380646912;
    MemoryInline::FlatWrite32((r31 + 1808), r6);
    r0 = (r3 + 18244);
    MemoryInline::FlatWrite32((r31 + 2708), r6);
    MemoryInline::FlatWrite32((r31 + 3608), r6);
    MemoryInline::FlatWrite32((r31 + 4508), r6);
    MemoryInline::FlatWrite32((r31 + 5408), r6);
    MemoryInline::FlatWrite32((r31 + 6308), r6);
    MemoryInline::FlatWrite32((r31 + 7208), r6);
    MemoryInline::FlatWrite32((r31 + 8108), r6);
    MemoryInline::FlatWrite32((r31 + 4), r5);
    r3 = MemoryInline::FlatRead16((r31 + 14338));
    r4 = MemoryInline::FlatRead32((r4 + 24576));
    r4 = MemoryInline::FlatRead32((r4 + 132));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
    r3_mrot_0 = (r3_rot_0 & 61440);
    r3_mdest_0 = (r3 & -61441);
    r3 = (r3_mdest_0 | r3_mrot_0);
    MemoryInline::FlatWrite16((r31 + 14338), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32(r31, r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800000CA gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80548AFC func_80548AFC preserves=true fpr_mask=0x00000000
