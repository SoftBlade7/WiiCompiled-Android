#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80218FF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r12_mdest_0 = 0;
    uint32_t r12_mrot_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_10 = 0;
    uint32_t r12_rot_11 = 0;
    uint32_t r12_rot_12 = 0;
    uint32_t r12_rot_13 = 0;
    uint32_t r12_rot_14 = 0;
    uint32_t r12_rot_15 = 0;
    uint32_t r12_rot_16 = 0;
    uint32_t r12_rot_17 = 0;
    uint32_t r12_rot_18 = 0;
    uint32_t r12_rot_19 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_20 = 0;
    uint32_t r12_rot_21 = 0;
    uint32_t r12_rot_22 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r15_rot_0 = 0;
    uint32_t r15_rot_1 = 0;
    uint32_t r15_rot_2 = 0;
    uint32_t r15_rot_3 = 0;
    uint32_t r15_rot_4 = 0;
    uint32_t r15_rot_5 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r16_rot_1 = 0;
    uint32_t r16_rot_2 = 0;
    uint32_t r16_rot_3 = 0;
    uint32_t r16_rot_4 = 0;
    uint32_t r16_rot_5 = 0;
    uint32_t r17_rot_0 = 0;
    uint32_t r17_rot_1 = 0;
    uint32_t r17_rot_2 = 0;
    uint32_t r17_rot_3 = 0;
    uint32_t r17_rot_4 = 0;
    uint32_t r17_rot_5 = 0;
    uint32_t r17_rot_6 = 0;
    uint32_t r17_rot_7 = 0;
    uint32_t r17_rot_8 = 0;
    uint32_t r17_rot_9 = 0;
    uint32_t r18_addr_0 = 0;
    uint32_t r18_addr_1 = 0;
    uint32_t r18_addr_2 = 0;
    uint32_t r18_addr_3 = 0;
    uint32_t r18_addr_4 = 0;
    uint32_t r18_addr_5 = 0;
    uint32_t r18_addr_6 = 0;
    uint32_t r18_addr_7 = 0;
    uint32_t r19_addr_0 = 0;
    uint32_t r19_addr_1 = 0;
    uint32_t r19_addr_2 = 0;
    uint32_t r19_addr_3 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r20_addr_4 = 0;
    uint32_t r20_addr_5 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r25_rot_6 = 0;
    uint32_t r29_addic_src_0 = 0;
    uint32_t r29_addic_src_1 = 0;
    uint32_t r29_addic_src_2 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_11 = 0;
    uint32_t r9_rot_12 = 0;
    uint32_t r9_rot_13 = 0;
    uint32_t r9_rot_14 = 0;
    uint32_t r9_rot_15 = 0;
    uint32_t r9_rot_16 = 0;
    uint32_t r9_rot_17 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80218FF0;

loc_80218FF0:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 80u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r11 = 512;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 12u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 8), r14);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 12), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 16), r16);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 20), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 24), r18);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 28), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 32), r20);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 36), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 40), r22);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 44), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 48), r24);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 56), r26);
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 60), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 64), r28);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 68), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 72), r30);
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r1 + 76), r31);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 4));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r7 = (r7_rot_0 & -256);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 5));
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80219010:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 9));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r7_mrot_0 = (r7_rot_1 & 16711680);
    r7_mdest_0 = (r7 & -16711681);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 7));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 10));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 11));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r6_mrot_0 = (r6_rot_0 & 65280);
    r6_mdest_0 = (r6 & -65281);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 8));
    r24 = (r8 | r7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0_mrot_0 = (r0_rot_1 & -16777216);
    r0_mdest_0 = (r0 & 16777215);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r23 = (r6 | r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80219044;
    }
}

loc_80219040:
{
    r11 = 4096;
}

