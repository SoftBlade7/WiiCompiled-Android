#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80109B40(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80109B40;

loc_80109B40:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80109B4C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80109B64;
    }
}

loc_80109B5C:
{
    r3 = 1;
    goto loc_80109C08;
}

loc_80109B64:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
    MemoryInline::FlatWrite32((r3 + 24), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80109B70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80109B7C;
    }
}

loc_80109B74:
{
    r3 = 1;
    goto loc_80109C08;
}

loc_80109B7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80109B80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80109B8C;
    }
}

loc_80109B84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80109B88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80109B94;
    }
}

loc_80109B8C:
{
    r5 = 0;
    r6 = 0;
}

loc_80109B94:
{
    r7 = MemoryInline::FlatRead32((r3 + 36));
    r8 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r7 + 1);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r3 = r31;
    r7 = MemoryInline::FlatRead32((r8 + 28));
    r0 = (r7 + 1);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    r12 = MemoryInline::FlatRead32((r31 + 40));
    ctr = r12;
    ctx->lr = 0x80109BC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80109BE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80109C04;
    }
}

loc_80109BEC:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80109BF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80109C04;
    }
}

loc_80109BF8:
{
    ctx->lr = 0x80109BFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8010E110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_80109C08;
}

loc_80109C04:
{
    r3 = 1;
}

loc_80109C08:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
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
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80109B40 func_80109B40 preserves=true fpr_mask=0x00000000
