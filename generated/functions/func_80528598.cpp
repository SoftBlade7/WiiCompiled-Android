#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80528598(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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

    goto loc_80528598;

loc_80528598:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r23);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r25);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r31);
    r28 = r5;
    r29 = r4;
    r23 = r6;
    r26 = (r1 + 12);
    r27 = r28;
    r25 = 0;
    r24 = 0;
}

loc_805285C4:
{
    r30 = 0;
    r31 = 0;
}

loc_805285CC:
{
    r3 = (r27 + r31);
    r3 = MemoryInline::FlatRead8((r3 + 56));
    // inline leaf 0x800850B0 (22 guest instruction(s))
    r6 = 1431633920;
    r5 = 858980352;
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r7 = (r7_rot_3 & 2147483647);
    r4 = 252641280;
    r0 = (r6 + 21845);
    r5 = (r5 + 13107);
    r6 = (r7 & r0);
    r0 = (r4 + 3855);
    r4 = (r3 - r6);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r3 = (r3_rot_3 & 1073741823);
    r4 = (r4 & r5);
    r3 = (r3 & r5);
    r4 = (r4 + r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r3 = (r3_rot_4 & 268435455);
    r3 = (r4 + r3);
    r3 = (r3 & r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 16777215);
    r3 = (r3 + r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    r3 = (r3 + r0);
    r3 = (r3 & 63);
    // end of inlined leaf 0x800850B0
    r31 = (r31 + 1);
    r0 = (r30 + r3);
}

loc_805285E4:
{
    r30 = (r0 & 65535);
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(13))) {
        goto loc_805285CC;
    }
}

loc_805285EC:
{
    r24 = (r24 + 1);
    r0 = (100 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
}

loc_805285F8:
{
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
    r26 = (r26 + 1);
    r25 = (r25 + r0);
    r27 = (r27 + 13);
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(3))) {
        goto loc_805285C4;
    }
}

loc_80528610:
{
    r0 = (r25 & 65535);
}

loc_80528614:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052861C;
    }
}

loc_80528618:
{
    r25 = 300;
}

loc_8052861C:
{
    r3 = r23;
    r4 = (r25 & 65535);
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_0 = r0;
    r0 = (r8 + r0_addc_right_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_0 + r6);
    r0 = (r0 + r0_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r4 = 1374420992;
    r10 = (r3 & 65535);
    r9 = (r4 + -31457);
    r3 = (r25 & 65535);
    r11 = 0;
    r0 = 0;
    r12 = 0;
    r7 = 1;
    goto loc_805286A4;
}

loc_8052864C:
{
    r8 = (r12 & 255);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 5);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r5 = (r4 + r5);
    r4 = (r5 * 100);
    r6 = (r8 - r4);
    r4 = (r5 * 13);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r5 = (r5_rot_3 & 255);
    r6 = (r6 & 7);
    r4 = (r28 + r4);
    r4 = (r5 + r4);
    r5 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
    r4 = MemoryInline::FlatRead8((r4 + 56));
    r4 = (r5 & r4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80528694;
    }
}

loc_8052868C:
{
    r0 = r8;
    r11 = (r11 + 1);
}

loc_80528694:
{
    r4 = (r11 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r10));
}

loc_8052869C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805286B0;
    }
}

loc_805286A0:
{
    r12 = (r12 + 1);
}

loc_805286A4:
{
    r4 = (r12 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r3));
}

loc_805286AC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052864C;
    }
}

loc_805286B0:
{
    r3 = 1374420992;
    r5 = (r0 & 65535);
    r3 = (r3 + -31457);
    r4 = r29;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r5 = 4;
    r3 = 184;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r6) >> 5);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & 1);
    r29 = (r6 + r7);
    r26 = (r29 * 100);
    r0 = (r0 - r26);
    r30 = (r0 & 65535);
    ctx->lr = 0x805286E8u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80229DE0u>(ctx);
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

loc_805286EC:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80528768;
    }
}

loc_805286F4:
{
    r4 = 0x808B0000u;
    r7 = 0x80890000u;
    r4 = (r4 + 12616);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 167u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    r0 = 5;
    r8 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    r4 = -1;
    r7 = (r7 + -672);
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 164u, (r3 + 164), static_cast<uint8_t>(r8));
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r5 = MemoryInline::FlatRead8((r7 + 2));
    r4 = MemoryInline::FlatRead8((r7 + 3));
    r7 = MemoryInline::FlatRead8(r7);
    MemoryInline::WriteResolved8(guest_range_0, 96u, (r3 + 96), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 97u, (r3 + 97), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 98u, (r3 + 98), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 99u, (r3 + 99), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r8);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_0, 165u, (r3 + 165), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 166u, (r3 + 166), static_cast<uint8_t>(r8));
}

loc_80528768:
{
    r0 = (r30 + r26);
    r3 = r31;
    r4 = (r0 & 65535);
    r5 = -1;
    ctx->lr = 0x8052877Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80526020u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r29 * 13);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(29));
    r5 = (r5_rot_5 & 255);
    r0 = (r30 & 7);
    r4 = 1;
    r6 = (r28 + r3);
    r5 = (r6 + r5);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 56));
    r3 = r31;
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r5 + 56), static_cast<uint8_t>(r0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 28), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80528598 func_80528598 preserves=true fpr_mask=0x00000000
