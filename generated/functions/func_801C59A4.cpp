#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C59A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C59A4;

loc_801C59A4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r5 = 0x80350000u;
    r31 = 0x802A0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801C59C8:
{
    r5 = (r5 + 2352);
    r29 = r3;
    r5_addr_0 = (r5 + r0);
    r30 = MemoryInline::FlatRead32(r5_addr_0);
    r31 = (r31 + -6824);
    r0 = -1;
    r5 = MemoryInline::FlatRead32((r30 + 2420));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C5A0C;
    }
}

loc_801C59E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C5A1C;
    }
}

loc_801C59E8:
{
}

loc_801C59EC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(-1))) {
        goto loc_801C59F4;
    }
}

loc_801C59F0:
{
    goto loc_801C5A1C;
}

loc_801C59F4:
{
    r6 = 253;
    r4 = 0;
    MemoryInline::FlatWrite8((r30 + 2241), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r30 + 2448), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r30 + 2449), static_cast<uint8_t>(r4));
    goto loc_801C5A30;
}

loc_801C5A0C:
{
    r4 = (r13 + -24492);
    r4_addr_1 = (r4 + r3);
    r4 = MemoryInline::FlatRead8(r4_addr_1);
    MemoryInline::FlatWrite8((r30 + 2241), static_cast<uint8_t>(r4));
    goto loc_801C5A30;
}

loc_801C5A1C:
{
    r6 = 252;
    r4 = 0;
    MemoryInline::FlatWrite8((r30 + 2241), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r30 + 2448), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r30 + 2449), static_cast<uint8_t>(r4));
}

loc_801C5A30:
{
    r4 = (r13 + -24496);
    r4_addr_3 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_3);
    MemoryInline::FlatWrite8((r30 + 2242), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r30 + 2241));
    r3 = (r3 + 255);
    r3 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_801C5A4C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C5E88;
    }
}

loc_801C5A50:
{
    r6 = 0;
    r4 = 0;
    r3 = 0x80000000u;
}

loc_801C5A5C:
{
    r10 = (r4 + 14);
    r7 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r10));
}

loc_801C5A68:
{
    r8 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C5B9C;
    }
}

loc_801C5A70:
{
    r11 = (r4 + 6);
    r12 = 0;
    r28 = 0;
    r27 = 0;
    r26 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C5A98;
    }
}

loc_801C5A88:
{
    r9 = (r3 + -2);
}

loc_801C5A90:
{
    if ((static_cast<int32_t>(r10) > static_cast<int32_t>(r9))) {
        goto loc_801C5A98;
    }
}

loc_801C5A94:
{
    r26 = 1;
}

loc_801C5A98:
{
}

loc_801C5A9C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_801C5AB0;
    }
}

loc_801C5AA0:
{
    r9 = (r3 + -2);
}

loc_801C5AA8:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r9))) {
        goto loc_801C5AB0;
    }
}

loc_801C5AAC:
{
    r27 = 1;
}

loc_801C5AB0:
{
}

loc_801C5AB4:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_801C5AC8;
    }
}

loc_801C5AB8:
{
    r9 = (r4 + -2147483648);
}

loc_801C5AC0:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(0))) {
        goto loc_801C5AC8;
    }
}

loc_801C5AC4:
{
    r28 = 1;
}

loc_801C5AC8:
{
}

loc_801C5ACC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_801C5B04;
    }
}

loc_801C5AD0:
{
    r10 = (r4 + 14);
    r9 = (0 - r4);
    r26 = (r10 & -2147483648);
    r9 = (r9 & -2147483648);
    r10 = 1;
}

loc_801C5AE8:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(r9))) {
        goto loc_801C5AF8;
    }
}

loc_801C5AEC:
{
}

loc_801C5AF0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_801C5AF8;
    }
}

loc_801C5AF4:
{
    r10 = 0;
}

loc_801C5AF8:
{
}

loc_801C5AFC:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_801C5B04;
    }
}