loc_80219044:
{
    r21 = MemoryInline::FlatRead32((r13 + -24088));
    r16 = 0;
    r8 = 32;
    r7 = -1;
    r20 = (r21 + 2048);
    MemoryInline::FlatWrite32((r21 + 20484), r16);
    r19 = (r20 + 2052);
    r5 = r21;
    r18 = (r19 + 16384);
    r6 = r20;
    r17 = -1;
    r15 = 0;
    MemoryInline::FlatWrite32((r21 + 2048), r16);
    r0 = 1;
    ctr = r8;
}

loc_80219080:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
    r8 = MemoryInline::FlatRead32(r6);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 4), r8);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r0);
    r8 = MemoryInline::FlatRead32((r6 + 4));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 8), r8);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r0);
    r8 = MemoryInline::FlatRead32((r6 + 8));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 12), r8);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 12), r0);
    r8 = MemoryInline::FlatRead32((r6 + 12));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 16), r8);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 16), r0);
    r8 = MemoryInline::FlatRead32((r6 + 16));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 20), r8);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 20), r0);
    r8 = MemoryInline::FlatRead32((r6 + 20));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 24), r8);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 24), r0);
    r8 = MemoryInline::FlatRead32((r6 + 24));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 28), r8);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 28), r0);
    r8 = MemoryInline::FlatRead32((r6 + 28));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 32), r8);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r5 + 32), r0);
    r8 = MemoryInline::FlatRead32((r6 + 32));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 36), r8);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r5 + 36), r0);
    r8 = MemoryInline::FlatRead32((r6 + 36));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 40), r8);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r5 + 40), r0);
    r8 = MemoryInline::FlatRead32((r6 + 40));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 44), r8);
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r5 + 44), r0);
    r8 = MemoryInline::FlatRead32((r6 + 44));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 48), r8);
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r5 + 48), r0);
    r8 = MemoryInline::FlatRead32((r6 + 48));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 52), r8);
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r5 + 52), r0);
    r8 = MemoryInline::FlatRead32((r6 + 52));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 56), r8);
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r5 + 56), r0);
    r8 = MemoryInline::FlatRead32((r6 + 56));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 60), r8);
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r5 + 60), r0);
    r5 = (r5 + 64);
    r8 = MemoryInline::FlatRead32((r6 + 60));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r6 + 64), r8);
    r6 = (r6 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80219080;
    }
}

loc_80219188:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_8021918C:
{
    r8 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_802192A8;
    }
}

loc_80219194:
{
}

loc_80219198:
{
    r10 = (r11 + -8);
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(8))) {
        goto loc_80219270;
    }
}

loc_802191A0:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_802191BC;
    }
}

loc_802191A8:
{
    r5 = 0x80000000u;
    r0 = (r5 + -2);
}

loc_802191B4:
{
    if ((static_cast<int32_t>(r11) > static_cast<int32_t>(r0))) {
        goto loc_802191BC;
    }
}

loc_802191B8:
{
    r6 = 1;
}

loc_802191BC:
{
}

loc_802191C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80219270;
    }
}

loc_802191C4:
{
    r9 = (r10 + 7);
    r5 = r19;
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_1 & 536870911);
    r6 = r18;
    r0 = 1;
    ctr = r9;
}

loc_802191E0:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(0))) {
        goto loc_80219270;
    }
}

loc_802191E4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r5, r0);
    r8 = (r8 + 8);
    r9 = MemoryInline::FlatRead32(r6);
    r9 = (r9 + 1);
    MemoryInline::FlatWrite32((r6 + 4), r9);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r5 + 4), r0);
    r9 = MemoryInline::FlatRead32((r6 + 4));
    r9 = (r9 + 1);
    MemoryInline::FlatWrite32((r6 + 8), r9);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r5 + 8), r0);
    r9 = MemoryInline::FlatRead32((r6 + 8));
    r9 = (r9 + 1);
    MemoryInline::FlatWrite32((r6 + 12), r9);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r5 + 12), r0);
    r9 = MemoryInline::FlatRead32((r6 + 12));
    r9 = (r9 + 1);
    MemoryInline::FlatWrite32((r6 + 16), r9);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r5 + 16), r0);
    r9 = MemoryInline::FlatRead32((r6 + 16));
    r9 = (r9 + 1);
    MemoryInline::FlatWrite32((r6 + 20), r9);
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r5 + 20), r0);
    r9 = MemoryInline::FlatRead32((r6 + 20));
    r9 = (r9 + 1);
    MemoryInline::FlatWrite32((r6 + 24), r9);
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r5 + 24), r0);
    r9 = MemoryInline::FlatRead32((r6 + 24));
    r9 = (r9 + 1);
    MemoryInline::FlatWrite32((r6 + 28), r9);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r5 + 28), r0);
    r5 = (r5 + 32);
    r9 = MemoryInline::FlatRead32((r6 + 28));
    r9 = (r9 + 1);
    MemoryInline::FlatWrite32((r6 + 32), r9);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802191E4;
    }
}

