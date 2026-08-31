#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001D3F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001D3F0;

loc_8001D3F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -27512));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
}

loc_8001D418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001D424;
    }
}

loc_8001D41C:
{
    r4 = (r1 + 8);
    goto loc_8001D448;
}

loc_8001D424:
{
    r7 = MemoryInline::FlatRead8((r1 + 11));
    r4 = (r1 + 12);
    r6 = MemoryInline::FlatRead8((r1 + 10));
    r5 = MemoryInline::FlatRead8((r1 + 9));
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
}

loc_8001D448:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r31 = 4;
    r30 = 0;
    r0 = (2176 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(2176) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
}

loc_8001D45C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_8001D468;
    }
}

loc_8001D460:
{
    r30 = 769;
    r31 = r0;
}

loc_8001D468:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_8001D46C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001D480;
    }
}

loc_8001D470:
{
    r3 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    goto loc_8001D490;
}

loc_8001D480:
{
    r3 = (r3 + r5);
    r5 = r31;
    r3 = (r3 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001CB6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001D490:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = r30;
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    MemoryInline::FlatWrite32((r29 + 4), r0);
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0003FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001D3F0 func_8001D3F0 preserves=true fpr_mask=0x00000000
