#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80560C90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stbux_80560CEC_loc_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80560C90;

loc_80560C90:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->lr = 0x80560CB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80560AFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r5 = MemoryInline::FlatRead32((r30 + 20));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & 2040);
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 2040);
    r6 = (r4 + r3);
    r4_addr_0 = (r4 + r3);
    r4 = MemoryInline::FlatRead8(r4_addr_0);
    MemoryInline::FlatWrite8((r30 + 76), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8((r30 + 77), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r6 + 2));
    MemoryInline::FlatWrite8((r30 + 78), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWrite8((r30 + 79), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r5 + 16));
    addr_stbux_80560CEC_loc_0 = (r3 + r0);
    MemoryInline::FlatWrite8(addr_stbux_80560CEC_loc_0, static_cast<uint8_t>(r4));
    r3 = addr_stbux_80560CEC_loc_0;
    r0 = MemoryInline::FlatRead8((r30 + 77));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 78));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 79));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001E gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80560C90 func_80560C90 preserves=true fpr_mask=0x00000000
