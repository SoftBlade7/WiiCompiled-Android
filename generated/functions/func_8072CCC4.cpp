#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072CCC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8072CCC4;

loc_8072CCC4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r5 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072CCF4:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
    r31 = MemoryInline::FlatRead32((r5 + 332));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072CD1C;
    }
}

loc_8072CD00:
{
}

loc_8072CD04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8072CDD4;
    }
}

loc_8072CD08:
{
}

loc_8072CD0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8072CED4;
    }
}

loc_8072CD10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8072CD14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072CFD0;
    }
}

loc_8072CD18:
{
    goto loc_8072D1BC;
}

loc_8072CD1C:
{
    r3 = r31;
    ctx->lr = 0x8072CD24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80733C60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20));
}

loc_8072CD28:
{
    r28 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D1BC;
    }
}

loc_8072CD30:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8072CD48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r3));
}

loc_8072CD50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8072CDC8;
    }
}

loc_8072CD54:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8072CD6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 12), r3);
    r3 = 0x809C0000u;
    r4 = 100;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x808D0000u;
    r0 = MemoryInline::FlatRead16((r4 + -25096));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8072CD8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072CDBC;
    }
}

loc_8072CD90:
{
    r3 = 0x808A0000u;
    r3 = (r3 + 9752);
    r3_addr_1 = (r3 + r28);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072CDA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072CDB0;
    }
}

loc_8072CDA4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_8072D1BC;
}

loc_8072CDB0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_8072D1BC;
}

loc_8072CDBC:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_8072D1BC;
}

loc_8072CDC8:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    goto loc_8072D1BC;
}

loc_8072CDD4:
{
    r29 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8072CDDC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CDF0;
    }
}

loc_8072CDE0:
{
    r0 = MemoryInline::FlatRead32((r4 + 36));
}

loc_8072CDE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072CDF0;
    }
}

loc_8072CDEC:
{
    goto loc_8072CE84;
}

loc_8072CDF0:
{
    r29 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8072CDF8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CE0C;
    }
}

loc_8072CDFC:
{
    r0 = MemoryInline::FlatRead32((r4 + 40));
}

loc_8072CE04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072CE0C;
    }
}

loc_8072CE08:
{
    goto loc_8072CE84;
}

loc_8072CE0C:
{
    r4 = (r4 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 12), 0, 40u, true, false);
    r29 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r4 + 12));
}

loc_8072CE18:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CE2C;
    }
}

loc_8072CE1C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 36));
}

loc_8072CE24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072CE2C;
    }
}

loc_8072CE28:
{
    goto loc_8072CE84;
}

loc_8072CE2C:
{
    r29 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 16));
}

loc_8072CE34:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CE48;
    }
}

loc_8072CE38:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 40));
}

loc_8072CE40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072CE48;
    }
}

loc_8072CE44:
{
    goto loc_8072CE84;
}

loc_8072CE48:
{
    r29 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 20));
}

loc_8072CE50:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CE64;
    }
}

loc_8072CE54:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r4 + 44));
}

loc_8072CE5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072CE64;
    }
}

loc_8072CE60:
{
    goto loc_8072CE84;
}

loc_8072CE64:
{
    r29 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 24));
}

loc_8072CE6C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CE80;
    }
}

loc_8072CE70:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r4 + 48));
}

loc_8072CE78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072CE80;
    }
}

loc_8072CE7C:
{
    goto loc_8072CE84;
}

loc_8072CE80:
{
    r29 = 0;
}

loc_8072CE84:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = r31;
    ctx->lr = 0x8072CE98u;
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

loc_8072CE9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D1BC;
    }
}

loc_8072CEA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8072CEA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072CEB4;
    }
}

loc_8072CEA8:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072CEB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072D1BC;
    }
}

loc_8072CEB4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 416), static_cast<uint8_t>(r0));
    r3 = 2;
    MemoryInline::FlatWrite32((r31 + 420), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_8072D1BC;
}

loc_8072CED4:
{
    r29 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8072CEDC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CEF0;
    }
}

loc_8072CEE0:
{
    r0 = MemoryInline::FlatRead32((r4 + 36));
}

loc_8072CEE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072CEF0;
    }
}

loc_8072CEEC:
{
    goto loc_8072CF84;
}

loc_8072CEF0:
{
    r29 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8072CEF8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CF0C;
    }
}

loc_8072CEFC:
{
    r0 = MemoryInline::FlatRead32((r4 + 40));
}

loc_8072CF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072CF0C;
    }
}

loc_8072CF08:
{
    goto loc_8072CF84;
}

loc_8072CF0C:
{
    r4 = (r4 + 8);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 12), 0, 40u, true, false);
    r29 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r4 + 12));
}

loc_8072CF18:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CF2C;
    }
}

loc_8072CF1C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r4 + 36));
}

loc_8072CF24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072CF2C;
    }
}

loc_8072CF28:
{
    goto loc_8072CF84;
}

loc_8072CF2C:
{
    r29 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 16));
}

loc_8072CF34:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CF48;
    }
}

loc_8072CF38:
{
    r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r4 + 40));
}

loc_8072CF40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072CF48;
    }
}

loc_8072CF44:
{
    goto loc_8072CF84;
}

loc_8072CF48:
{
    r29 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 20));
}

loc_8072CF50:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CF64;
    }
}

loc_8072CF54:
{
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r4 + 44));
}

loc_8072CF5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072CF64;
    }
}

