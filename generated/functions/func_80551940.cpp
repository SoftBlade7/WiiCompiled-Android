#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80551940(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r4_addc_left_0 = 0;
    uint32_t r4_addc_left_1 = 0;
    uint32_t r4_addc_left_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80551940;

loc_80551940:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x809C0000u;
    r31 = (r31 + -5376);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r12 = MemoryInline::FlatRead32((r31 + 656));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80551968:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551974;
    }
}

loc_8055196C:
{
    ctr = r12;
    ctx->lr = 0x80551974u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80551974:
{
    r6 = (r31 + 0);
    r30 = -1;
    r0 = MemoryInline::FlatRead32((r6 + 160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80551984:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551BE8;
    }
}

loc_80551988:
{
    r0 = MemoryInline::FlatRead8((r6 + 164));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80551990:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551BE8;
    }
}

loc_80551994:
{
    r0 = MemoryInline::FlatRead32((r6 + 168));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8055199C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805519AC;
    }
}

loc_805519A0:
{
    r0 = MemoryInline::FlatRead32((r6 + 172));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805519A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805519C0;
    }
}

loc_805519AC:
{
    r3 = (r31 + 0);
    r0 = 5;
    MemoryInline::FlatWriteRam8((r3 + 165), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 164), static_cast<uint8_t>(r0));
    goto loc_80551BE8;
}

loc_805519C0:
{
    r4 = MemoryInline::FlatRead32((r6 + 204));
    r3 = 1;
    r5 = MemoryInline::FlatRead32((r6 + 200));
    r0 = 0;
    r4_addc_left_1 = r4;
    r4 = (r4_addc_left_1 + r3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r6 + 204), r4);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r0);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r4 | r3);
    MemoryInline::FlatWriteRam32((r6 + 200), r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80551AA8;
    }
}

loc_805519E8:
{
    r3 = MemoryInline::FlatRead32((r6 + 136));
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805519F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551A08;
    }
}

loc_805519F4:
{
    ctx->lr = 0x805519F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BABACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805519FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80551A2C;
    }
}

loc_80551A00:
{
    r0 = 1;
    goto loc_80551A30;
}

loc_80551A08:
{
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80551A0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551A24;
    }
}

loc_80551A10:
{
    ctx->lr = 0x80551A14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BABACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80551A18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80551A2C;
    }
}

loc_80551A1C:
{
    r0 = 1;
    goto loc_80551A30;
}

loc_80551A24:
{
    r0 = 1;
    goto loc_80551A30;
}

loc_80551A2C:
{
    r0 = 0;
}

loc_80551A30:
{
}

loc_80551A34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80551A94;
    }
}

loc_80551A38:
{
    r29 = (r31 + 0);
    r0 = MemoryInline::FlatRead8((r29 + 167));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80551A44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551A84;
    }
}

loc_80551A48:
{
    r3 = MemoryInline::FlatRead32((r29 + 244));
    r0 = MemoryInline::FlatRead32((r29 + 240));
    r0 = (r0 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80551A58:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80551A78;
    }
}

loc_80551A5C:
{
    r3 = 0;
    ctx->lr = 0x80551A64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r29 + 240));
    r30 = r3;
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r29 + 240), r0);
    goto loc_80551B14;
}

loc_80551A78:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r29 + 165), static_cast<uint8_t>(r0));
    goto loc_80551B14;
}

loc_80551A84:
{
    r3 = 0;
    ctx->lr = 0x80551A8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
    goto loc_80551B14;
}

loc_80551A94:
{
    r3 = (r31 + 0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r3 + 204), r0);
    MemoryInline::FlatWriteRam32((r3 + 200), r0);
    goto loc_80551B14;
}

loc_80551AA8:
{
    r0 = (r4 ^ 1);
    r0 = (r0 | r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551ABC;
    }
}

loc_80551AB4:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r6 + 165), static_cast<uint8_t>(r0));
}

loc_80551ABC:
{
    ctx->lr = 0x80551AC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80551C04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80551AC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80551B14;
    }
}

loc_80551AC8:
{
    r29 = (r31 + 0);
    r0 = MemoryInline::FlatRead8((r29 + 167));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80551AD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551B08;
    }
}

loc_80551AD8:
{
    r3 = MemoryInline::FlatRead32((r29 + 244));
    r0 = MemoryInline::FlatRead32((r29 + 240));
    r0 = (r0 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80551AE8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80551B14;
    }
}

loc_80551AEC:
{
    r3 = 0;
    ctx->lr = 0x80551AF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r29 + 240));
    r30 = r3;
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r29 + 240), r0);
    goto loc_80551B14;
}

loc_80551B08:
{
    r3 = 0;
    ctx->lr = 0x80551B10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
}

loc_80551B14:
{
}

loc_80551B18:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80551B4C;
    }
}

loc_80551B1C:
{
    r0 = (r30 + 65536);
}

loc_80551B24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80551B4C;
    }
}

loc_80551B28:
{
    r3 = (r31 + 0);
    r4 = MemoryInline::FlatRead32((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80551B34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551B44;
    }
}

loc_80551B38:
{
    r3 = (r31 + 608);
    r5 = 0;
    ctx->lr = 0x80551B44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A735Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80551B44:
{
    r3 = (r31 + 0);
    MemoryInline::FlatWriteRam32((r3 + 248), r30);
}

loc_80551B4C:
{
    r5 = (r31 + 0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 80), 0, 176u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 86u, (r5 + 166));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80551B58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551BE8;
    }
}

loc_80551B5C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 87u, (r5 + 167));
}

loc_80551B64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80551B9C;
    }
}

loc_80551B68:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 164u, (r5 + 244));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r5 + 192));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 80));
    r3 = (r4 + r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80551B7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551BE8;
    }
}

loc_80551B80:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r5 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80551B88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551BE8;
    }
}

loc_80551B8C:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8((r5 + 165), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r5 + 164), static_cast<uint8_t>(r0));
    goto loc_80551BE8;
}

loc_80551B9C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 168u, (r5 + 248));
}

loc_80551BA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80551BB8;
    }
}

loc_80551BA8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r5 + 192));
    r5 = (r3 + r0);
    goto loc_80551BC0;
}

loc_80551BB8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r5 + 192));
    r5 = (r3 + -1);
}

loc_80551BC0:
{
    r4 = (r31 + 0);
    r3 = MemoryInline::FlatRead32((r4 + 80));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80551BD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551BE8;
    }
}

loc_80551BD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80551BD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551BE8;
    }
}

loc_80551BDC:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8((r4 + 165), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 164), static_cast<uint8_t>(r0));
}

loc_80551BE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80551940 func_80551940 preserves=true fpr_mask=0x00000000
