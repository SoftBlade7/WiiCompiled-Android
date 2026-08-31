#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80614C5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80614C5C;

loc_80614C5C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -480), 0, 488u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -480), r1);
    r1 = (r1 + -480);
    r0 = ctx->lr;
    r8 = 0x808B0000u;
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 484u, (r1 + 484), r0);
    r0 = 0;
    r8 = (r8 + 11588);
    r6 = (r1 + 200);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 436u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 436u, (r1 + 436), r21);
        MemoryInline::WriteResolved32(guest_range_0, 440u, (r1 + 440), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 444u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 444u, (r1 + 444), r23);
        MemoryInline::WriteResolved32(guest_range_0, 448u, (r1 + 448), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 452u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 452u, (r1 + 452), r25);
        MemoryInline::WriteResolved32(guest_range_0, 456u, (r1 + 456), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 460u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 460u, (r1 + 460), r27);
        MemoryInline::WriteResolved32(guest_range_0, 464u, (r1 + 464), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 468u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 468u, (r1 + 468), r29);
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r1 + 472), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 476u, (r1 + 476), r31);
    r24 = r3;
    r7 = 0;
    r26 = MemoryInline::FlatRead32((r3 + 3128));
    r3 = MemoryInline::FlatRead32((r5 + 8516));
    r5 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r1 + 208), r8);
    r4 = r26;
    MemoryInline::WriteResolved8(guest_range_0, 218u, (r1 + 218), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 212u, (r1 + 212), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 214u, (r1 + 214), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 216u, (r1 + 216), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 220u, (r1 + 220), r8);
    MemoryInline::WriteResolved8(guest_range_0, 230u, (r1 + 230), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 224u, (r1 + 224), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 226u, (r1 + 226), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 228u, (r1 + 228), static_cast<uint16_t>(r0));
    ctx->lr = 0x80614CC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066B8B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_80614CC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80614FE8;
    }
}

loc_80614CCC:
{
    r3 = (r1 + 8);
    ctx->lr = 0x80614CD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061ABA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r5 = MemoryInline::FlatRead32((r24 + 3140));
    r3 = (r1 + 8);
    r6 = MemoryInline::FlatRead32((r24 + 3144));
    r4 = 0;
    // inline leaf 0x80619A58 (4 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam32((r3 + 52), r5);
    MemoryInline::FlatWriteRam32((r3 + 56), r6);
    // end of inlined leaf 0x80619A58
    r0 = MemoryInline::FlatRead16((r1 + 212));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead8((r1 + 214));
    r0 = (r0 * 60);
    r5 = MemoryInline::FlatRead16((r1 + 216));
    r0 = (r4 + r0);
    r0 = (r0 * 1000);
    r4 = (r5 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80619A68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r31 = 65536;
    r25 = 0;
    r22 = 6029312;
    r29 = 0x809C0000u;
    r30 = (r31 + -29504);
    r23 = 10;
}

loc_80614D24:
{
    r4 = (r25 & 255);
    r5 = MemoryInline::FlatRead32((r29 + -10424));
    r0 = (r4 * r30);
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
}

loc_80614D44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20548))) {
        goto loc_80614E04;
    }
}

loc_80614D48:
{
    r0 = (r31 + -27664);
    r0 = (r4 * r0);
    r0 = (r5 + r0);
    r21 = (r0 + 56);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(56)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80614D58:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80614E04;
    }
}

loc_80614D5C:
{
    r27 = (r4 * 628);
    r3 = (r24 + 372);
    r28 = (r24 + r27);
    r4 = MemoryInline::FlatRead32((r28 + 3536));
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805FA930
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_80614D7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80614E04;
    }
}

loc_80614D80:
{
    r3 = (r21 + 65536);
    r5 = -1;
    r6 = 0;
    ctr = r23;
}

loc_80614D90:
{
    r0 = (r6 & 255);
    r0 = (r0 * 20);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + -28270));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80614DA4:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80614DD8;
    }
}

loc_80614DA8:
{
    r0 = MemoryInline::FlatRead32((r4 + -28268));
}

loc_80614DB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r26))) {
        goto loc_80614DD8;
    }
}

loc_80614DB4:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80614DD8;
    }
}

loc_80614DB8:
{
    r0 = MemoryInline::FlatRead16((r4 + -28276));
    r3 = MemoryInline::FlatRead8((r4 + -28274));
    r0 = (r0 * 60);
    r4 = MemoryInline::FlatRead16((r4 + -28272));
    r0 = (r3 + r0);
    r0 = (r0 * 1000);
    r5 = (r4 + r0);
    goto loc_80614DE0;
}

loc_80614DD8:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80614D90;
    }
}

loc_80614DE0:
{
    r0 = (r22 + -29313);
}

loc_80614DE8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80614DF0;
    }
}

loc_80614DEC:
{
    r0 = r5;
}

loc_80614DF0:
{
    r4 = (r24 + r27);
    MemoryInline::FlatWrite32((r28 + 3544), r0);
    r3 = (r1 + 8);
    r4 = (r4 + 3156);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r5_addr_2 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_2, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
}

loc_80614E04:
{
    r25 = (r25 + 1);
}

loc_80614E0C:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(4))) {
        goto loc_80614D24;
    }
}

loc_80614E10:
{
    r25 = 0;
    r31 = 0x809C0000u;
    r23 = 6029312;
    r27 = 5;
}

loc_80614E20:
{
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = (r25 & 255);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2900 (19 guest instruction(s))
}

