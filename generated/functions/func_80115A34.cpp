#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80115A34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80115A34;

loc_80115A34:
{
    MemoryInline::FlatWriteRam32((r1 + -1056), r1);
    r1 = (r1 + -1056);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1060), r0);
    MemoryInline::FlatWriteRam32((r1 + 1052), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 412));
}

loc_80115A50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80115AB0;
    }
}

loc_80115A54:
{
    r12 = MemoryInline::FlatRead32((r3 + 440));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80115A5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115A88;
    }
}

loc_80115A60:
{
    r4 = (r3 + 400);
    ctr = r12;
    ctx->lr = 0x80115A6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_80115A70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115A88;
    }
}

loc_80115A74:
{
    r3 = 1;
    r0 = 17;
    MemoryInline::FlatWrite32((r31 + 288), r3);
    MemoryInline::FlatWrite32((r31 + 60), r0);
    goto loc_80115BF4;
}

loc_80115A88:
{
    r0 = MemoryInline::FlatRead32((r31 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80115A90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115AB0;
    }
}

loc_80115A94:
{
    r0 = 5;
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80115AACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80111F94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80115BF4;
}

loc_80115AB0:
{
    r0 = MemoryInline::FlatRead32((r31 + 428));
}

loc_80115AB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80115B1C;
    }
}

loc_80115ABC:
{
    r12 = MemoryInline::FlatRead32((r31 + 440));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80115AC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115AF4;
    }
}

loc_80115AC8:
{
    r3 = r31;
    r4 = (r31 + 400);
    ctr = r12;
    ctx->lr = 0x80115AD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_80115ADC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115AF4;
    }
}

loc_80115AE0:
{
    r3 = 1;
    r0 = 17;
    MemoryInline::FlatWrite32((r31 + 288), r3);
    MemoryInline::FlatWrite32((r31 + 60), r0);
    goto loc_80115BF4;
}

loc_80115AF4:
{
    r0 = MemoryInline::FlatRead32((r31 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80115AFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115BF4;
    }
}

loc_80115B00:
{
    r0 = 5;
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80115B18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80111F94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80115BF4;
}

loc_80115B1C:
{
    r3 = MemoryInline::FlatRead32((r31 + 100));
    r0 = MemoryInline::FlatRead32((r31 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80115B28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80115B54;
    }
}

loc_80115B2C:
{
    r3 = r31;
    ctx->lr = 0x80115B34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80111DE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115B38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115BF4;
    }
}

loc_80115B3C:
{
    r3 = MemoryInline::FlatRead32((r31 + 100));
    r0 = MemoryInline::FlatRead32((r31 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80115B48:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80115BF4;
    }
}

loc_80115B4C:
{
    r3 = (r31 + 84);
    // inline leaf 0x80111DC4 (9 guest instruction(s))
}

loc_inl0_0x80111DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80111DD4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80111DDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    goto loc_inl0_cont_80111DC4;
}

loc_inl0_return:
{
}

loc_inl0_cont_80111DC4:
{
    // end of inlined leaf 0x80111DC4
}

loc_80115B54:
{
    r0 = 1025;
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x80115B6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8011218Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80115B74:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80115B8C;
    }
}

loc_80115B78:
{
    r3 = 1;
    r0 = 17;
    MemoryInline::FlatWrite32((r31 + 288), r3);
    MemoryInline::FlatWrite32((r31 + 60), r0);
    goto loc_80115BF4;
}

loc_80115B8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115B90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115BF4;
    }
}

loc_80115B94:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r31 + 192);
    r4 = (r1 + 12);
    ctx->lr = 0x80115BA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80111850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115BA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115BF4;
    }
}

loc_80115BAC:
{
    r3 = r31;
    ctx->lr = 0x80115BB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8011203Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115BB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115BD0;
    }
}

loc_80115BBC:
{
    r3 = 1;
    r0 = 17;
    MemoryInline::FlatWrite32((r31 + 288), r3);
    MemoryInline::FlatWrite32((r31 + 60), r0);
    goto loc_80115BF4;
}

loc_80115BD0:
{
    r0 = MemoryInline::FlatRead32((r31 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80115BD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115BF4;
    }
}

loc_80115BDC:
{
    r0 = 5;
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80115BF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80111F94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80115BF4:
{
    r0 = MemoryInline::FlatRead32((r1 + 1060));
    r31 = MemoryInline::FlatRead32((r1 + 1052));
    ctx->lr = r0;
    r1 = (r1 + 1056);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80115A34 func_80115A34 preserves=true fpr_mask=0x00000000
