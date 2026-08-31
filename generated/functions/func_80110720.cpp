#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80110720(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80110720;

loc_80110720:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -1520), 0, 1528u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -1520), r1);
    r1 = (r1 + -1520);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 1524u, (r1 + 1524), r0);
    r11 = (r1 + 1520);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1496u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1496u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 1500u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1504u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1504u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 1508u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1512u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1512u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 1516u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = 0;
}

loc_8011073C:
{
    MemoryInline::FlatWriteRam32((r1 + 1492), r0);
    r27 = r3;
    r28 = r5;
    r29 = r6;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80110754;
    }
}

loc_80110750:
{
    r27 = MemoryInline::FlatRead32((r13 + -30432));
}

loc_80110754:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_8011075C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(59))) {
        goto loc_80110784;
    }
}

loc_80110760:
{
    r12 = MemoryInline::FlatRead32((r27 + 212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80110768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80110DA0;
    }
}

loc_8011076C:
{
    r3 = r4;
    r4 = r28;
    r5 = r29;
    ctr = r12;
    ctx->lr = 0x80110780u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80110DA0;
}

loc_80110784:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(7));
}

loc_80110788:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80110DA0;
    }
}

loc_8011078C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(254));
}

loc_80110790:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110794:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(253));
}

loc_8011079C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801107A4;
    }
}

loc_801107A0:
{
    goto loc_80110DA0;
}

loc_801107A4:
{
    r0 = MemoryInline::FlatRead32((r27 + 184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801107AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801107B8;
    }
}

loc_801107B0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r27 + 184), r0);
}

loc_801107B8:
{
    r26 = MemoryInline::FlatRead8((r4 + 2));
    r31 = (r4 + 3);
    r30 = (r4 + 7);
    r3 = (r1 + 93);
    MemoryInline::FlatWriteRam8((r1 + 92), static_cast<uint8_t>(r26));
    r4 = r31;
    r5 = 4;
    r28 = (r28 + -7);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r5 = 5;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_801107E8:
{
    MemoryInline::FlatWriteRam32((r1 + 1492), r5);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80110DA0;
    }
}

loc_801107F0:
{
    r3 = 0x80280000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -11864);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80110824u:
        goto loc_80110824;
        break;
    case 0x801108D8u:
        goto loc_801108D8;
        break;
    case 0x80110A90u:
        goto loc_80110A90;
        break;
    case 0x80110D80u:
        goto loc_80110D80;
        break;
    case 0x80110ACCu:
        goto loc_80110ACC;
        break;
    case 0x80110B90u:
        goto loc_80110B90;
        break;
    case 0x80110D7Cu:
        goto loc_80110D7C;
        break;
    case 0x80110808u:
        goto loc_80110808;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80110808:
{
    r3 = r27;
    r5 = r29;
    r4 = (r1 + 92);
    ctx->lr = 0x80110818u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80110494u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011081C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110D84;
    }
}

loc_80110820:
{
    goto loc_80110DA0;
}

loc_80110824:
{
    r0 = MemoryInline::FlatRead8((r27 + 272));
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(128));
}

loc_80110830:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801108BC;
    }
}

loc_80110834:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_80110838:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80110DA0;
    }
}

loc_8011083C:
{
    r3 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x801ED98C (1 guest instruction(s))
    // end of inlined leaf 0x801ED98C
    r0 = 200;
    r6 = r27;
    r5 = 0;
    ctr = r0;
    r30 = (r30 + 4);
    r28 = (r28 + -4);
}

loc_8011085C:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 280));
}

loc_80110868:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_801108A4;
    }
}

loc_8011086C:
{
    r4 = MemoryInline::FlatRead16((r29 + 2));
    r0 = MemoryInline::FlatRead16((r6 + 278));
}

loc_80110878:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_801108A4;
    }
}

loc_8011087C:
{
    r0 = MemoryInline::FlatRead32((r6 + 284));
}

loc_80110884:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801108A4;
    }
}

loc_80110888:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r3 = (r3_rot_1 & -16);
    r0 = 0;
    r3 = (r27 + r3);
    r4 = 1;
    MemoryInline::FlatWrite32((r3 + 280), r0);
    MemoryInline::FlatWrite16((r3 + 278), static_cast<uint16_t>(r0));
    goto loc_801108B4;
}

loc_801108A4:
{
    r6 = (r6 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8011085C;
    }
}

loc_801108B0:
{
    r4 = 0;
}

loc_801108B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801108B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80110DA0;
    }
}

