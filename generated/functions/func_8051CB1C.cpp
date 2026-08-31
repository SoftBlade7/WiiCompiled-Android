#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051CB1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8051CB1C;

loc_8051CB1C:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r27);
    MemoryInline::FlatWriteRam32((r1 + 96), r28);
    MemoryInline::FlatWriteRam32((r1 + 100), r29);
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r31 = 0x809C0000u;
    r29 = r3;
    r30 = r4;
    r3 = MemoryInline::FlatRead32((r31 + -10448));
    // inline leaf 0x805336A4 (13 guest instruction(s))
}

loc_inl0_0x805336A4:
{
    r4 = 0x809C0000u;
    r3 = 3;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2960));
    r0 = (r0 & 4);
}

loc_inl0_0x805336B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805336BC:
{
    r3 = MemoryInline::FlatRead8((r4 + 2957));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_inl0_0x805336CC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805336D0:
{
    r3 = 3;
    goto loc_inl0_cont_805336A4;
}

loc_inl0_return:
{
}

loc_inl0_cont_805336A4:
{
    // end of inlined leaf 0x805336A4
    MemoryInline::FlatWrite8((r29 + 100), static_cast<uint8_t>(r3));
    r0 = 0;
    r4 = 0x808B0000u;
    r3 = 0x809C0000u;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
}

loc_8051CB74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051CBE0;
    }
}

loc_8051CB78:
{
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r28 = (r28_rot_1 & 1020);
    r27 = 0;
    goto loc_8051CBD0;
}

loc_8051CB84:
{
    r3 = MemoryInline::FlatRead32((r31 + -10448));
    r0 = (r27 + 1);
    r4 = (r0 & 255);
    r5 = (r1 + 24);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r28_addr_2 = (r28 + r0);
    r3 = MemoryInline::FlatRead32(r28_addr_2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    InvokeDirectCpu<0x8053572Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    r3 = (r27 & 255);
    r0 = MemoryInline::FlatRead16((r1 + 28));
    r3 = (r3 * 12);
    r27 = (r27 + 1);
    r3 = (r29 + r3);
    MemoryInline::FlatWrite16((r3 + 108), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    MemoryInline::FlatWrite8((r3 + 110), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 32));
    MemoryInline::FlatWrite16((r3 + 112), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 34));
    MemoryInline::FlatWrite8((r3 + 114), static_cast<uint8_t>(r0));
}

loc_8051CBD0:
{
    r0 = MemoryInline::FlatRead8((r29 + 100));
    r3 = (r27 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8051CBDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8051CB84;
    }
}

loc_8051CBE0:
{
    r3 = 0x809C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r31 = (r30 * 240);
    r5 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r3 = 0x809C0000u;
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r6 = MemoryInline::FlatRead32((r4 + 64));
    r4 = MemoryInline::FlatRead16((r6 + 4));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead8((r6 + 6));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 8));
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 10));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r29 + 168), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    MemoryInline::FlatWrite8((r29 + 170), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 32));
    MemoryInline::FlatWrite16((r29 + 172), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 34));
    MemoryInline::FlatWrite8((r29 + 174), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + -10456));
    r4 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r29 + 176), r0);
    r0 = MemoryInline::FlatRead32((r5 + -10456));
    r4 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r4 + 48));
    MemoryInline::FlatWrite32((r29 + 180), r0);
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    MemoryInline::FlatWrite32((r29 + 184), r0);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8051CC78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051CC90;
    }
}

loc_8051CC7C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8051CC8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8051CC94;
}

loc_8051CC90:
{
    r3 = -1;
}

loc_8051CC94:
{
    MemoryInline::FlatWrite32((r29 + 188), r3);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8051CCA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051CCB4;
    }
}

loc_8051CCAC:
{
    r3 = MemoryInline::FlatRead8((r3 + 81));
    goto loc_8051CCB8;
}

loc_8051CCB4:
{
    r3 = 0;
}

loc_8051CCB8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 200), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r29 + 196), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = (r1 + 40);
    ctx->lr = 0x8051CCD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801AAFA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 60));
}

loc_8051CCD8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(2000))) {
        goto loc_8051CCE8;
    }
}

loc_8051CCDC:
{
    r0 = 2000;
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    goto loc_8051CCF0;
}

loc_8051CCE8:
{
    r0 = (r3 + -2000);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
}

loc_8051CCF0:
{
    r0 = MemoryInline::FlatRead32((r1 + 60));
}

loc_8051CCF8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(99))) {
        goto loc_8051CD04;
    }
}

loc_8051CCFC:
{
    r0 = 99;
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
}

loc_8051CD04:
{
    r0 = MemoryInline::FlatRead8((r29 + 192));
    r3 = 1;
    r5 = MemoryInline::FlatRead32((r1 + 52));
    r4 = MemoryInline::FlatRead32((r1 + 56));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_8051CD18:
{
    r0 = MemoryInline::FlatRead32((r1 + 60));
    r5 = (r5 & 255);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r29 + 195), static_cast<uint8_t>(r3));
    r6 = (r4 & 255);
    r3 = (r0 & 255);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051CD3C;
    }
}

loc_8051CD34:
{
    r0 = 99;
    MemoryInline::FlatWrite8((r29 + 192), static_cast<uint8_t>(r0));
}

loc_8051CD3C:
{
    r0 = MemoryInline::FlatRead8((r29 + 193));
}

loc_8051CD44:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_8051CD50;
    }
}

loc_8051CD48:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r29 + 193), static_cast<uint8_t>(r0));
}

loc_8051CD50:
{
    r0 = MemoryInline::FlatRead8((r29 + 194));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_8051CD58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051CD64;
    }
}

loc_8051CD5C:
{
    r0 = 31;
    MemoryInline::FlatWrite8((r29 + 194), static_cast<uint8_t>(r0));
}

loc_8051CD64:
{
    MemoryInline::FlatWrite8((r29 + 192), static_cast<uint8_t>(r3));
    r3 = 0x809C0000u;
    r4 = (r1 + 8);
    MemoryInline::FlatWrite8((r29 + 193), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r29 + 194), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054A9B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite32((r29 + 204), r0);
    r0 = MemoryInline::FlatRead32((r3 + -10456));
    r4 = (r0 + r31);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 3264), 0, 17u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r4 + 3280));
}

loc_8051CD9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051CDE8;
    }
}

loc_8051CDA0:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 3264));
    r5 = 1;
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 3265));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r1 + 17), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 16), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 3266));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3267));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r1 + 19), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r1 + 18), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 3268));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 3269));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r1 + 21), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r1 + 20), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 3270));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 3271));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r1 + 23), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 22), static_cast<uint8_t>(r3));
    goto loc_8051CDEC;
}

loc_8051CDE8:
{
    r5 = 0;
}

loc_8051CDEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8051CDF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051CE00;
    }
}

loc_8051CDF4:
{
    r3 = (r29 + 24);
    r4 = (r1 + 16);
    ctx->lr = 0x8051CE00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052758Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8051CE00:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead8((r3 + 46));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8051CE60;
    }
}

loc_8051CE18:
{
    r0 = (r0 & 255);
    r3 = 0x809C0000u;
    r0 = (r0 * 236);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + r0);
    r30 = (r3 + 4);
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8051CE44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 212), r3);
    r3 = r30;
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8051CE5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 208), r3);
}

loc_8051CE60:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r27 = MemoryInline::FlatRead32((r1 + 92));
    r28 = MemoryInline::FlatRead32((r1 + 96));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
// RECOMP_REGISTRATION base 0x8051CB1C func_8051CB1C preserves=true fpr_mask=0x00000000