loc_80219270:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r0 = (r11 - r8);
    r9 = (r19 + r5);
    r6 = 1;
    r10 = (r18 + r5);
    ctr = r0;
}

loc_8021928C:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r11))) {
        goto loc_802192A8;
    }
}

loc_80219290:
{
    MemoryInline::FlatWrite32(r9, r6);
    r9 = (r9 + 4);
    r5 = MemoryInline::FlatRead32(r10);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r10 + 4), r0);
    r10 = (r10 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80219290;
    }
}

loc_802192A8:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 13));
    r6 = (r23 + r3);
    r3_addr_0 = (r3 + r23);
    r5 = MemoryInline::FlatRead8(r3_addr_0);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r10 = (r10_rot_0 & -4);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r9 = (r9_rot_4 & -65536);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 12));
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r28 = 0;
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r9_mrot_0 = (r9_rot_5 & -16777216);
    r9_mdest_0 = (r9 & 16777215);
    r9 = (r9_mdest_0 | r9_mrot_0);
    r8 = MemoryInline::FlatRead8((r6 + 2));
    r6 = MemoryInline::FlatRead8((r6 + 3));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0_mrot_1 = (r0_rot_3 & -16777216);
    r0_mdest_1 = (r0 & 16777215);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r6_mrot_1 = (r6_rot_1 & 65280);
    r6_mdest_1 = (r6 & -65281);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r26 = (r6 | r0);
    r14 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 14));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 15));
    r22 = 16;
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(8));
    r12_mrot_0 = (r12_rot_0 & 65280);
    r12_mdest_0 = (r12 & -65281);
    r12 = (r12_mdest_0 | r12_mrot_0);
    r5 = 65536;
    r27 = (r12 | r9);
    r6 = 0;
    r14 = 0x80000000u;
    r0 = 64;
    r23 = (r23 + 4);
    goto loc_802198E0;
}

loc_80219310:
{
    r25 = MemoryInline::FlatRead32((r20 + 2048));
    r12 = (r27 - r16);
    r8 = 0;
    r9 = 512;
    r25 = PPC_Divwu(static_cast<uint32_t>(r7), static_cast<uint32_t>(r25));
    r12 = PPC_Divwu(static_cast<uint32_t>(r12), static_cast<uint32_t>(r25));
    goto loc_8021935C;
}

loc_8021932C:
{
    r29 = (r8 + r9);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & -4);
    r20_addr_3 = (r20 + r7);
    r7 = MemoryInline::FlatRead32(r20_addr_3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r29);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r30 = (static_cast<int32_t>(r29) >> 1);
}

loc_80219340:
{
    if ((static_cast<uint32_t>(r12) >= static_cast<uint32_t>(r7))) {
        goto loc_80219348;
    }
}

loc_80219344:
{
    r9 = r30;
}

loc_80219348:
{
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r7 = (r7_rot_5 & -4);
    r20_addr_4 = (r20 + r7);
    r7 = MemoryInline::FlatRead32(r20_addr_4);
}

loc_80219354:
{
    if ((static_cast<uint32_t>(r12) < static_cast<uint32_t>(r7))) {
        goto loc_8021935C;
    }
}

loc_80219358:
{
    r8 = (r30 + 1);
}

loc_8021935C:
{
}

