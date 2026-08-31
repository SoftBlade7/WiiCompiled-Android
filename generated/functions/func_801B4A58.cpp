#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B4A58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B4A58;

loc_801B4A58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r6 = MemoryInline::FlatRead32((r13 + -25084));
    MemoryInline::FlatWrite32((r6 + 1712), r3);
    r6 = MemoryInline::FlatRead32((r13 + -25084));
    MemoryInline::FlatWrite32((r6 + 1716), r4);
    r4 = MemoryInline::FlatRead32((r13 + -25084));
    MemoryInline::FlatWrite32((r4 + 1720), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25084));
    r31 = MemoryInline::FlatRead16((r4 + 1688));
    r30 = MemoryInline::FlatRead16((r4 + 1684));
    r4 = ctx->gqr[5];
    r0 = ctx->gqr[6];
    r3 = 7;
    r3 = (r3 | 458752);
    MemoryInline::FlatWrite32((r13 + -25072), r4);
    MemoryInline::FlatWrite32((r13 + -25076), r0);
    ctx->gqr[5] = r3;
    r3 = 15620;
    r3 = (r3 | 1023672320);
    ctx->gqr[6] = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B4810u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -25084));
    r0 = MemoryInline::FlatRead16((r4 + 1682));
}

loc_801B4AC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(512))) {
        goto loc_801B4AF0;
    }
}

loc_801B4ACC:
{
}

loc_801B4AD0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(448))) {
        goto loc_801B4AF0;
    }
}

loc_801B4AD4:
{
    goto loc_801B4AE4;
}

loc_801B4AD8:
{
    ctx->lr = 0x801B4ADCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B4B5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r31 + 16);
    r31 = (r0 & 65535);
}

loc_801B4AE4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r30));
}

loc_801B4AE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801B4AD8;
    }
}

loc_801B4AEC:
{
    goto loc_801B4B34;
}

loc_801B4AF0:
{
}

loc_801B4AF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(640))) {
        goto loc_801B4B2C;
    }
}

loc_801B4AF8:
{
}

loc_801B4AFC:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(480))) {
        goto loc_801B4B2C;
    }
}

loc_801B4B00:
{
    goto loc_801B4B10;
}

loc_801B4B04:
{
    ctx->lr = 0x801B4B08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B56C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r31 + 16);
    r31 = (r0 & 65535);
}

loc_801B4B10:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r30));
}

loc_801B4B14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801B4B04;
    }
}

loc_801B4B18:
{
    goto loc_801B4B34;
}

loc_801B4B20:
{
    ctx->lr = 0x801B4B24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B5918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r31 + 16);
    r31 = (r0 & 65535);
}

loc_801B4B2C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r30));
}

loc_801B4B30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801B4B20;
    }
}

loc_801B4B34:
{
    r4 = MemoryInline::FlatRead32((r13 + -25072));
    r0 = MemoryInline::FlatRead32((r13 + -25076));
    ctx->gqr[5] = r4;
    ctx->gqr[6] = r0;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC03FFF gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0xFE000FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B4A58 func_801B4A58 preserves=true fpr_mask=0x00000000
