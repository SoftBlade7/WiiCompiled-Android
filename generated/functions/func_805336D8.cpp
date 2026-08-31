#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805336D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lbzux_805338D4_loc_0 = 0;
    uint32_t addr_stfdx_805337EC_loc_0 = 0;
    uint32_t addr_stfdx_805337FC_loc_0 = 0;
    uint32_t addr_stfdx_8053389C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r20_rot_4 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_addr_4 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805336D8;

loc_805336D8:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r11 = (r1 + 192);
    // inline leaf 0x80021580 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -4), r31);
    // end of inlined leaf 0x80021580
    r4 = 0x809C0000u;
    r6 = 0x80890000u;
    r7 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = 0x809C0000u;
    r5 = 0x80890000u;
    r8 = 0x80890000u;
    r31 = MemoryInline::FlatRead8((r7 + 36));
    r7 = (r1 + 24);
    f4.d = MemoryInline::FlatReadFloat64((r6 + 368));
    r6 = (r1 + 8);
    f3.d = MemoryInline::FlatReadFloat64((r5 + 352));
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r10 = 1127219200;
    f1.d = MemoryInline::FlatReadFloat64((r8 + 360));
    goto loc_80533808;
}

loc_8053372C:
{
    r9 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r8 = MemoryInline::FlatRead32((r4 + 12));
    r9 = MemoryInline::FlatRead32((r9 + 12));
    r8_addr_2 = (r8 + r0);
    r11 = MemoryInline::FlatRead32(r8_addr_2);
    r9_addr_2 = (r9 + r0);
    r9 = MemoryInline::FlatRead32(r9_addr_2);
    r0 = MemoryInline::FlatRead32((r11 + 56));
    r8 = MemoryInline::FlatRead8((r9 + 32));
    r0 = (r0 & 2);
}

loc_80533750:
{
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r20 = (r8 + -1);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805337F4;
    }
}

loc_8053375C:
{
    r8 = MemoryInline::FlatRead32((r11 + 64));
    r0 = 99;
    r11 = MemoryInline::FlatRead16((r8 + 4));
    r12 = MemoryInline::FlatRead8((r8 + 6));
}

loc_80533770:
{
    r19 = MemoryInline::FlatRead16((r8 + 8));
    if ((static_cast<uint32_t>(r11) > static_cast<uint32_t>(99))) {
        goto loc_8053377C;
    }
}

loc_80533778:
{
    r0 = r11;
}

loc_8053377C:
{
}

loc_80533780:
{
    r9 = (r0 & 255);
    r8 = 59;
    if ((static_cast<uint32_t>(r11) > static_cast<uint32_t>(99))) {
        goto loc_80533790;
    }
}

loc_8053378C:
{
    r8 = r12;
}

loc_80533790:
{
    r0 = (r5 & 255);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r11), static_cast<uint32_t>(99));
}

loc_8053379C:
{
    r11 = (r8 & 255);
    MemoryInline::FlatWriteRam32((r1 + 120), r10);
    r0 = 999;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f0.d = (f0.d - f4.d);
    f2.d = (f3.d * f0.d);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805337BC;
    }
}

loc_805337B8:
{
    r0 = r19;
}

loc_805337BC:
{
    r8 = (r9 * 60);
    r9 = (r0 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 128), r10);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r8 = (r11 + r8);
    r8 = (r8 * 1000);
    r8 = (r9 + r8);
    MemoryInline::FlatWriteRam32((r1 + 132), r8);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f0.d = (f0.d - f4.d);
    f0.d = (f1.d - f0.d);
    f0.d = (f2.d + f0.d);
    addr_stfdx_805337EC_loc_0 = (r7 + r0);
    MemoryInline::FlatWriteFloat64(addr_stfdx_805337EC_loc_0, f0.d);
    goto loc_80533800;
}

loc_805337F4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    f0.d = MemoryInline::FlatReadFloat32((r9 + 12));
    addr_stfdx_805337FC_loc_0 = (r7 + r0);
    MemoryInline::FlatWriteFloat64(addr_stfdx_805337FC_loc_0, f0.d);
}