loc_80219360:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r9))) {
        goto loc_8021932C;
    }
}

loc_80219364:
{
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r7 = (r7_rot_6 & -4);
    r8 = (r30 + 1);
    r7 = (r20 + r7);
    ctr = r8;
}

loc_80219378:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_802193A0;
    }
}

loc_8021937C:
{
    r8 = MemoryInline::FlatRead32(r7);
}

loc_80219384:
{
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(r12))) {
        goto loc_80219394;
    }
}

loc_80219388:
{
    r8 = MemoryInline::FlatRead32((r7 + 4));
}

loc_80219390:
{
    if ((static_cast<uint32_t>(r12) < static_cast<uint32_t>(r8))) {
        goto loc_802193A0;
    }
}

loc_80219394:
{
    r7 = (r7 + -4);
    r30 = (r30 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8021937C;
    }
}

loc_802193A0:
{
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r31 = (r31_rot_2 & -4);
    r29 = r30;
    r20_addr_5 = (r20 + r31);
    r7 = MemoryInline::FlatRead32(r20_addr_5);
    r12 = (r20 + r31);
    r21_addr_2 = (r21 + r31);
    r8 = MemoryInline::FlatRead32(r21_addr_2);
    r9 = (r25 * r7);
    r7 = (r8 + 1);
    r21_addr_3 = (r21 + r31);
    MemoryInline::FlatWrite32(r21_addr_3, r7);
    r7 = (r25 * r8);
    r16 = (r16 + r9);
    goto loc_802193D8;
}

loc_802193CC:
{
    r8 = MemoryInline::FlatRead32(r12);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32(r12, r8);
}

loc_802193D8:
{
    r30 = (r30 + 1);
    r12 = (r12 + 4);
}

loc_802193E4:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(512))) {
        goto loc_802193CC;
    }
}

loc_802193E8:
{
    r8 = MemoryInline::FlatRead32((r20 + 2048));
}

loc_802193F0:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r5))) {
        goto loc_802194EC;
    }
}

loc_802193F4:
{
    r8 = r21;
    r9 = r20;
    MemoryInline::FlatWrite32(r20, r6);
    ctr = r0;
}

loc_80219404:
{
    r12 = MemoryInline::FlatRead32(r8);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(31));
    r12 = (r12_rot_3 & 2147483647);
    r25 = (r12 | 1);
    MemoryInline::FlatWrite32(r8, r25);
    r12 = MemoryInline::FlatRead32(r9);
    r12 = (r12 + r25);
    MemoryInline::FlatWrite32((r9 + 4), r12);
    r12 = MemoryInline::FlatRead32((r8 + 4));
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(31));
    r12 = (r12_rot_4 & 2147483647);
    r25 = (r12 | 1);
    MemoryInline::FlatWrite32((r8 + 4), r25);
    r12 = MemoryInline::FlatRead32((r9 + 4));
    r12 = (r12 + r25);
    MemoryInline::FlatWrite32((r9 + 8), r12);
    r12 = MemoryInline::FlatRead32((r8 + 8));
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(31));
    r12 = (r12_rot_5 & 2147483647);
    r25 = (r12 | 1);
    MemoryInline::FlatWrite32((r8 + 8), r25);
    r12 = MemoryInline::FlatRead32((r9 + 8));
    r12 = (r12 + r25);
    MemoryInline::FlatWrite32((r9 + 12), r12);
    r12 = MemoryInline::FlatRead32((r8 + 12));
    r12_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(31));
    r12 = (r12_rot_6 & 2147483647);
    r25 = (r12 | 1);
    MemoryInline::FlatWrite32((r8 + 12), r25);
    r12 = MemoryInline::FlatRead32((r9 + 12));
    r12 = (r12 + r25);
    MemoryInline::FlatWrite32((r9 + 16), r12);
    r12 = MemoryInline::FlatRead32((r8 + 16));
    r12_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(31));
    r12 = (r12_rot_7 & 2147483647);
    r25 = (r12 | 1);
    MemoryInline::FlatWrite32((r8 + 16), r25);
    r12 = MemoryInline::FlatRead32((r9 + 16));
    r12 = (r12 + r25);
    MemoryInline::FlatWrite32((r9 + 20), r12);
    r12 = MemoryInline::FlatRead32((r8 + 20));
    r12_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(31));
    r12 = (r12_rot_8 & 2147483647);
    r25 = (r12 | 1);
    MemoryInline::FlatWrite32((r8 + 20), r25);
    r12 = MemoryInline::FlatRead32((r9 + 20));
    r12 = (r12 + r25);
    MemoryInline::FlatWrite32((r9 + 24), r12);
    r12 = MemoryInline::FlatRead32((r8 + 24));
    r12_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(31));
    r12 = (r12_rot_9 & 2147483647);
    r25 = (r12 | 1);
    MemoryInline::FlatWrite32((r8 + 24), r25);
    r12 = MemoryInline::FlatRead32((r9 + 24));
    r12 = (r12 + r25);
    MemoryInline::FlatWrite32((r9 + 28), r12);
    r12 = MemoryInline::FlatRead32((r8 + 28));
    r12_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(31));
    r12 = (r12_rot_10 & 2147483647);
    r25 = (r12 | 1);
    MemoryInline::FlatWrite32((r8 + 28), r25);
    r8 = (r8 + 32);
    r12 = MemoryInline::FlatRead32((r9 + 28));
    r12 = (r12 + r25);
    MemoryInline::FlatWrite32((r9 + 32), r12);
    r9 = (r9 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80219404;
    }
}

