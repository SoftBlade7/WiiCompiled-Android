#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054A658(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8054A658;

loc_8054A658:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r7 = 4;
    r5 = 1;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 65536;
    r0 = (r31 + -29504);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctr = r7;
}

loc_8054A67C:
{
    r8 = (r6 & 255);
    r9 = MemoryInline::FlatRead32((r3 + 20));
    r7 = (r8 * r0);
    r7 = (r9 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 8));
    r7 = (r7 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(20548));
}

loc_8054A698:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054A724;
    }
}

loc_8054A69C:
{
    r7 = (r31 + -27664);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8054A6A4:
{
    r7 = (r8 * r7);
    r7 = (r3 + r7);
    r7 = (r7 + 56);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054A6E0;
    }
}

loc_8054A6B4:
{
    r7 = (r7 + 65536);
    r5 = 0;
    r10 = MemoryInline::FlatRead32((r7 + -28676));
    r9 = MemoryInline::FlatRead32((r7 + -28672));
    r8 = MemoryInline::FlatRead32((r7 + -28668));
    r7 = MemoryInline::FlatRead32((r7 + -28664));
    MemoryInline::FlatWrite32((r4 + 4), r10);
    MemoryInline::FlatWrite32((r4 + 8), r9);
    MemoryInline::FlatWrite32((r4 + 12), r8);
    MemoryInline::FlatWrite32((r4 + 16), r7);
    goto loc_8054A724;
}

loc_8054A6E0:
{
    r30 = (r7 + 65536);
    r10 = MemoryInline::FlatRead32((r4 + 4));
    r9 = MemoryInline::FlatRead32((r30 + -28676));
    r8 = MemoryInline::FlatRead32((r4 + 8));
    r12 = (r10 | r9);
    r7 = MemoryInline::FlatRead32((r30 + -28672));
    r10 = MemoryInline::FlatRead32((r4 + 12));
    r11 = (r8 | r7);
    r9 = MemoryInline::FlatRead32((r30 + -28668));
    r8 = MemoryInline::FlatRead32((r4 + 16));
    r7 = MemoryInline::FlatRead32((r30 + -28664));
    r9 = (r10 | r9);
    MemoryInline::FlatWrite32((r4 + 4), r12);
    r7 = (r8 | r7);
    MemoryInline::FlatWrite32((r4 + 8), r11);
    MemoryInline::FlatWrite32((r4 + 12), r9);
    MemoryInline::FlatWrite32((r4 + 16), r7);
}

loc_8054A724:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8054A67C;
    }
}

loc_8054A72C:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054A658 func_8054A658 preserves=true fpr_mask=0x00000000