loc_80533800:
{
    r6_addr_2 = (r6 + r20);
    MemoryInline::FlatWrite8(r6_addr_2, static_cast<uint8_t>(r5));
    r5 = (r5 + 1);
}

loc_80533808:
{
    r0 = (r5 & 255);
}

loc_80533810:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r31))) {
        goto loc_8053372C;
    }
}

loc_80533814:
{
    r0 = (r31 + -1);
    r7 = (r1 + 32);
    r8 = (r1 + 9);
    r6 = (r1 + 24);
    r5 = (r1 + 8);
    r11 = 1;
    r4 = 8;
    ctr = r0;
}

loc_80533838:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(1))) {
        goto loc_805338AC;
    }
}

loc_8053383C:
{
    r9 = (r1 + 24);
    r10 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r12 = r11;
    r19 = MemoryInline::FlatRead8(r8);
    r9 = (r9 + r4);
    r10 = (r10 + r11);
    goto loc_80533878;
}

loc_8053385C:
{
    f0.d = MemoryInline::FlatReadFloat64((r9 + -8));
    r12 = (r12 + -1);
    r0 = MemoryInline::FlatRead8((r10 + -1));
    MemoryInline::FlatWriteFloat64(r9, f0.d);
    r9 = (r9 + -8);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
    r10 = (r10 + -1);
}

loc_80533878:
{
}

loc_8053387C:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(0))) {
        goto loc_8053388C;
    }
}

loc_80533880:
{
    f0.d = MemoryInline::FlatReadFloat64((r9 + -8));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80533888:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053385C;
    }
}

loc_8053388C:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r5_addr_2 = (r5 + r12);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r19));
    r11 = (r11 + 1);
    r4 = (r4 + 8);
    addr_stfdx_8053389C_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat64(addr_stfdx_8053389C_loc_0, f1.d);
    r7 = (r7 + 8);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053383C;
    }
}

loc_805338AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805338B0:
{
    r30 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80533AE4;
    }
}

loc_805338B8:
{
}

loc_805338BC:
{
    r6 = (r31 + -8);
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(8))) {
        goto loc_80533A98;
    }
}

loc_805338C4:
{
    goto loc_80533A8C;
}