loc_802194EC:
{
    r8 = (r3 + r22);
    goto loc_80219510;
}

loc_802194F4:
{
    r9 = MemoryInline::FlatRead8(r8);
    r12_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(8));
    r12 = (r12_rot_13 & -256);
    r16_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(8));
    r16 = (r16_rot_3 & -256);
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_8 & -256);
    r27 = (r12 + r9);
    r22 = (r22 + 1);
    r8 = (r8 + 1);
}

loc_80219510:
{
    r9 = (r16 + r7);
    r12 = (r16 & -16777216);
    r9 = (r9 & -16777216);
}

loc_80219520:
{
    if ((static_cast<uint32_t>(r12) == static_cast<uint32_t>(r9))) {
        goto loc_802194F4;
    }
}

loc_80219524:
{
    r8 = (r3 + r22);
    goto loc_80219550;
}

loc_8021952C:
{
    r7 = (r16 & 65535);
    r9 = MemoryInline::FlatRead8(r8);
    r7 = (r5 - r7);
    r12_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(8));
    r12 = (r12_rot_15 & -256);
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_10 & -256);
    r16_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(8));
    r16 = (r16_rot_5 & -256);
    r27 = (r12 + r9);
    r22 = (r22 + 1);
    r8 = (r8 + 1);
}

loc_80219550:
{
}

loc_80219554:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r5))) {
        goto loc_8021952C;
    }
}

loc_80219558:
{
}

loc_8021955C:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(256))) {
        goto loc_8021956C;
    }
}

loc_80219560:
{
    r4_addr_2 = (r4 + r28);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r29));
    r28 = (r28 + 1);
    goto loc_802198E0;
}

loc_8021956C:
{
    r18_addr_2 = (r18 + r10);
    r8 = MemoryInline::FlatRead32(r18_addr_2);
    r9 = (r26 - r15);
    r25 = r11;
    r12 = 0;
    r8 = PPC_Divwu(static_cast<uint32_t>(r17), static_cast<uint32_t>(r8));
    r9 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r8));
    goto loc_802195B8;
}

loc_80219588:
{
    r30 = (r12 + r25);
    r17_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r17 = (r17_rot_3 & -4);
    r18_addr_4 = (r18 + r17);
    r17 = MemoryInline::FlatRead32(r18_addr_4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r30);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r30 = (static_cast<int32_t>(r30) >> 1);
}

loc_8021959C:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r17))) {
        goto loc_802195A4;
    }
}

