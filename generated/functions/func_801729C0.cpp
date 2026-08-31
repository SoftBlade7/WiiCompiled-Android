#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801729C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801729C0;

loc_801729C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = -872349696;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 97;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r5 + 124));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(22));
    r0_mrot_0 = (r0_rot_0 & 4194304);
    r0_mdest_0 = (r0 & -4194305);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r5 + 124), r0);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead32((r5 + 124));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80171C28u>(ctx);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r30));
    r0 = (r29 | 1744830464);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80171C28u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001E gpr_write=0xE0000023 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801729C0 func_801729C0 preserves=true fpr_mask=0x00000000
