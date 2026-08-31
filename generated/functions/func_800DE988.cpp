#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DE988(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800DE988;

loc_800DE988:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_800DE994:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r8;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DEA20;
    }
}

loc_800DE9BC:
{
}

loc_800DE9C0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800DE9D4;
    }
}

loc_800DE9C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 21));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800DE9D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DE9EC;
    }
}

loc_800DE9D4:
{
}

loc_800DE9D8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(3))) {
        goto loc_800DE9F4;
    }
}

loc_800DE9DC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 21));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800DE9E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DE9F4;
    }
}

loc_800DE9EC:
{
    r3 = 3;
    goto loc_800DEC04;
}

loc_800DE9F4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 21));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800DEA00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DEA20;
    }
}

loc_800DEA04:
{
    r3 = MemoryInline::FlatRead32(r3);
    r4 = r28;
    ctx->lr = 0x800DEA10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FC2A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800DEA14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DEA20;
    }
}

loc_800DEA18:
{
    r3 = 255;
    goto loc_800DEC04;
}

loc_800DEA20:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800D2158u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = MemoryInline::FlatRead8((r5 + 23));
    r0 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800DEA34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DEA40;
    }
}

loc_800DEA38:
{
    r28 = 3;
    goto loc_800DEBB0;
}

loc_800DEA40:
{
    r0 = MemoryInline::FlatRead32((r5 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_800DEA48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DEA54;
    }
}

loc_800DEA4C:
{
    r28 = 255;
    goto loc_800DEBB0;
}

loc_800DEA54:
{
    ctx->lr = 0x800DEA58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800D49B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800DEA5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DEA68;
    }
}

loc_800DEA60:
{
    r28 = 3;
    goto loc_800DEBB0;
}

loc_800DEA68:
{
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 20), 0, 1900u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r5 + 48));
    r4 = r5;
    ctr = r0;
}

loc_800DEA80:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_800DEAAC;
    }
}

loc_800DEA84:
{
    r0 = MemoryInline::FlatRead32((r4 + 56));
}

loc_800DEA8C:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(r0))) {
        goto loc_800DEAA0;
    }
}

loc_800DEA90:
{
    r0 = (r3 * 48);
    r3 = (r5 + r0);
    r0 = (r3 + 56);
    goto loc_800DEAB0;
}

loc_800DEAA0:
{
    r4 = (r4 + 48);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800DEA84;
    }
}

loc_800DEAAC:
{
    r0 = 0;
}

loc_800DEAB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800DEAB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DEAD8;
    }
}

loc_800DEAB8:
{
    r4 = 0x80280000u;
    r5 = r28;
    r4 = (r4 + -30700);
    r3 = 64;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800DEAD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = 255;
    goto loc_800DEBB0;
}

loc_800DEAD8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 1800u, (r5 + 1820));
}

loc_800DEAE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(12))) {
        goto loc_800DEAF4;
    }
}

loc_800DEAE4:
{
}

loc_800DEAE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_800DEAF4;
    }
}

loc_800DEAEC:
{
}

loc_800DEAF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_800DEB1C;
    }
}

loc_800DEAF4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1728u, (r5 + 1748));
}

loc_800DEAFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DEB0C;
    }
}

loc_800DEB00:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1724u, (r5 + 1744));
}

loc_800DEB08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DEB1C;
    }
}

loc_800DEB0C:
{
}

loc_800DEB10:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_800DEB68;
    }
}

loc_800DEB14:
{
}

loc_800DEB18:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800DEB68;
    }
}

loc_800DEB1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(13));
}

loc_800DEB20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DEB38;
    }
}

loc_800DEB24:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1732u, (r5 + 1752));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_800DEB2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DEB38;
    }
}

loc_800DEB30:
{
    r28 = 255;
    goto loc_800DEBB0;
}

loc_800DEB38:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = 0x80280000u;
    r5 = r29;
    r6 = r30;
    r7 = MemoryInline::FlatRead32((r3 + 1748));
    r4 = (r4 + -30660);
    r8 = MemoryInline::FlatRead16((r3 + 1744));
    r3 = 64;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800DEB60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = 4;
    goto loc_800DEBB0;
}

loc_800DEB68:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r5 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800DEB70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DEBAC;
    }
}

loc_800DEB74:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1896u, (r5 + 1916));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800DEB7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DEBAC;
    }
}

loc_800DEB80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_800DEB84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DEBA4;
    }
}

loc_800DEB88:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1892u, (r5 + 1912));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800DEB90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800DEB9C;
    }
}

loc_800DEB94:
{
    r28 = 2;
    goto loc_800DEBB0;
}

loc_800DEB9C:
{
    r28 = 255;
    goto loc_800DEBB0;
}

loc_800DEBA4:
{
    r28 = 3;
    goto loc_800DEBB0;
}

loc_800DEBAC:
{
    r28 = 2;
}

loc_800DEBB0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
}

loc_800DEBB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DEC00;
    }
}

loc_800DEBB8:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r12 = MemoryInline::FlatRead32((r4 + 2212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_800DEBC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DEBE8;
    }
}

loc_800DEBC8:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 2220));
    ctr = r12;
    ctx->lr = 0x800DEBD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800DEBDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DEBE8;
    }
}

loc_800DEBE0:
{
    r3 = 3;
    goto loc_800DEC04;
}

loc_800DEBE8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800DEBF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DEC00;
    }
}

loc_800DEBF8:
{
    r3 = 1;
    ctx->lr = 0x800DEC00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800E6B10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800DEC00:
{
    r3 = r28;
}

loc_800DEC04:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
// RECOMP_REGISTRATION base 0x800DE988 func_800DE988 preserves=true fpr_mask=0x00000000