loc_802195A0:
{
    r25 = r30;
}

loc_802195A4:
{
    r17_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r17 = (r17_rot_4 & -4);
    r18_addr_5 = (r18 + r17);
    r17 = MemoryInline::FlatRead32(r18_addr_5);
}

loc_802195B0:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r17))) {
        goto loc_802195B8;
    }
}

loc_802195B4:
{
    r12 = (r30 + 1);
}

loc_802195B8:
{
}

loc_802195BC:
{
    if ((static_cast<int32_t>(r12) < static_cast<int32_t>(r25))) {
        goto loc_80219588;
    }
}

loc_802195C0:
{
    r12_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r12 = (r12_rot_16 & -4);
    r17 = (r30 + 1);
    r12 = (r18 + r12);
    ctr = r17;
}

loc_802195D4:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_802195FC;
    }
}

loc_802195D8:
{
    r17 = MemoryInline::FlatRead32(r12);
}

loc_802195E0:
{
    if ((static_cast<uint32_t>(r17) > static_cast<uint32_t>(r9))) {
        goto loc_802195F0;
    }
}

loc_802195E4:
{
    r17 = MemoryInline::FlatRead32((r12 + 4));
}

loc_802195EC:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r17))) {
        goto loc_802195FC;
    }
}

loc_802195F0:
{
    r12 = (r12 + -4);
    r30 = (r30 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802195D8;
    }
}

loc_802195FC:
{
    r12 = (r28 - r30);
    r29_addic_src_2 = r29;
    r29 = (r29_addic_src_2 + -253);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r29_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-253)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80219604:
{
    r17 = (r12 + -1);
    r9 = (r4 + r28);
    r12 = (r4 + r17);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_8021969C;
    }
}

loc_80219614:
{
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(29));
    r25 = (r25_rot_2 & 536870911);
}

loc_80219618:
{
    ctr = r25;
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8021967C;
    }
}

loc_80219620:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r12, 0, 8u, true, false);
    r25 = MemoryInline::ReadResolved8(guest_range_4, 0u, r12);
    r28 = (r28 + 8);
    guest_range_5 = MemoryInline::ResolveRangeHost(r9, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, r9, static_cast<uint8_t>(r25));
    r17 = (r17 + 8);
    r25 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r12 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r9 + 1), static_cast<uint8_t>(r25));
    r25 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r12 + 2));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r9 + 2), static_cast<uint8_t>(r25));
    r25 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r12 + 3));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r9 + 3), static_cast<uint8_t>(r25));
    r25 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r12 + 4));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r9 + 4), static_cast<uint8_t>(r25));
    r25 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r12 + 5));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r9 + 5), static_cast<uint8_t>(r25));
    r25 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r12 + 6));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r9 + 6), static_cast<uint8_t>(r25));
    r25 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r12 + 7));
    r12 = (r12 + 8);
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r9 + 7), static_cast<uint8_t>(r25));
    r9 = (r9 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80219620;
    }
}

loc_80219674:
{
    r29 = (r29 & 7);
}

loc_80219678:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8021969C;
    }
}

loc_8021967C:
{
    ctr = r29;
}

loc_80219680:
{
    r25 = MemoryInline::FlatRead8(r12);
    r17 = (r17 + 1);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r25));
    r9 = (r9 + 1);
    r12 = (r12 + 1);
    r28 = (r28 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80219680;
    }
}

loc_8021969C:
{
    r17_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r17 = (r17_rot_5 & -4);
    r18_addr_6 = (r18 + r17);
    r12 = MemoryInline::FlatRead32(r18_addr_6);
    r25 = (r18 + r17);
    r19_addr_2 = (r19 + r17);
    r9 = MemoryInline::FlatRead32(r19_addr_2);
    r12 = (r8 * r12);
    r29 = (r9 + 1);
    r19_addr_3 = (r19 + r17);
    MemoryInline::FlatWrite32(r19_addr_3, r29);
    r17 = (r8 * r9);
    r15 = (r15 + r12);
    goto loc_802196D0;
}