loc_805338C8:
{
    r5 = (r30 & 255);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r7 = (r1 + 8);
    addr_lbzux_805338D4_loc_0 = (r7 + r5);
    guest_range_3 = MemoryInline::ResolveRangeHost(addr_lbzux_805338D4_loc_0, 0, 8u, true, false);
    r20 = MemoryInline::ReadResolved8(guest_range_3, 0u, addr_lbzux_805338D4_loc_0);
    r7 = addr_lbzux_805338D4_loc_0;
    r8 = MemoryInline::FlatRead32((r4 + 12));
    r19 = (r5 + 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r10 = (r30 + 3);
    r8_addr_4 = (r8 + r4);
    r9 = MemoryInline::FlatRead32(r8_addr_4);
    r0 = (r30 + 1);
    r4 = (r0 & 255);
    r10 = (r10 & 255);
    MemoryInline::FlatWrite8((r9 + 32), static_cast<uint8_t>(r19));
    r8 = (r4 + 1);
    r4 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r7 + 2));
    r0 = (r30 + 2);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r9 = (r0 & 255);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r7 + 3));
    r10 = (r10 + 1);
    r12 = MemoryInline::FlatRead32((r11 + 24));
    r19 = (r19 & 255);
    r25 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r7 + 4));
    r11 = (r30 + 4);
    r12 = (r12 + r19);
    r5 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r7 + 1));
    MemoryInline::FlatWrite8((r12 + -1), static_cast<uint8_t>(r20));
    r11 = (r11 & 255);
    r11 = (r11 + 1);
    r12 = (r30 + 5);
    r19 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r12 = (r12 & 255);
    r12 = (r12 + 1);
    r20_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r20 = (r20_rot_2 & -4);
    r22 = MemoryInline::FlatRead32((r19 + 12));
    r19 = (r8 & 255);
    r21_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r21 = (r21_rot_2 & -4);
    r9 = (r9 + 1);
    r22_addr_2 = (r22 + r20);
    r20 = MemoryInline::FlatRead32(r22_addr_2);
    r22 = (r9 & 255);
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r23 = (r23_rot_2 & -4);
    r24 = (r10 & 255);
    MemoryInline::FlatWrite8((r20 + 32), static_cast<uint8_t>(r8));
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r26 = (r26_rot_2 & -4);
    r28 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r7 + 5));
    r27 = (r11 & 255);
    r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r29 = (r12 & 255);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & -4);
    r20 = MemoryInline::FlatRead32((r20 + 24));
    r20 = (r20 + r19);
    MemoryInline::FlatWrite8((r20 + -1), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r5_addr_5 = (r5 + r21);
    r5 = MemoryInline::FlatRead32(r5_addr_5);
    MemoryInline::FlatWrite8((r5 + 32), static_cast<uint8_t>(r9));
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r5 = MemoryInline::FlatRead32((r5 + 24));
    r5 = (r5 + r22);
    MemoryInline::FlatWrite8((r5 + -1), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_2 = (r4 + r23);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    MemoryInline::FlatWrite8((r4 + 32), static_cast<uint8_t>(r10));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 24));
    r4 = (r4 + r24);
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_3 = (r4 + r26);
    r4 = MemoryInline::FlatRead32(r4_addr_3);
    MemoryInline::FlatWrite8((r4 + 32), static_cast<uint8_t>(r11));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r4 = (r0 + r27);
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r25));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_4 = (r4 + r8);
    r4 = MemoryInline::FlatRead32(r4_addr_4);
    MemoryInline::FlatWrite8((r4 + 32), static_cast<uint8_t>(r12));
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r4 = (r30 + 6);
    r0 = (r30 + 7);
    r9 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r7 + 6));
    r8 = MemoryInline::FlatRead32((r5 + 24));
    r4 = (r4 & 255);
    r5 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r7 + 7));
    r11 = (r4 + 1);
    r7 = (r8 + r29);
    r4 = (r0 & 255);
    MemoryInline::FlatWrite8((r7 + -1), static_cast<uint8_t>(r28));
    r12 = (r4 + 1);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r8 = (r11 & 255);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r7 = (r12 & 255);
    r30 = (r30 + 8);
    r10 = MemoryInline::FlatRead32((r10 + 12));
    r10_addr_2 = (r10 + r4);
    r4 = MemoryInline::FlatRead32(r10_addr_2);
    MemoryInline::FlatWrite8((r4 + 32), static_cast<uint8_t>(r11));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 24));
    r4 = (r4 + r8);
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r9));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_5 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_5);
    MemoryInline::FlatWrite8((r4 + 32), static_cast<uint8_t>(r12));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r4 = (r0 + r7);
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r5));
}

loc_80533A8C:
{
    r0 = (r30 & 255);
}

loc_80533A94:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r6))) {
        goto loc_805338C8;
    }
}

loc_80533A98:
{
    r7 = (r1 + 8);
    goto loc_80533AD8;
}

loc_80533AA0:
{
    r6 = (r30 & 255);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r7_addr_2 = (r7 + r6);
    r5 = MemoryInline::FlatRead8(r7_addr_2);
    r8 = (r6 + 1);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r6 = (r8 & 255);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r30 = (r30 + 1);
    r4_addr_8 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_8);
    MemoryInline::FlatWrite8((r4 + 32), static_cast<uint8_t>(r8));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r4 = (r0 + r6);
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r5));
}

loc_80533AD8:
{
    r0 = (r30 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r31));
}

loc_80533AE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80533AA0;
    }
}

loc_80533AE4:
{
    r11 = (r1 + 192);
    // inline leaf 0x800215CC (14 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -4));
    // end of inlined leaf 0x800215CC
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF81FFB gpr_write=0xFFF81FF3 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805336D8 func_805336D8 preserves=true fpr_mask=0x00000000