loc_801C5B00:
{
    r12 = 1;
}

loc_801C5B04:
{
}

loc_801C5B08:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_801C5B70;
    }
}

loc_801C5B0C:
{
    r9 = (r11 + 7);
    r9 = (r9 - r4);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_2 & 536870911);
    ctr = r9;
}

loc_801C5B20:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r11))) {
        goto loc_801C5B70;
    }
}

loc_801C5B24:
{
    r11 = (r5 + r7);
    r5_addr_3 = (r5 + r7);
    r10 = MemoryInline::FlatRead8(r5_addr_3);
    r9 = MemoryInline::FlatRead8((r11 + 1));
    r7 = (r7 + 8);
    r8 = (r8 + r10);
    r10 = MemoryInline::FlatRead8((r11 + 2));
    r8 = (r8 + r9);
    r9 = MemoryInline::FlatRead8((r11 + 3));
    r8 = (r8 + r10);
    r10 = MemoryInline::FlatRead8((r11 + 4));
    r8 = (r8 + r9);
    r9 = MemoryInline::FlatRead8((r11 + 5));
    r8 = (r8 + r10);
    r10 = MemoryInline::FlatRead8((r11 + 6));
    r8 = (r8 + r9);
    r9 = MemoryInline::FlatRead8((r11 + 7));
    r8 = (r8 + r10);
    r8 = (r8 + r9);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C5B24;
    }
}

loc_801C5B70:
{
    r11 = (r4 + 14);
    r10 = (r5 + r7);
    r9 = (r11 - r7);
    ctr = r9;
}

loc_801C5B84:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r11))) {
        goto loc_801C5B9C;
    }
}

loc_801C5B88:
{
    r9 = MemoryInline::FlatRead8(r10);
    r7 = (r7 + 1);
    r10 = (r10 + 1);
    r8 = (r8 + r9);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C5B88;
    }
}

loc_801C5B9C:
{
    r10 = (r5 + r4);
    r9 = (r8 + 85);
    r7 = MemoryInline::FlatRead8((r10 + 14));
    r9 = (r9 & 255);
}

loc_801C5BB0:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r7))) {
        goto loc_801C5BCC;
    }
}

loc_801C5BB4:
{
    r8 = (r8 + 170);
    r7 = MemoryInline::FlatRead8((r10 + 15));
    r8 = (r8 & 255);
}

loc_801C5BC4:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r7))) {
        goto loc_801C5BCC;
    }
}

loc_801C5BC8:
{
    r0 = r4;
}

loc_801C5BCC:
{
    r6 = (r6 + 1);
    r4 = (r4 + 16);
}

loc_801C5BD8:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(2))) {
        goto loc_801C5A5C;
    }
}

loc_801C5BDC:
{
    r3 = MemoryInline::FlatRead8((r30 + 2241));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_801C5BE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C5D64;
    }
}

loc_801C5BE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C5E88;
    }
}

loc_801C5BEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_801C5BF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C5BF8;
    }
}

loc_801C5BF4:
{
    goto loc_801C5E88;
}

loc_801C5BF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C5BFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C5C30;
    }
}

loc_801C5C00:
{
    r3 = (r31 + 604);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r3 = 512;
    r0 = 716;
    MemoryInline::FlatWrite16((r30 + 2190), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 2192), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 2194), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 2196), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 2198), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 2200), static_cast<uint16_t>(r0));
    goto loc_801C5E88;
}