loc_802196C4:
{
    r8 = MemoryInline::FlatRead32(r25);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32(r25, r8);
}

loc_802196D0:
{
    r30 = (r30 + 1);
    r25 = (r25 + 4);
}

loc_802196DC:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(r11))) {
        goto loc_802196C4;
    }
}

loc_802196E0:
{
    r18_addr_7 = (r18 + r10);
    r8 = MemoryInline::FlatRead32(r18_addr_7);
}

loc_802196E8:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r5))) {
        goto loc_80219874;
    }
}

loc_802196EC:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_802196F0:
{
    MemoryInline::FlatWrite32(r18, r6);
    r8 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80219874;
    }
}

loc_802196FC:
{
}

loc_80219700:
{
    r9 = (r11 + -8);
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(8))) {
        goto loc_80219830;
    }
}

loc_80219708:
{
    r25 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80219720;
    }
}

loc_80219710:
{
    r12 = (r14 + -2);
}

loc_80219718:
{
    if ((static_cast<int32_t>(r11) > static_cast<int32_t>(r12))) {
        goto loc_80219720;
    }
}

loc_8021971C:
{
    r25 = 1;
}

loc_80219720:
{
}

loc_80219724:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80219830;
    }
}

loc_80219728:
{
    r29 = (r9 + 7);
    r12 = r19;
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(29));
    r29 = (r29_rot_2 & 536870911);
    r25 = r18;
    ctr = r29;
}

loc_80219740:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(0))) {
        goto loc_80219830;
    }
}

loc_80219744:
{
    r9 = MemoryInline::FlatRead32(r12);
    r8 = (r8 + 8);
    r9_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r9 = (r9_rot_8 & 2147483647);
    r29 = (r9 | 1);
    MemoryInline::FlatWrite32(r12, r29);
    r9 = MemoryInline::FlatRead32(r25);
    r9 = (r9 + r29);
    MemoryInline::FlatWrite32((r25 + 4), r9);
    r9 = MemoryInline::FlatRead32((r12 + 4));
    r9_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r9 = (r9_rot_9 & 2147483647);
    r29 = (r9 | 1);
    MemoryInline::FlatWrite32((r12 + 4), r29);
    r9 = MemoryInline::FlatRead32((r25 + 4));
    r9 = (r9 + r29);
    MemoryInline::FlatWrite32((r25 + 8), r9);
    r9 = MemoryInline::FlatRead32((r12 + 8));
    r9_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r9 = (r9_rot_10 & 2147483647);
    r29 = (r9 | 1);
    MemoryInline::FlatWrite32((r12 + 8), r29);
    r9 = MemoryInline::FlatRead32((r25 + 8));
    r9 = (r9 + r29);
    MemoryInline::FlatWrite32((r25 + 12), r9);
    r9 = MemoryInline::FlatRead32((r12 + 12));
    r9_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r9 = (r9_rot_11 & 2147483647);
    r29 = (r9 | 1);
    MemoryInline::FlatWrite32((r12 + 12), r29);
    r9 = MemoryInline::FlatRead32((r25 + 12));
    r9 = (r9 + r29);
    MemoryInline::FlatWrite32((r25 + 16), r9);
    r9 = MemoryInline::FlatRead32((r12 + 16));
    r9_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r9 = (r9_rot_12 & 2147483647);
    r29 = (r9 | 1);
    MemoryInline::FlatWrite32((r12 + 16), r29);
    r9 = MemoryInline::FlatRead32((r25 + 16));
    r9 = (r9 + r29);
    MemoryInline::FlatWrite32((r25 + 20), r9);
    r9 = MemoryInline::FlatRead32((r12 + 20));
    r9_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r9 = (r9_rot_13 & 2147483647);
    r29 = (r9 | 1);
    MemoryInline::FlatWrite32((r12 + 20), r29);
    r9 = MemoryInline::FlatRead32((r25 + 20));
    r9 = (r9 + r29);
    MemoryInline::FlatWrite32((r25 + 24), r9);
    r9 = MemoryInline::FlatRead32((r12 + 24));
    r9_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r9 = (r9_rot_14 & 2147483647);
    r29 = (r9 | 1);
    MemoryInline::FlatWrite32((r12 + 24), r29);
    r9 = MemoryInline::FlatRead32((r25 + 24));
    r9 = (r9 + r29);
    MemoryInline::FlatWrite32((r25 + 28), r9);
    r9 = MemoryInline::FlatRead32((r12 + 28));
    r9_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r9 = (r9_rot_15 & 2147483647);
    r29 = (r9 | 1);
    MemoryInline::FlatWrite32((r12 + 28), r29);
    r12 = (r12 + 32);
    r9 = MemoryInline::FlatRead32((r25 + 28));
    r9 = (r9 + r29);
    MemoryInline::FlatWrite32((r25 + 32), r9);
    r25 = (r25 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80219744;
    }
}