loc_801108BC:
{
    r3 = r27;
    r5 = r30;
    r6 = r28;
    r7 = r29;
    r4 = (r1 + 92);
    ctx->lr = 0x801108D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80110190u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80110DA0;
}

loc_801108D8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8(r31);
    r0 = MemoryInline::FlatRead8((r27 + 132));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801108F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_801108F8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = MemoryInline::FlatRead8((r27 + 133));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110914:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110918:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r0 = MemoryInline::FlatRead8((r27 + 134));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110934:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110938:
{
    r0 = 3;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r0 = MemoryInline::FlatRead8((r27 + 135));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110954:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110958:
{
    r0 = 4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(15));
}

loc_80110960:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80110A0C;
    }
}

loc_80110968:
{
    r31 = (r30 + r28);
    r5 = (r1 + 16);
    r3 = (r31 + -15);
    r4 = (r13 + -30412);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80110980u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite8((r27 + 272), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r27 + 168));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80110990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80110A0C;
    }
}

loc_80110994:
{
    r4 = 0x80280000u;
    r3 = (r31 + -13);
    r4 = (r4 + -11876);
    r5 = (r1 + 8);
    r6 = (r1 + 12);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801109B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r31 = (r0 & 65535);
    // inline leaf 0x801ED998 (1 guest instruction(s))
    // end of inlined leaf 0x801ED998
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801109C4:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80110A0C;
    }
}

loc_801109CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801109D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80110A0C;
    }
}

loc_801109D4:
{
    r0 = MemoryInline::FlatRead32((r27 + 260));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801109DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801109EC;
    }
}

loc_801109E0:
{
    r0 = MemoryInline::FlatRead16((r27 + 264));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801109E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80110A0C;
    }
}

loc_801109EC:
{
    MemoryInline::FlatWrite32((r27 + 260), r3);
    r4 = r31;
    MemoryInline::FlatWrite16((r27 + 264), static_cast<uint16_t>(r31));
    r12 = MemoryInline::FlatRead32((r27 + 168));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead32((r27 + 268));
    ctr = r12;
    ctx->lr = 0x80110A0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80110A0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_80110A10:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80110D84;
    }
}

loc_80110A14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(65));
}

loc_80110A18:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80110D84;
    }
}

loc_80110A1C:
{
    r3 = (r28 + r30);
    r0 = MemoryInline::FlatRead8((r3 + -1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110D84;
    }
}

loc_80110A2C:
{
    r4 = r30;
    r3 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r27 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = r3;
    r3 = (r27 + 68);
    r5 = (r1 + 24);
    r6 = (r28 + -1);
    ctx->lr = 0x80110A54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F748u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 1492));
    r5 = (r1 + 92);
    r3 = (r1 + 24);
    r4 = (r28 + -1);
    r5 = (r5 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F5B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 1492));
    r3 = (r1 + 92);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 1492));
    r3 = (r3 + r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 1492), r0);
    goto loc_80110D84;
}

loc_80110A90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(32));
}

loc_80110A94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80110A9C;
    }
}

loc_80110A98:
{
    r28 = 32;
}

loc_80110A9C:
{
    r4 = 5;
    r0 = MemoryInline::FlatRead32((r1 + 1492));
    r3 = (r1 + 92);
    MemoryInline::FlatWriteRam8((r1 + 92), static_cast<uint8_t>(r4));
    r4 = r30;
    r5 = r28;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 1492));
    r0 = (r0 + r28);
    MemoryInline::FlatWriteRam32((r1 + 1492), r0);
    goto loc_80110D84;
}

loc_80110ACC:
{
    r0 = MemoryInline::FlatRead32((r27 + 184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80110AD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80110DA0;
    }
}

loc_80110AD8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8(r31);
    r0 = MemoryInline::FlatRead8((r27 + 132));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110AF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110AF8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = MemoryInline::FlatRead8((r27 + 133));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110B14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110B18:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r0 = MemoryInline::FlatRead8((r27 + 134));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110B34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110B38:
{
    r0 = 3;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r0 = MemoryInline::FlatRead8((r27 + 135));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110B54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110B58:
{
    r0 = 4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_80110B60:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80110DA0;
    }
}

loc_80110B68:
{
    r0 = -1;
    r4 = (r30 + 1);
    MemoryInline::FlatWrite32((r27 + 184), r0);
    r3 = MemoryInline::FlatRead8(r30);
    r12 = MemoryInline::FlatRead32((r27 + 156));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r5 = MemoryInline::FlatRead32((r27 + 268));
    ctr = r12;
    ctx->lr = 0x80110B8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80110DA0;
}

loc_80110B90:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8(r31);
    r0 = MemoryInline::FlatRead8((r27 + 132));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110BAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110BB0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = MemoryInline::FlatRead8((r27 + 133));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110BCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110BD0:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r0 = MemoryInline::FlatRead8((r27 + 134));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110BEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110BF0:
{
    r0 = 3;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r0 = MemoryInline::FlatRead8((r27 + 135));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110C0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110DA0;
    }
}

