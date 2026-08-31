#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D255C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805D255C;

loc_805D255C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 3;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = -1;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r6 = r29;
    ctr = r0;
}

loc_805D258C:
{
    r0 = MemoryInline::FlatRead32(r6);
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D25A4;
    }
}

loc_805D259C:
{
    r30 = r7;
    goto loc_805D26AC;
}

loc_805D25A4:
{
    r0 = MemoryInline::FlatRead32((r6 + 472));
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead32((r6 + 476));
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D25C0;
    }
}

loc_805D25B8:
{
    r30 = r7;
    goto loc_805D26AC;
}

loc_805D25C0:
{
    r0 = MemoryInline::FlatRead32((r6 + 944));
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead32((r6 + 948));
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D25DC;
    }
}

loc_805D25D4:
{
    r30 = r7;
    goto loc_805D26AC;
}

loc_805D25DC:
{
    r0 = MemoryInline::FlatRead32((r6 + 1416));
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead32((r6 + 1420));
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D25F8;
    }
}

loc_805D25F0:
{
    r30 = r7;
    goto loc_805D26AC;
}

loc_805D25F8:
{
    r0 = MemoryInline::FlatRead32((r6 + 1888));
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead32((r6 + 1892));
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D2614;
    }
}

loc_805D260C:
{
    r30 = r7;
    goto loc_805D26AC;
}

loc_805D2614:
{
    r0 = MemoryInline::FlatRead32((r6 + 2360));
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead32((r6 + 2364));
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D2630;
    }
}

loc_805D2628:
{
    r30 = r7;
    goto loc_805D26AC;
}

loc_805D2630:
{
    r0 = MemoryInline::FlatRead32((r6 + 2832));
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead32((r6 + 2836));
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D264C;
    }
}

loc_805D2644:
{
    r30 = r7;
    goto loc_805D26AC;
}

loc_805D264C:
{
    r0 = MemoryInline::FlatRead32((r6 + 3304));
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead32((r6 + 3308));
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D2668;
    }
}

loc_805D2660:
{
    r30 = r7;
    goto loc_805D26AC;
}

loc_805D2668:
{
    r0 = MemoryInline::FlatRead32((r6 + 3776));
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead32((r6 + 3780));
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D2684;
    }
}

loc_805D267C:
{
    r30 = r7;
    goto loc_805D26AC;
}

loc_805D2684:
{
    r0 = MemoryInline::FlatRead32((r6 + 4248));
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead32((r6 + 4252));
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D26A0;
    }
}

loc_805D2698:
{
    r30 = r7;
    goto loc_805D26AC;
}

loc_805D26A0:
{
    r6 = (r6 + 4720);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805D258C;
    }
}

loc_805D26AC:
{
    r31 = (r30 * 472);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32(r4);
    r5 = r4;
    r4 = (r30 & 255);
    r7 = (r3 + r31);
    MemoryInline::FlatWrite32((r7 + 4), r6);
    r3 = (r7 + 8);
    MemoryInline::FlatWrite32(r7, r0);
    ctx->lr = 0x805D26D4u;
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
    InvokeDirectCpu<0x80519704u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r29 + r31);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 464), r0);
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001A gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805D255C func_805D255C preserves=true fpr_mask=0x00000000
