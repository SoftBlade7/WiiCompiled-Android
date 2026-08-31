#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072CAF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8072CAF4;

loc_8072CAF4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072CB1C:
{
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r30 = MemoryInline::FlatRead32((r4 + 332));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072CB3C;
    }
}

loc_8072CB28:
{
}

loc_8072CB2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8072CBC8;
    }
}

loc_8072CB30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8072CB34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072CC10;
    }
}

loc_8072CB38:
{
    goto loc_8072CC50;
}

loc_8072CB3C:
{
    r3 = r30;
    ctx->lr = 0x8072CB44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80733C60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20));
}

loc_8072CB48:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072CC50;
    }
}

loc_8072CB50:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8072CB68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r3));
}

loc_8072CB70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8072CBBC;
    }
}

loc_8072CB74:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8072CB8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808A0000u;
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r4 = (r4 + 9752);
    r4_addr_1 = (r4 + r30);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072CBA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072CBB0;
    }
}

loc_8072CBA4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_8072CC50;
}

loc_8072CBB0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_8072CC50;
}

loc_8072CBBC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    goto loc_8072CC50;
}

loc_8072CBC8:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = r30;
    ctx->lr = 0x8072CBDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80733CE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072CBE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072CC50;
    }
}

loc_8072CBE4:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072CBEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072CC50;
    }
}

loc_8072CBF0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 416), static_cast<uint8_t>(r0));
    r3 = 2;
    MemoryInline::FlatWrite32((r30 + 420), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 12), r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_8072CC50;
}

loc_8072CC10:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = r30;
    ctx->lr = 0x8072CC24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80733CE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072CC28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072CC50;
    }
}

loc_8072CC2C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072CC34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072CC50;
    }
}

loc_8072CC38:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 416), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 420), r3);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_8072CC50:
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072CAF4 func_8072CAF4 preserves=true fpr_mask=0x00000000