loc_80219830:
{
    r12_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r12 = (r12_rot_17 & -4);
    r25 = (r11 - r8);
    r9 = (r19 + r12);
    r12 = (r18 + r12);
    ctr = r25;
}

loc_80219848:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r11))) {
        goto loc_80219874;
    }
}

loc_8021984C:
{
    r25 = MemoryInline::FlatRead32(r9);
    r8 = (r8 + 1);
    r25_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(31));
    r25 = (r25_rot_5 & 2147483647);
    r29 = (r25 | 1);
    MemoryInline::FlatWrite32(r9, r29);
    r9 = (r9 + 4);
    r25 = MemoryInline::FlatRead32(r12);
    r25 = (r25 + r29);
    MemoryInline::FlatWrite32((r12 + 4), r25);
    r12 = (r12 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8021984C;
    }
}

loc_80219874:
{
    r8 = (r3 + r23);
    goto loc_80219898;
}

loc_8021987C:
{
    r9 = MemoryInline::FlatRead8(r8);
    r12_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
    r12 = (r12_rot_20 & -256);
    r15_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(8));
    r15 = (r15_rot_3 & -256);
    r17_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(8));
    r17 = (r17_rot_7 & -256);
    r26 = (r12 + r9);
    r23 = (r23 + 1);
    r8 = (r8 + 1);
}

loc_80219898:
{
    r9 = (r15 + r17);
    r12 = (r15 & -16777216);
    r9 = (r9 & -16777216);
}

loc_802198A8:
{
    if ((static_cast<uint32_t>(r12) == static_cast<uint32_t>(r9))) {
        goto loc_8021987C;
    }
}

loc_802198AC:
{
    r8 = (r3 + r23);
    goto loc_802198D8;
}

loc_802198B4:
{
    r12 = (r15 & 65535);
    r9 = MemoryInline::FlatRead8(r8);
    r17 = (r5 - r12);
    r15_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(8));
    r15 = (r15_rot_5 & -256);
    r12_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
    r12 = (r12_rot_22 & -256);
    r23 = (r23 + 1);
    r17_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(8));
    r17 = (r17_rot_9 & -256);
    r8 = (r8 + 1);
    r26 = (r12 + r9);
}

loc_802198D8:
{
}

loc_802198DC:
{
    if ((static_cast<uint32_t>(r17) < static_cast<uint32_t>(r5))) {
        goto loc_802198B4;
    }
}

loc_802198E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r24));
}

loc_802198E4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80219310;
    }
}

loc_802198E8:
{
    r3 = r28;
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 8));
            r15 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 16));
            r17 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r1 + 24));
            r19 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r1 + 32));
            r21 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 40));
            r23 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r1 + 48));
            r25 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r1 + 56));
            r27 = MemoryInline::ReadResolved32(guest_range_6, 52u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r1 + 64));
            r29 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_6, 64u, (r1 + 72));
            r31 = MemoryInline::ReadResolved32(guest_range_6, 68u, (r1 + 76));
        }
    }
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFB gpr_write=0xFFFFDFEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80218FF0 func_80218FF0 preserves=true fpr_mask=0x00000000
