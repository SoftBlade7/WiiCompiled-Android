#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011DF3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8011DF3C;

loc_8011DF3C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8011DF48:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r5;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011DFB8;
    }
}

loc_8011DF60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011DF74;
    }
}

loc_8011DF64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8011DF68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011DF9C;
    }
}

loc_8011DF6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011DF80;
    }
}

loc_8011DF70:
{
    goto loc_8011DFF0;
}

loc_8011DF74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_8011DF78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011DFF0;
    }
}

loc_8011DF7C:
{
    goto loc_8011DFD4;
}

loc_8011DF80:
{
    r12 = MemoryInline::FlatRead32((r31 + 2104));
    r3 = r31;
    r6 = MemoryInline::FlatRead32((r6 + 2108));
    r4 = 2;
    ctr = r12;
    ctx->lr = 0x8011DF98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8011DFF0;
}

loc_8011DF9C:
{
    r12 = MemoryInline::FlatRead32((r31 + 2104));
    r3 = r31;
    r6 = MemoryInline::FlatRead32((r6 + 2108));
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x8011DFB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8011DFF0;
}

loc_8011DFB8:
{
    r12 = MemoryInline::FlatRead32((r31 + 2104));
    r3 = r31;
    r6 = MemoryInline::FlatRead32((r6 + 2108));
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8011DFD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8011DFF0;
}

loc_8011DFD4:
{
    r12 = MemoryInline::FlatRead32((r31 + 2104));
    r3 = r31;
    r6 = MemoryInline::FlatRead32((r6 + 2108));
    r4 = 6;
    ctr = r12;
    ctx->lr = 0x8011DFECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8011E020;
}

loc_8011DFF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8011DFF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011E020;
    }
}

loc_8011DFF8:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead32((r31 + 2096));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8011E004:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011E020;
    }
}

loc_8011E008:
{
    r3 = MemoryInline::FlatRead16((r30 + 4));
    r0 = MemoryInline::FlatRead16((r31 + 2100));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8011E014:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011E020;
    }
}

loc_8011E018:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 2096), r0);
}

loc_8011E020:
{
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011DF3C func_8011DF3C preserves=true fpr_mask=0x00000000
