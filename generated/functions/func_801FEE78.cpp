#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FEE78(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FEE78;

loc_801FEE78:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_801FEE84:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 1;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801FEE9C;
    }
}

loc_801FEE94:
{
    r9 = 0;
    goto loc_801FEEA4;
}

loc_801FEE9C:
{
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r9 = MemoryInline::FlatRead32((r6 + 612));
}

loc_801FEEA4:
{
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r8 = MemoryInline::FlatRead16((r3 + 44));
    r10 = MemoryInline::FlatRead32((r6 + 608));
    r0 = (r0 + r4);
    r7 = MemoryInline::FlatRead8((r9 + 32));
    r8 = (r8 + r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r10));
}

loc_801FEEC4:
{
    r0 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r7));
    r7 = (r5 + r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FEF00;
    }
}

loc_801FEED0:
{
    r5 = MemoryInline::FlatRead16(r9);
    r0 = (r5 + -1);
    r0 = (r0 & r8);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FEEE8;
    }
}

loc_801FEEE0:
{
    MemoryInline::FlatWrite32((r3 + 36), r7);
    goto loc_801FEEF0;
}

loc_801FEEE8:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 36), r0);
}

loc_801FEEF0:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    goto loc_801FEF3C;
}

loc_801FEF00:
{
}

loc_801FEF04:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_801FEF28;
    }
}

loc_801FEF08:
{
    r5 = -1;
    r0 = 0;
}

loc_801FEF14:
{
    MemoryInline::FlatWrite32((r3 + 36), r5);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801FEF3C;
    }
}

loc_801FEF20:
{
    r31 = 0;
    goto loc_801FEF3C;
}

loc_801FEF28:
{
    r0 = -1;
    r31 = 0;
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r0 = MemoryInline::FlatRead32((r6 + 608));
    MemoryInline::FlatWrite32((r3 + 32), r0);
}

loc_801FEF3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FEF40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FEF4C;
    }
}

loc_801FEF44:
{
    r5 = 0;
    goto loc_801FEF54;
}

loc_801FEF4C:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r5 = MemoryInline::FlatRead32((r4 + 612));
}

loc_801FEF54:
{
    r6 = MemoryInline::FlatRead32((r3 + 32));
    r4 = r7;
    r0 = MemoryInline::FlatRead8((r5 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r5 = MemoryInline::FlatRead16(r5);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F62D4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = r31;
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800007FB gpr_write=0x800007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FEE78 func_801FEE78 preserves=true fpr_mask=0x00000000
