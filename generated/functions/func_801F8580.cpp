#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F8580(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_801F86C4_loc_0 = 0;
    uint32_t addr_801F86CC_loc_0 = 0;
    uint32_t addr_801F86D4_loc_0 = 0;
    uint32_t addr_801F86DC_loc_0 = 0;
    uint32_t addr_801F86E4_loc_0 = 0;
    uint32_t addr_801F86F0_loc_0 = 0;
    uint32_t addr_801F86F8_loc_0 = 0;
    uint32_t addr_801F87A8_loc_0 = 0;
    uint32_t addr_801F87B0_loc_0 = 0;
    uint32_t addr_801F87B8_loc_0 = 0;
    uint32_t addr_801F87C0_loc_0 = 0;
    uint32_t addr_801F87C8_loc_0 = 0;
    uint32_t addr_801F87D4_loc_0 = 0;
    uint32_t addr_801F87DC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mdest_6 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_mrot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mdest_5 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_mrot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
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
    uint32_t r18 = ctx->gpr[18];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F8580;

loc_801F8580:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F8598:
{
    r19 = r3;
    r20 = r4;
    r21 = r5;
    r22 = r6;
    r23 = r7;
    r24 = r8;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F85BC;
    }
}

loc_801F85B4:
{
    r3 = 10;
    goto loc_801F8868;
}

loc_801F85BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801F85C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F85DC;
    }
}

loc_801F85C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801F85C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F85D4;
    }
}

loc_801F85CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_801F85D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F85DC;
    }
}

loc_801F85D4:
{
    r3 = 10;
    goto loc_801F8868;
}

loc_801F85DC:
{
    r3 = r19;
    r5 = (r1 + 12);
    r4 = -1;
    ctx->lr = 0x801F85ECu;
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
    ctx->gpr[18] = r18;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801F5C48u>(ctx);
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
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
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
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F85F0:
{
    r18 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F8864;
    }
}

loc_801F85F8:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = 0;
    r25 = MemoryInline::FlatRead32((r19 + 5612));
    r0 = MemoryInline::FlatRead8((r19 + 32));
    r28 = MemoryInline::FlatRead32((r3 + 4));
    r26 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r0));
    r3 = r28;
    r5 = r26;
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
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    r27 = (r20 + r21);
    r31 = 32;
    r29 = 46;
    r30 = 0;
    goto loc_801F8850;
}

loc_801F8630:
{
}

loc_801F8634:
{
    if ((static_cast<uint32_t>(r21) >= static_cast<uint32_t>(r25))) {
        goto loc_801F864C;
    }
}

loc_801F8638:
{
    r0 = MemoryInline::FlatRead8((r19 + 32));
    r25 = r21;
    r27 = r20;
    r26 = PPC_Slw(static_cast<uint32_t>(r21), static_cast<uint32_t>(r0));
    goto loc_801F8650;
}

loc_801F864C:
{
    r27 = (r27 - r25);
}

loc_801F8650:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(r25));
}

loc_801F8654:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F8800;
    }
}

loc_801F8658:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_801F865C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F8800;
    }
}

loc_801F8660:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r28, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r28, static_cast<uint8_t>(r29));
    r8 = (r28 + 14);
    r7 = (r28 + 16);
    r6 = (r28 + 18);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r28 + 1), static_cast<uint8_t>(r31));
    r5 = (r28 + 22);
    r4 = (r28 + 24);
    r3 = (r28 + 20);
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r28 + 2), static_cast<uint8_t>(r31));
    r0 = (r28 + 26);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r28 + 3), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r28 + 4), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r28 + 5), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r28 + 6), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r28 + 7), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r28 + 8), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r28 + 9), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r28 + 10), static_cast<uint8_t>(r31));
    guest_range_3 = MemoryInline::ResolveRangeHost((r23 + 539), 0, 29u, true, false);
    r9 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r23 + 540));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r28 + 11), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r23 + 539));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r28 + 12), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r23 + 541));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r28 + 13), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved16(guest_range_3, 3u, (r23 + 542));
    addr_801F86C4_loc_0 = r8;
    PPC_StoreHalfwordByteReverse(addr_801F86C4_loc_0, r9);
    r8 = MemoryInline::ReadResolved16(guest_range_3, 5u, (r23 + 544));
    addr_801F86CC_loc_0 = r7;
    PPC_StoreHalfwordByteReverse(addr_801F86CC_loc_0, r8);
    r7 = MemoryInline::ReadResolved16(guest_range_3, 7u, (r23 + 546));
    addr_801F86D4_loc_0 = r6;
    PPC_StoreHalfwordByteReverse(addr_801F86D4_loc_0, r7);
    r6 = MemoryInline::ReadResolved16(guest_range_3, 9u, (r23 + 548));
    addr_801F86DC_loc_0 = r5;
    PPC_StoreHalfwordByteReverse(addr_801F86DC_loc_0, r6);
    r5 = MemoryInline::ReadResolved16(guest_range_3, 11u, (r23 + 550));
    addr_801F86E4_loc_0 = r4;
    PPC_StoreHalfwordByteReverse(addr_801F86E4_loc_0, r5);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 25u, (r23 + 564));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_2 & 65535);
    addr_801F86F0_loc_0 = r3;
    PPC_StoreHalfwordByteReverse(addr_801F86F0_loc_0, r4);
    r3 = MemoryInline::ReadResolved32(guest_range_3, 25u, (r23 + 564));
    addr_801F86F8_loc_0 = r0;
    PPC_StoreHalfwordByteReverse(addr_801F86F8_loc_0, r3);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 13u, (r23 + 552));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & 16711680);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 65280);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_2 = (r3_rot_3 & -16777216);
    r3_mdest_2 = (r3 & 16777215);
    r3 = (r3_mdest_2 | r3_mrot_2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_3 & 255);
    r0_mdest_2 = (r0 & -256);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0 = (r3 | r0);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r28 + 28), r0);
    r3 = MemoryInline::FlatRead32((r24 + 568));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 25u, (r23 + 564));
    r3 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_801F8728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F8738;
    }
}

