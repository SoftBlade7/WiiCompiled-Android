#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80671848(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80671848;

loc_80671848:
{
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    MemoryInline::FlatWriteRam32((r1 + 300), r31);
    MemoryInline::FlatWriteRam32((r1 + 296), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 292), r29);
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8067186C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806718B4;
    }
}

loc_80671870:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r3 = MemoryInline::FlatRead32((r3 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8067188Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80671890:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806718A0;
    }
}

loc_80671894:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_806718B4;
}

loc_806718A0:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r30 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_806718B8;
}

loc_806718B4:
{
    r3 = 0;
}

loc_806718B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806718BC:
{
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80671968;
    }
}

loc_806718C4:
{
    r3 = 2;
    ctx->lr = 0x806718CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801DD044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806718D0:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806718FC;
    }
}

loc_806718D8:
{
    // inline leaf 0x801DD220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24372));
    // end of inlined leaf 0x801DD220
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(-7));
}

loc_806718E0:
{
    MemoryInline::FlatWrite32((r30 + 28), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806718F0;
    }
}

loc_806718E8:
{
    r3 = 8;
    goto loc_80671900;
}

loc_806718F0:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_80671900;
}

loc_806718FC:
{
    r3 = 0;
}

loc_80671900:
{
}

loc_80671904:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80671968;
    }
}

loc_8067190C:
{
    r0 = MemoryInline::FlatRead8((r30 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80671914:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80671950;
    }
}

loc_80671918:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8067192Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80671930:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80671940;
    }
}

loc_80671934:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_80671950;
}

loc_80671940:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r31 = r3;
    goto loc_80671954;
}

loc_80671950:
{
    r31 = 0;
}

loc_80671954:
{
    r3 = r31;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl1_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl1_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl1_0x8023320C;
    }
}

loc_inl1_0x80233204:
{
}

loc_inl1_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl1_0x80233214;
    }
}

loc_inl1_0x8023320C:
{
    r3 = 1;
    goto loc_inl1_cont_802331F8;
}

loc_inl1_0x80233214:
{
    r3 = 0;
}

loc_inl1_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
}

loc_80671960:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80671968;
    }
}

loc_80671964:
{
    goto loc_8067196C;
}

loc_80671968:
{
    r31 = r29;
}

loc_8067196C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80671970:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80671984;
    }
}

loc_80671974:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r30 + 30076), r31);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_80671AF4;
}

loc_80671984:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80671994:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806719CC;
    }
}

loc_80671998:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8067199C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806719DC;
    }
}

loc_806719A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806719A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806719EC;
    }
}

loc_806719A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_806719AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806719FC;
    }
}

loc_806719B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_806719B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80671A0C;
    }
}

loc_806719B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_806719BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80671A1C;
    }
}

loc_806719C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_806719C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80671A2C;
    }
}

loc_806719C8:
{
    goto loc_80671A3C;
}

loc_806719CC:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r29 = (r3 + 97);
    goto loc_80671A48;
}

loc_806719DC:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r29 = (r3 + 100);
    goto loc_80671A48;
}

loc_806719EC:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r29 = (r3 + 103);
    goto loc_80671A48;
}

loc_806719FC:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r29 = (r3 + 106);
    goto loc_80671A48;
}

loc_80671A0C:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r29 = (r3 + 109);
    goto loc_80671A48;
}

loc_80671A1C:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r29 = (r3 + 112);
    goto loc_80671A48;
}

loc_80671A2C:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r29 = (r3 + 115);
    goto loc_80671A48;
}

loc_80671A3C:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r29 = (r3 + 118);
}

loc_80671A48:
{
    ctx->lr = 0x80671A4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80675454u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808C0000u;
    r7 = r3;
    r5 = MemoryInline::FlatRead32((r4 + 3428));
    r6 = r29;
    r3 = (r1 + 44);
    r4 = 235;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80671A6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80011938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 65536;
    r12 = 0;
    r29 = 1;
    r10 = 1440;
    r11 = (r3 + 24576);
    r0 = (r1 + 44);
    r5 = 2;
    r9 = 100;
    r8 = 220;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r5);
    r3 = (r30 + 36);
    r4 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r29);
    r5 = 3;
    r6 = 0;
    r7 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r12);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 24), r12);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 28), r11);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r12)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r1 + 32), r10);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r1 + 34), r12);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r1 + 36), r10);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r1 + 38), r9);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r1 + 40), r8);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r1 + 42), r29);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r0);
    ctx->lr = 0x80671AD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80678740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_80671ADC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80671AF0;
    }
}

loc_80671AE0:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r30 + 30076), r31);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_80671AF4;
}

loc_80671AF0:
{
    MemoryInline::FlatWrite32((r30 + 20), r29);
}

loc_80671AF4:
{
    r0 = MemoryInline::FlatRead8((r30 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80671AFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80671B30;
    }
}

loc_80671B00:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80671B14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80671B18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80671B28;
    }
}

loc_80671B1C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_80671B30;
}

loc_80671B28:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80671B30:
{
    r0 = MemoryInline::FlatRead32((r1 + 308));
    r31 = MemoryInline::FlatRead32((r1 + 300));
    r30 = MemoryInline::FlatRead32((r1 + 296));
    r29 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80671848 func_80671848 preserves=true fpr_mask=0x00000000