loc_8072CF60:
{
    goto loc_8072CF84;
}

loc_8072CF64:
{
    r29 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r4 + 24));
}

loc_8072CF6C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CF80;
    }
}

loc_8072CF70:
{
    r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r4 + 48));
}

loc_8072CF78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072CF80;
    }
}

loc_8072CF7C:
{
    goto loc_8072CF84;
}

loc_8072CF80:
{
    r29 = 0;
}

loc_8072CF84:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = r31;
    ctx->lr = 0x8072CF98u;
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

loc_8072CF9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D1BC;
    }
}

loc_8072CFA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8072CFA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072CFB4;
    }
}

loc_8072CFA8:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072CFB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072D1BC;
    }
}

loc_8072CFB4:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r31 + 416), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 420), r3);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_8072D1BC;
}

loc_8072CFD0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 12), 0, 32u, true, false);
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 12));
}

loc_8072CFD8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072CFEC;
    }
}

loc_8072CFDC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 36));
}

loc_8072CFE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072CFEC;
    }
}

loc_8072CFE8:
{
    goto loc_8072D080;
}

loc_8072CFEC:
{
    r29 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 16));
}

loc_8072CFF4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072D008;
    }
}

loc_8072CFF8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 40));
}

loc_8072D000:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072D008;
    }
}

loc_8072D004:
{
    goto loc_8072D080;
}

loc_8072D008:
{
    r29 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 20));
    r5 = (r4 + 8);
}

loc_8072D014:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072D028;
    }
}

loc_8072D018:
{
    r0 = MemoryInline::FlatRead32((r5 + 36));
}

loc_8072D020:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072D028;
    }
}

loc_8072D024:
{
    goto loc_8072D080;
}

loc_8072D028:
{
    r29 = MemoryInline::FlatRead32((r5 + 16));
}

loc_8072D030:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072D044;
    }
}

loc_8072D034:
{
    r0 = MemoryInline::FlatRead32((r5 + 40));
}

loc_8072D03C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072D044;
    }
}

loc_8072D040:
{
    goto loc_8072D080;
}

loc_8072D044:
{
    r29 = MemoryInline::FlatRead32((r5 + 20));
}

loc_8072D04C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072D060;
    }
}

loc_8072D050:
{
    r0 = MemoryInline::FlatRead32((r5 + 44));
}

loc_8072D058:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072D060;
    }
}

loc_8072D05C:
{
    goto loc_8072D080;
}

loc_8072D060:
{
    r29 = MemoryInline::FlatRead32((r5 + 24));
}

loc_8072D068:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072D07C;
    }
}

loc_8072D06C:
{
    r0 = MemoryInline::FlatRead32((r5 + 48));
}

loc_8072D074:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072D07C;
    }
}

loc_8072D078:
{
    goto loc_8072D080;
}

loc_8072D07C:
{
    r29 = 0;
}

loc_8072D080:
{
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 12));
}

loc_8072D088:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8072D09C;
    }
}

loc_8072D08C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 36));
}

loc_8072D094:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D09C;
    }
}

loc_8072D098:
{
    goto loc_8072D130;
}

loc_8072D09C:
{
    r28 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 16));
}

loc_8072D0A4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8072D0B8;
    }
}

loc_8072D0A8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 40));
}

loc_8072D0B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D0B8;
    }
}

loc_8072D0B4:
{
    goto loc_8072D130;
}

loc_8072D0B8:
{
    r4 = (r4 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + 12), 0, 40u, true, false);
    r28 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r4 + 12));
}

loc_8072D0C4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8072D0D8;
    }
}

loc_8072D0C8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r4 + 36));
}

loc_8072D0D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D0D8;
    }
}

loc_8072D0D4:
{
    goto loc_8072D130;
}

loc_8072D0D8:
{
    r28 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 16));
}

loc_8072D0E0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8072D0F4;
    }
}

loc_8072D0E4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r4 + 40));
}

loc_8072D0EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D0F4;
    }
}

loc_8072D0F0:
{
    goto loc_8072D130;
}

loc_8072D0F4:
{
    r28 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 20));
}

loc_8072D0FC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8072D110;
    }
}

loc_8072D100:
{
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r4 + 44));
}

loc_8072D108:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D110;
    }
}

loc_8072D10C:
{
    goto loc_8072D130;
}

loc_8072D110:
{
    r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r4 + 24));
}

loc_8072D118:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8072D12C;
    }
}

loc_8072D11C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r4 + 48));
}

loc_8072D124:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D12C;
    }
}

loc_8072D128:
{
    goto loc_8072D130;
}

loc_8072D12C:
{
    r28 = 0;
}

loc_8072D130:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = r31;
    ctx->lr = 0x8072D144u;
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

loc_8072D148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D1BC;
    }
}

loc_8072D14C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8072D150:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D170;
    }
}

loc_8072D154:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r31 + 416), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 420), r3);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_8072D1BC;
}

loc_8072D170:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8072D174:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D198;
    }
}

loc_8072D178:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 416), static_cast<uint8_t>(r0));
    r3 = 2;
    MemoryInline::FlatWrite32((r31 + 420), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_8072D1BC;
}

loc_8072D198:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072D1A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072D1BC;
    }
}

loc_8072D1A4:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r31 + 416), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 420), r3);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_8072D1BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072CCC4 func_8072CCC4 preserves=true fpr_mask=0x00000000
