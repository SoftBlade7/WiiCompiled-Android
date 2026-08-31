#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A80F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A80F4;

loc_801A80F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_801A8124:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A8168;
    }
}

loc_801A8128:
{
    r4 = MemoryInline::FlatRead32((r29 + 12));
    MemoryInline::FlatWrite32((r29 + 8), r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    r4 = MemoryInline::FlatRead32((r3 + 760));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801A8140:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A814C;
    }
}

loc_801A8144:
{
    MemoryInline::FlatWrite32((r3 + 756), r29);
    goto loc_801A8150;
}

loc_801A814C:
{
    MemoryInline::FlatWrite32((r4 + 16), r29);
}

loc_801A8150:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 20), r4);
    r30 = 1;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    MemoryInline::FlatWrite32((r3 + 760), r29);
    goto loc_801A8188;
}

loc_801A8168:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801A816C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A8184;
    }
}

loc_801A8170:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r30 = 1;
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_801A8188;
}

loc_801A8184:
{
    r30 = 0;
}

loc_801A8188:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001B gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A80F4 func_801A80F4 preserves=true fpr_mask=0x00000000
