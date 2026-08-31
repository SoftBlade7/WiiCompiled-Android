#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A71E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A71E4;

loc_807A71E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r3 + 120), r0);
    r0 = (r0 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A720C:
{
    r6 = (r6 + 7408);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A7234;
    }
}

loc_807A7228:
{
    MemoryInline::FlatWrite32((r3 + 360), r5);
    MemoryInline::FlatWrite32((r3 + 364), r4);
    MemoryInline::FlatWrite32((r3 + 368), r0);
}

loc_807A7234:
{
    r7 = 0x808D0000u;
    r7 = (r7 + 7420);
    r6 = MemoryInline::FlatRead32(r7);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r7 + 4));
    r4 = (r4 + 12104);
    r0 = (r0 * 116);
    MemoryInline::FlatWrite32((r3 + 376), r5);
    MemoryInline::FlatWrite32((r3 + 372), r6);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r3 + 380), r0);
    r0 = MemoryInline::FlatRead8((r4 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A726C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A7288;
    }
}

loc_807A7270:
{
    r3 = (r3 + 16);
    r4 = (r31 + 32);
    ctx->lr = 0x807A727Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B9DD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r0 = (r0 | 16777216);
    MemoryInline::FlatWrite32((r31 + 120), r0);
}

loc_807A7288:
{
    r3 = MemoryInline::FlatRead32((r31 + 164));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE003FDF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807A71E4 func_807A71E4 preserves=true fpr_mask=0x00000000