loc_801C5C30:
{
    r3 = (r0 + r5);
    r5_addr_6 = (r5 + r0);
    r4 = MemoryInline::FlatRead8(r5_addr_6);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 13u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_1 & 3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_1 = (r0_rot_2 & 1020);
    r0_mdest_1 = (r0 & -1021);
    r0 = (r0_mdest_1 | r0_mrot_1);
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 2180), 0, 22u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r30 + 2190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 3));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 1));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_2 = (r0_rot_4 & 1020);
    r0_mdest_2 = (r0 & -1021);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r30 + 2192), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 3));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 2));
    r0 = (r0 & 3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_3 = (r0_rot_5 & 1020);
    r0_mdest_3 = (r0 & -1021);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r30 + 2194), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 7));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_6 & 3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_4 = (r0_rot_7 & 1020);
    r0_mdest_4 = (r0 & -1021);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r30 + 2196), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 7));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 5));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_8 & 3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_5 = (r0_rot_9 & 1020);
    r0_mdest_5 = (r0 & -1021);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::WriteResolved16(guest_range_3, 18u, (r30 + 2198), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 7));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 6));
    r0 = (r0 & 3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_6 = (r0_rot_10 & 1020);
    r0_mdest_6 = (r0 & -1021);
    r0 = (r0_mdest_6 | r0_mrot_6);
    MemoryInline::WriteResolved16(guest_range_3, 20u, (r30 + 2200), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r30 + 2182), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 9));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r30 + 2180), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 11));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r30 + 2188), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 6u, (r30 + 2186), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 2321));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C5CE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C5D00;
    }
}

loc_801C5CE8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2178), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 13));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2184), static_cast<uint16_t>(r0));
}

loc_801C5D00:
{
    r4 = MemoryInline::FlatRead16((r30 + 2190));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 624);
    r5 = MemoryInline::FlatRead16((r30 + 2192));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2194));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead16((r30 + 2196));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 672);
    r5 = MemoryInline::FlatRead16((r30 + 2198));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2200));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead16((r30 + 2178));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 720);
    r5 = MemoryInline::FlatRead16((r30 + 2182));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2180));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead16((r30 + 2184));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 760);
    r5 = MemoryInline::FlatRead16((r30 + 2188));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2186));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    goto loc_801C5E88;
}

loc_801C5D64:
{
    r5_addr_7 = (r5 + r0);
    r4 = MemoryInline::FlatRead8(r5_addr_7);
    r3 = (r0 + r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    guest_range_4 = MemoryInline::ResolveRangeHost((r30 + 2180), 0, 22u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 2u, (r30 + 2182), static_cast<uint16_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 13u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 0u, (r30 + 2180), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r30 + 2188), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 6u, (r30 + 2186), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 14u, (r30 + 2194), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r30 + 2192), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 9));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 20u, (r30 + 2200), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r3 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 18u, (r30 + 2198), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 2321));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C5DD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C5E14;
    }
}

loc_801C5DD4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2178), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2184), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r3 + 11));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2196), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r3 + 12));
    MemoryInline::FlatWrite8((r30 + 2202), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r3 + 13));
    MemoryInline::FlatWrite8((r30 + 2203), static_cast<uint8_t>(r0));
}

loc_801C5E14:
{
    r4 = MemoryInline::FlatRead16((r30 + 2178));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 800);
    r5 = MemoryInline::FlatRead16((r30 + 2182));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2180));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead16((r30 + 2184));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 840);
    r5 = MemoryInline::FlatRead16((r30 + 2188));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2186));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead16((r30 + 2190));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 880);
    r5 = MemoryInline::FlatRead16((r30 + 2194));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2192));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead16((r30 + 2196));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 920);
    r5 = MemoryInline::FlatRead16((r30 + 2200));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2198));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead8((r30 + 2202));
    r3 = (r31 + 960);
    r5 = MemoryInline::FlatRead8((r30 + 2203));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
}

loc_801C5E88:
{
    r12 = MemoryInline::FlatRead32((r30 + 2204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801C5E90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C5EAC;
    }
}

loc_801C5E94:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r30 + 2241));
    ctr = r12;
    ctx->lr = 0x801C5EA4u;
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
    ctx->gpr[26] = r26;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 2204), r0);
}

loc_801C5EAC:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801C59A4 func_801C59A4 preserves=true fpr_mask=0x00000000