loc_80110C10:
{
    r0 = 4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_80110C18:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80110DA0;
    }
}

loc_80110C20:
{
    r0 = 7;
    r3 = (r1 + 92);
    MemoryInline::FlatWriteRam8((r1 + 92), static_cast<uint8_t>(r0));
    r3 = (r3 + r5);
    r4 = r30;
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead32((r1 + 1492));
    r4 = r30;
    r3 = (r1 + 20);
    r5 = 4;
    r0 = (r6 + 4);
    MemoryInline::FlatWriteRam32((r1 + 1492), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r27 + 216));
}

loc_80110C64:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80110C70;
    }
}

loc_80110C68:
{
    r5 = 1;
    goto loc_80110D60;
}

loc_80110C70:
{
    r0 = MemoryInline::FlatRead32((r27 + 220));
}

loc_80110C78:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80110C84;
    }
}

loc_80110C7C:
{
    r5 = 1;
    goto loc_80110D60;
}

loc_80110C84:
{
    r0 = MemoryInline::FlatRead32((r27 + 224));
}

loc_80110C8C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80110C98;
    }
}

loc_80110C90:
{
    r5 = 1;
    goto loc_80110D60;
}

loc_80110C98:
{
    r0 = MemoryInline::FlatRead32((r27 + 228));
}

loc_80110CA0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80110CAC;
    }
}

loc_80110CA4:
{
    r5 = 1;
    goto loc_80110D60;
}

loc_80110CAC:
{
    r0 = MemoryInline::FlatRead32((r27 + 232));
}

loc_80110CB4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80110CC0;
    }
}

loc_80110CB8:
{
    r5 = 1;
    goto loc_80110D60;
}

loc_80110CC0:
{
    r0 = MemoryInline::FlatRead32((r27 + 236));
}

loc_80110CC8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80110CD4;
    }
}

loc_80110CCC:
{
    r5 = 1;
    goto loc_80110D60;
}

loc_80110CD4:
{
    r0 = MemoryInline::FlatRead32((r27 + 240));
}

loc_80110CDC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80110CE8;
    }
}

loc_80110CE0:
{
    r5 = 1;
    goto loc_80110D60;
}

loc_80110CE8:
{
    r0 = MemoryInline::FlatRead32((r27 + 244));
}

loc_80110CF0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80110CFC;
    }
}

loc_80110CF4:
{
    r5 = 1;
    goto loc_80110D60;
}

loc_80110CFC:
{
    r0 = MemoryInline::FlatRead32((r27 + 248));
}

loc_80110D04:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80110D10;
    }
}

loc_80110D08:
{
    r5 = 1;
    goto loc_80110D60;
}

loc_80110D10:
{
    r0 = MemoryInline::FlatRead32((r27 + 252));
}

loc_80110D18:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80110D24;
    }
}

loc_80110D1C:
{
    r5 = 1;
    goto loc_80110D60;
}

loc_80110D24:
{
    r4 = MemoryInline::FlatRead32((r27 + 256));
    r3 = 1717960704;
    r0 = (r3 + 26215);
    r5 = 0;
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 10);
    r3 = (r4 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    MemoryInline::FlatWrite32((r27 + 256), r3);
    r3 = (r27 + r0);
    MemoryInline::FlatWrite32((r3 + 216), r6);
}

loc_80110D60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80110D64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110D84;
    }
}

loc_80110D68:
{
    r3 = r27;
    r4 = (r30 + 4);
    r5 = (r28 + -4);
    ctx->lr = 0x80110D78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80110350u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80110D84;
}

loc_80110D7C:
{
    goto loc_80110DA0;
}

loc_80110D80:
{
    goto loc_80110DA0;
}

loc_80110D84:
{
    r3 = MemoryInline::FlatRead32(r27);
    r7 = r29;
    r5 = MemoryInline::FlatRead32((r1 + 1492));
    r4 = (r1 + 92);
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x80110DA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F13D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80110DA0:
{
    r11 = (r1 + 1520);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 1524));
    ctx->lr = r0;
    r1 = (r1 + 1520);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
// RECOMP_REGISTRATION base 0x80110720 func_80110720 preserves=true fpr_mask=0x00000000
