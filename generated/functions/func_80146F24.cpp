#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80146F24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80146F24;

loc_80146F24:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80340000u;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + -29200);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r0 = MemoryInline::FlatRead8((r4 + 110));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80146F4C:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r5));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80146F90;
    }
}

loc_80146F5C:
{
    r6 = MemoryInline::FlatRead8((r4 + 106));
    r5 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80146F68:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r6))) {
        goto loc_80146FA8;
    }
}

loc_80146F6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80146F70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80146F90;
    }
}

loc_80146F74:
{
    r4 = MemoryInline::FlatRead16((r4 + 108));
    r0 = MemoryInline::FlatRead16((r3 + 2));
}

loc_80146F80:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_80146FA8;
    }
}

loc_80146F84:
{
    r0 = MemoryInline::FlatRead16(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80146F8C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80146FA8;
    }
}

loc_80146F90:
{
    r4 = 0x80340000u;
    r0 = 255;
    r4 = (r4 + -29200);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r4 + 120), static_cast<uint8_t>(r0));
    goto loc_801470E8;
}

loc_80146FA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_80146FAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014702C;
    }
}

loc_80146FB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80146FC0;
    }
}

loc_80146FB4:
{
}

loc_80146FB8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80146FCC;
    }
}

loc_80146FBC:
{
    goto loc_801470A0;
}

loc_80146FC0:
{
}

loc_80146FC4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(4))) {
        goto loc_801470A0;
    }
}

loc_80146FC8:
{
    goto loc_80147068;
}

loc_80146FCC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
}

loc_80146FD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80146FFC;
    }
}

loc_80146FD4:
{
    r31 = 0x80340000u;
    r5 = (r1 + 12);
    r4 = (r31 + -29200);
    r3 = 128;
    ctx->lr = 0x80146FE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013D6D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r31 + -29200);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r4 + 110), static_cast<uint8_t>(r0));
    goto loc_801470A0;
}

loc_80146FFC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
}

loc_80147000:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801470A0;
    }
}

loc_80147004:
{
    r31 = 0x80340000u;
    r5 = (r1 + 12);
    r4 = (r31 + -29200);
    r3 = 128;
    ctx->lr = 0x80147018u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013D6D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r31 + -29200);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r4 + 110), static_cast<uint8_t>(r0));
    goto loc_801470A0;
}

loc_8014702C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80147030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147040;
    }
}

loc_80147034:
{
    r3 = (r1 + 12);
    ctx->lr = 0x8014703Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80146F24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801470A0;
}

loc_80147040:
{
    r31 = 0x80340000u;
    r5 = r3;
    r4 = (r31 + -29200);
    r3 = 128;
    ctx->lr = 0x80147054u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013D6D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r31 + -29200);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r4 + 110), static_cast<uint8_t>(r0));
    goto loc_801470A0;
}

loc_80147068:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8014706C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014707C;
    }
}

loc_80147070:
{
    r3 = (r1 + 12);
    ctx->lr = 0x80147078u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80146F24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801470A0;
}

loc_8014707C:
{
    r31 = 0x80340000u;
    r5 = r3;
    r4 = (r31 + -29200);
    r3 = 128;
    ctx->lr = 0x80147090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013D6D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r31 + -29200);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r4 + 110), static_cast<uint8_t>(r0));
}

loc_801470A0:
{
    r4 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_801470A8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801470B4;
    }
}

loc_801470AC:
{
    r3 = 1;
    goto loc_801470E8;
}

loc_801470B4:
{
    r3 = 0x80340000u;
    r0 = (r4 + 55);
    r3 = (r3 + -29200);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32((r3 + 196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801470CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801470E4;
    }
}

loc_801470D0:
{
    r4 = MemoryInline::FlatRead8((r3 + 111));
    r5 = (r1 + 8);
    r3 = 4;
    ctr = r12;
    ctx->lr = 0x801470E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801470E4:
{
    r3 = 0;
}

loc_801470E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80146F24 func_80146F24 preserves=true fpr_mask=0x00000000
