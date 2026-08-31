#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018CCBC(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8018CCBC;

loc_8018CCBC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8018CCE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018CCF0;
    }
}

loc_8018CCE8:
{
    r3 = 0;
    goto loc_8018CDE8;
}

loc_8018CCF0:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -1380319232);
}

loc_8018CCFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20053))) {
        goto loc_8018CD40;
    }
}

loc_8018CD00:
{
    r0 = MemoryInline::FlatRead16((r4 + 12));
    r3 = MemoryInline::FlatRead16((r4 + 14));
    r4 = (r4 + r0);
    ctr = r3;
}

loc_8018CD14:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8018CDA8;
    }
}

loc_8018CD18:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -1179189248);
}

loc_8018CD24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20038))) {
        goto loc_8018CD30;
    }
}

loc_8018CD28:
{
    r5 = (r4 + 8);
    goto loc_8018CDA8;
}

loc_8018CD30:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8018CD18;
    }
}

loc_8018CD3C:
{
    goto loc_8018CDA8;
}

loc_8018CD40:
{
    r0 = MemoryInline::FlatRead16((r4 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(260));
}

loc_8018CD48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018CD74;
    }
}

loc_8018CD4C:
{
    r4 = 1380319232;
    r3 = r31;
    r4 = (r4 + 20052);
    r5 = 260;
    r6 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018ACB4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8018CD68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018CD9C;
    }
}

loc_8018CD6C:
{
    r3 = 0;
    goto loc_8018CDE8;
}

loc_8018CD74:
{
    r4 = 1380319232;
    r3 = r31;
    r4 = (r4 + 20052);
    r5 = 258;
    r6 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018ACB4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8018CD90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018CD9C;
    }
}

loc_8018CD94:
{
    r3 = 0;
    goto loc_8018CDE8;
}

loc_8018CD9C:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018CE00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    r5 = r3;
}

loc_8018CDA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8018CDAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018CDB8;
    }
}

loc_8018CDB0:
{
    r3 = 0;
    goto loc_8018CDE8;
}

loc_8018CDB8:
{
    r3 = r30;
    r4 = r31;
    // inline leaf 0x8018CFB0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r4);
    MemoryInline::FlatWrite32((r3 + 20), r5);
    // end of inlined leaf 0x8018CFB0
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x8018CDD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r4 = r3;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018C928u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = 1;
}

loc_8018CDE8:
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
    ctx->gpr[5] = r5;
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
// RECOMP_REGISTRATION base 0x8018CCBC func_8018CCBC preserves=true fpr_mask=0x00000000
