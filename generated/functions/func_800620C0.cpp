#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800620C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
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
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_800620C0;

loc_800620C0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800620E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80062310;
    }
}

loc_800620E8:
{
    r3 = 0x802C0000u;
    r25 = 0x802C0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r31 = (r3 + -32576);
    r26 = (r25 + -32692);
    r28 = 0;
    r27 = 0;
    r30 = 1;
}

loc_80062108:
{
    r4 = r28;
    r3 = (r1 + 8);
    // inline leaf 0x80050690 (15 guest instruction(s))
}

loc_inl1_0x80050690:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x80050698:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x800506C4;
    }
}

loc_inl1_0x8005069C:
{
}

loc_inl1_0x800506A0:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800506C4;
    }
}

loc_inl1_0x800506A4:
{
    r3 = 1;
    r0 = MemoryInline::FlatRead32(r5);
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_inl1_cont_80050690;
}

loc_inl1_0x800506C4:
{
    r3 = 0;
}

loc_inl1_cont_80050690:
{
    // end of inlined leaf 0x80050690
}

loc_80062118:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800622F8;
    }
}

loc_8006211C:
{
    r4 = r28;
    r3 = (r1 + 8);
    // inline leaf 0x80050630 (11 guest instruction(s))
}

loc_inl2_0x80050630:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x80050638:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80050654;
    }
}

loc_inl2_0x8005063C:
{
}

loc_inl2_0x80050640:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_inl2_0x80050654;
    }
}

loc_inl2_0x80050644:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    r3 = (r3 + r0);
    r3 = (r3 + 4);
    goto loc_inl2_cont_80050630;
}

loc_inl2_0x80050654:
{
    r3 = 0;
}

loc_inl2_cont_80050630:
{
    // end of inlined leaf 0x80050630
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r28));
    r4 = MemoryInline::FlatRead8((r31 + 256));
    r0 = (r0 & 255);
    r29 = r3;
    r4 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80062264;
    }
}

loc_80062140:
{
    r9 = MemoryInline::FlatRead32(r3);
    r4 = 0;
    r31_addr_2 = (r31 + r27);
    r8 = MemoryInline::FlatRead32(r31_addr_2);
    r5 = 0;
    r6 = 0;
    r7 = 0;
}

loc_8006215C:
{
    r10 = 0;
    r11 = 0;
    r12 = 0;
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r8))) {
        goto loc_80062184;
    }
}

loc_8006216C:
{
    r8 = (r31 + r27);
    r9 = MemoryInline::FlatRead32((r3 + 4));
    r8 = MemoryInline::FlatRead32((r8 + 4));
}

loc_8006217C:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r8))) {
        goto loc_80062184;
    }
}

loc_80062180:
{
    r12 = 1;
}

loc_80062184:
{
}

loc_80062188:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_800621A8;
    }
}

loc_8006218C:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(5));
    r8 = (r8_rot_2 & -32);
    r9 = MemoryInline::FlatRead32((r3 + 8));
    r8 = (r31 + r8);
    r8 = MemoryInline::FlatRead32((r8 + 8));
}

loc_800621A0:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r8))) {
        goto loc_800621A8;
    }
}

loc_800621A4:
{
    r11 = 1;
}

loc_800621A8:
{
}

loc_800621AC:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_800621CC;
    }
}

loc_800621B0:
{
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(5));
    r8 = (r8_rot_4 & -32);
    r9 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r31 + r8);
    r8 = MemoryInline::FlatRead32((r8 + 12));
}

loc_800621C4:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r8))) {
        goto loc_800621CC;
    }
}

loc_800621C8:
{
    r10 = 1;
}

loc_800621CC:
{
}

loc_800621D0:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_800621F0;
    }
}

loc_800621D4:
{
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(5));
    r8 = (r8_rot_6 & -32);
    r9 = MemoryInline::FlatRead32((r3 + 16));
    r8 = (r31 + r8);
    r8 = MemoryInline::FlatRead32((r8 + 16));
}

loc_800621E8:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r8))) {
        goto loc_800621F0;
    }
}

loc_800621EC:
{
    r7 = 1;
}

loc_800621F0:
{
}

loc_800621F4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80062214;
    }
}

loc_800621F8:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(5));
    r7 = (r7_rot_2 & -32);
    r8 = MemoryInline::FlatRead32((r3 + 20));
    r7 = (r31 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 20));
}

loc_8006220C:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r7))) {
        goto loc_80062214;
    }
}

loc_80062210:
{
    r6 = 1;
}

loc_80062214:
{
}

loc_80062218:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80062238;
    }
}

loc_8006221C:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(5));
    r6 = (r6_rot_2 & -32);
    r7 = MemoryInline::FlatRead32((r3 + 24));
    r6 = (r31 + r6);
    r6 = MemoryInline::FlatRead32((r6 + 24));
}

loc_80062230:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r6))) {
        goto loc_80062238;
    }
}

loc_80062234:
{
    r5 = 1;
}

loc_80062238:
{
}

loc_8006223C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8006225C;
    }
}

loc_80062240:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(5));
    r5 = (r5_rot_2 & -32);
    r6 = MemoryInline::FlatRead32((r3 + 28));
    r5 = (r31 + r5);
    r5 = MemoryInline::FlatRead32((r5 + 28));
}

loc_80062254:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r5))) {
        goto loc_8006225C;
    }
}

loc_80062258:
{
    r4 = 1;
}

loc_8006225C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80062260:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800622F8;
    }
}

loc_80062264:
{
    r5 = MemoryInline::FlatRead8((r31 + 256));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(5));
    r4 = (r4_rot_2 & -32);
    r6 = (r31 + r4);
    r0 = (r5 | r0);
    MemoryInline::FlatWriteRam8((r31 + 256), static_cast<uint8_t>(r0));
    r4 = r28;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, r6, r5);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r6 + 4), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r3 + 12));
            r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r6 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r6 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r3 + 20));
            r5 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r3 + 16));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r6 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r6 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r3 + 28));
            r5 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r3 + 24));
        }
    }
    r3 = r29;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r6 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r6 + 28), r0);
    }
    ctx->lr = 0x800622C4u;
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
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80170F2Cu>(ctx);
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
    r3 = r29;
    // inline leaf 0x80170C7C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r3 = (r3_rot_4 & 1023);
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x80170C7C
    r24 = r3;
    r3 = r29;
    // inline leaf 0x80170C68 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r0 & 1023);
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x80170C68
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = (r26 + r0);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r24));
    r0 = MemoryInline::FlatRead32((r25 + -32692));
    r0 = (r0 | 2);
    r0 = (r0 & -2);
    MemoryInline::FlatWriteRam32((r25 + -32692), r0);
}

loc_800622F8:
{
    r28 = (r28 + 1);
    r27 = (r27 + 32);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(8));
}

loc_80062304:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80062108;
    }
}

loc_80062308:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27328), static_cast<uint8_t>(r0));
}

loc_80062310:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
// RECOMP_REGISTRATION base 0x800620C0 func_800620C0 preserves=true fpr_mask=0x00000000