loc_801F872C:
{
    r3 = MemoryInline::FlatRead32((r24 + 564));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_801F8734:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F8740;
    }
}

loc_801F8738:
{
    MemoryInline::FlatWrite32((r23 + 564), r30);
    goto loc_801F8744;
}

loc_801F8740:
{
    MemoryInline::FlatWrite32((r23 + 564), r3);
}

loc_801F8744:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r28 + 32), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r28 + 32), static_cast<uint8_t>(r29));
    r9 = (r28 + 46);
    r8 = (r28 + 48);
    r7 = (r28 + 50);
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r28 + 33), static_cast<uint8_t>(r29));
    r6 = (r28 + 54);
    r5 = (r28 + 56);
    r4 = (r28 + 52);
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r28 + 34), static_cast<uint8_t>(r31));
    r3 = (r28 + 58);
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r28 + 35), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r28 + 36), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r28 + 37), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r28 + 38), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r28 + 39), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r28 + 40), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r28 + 41), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 10u, (r28 + 42), static_cast<uint8_t>(r31));
    r10 = MemoryInline::FlatRead8((r23 + 540));
    MemoryInline::WriteResolved8(guest_range_4, 11u, (r28 + 43), static_cast<uint8_t>(r10));
    r10 = MemoryInline::FlatRead8((r23 + 539));
    MemoryInline::WriteResolved8(guest_range_4, 12u, (r28 + 44), static_cast<uint8_t>(r10));
    r10 = MemoryInline::FlatRead8((r23 + 541));
    MemoryInline::WriteResolved8(guest_range_4, 13u, (r28 + 45), static_cast<uint8_t>(r10));
    r10 = MemoryInline::FlatRead16((r23 + 542));
    addr_801F87A8_loc_0 = r9;
    PPC_StoreHalfwordByteReverse(addr_801F87A8_loc_0, r10);
    r9 = MemoryInline::FlatRead16((r23 + 544));
    addr_801F87B0_loc_0 = r8;
    PPC_StoreHalfwordByteReverse(addr_801F87B0_loc_0, r9);
    r8 = MemoryInline::FlatRead16((r23 + 546));
    addr_801F87B8_loc_0 = r7;
    PPC_StoreHalfwordByteReverse(addr_801F87B8_loc_0, r8);
    r7 = MemoryInline::FlatRead16((r23 + 548));
    addr_801F87C0_loc_0 = r6;
    PPC_StoreHalfwordByteReverse(addr_801F87C0_loc_0, r7);
    r6 = MemoryInline::FlatRead16((r23 + 550));
    addr_801F87C8_loc_0 = r5;
    PPC_StoreHalfwordByteReverse(addr_801F87C8_loc_0, r6);
    r5 = MemoryInline::FlatRead32((r23 + 564));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r5 = (r5_rot_2 & 65535);
    addr_801F87D4_loc_0 = r4;
    PPC_StoreHalfwordByteReverse(addr_801F87D4_loc_0, r5);
    r4 = MemoryInline::FlatRead32((r23 + 564));
    addr_801F87DC_loc_0 = r3;
    PPC_StoreHalfwordByteReverse(addr_801F87DC_loc_0, r4);
    r5 = MemoryInline::FlatRead32((r23 + 552));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4 = (r4_rot_3 & 16711680);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r3 = (r3_rot_4 & 65280);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4_mrot_2 = (r4_rot_4 & -16777216);
    r4_mdest_2 = (r4 & 16777215);
    r4 = (r4_mdest_2 | r4_mrot_2);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r3_mrot_3 = (r3_rot_5 & 255);
    r3_mdest_3 = (r3 & -256);
    r3 = (r3_mdest_3 | r3_mrot_3);
    r3 = (r4 | r3);
    MemoryInline::WriteResolved32(guest_range_4, 28u, (r28 + 60), r3);
    MemoryInline::FlatWrite32((r23 + 564), r0);
}

loc_801F8800:
{
    r3 = r19;
    r4 = r28;
    r5 = r27;
    r6 = r26;
    r7 = (r1 + 8);
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x801F8820u;
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
    ctx->gpr[18] = r18;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8020551Cu>(ctx);
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
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
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
    xer = ctx->xer;
}

loc_801F8824:
{
    r18 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F8834;
    }
}

loc_801F882C:
{
    r21 = 0;
    goto loc_801F8850;
}

loc_801F8834:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801F883C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r26))) {
        goto loc_801F884C;
    }
}

loc_801F8840:
{
    r21 = 0;
    r18 = 17;
    goto loc_801F8850;
}

loc_801F884C:
{
    r21 = (r21 - r25);
}

loc_801F8850:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_801F8854:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F8630;
    }
}

loc_801F8858:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r19;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F5CBCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_801F8864:
{
    r3 = r18;
}

loc_801F8868:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[18] = r18;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F8580 func_801F8580 preserves=true fpr_mask=0x00000000