loc_inl3_0x805D2900:
{
}

loc_inl3_0x805D2904:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl3_0x805D2944;
    }
}

loc_inl3_0x805D2908:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x805D2944;
    }
}

loc_inl3_0x805D2920:
{
    r4 = MemoryInline::FlatRead32((r4 + 464));
    r3 = 25;
    r4 = (r4 + -1);
    r0 = (25 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(25) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = (r3 | ~r4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_7 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_inl3_cont_805D2900;
}

loc_inl3_0x805D2944:
{
    r3 = 0;
}

loc_inl3_cont_805D2900:
{
    // end of inlined leaf 0x805D2900
}

loc_80614E38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80614F74;
    }
}

loc_80614E3C:
{
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = (r25 & 255);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2890 (14 guest instruction(s))
}

loc_inl4_0x805D2890:
{
}

loc_inl4_0x805D2894:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl4_0x805D28C0;
    }
}

loc_inl4_0x805D2898:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_8);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x805D28B8;
    }
}

loc_inl4_0x805D28B0:
{
    r3 = (r4 + 8);
    goto loc_inl4_cont_805D2890;
}

loc_inl4_0x805D28B8:
{
    r3 = 0;
    goto loc_inl4_cont_805D2890;
}

loc_inl4_0x805D28C0:
{
    r3 = 0;
}

loc_inl4_cont_805D2890:
{
    // end of inlined leaf 0x805D2890
    r8 = -1;
    r9 = 0;
    ctr = r27;
}

loc_80614E5C:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & 2040);
    r5 = 0;
    r4 = (r3 + r0);
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 120));
    r7 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80614E78:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80614ECC;
    }
}

loc_80614E7C:
{
}

loc_80614E80:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(r0))) {
        goto loc_80614ECC;
    }
}

loc_80614E84:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80614EA0;
    }
}

loc_80614E88:
{
    r0 = MemoryInline::FlatRead32((r4 + 124));
    r4 = 1;
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_3 & 127);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r6 = (r6_rot_3 & 127);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r7 = (r7_rot_3 & 1023);
    goto loc_80614EA4;
}

loc_80614EA0:
{
    r4 = 0;
}

loc_80614EA4:
{
}

loc_80614EA8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80614ECC;
    }
}

loc_80614EAC:
{
    r0 = (r5 & 65535);
    r3 = (r6 & 255);
    r0 = (r0 * 60);
    r4 = (r7 & 65535);
    r0 = (r3 + r0);
    r0 = (r0 * 1000);
    r8 = (r4 + r0);
    goto loc_80614F48;
}

loc_80614ECC:
{
    r9 = (r9 + 1);
    r5 = 0;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r0 = (r0_rot_11 & 2040);
    r6 = 0;
    r4 = (r3 + r0);
    r7 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 120));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80614EEC:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80614F40;
    }
}

loc_80614EF0:
{
}

loc_80614EF4:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(r0))) {
        goto loc_80614F40;
    }
}

loc_80614EF8:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80614F14;
    }
}

loc_80614EFC:
{
    r0 = MemoryInline::FlatRead32((r4 + 124));
    r4 = 1;
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_6 & 127);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r6 = (r6_rot_6 & 127);
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r7 = (r7_rot_6 & 1023);
    goto loc_80614F18;
}

loc_80614F14:
{
    r4 = 0;
}

loc_80614F18:
{
}

loc_80614F1C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80614F40;
    }
}

loc_80614F20:
{
    r0 = (r5 & 65535);
    r3 = (r6 & 255);
    r0 = (r0 * 60);
    r4 = (r7 & 65535);
    r0 = (r3 + r0);
    r0 = (r0 * 1000);
    r8 = (r4 + r0);
    goto loc_80614F48;
}

loc_80614F40:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80614E5C;
    }
}

loc_80614F48:
{
    r5 = (r23 + -29313);
}

loc_80614F50:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r5))) {
        goto loc_80614F58;
    }
}

loc_80614F54:
{
    r5 = r8;
}

loc_80614F58:
{
    r0 = (r25 & 255);
    r3 = (r1 + 8);
    r0 = (r0 * 628);
    r4 = (r24 + r0);
    MemoryInline::FlatWrite32((r4 + 6056), r5);
    r4 = (r4 + 5668);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r5_addr_5 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_5, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
}

loc_80614F74:
{
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(30));
}

loc_80614F7C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80614E20;
    }
}

loc_80614F80:
{
    r3 = (r1 + 8);
    r4 = (r24 + 25136);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r5_addr_7 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_7, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80619C70u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = (r1 + 8);
    ctx->lr = 0x80614F9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061AC4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    ctx->lr = 0x80614FA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80619CBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    ctx->lr = 0x80614FACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80619F5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = (r24 + 896);
    r22 = 0;
}

loc_80614FB4:
{
    r4 = r21;
    r5 = r22;
    r3 = (r1 + 8);
    ctx->lr = 0x80614FC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061A23Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r22 = (r22 + 1);
    r21 = (r21 + 372);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(6));
}

loc_80614FD0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80614FB4;
    }
}

loc_80614FD4:
{
    r3 = (r1 + 8);
    ctx->lr = 0x80614FDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80619F78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x80614FE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061ABECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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

loc_80614FE8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 436), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 436));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 440));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 444));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 448));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 452));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 456));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 460));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 464));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 468));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 472));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 476));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 484));
    ctx->lr = r0;
    r1 = (r1 + 480);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80614C5C func_80614C5C preserves=true fpr_mask=0x00000000
