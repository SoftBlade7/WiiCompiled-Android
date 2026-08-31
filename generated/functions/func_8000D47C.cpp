#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000D47C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r12_stbu_ea_0 = 0;
    uint32_t r12_stbu_ea_1 = 0;
    uint32_t r12_stbu_ea_2 = 0;
    uint32_t r12_stbu_ea_3 = 0;
    uint32_t r12_stbu_ea_4 = 0;
    uint32_t r12_stbu_ea_5 = 0;
    uint32_t r12_stbu_ea_6 = 0;
    uint32_t r12_stbu_ea_7 = 0;
    uint32_t r12_stbu_ea_8 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_stbu_ea_0 = 0;
    uint32_t r8_stbu_ea_1 = 0;
    uint32_t r8_stbu_ea_2 = 0;
    uint32_t r8_stbu_ea_3 = 0;
    uint32_t r8_stbu_ea_4 = 0;
    uint32_t r8_stbu_ea_5 = 0;
    uint32_t r8_stbu_ea_6 = 0;
    uint32_t r8_stbu_ea_7 = 0;
    uint32_t r8_stbu_ea_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8000D47C;

loc_8000D47C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 42u, true, false);
    r12 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r4 + 26));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 12), r19);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 16), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 20), r21);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 24), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 28), r23);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 36), r25);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 40), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 60), r31);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
            r20 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
            r22 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
            r24 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
            r26 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 14));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r4 + 16));
            r28 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r4 + 18));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r4 + 20));
            r30 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r4 + 22));
        }
    }
    r31 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r4 + 24));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r4 + 28));
            r10 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r4 + 30));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r4 + 32));
            r8 = MemoryInline::ReadResolved16(guest_range_0, 34u, (r4 + 34));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved16(guest_range_0, 36u, (r4 + 36));
            r6 = MemoryInline::ReadResolved16(guest_range_0, 38u, (r4 + 38));
        }
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r4 + 40));
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 42u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r19)) << 16) | static_cast<uint16_t>(r20)))) {
        MemoryInline::WriteResolved16(guest_range_4, 0u, r3, r19);
        MemoryInline::WriteResolved16(guest_range_4, 2u, (r3 + 2), r20);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r21)) << 16) | static_cast<uint16_t>(r22)))) {
        MemoryInline::WriteResolved16(guest_range_4, 4u, (r3 + 4), r21);
        MemoryInline::WriteResolved16(guest_range_4, 6u, (r3 + 6), r22);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r24)))) {
        MemoryInline::WriteResolved16(guest_range_4, 8u, (r3 + 8), r23);
        MemoryInline::WriteResolved16(guest_range_4, 10u, (r3 + 10), r24);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r25)) << 16) | static_cast<uint16_t>(r26)))) {
        MemoryInline::WriteResolved16(guest_range_4, 12u, (r3 + 12), r25);
        MemoryInline::WriteResolved16(guest_range_4, 14u, (r3 + 14), r26);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r27)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_4, 16u, (r3 + 16), r27);
        MemoryInline::WriteResolved16(guest_range_4, 18u, (r3 + 18), r28);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r29)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_4, 20u, (r3 + 20), r29);
        MemoryInline::WriteResolved16(guest_range_4, 22u, (r3 + 22), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r12)))) {
        MemoryInline::WriteResolved16(guest_range_4, 24u, (r3 + 24), r31);
        MemoryInline::WriteResolved16(guest_range_4, 26u, (r3 + 26), r12);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_4, 28u, (r3 + 28), r11);
        MemoryInline::WriteResolved16(guest_range_4, 30u, (r3 + 30), r10);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_4, 32u, (r3 + 32), r9);
        MemoryInline::WriteResolved16(guest_range_4, 34u, (r3 + 34), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_4, 36u, (r3 + 36), r7);
        MemoryInline::WriteResolved16(guest_range_4, 38u, (r3 + 38), r6);
    }
    MemoryInline::WriteResolved16(guest_range_4, 40u, (r3 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000D534:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000D98C;
    }
}

loc_8000D538:
{
    r8 = MemoryInline::FlatRead8((r3 + 4));
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_8000D544:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_8000D54C;
    }
}

loc_8000D548:
{
    r8 = r0;
}

loc_8000D54C:
{
    r4 = MemoryInline::FlatRead16((r5 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r4);
    r8 = (r8 + r0);
}

loc_8000D560:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(36))) {
        goto loc_8000D568;
    }
}

loc_8000D564:
{
    r8 = 36;
}

loc_8000D568:
{
    r7 = 0;
    goto loc_8000D584;
}

loc_8000D570:
{
    r6 = MemoryInline::FlatRead8((r3 + 4));
    r4 = (r3 + r6);
    r6 = (r6 + 1);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r6));
}

loc_8000D584:
{
    r4 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8000D58C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r8))) {
        goto loc_8000D570;
    }
}

loc_8000D590:
{
    r7 = MemoryInline::FlatRead8((r5 + 4));
    r4 = (r3 + 5);
    r6 = (r4 + r8);
    r7 = (r7 + r0);
}

loc_8000D5A4:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r8))) {
        goto loc_8000D5AC;
    }
}

loc_8000D5A8:
{
    r6 = (r4 + r7);
}

loc_8000D5AC:
{
    r7 = (r6 - r4);
    r9 = (r5 + 5);
    r7 = (r7 - r0);
    r10 = (r9 + r7);
    r11 = r10;
    goto loc_8000D6E4;
}

loc_8000D5C4:
{
    r6 = (r6 + -1);
    r8 = MemoryInline::FlatRead8(r6);
    r10 = (r10 + -1);
    r7 = MemoryInline::FlatRead8(r10);
}

loc_8000D5D0:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r7))) {
        goto loc_8000D6D4;
    }
}

loc_8000D5D4:
{
    r12 = (r6 + -1);
    goto loc_8000D5E0;
}

loc_8000D5DC:
{
    r12 = (r12 + -1);
}

loc_8000D5E0:
{
    r7 = MemoryInline::FlatRead8(r12);
}

loc_8000D5E8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8000D5DC;
    }
}

loc_8000D5EC:
{
}

loc_8000D5F0:
{
    r8 = (r6 - r12);
    if ((static_cast<uint32_t>(r12) == static_cast<uint32_t>(r6))) {
        goto loc_8000D6D4;
    }
}

loc_8000D5F8:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r7 = (r7_rot_2 & 536870911);
}

loc_8000D5FC:
{
    ctr = r7;
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8000D6B4;
    }
}

loc_8000D604:
{
    r7 = MemoryInline::FlatRead8(r12);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8(r12, static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 1));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 1), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 2));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 2), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 3));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 3), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 4));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 4), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 5));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 5), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 6));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 6), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 7));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 7), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 8));
    r7 = (r7 + 10);
    r12_stbu_ea_3 = (r12 + 8);
    MemoryInline::FlatWrite8(r12_stbu_ea_3, static_cast<uint8_t>(r7));
    r12 = r12_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000D604;
    }
}

loc_8000D6AC:
{
    r8 = (r8 & 7);
}

loc_8000D6B0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8000D6D4;
    }
}

loc_8000D6B4:
{
    ctr = r8;
}

loc_8000D6B8:
{
    r7 = MemoryInline::FlatRead8(r12);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8(r12, static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 1));
    r7 = (r7 + 10);
    r12_stbu_ea_6 = (r12 + 1);
    MemoryInline::FlatWrite8(r12_stbu_ea_6, static_cast<uint8_t>(r7));
    r12 = r12_stbu_ea_6;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000D6B8;
    }
}

loc_8000D6D4:
{
    r8 = MemoryInline::FlatRead8(r10);
    r7 = MemoryInline::FlatRead8(r6);
    r7 = (r7 - r8);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r7));
}

loc_8000D6E4:
{
}

loc_8000D6E8:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r4))) {
        goto loc_8000D6F4;
    }
}

loc_8000D6EC:
{
}

loc_8000D6F0:
{
    if ((static_cast<uint32_t>(r10) > static_cast<uint32_t>(r9))) {
        goto loc_8000D5C4;
    }
}

loc_8000D6F4:
{
    r8 = MemoryInline::FlatRead8((r5 + 4));
    r9 = (r11 - r9);
}

loc_8000D700:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r8))) {
        goto loc_8000D888;
    }
}

loc_8000D704:
{
    r7 = MemoryInline::FlatRead8(r11);
    r10 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(5));
}

loc_8000D710:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8000D71C;
    }
}

loc_8000D714:
{
    r10 = 1;
    goto loc_8000D768;
}

loc_8000D71C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000D768;
    }
}

loc_8000D720:
{
    r5 = (r5 + r8);
    r6 = (r11 + 1);
    r7 = (r5 + 5);
    r5 = (r7 - r6);
    ctr = r5;
}

loc_8000D738:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r7))) {
        goto loc_8000D750;
    }
}

loc_8000D73C:
{
    r5 = MemoryInline::FlatRead8(r6);
}

loc_8000D744:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8000D888;
    }
}

loc_8000D748:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000D73C;
    }
}

loc_8000D750:
{
    r5 = (r4 + r9);
    r6 = (r0 + r5);
    r6 = (r6 + -1);
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 & 1);
}

loc_8000D760:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000D768;
    }
}

loc_8000D764:
{
    r10 = 1;
}

loc_8000D768:
{
}

loc_8000D76C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8000D888;
    }
}

loc_8000D770:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_8000D778:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_8000D87C;
    }
}

loc_8000D77C:
{
    r8 = (r6 + -1);
    goto loc_8000D788;
}

loc_8000D784:
{
    r8 = (r8 + -1);
}

loc_8000D788:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_8000D790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000D784;
    }
}

loc_8000D794:
{
}

loc_8000D798:
{
    r5 = (r6 - r8);
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r6))) {
        goto loc_8000D87C;
    }
}

loc_8000D7A0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_8000D7A4:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000D85C;
    }
}

loc_8000D7AC:
{
    r7 = MemoryInline::FlatRead8(r8);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 1));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 2));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 3));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 3), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 4));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 5));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 6));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 6), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 7));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 7), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 8));
    r0 = (r7 + 10);
    r8_stbu_ea_2 = (r8 + 8);
    MemoryInline::FlatWrite8(r8_stbu_ea_2, static_cast<uint8_t>(r0));
    r8 = r8_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000D7AC;
    }
}

loc_8000D854:
{
    r5 = (r5 & 7);
}

loc_8000D858:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8000D87C;
    }
}

loc_8000D85C:
{
    ctr = r5;
}

loc_8000D860:
{
    r7 = MemoryInline::FlatRead8(r8);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 1));
    r0 = (r7 + 10);
    r8_stbu_ea_5 = (r8 + 1);
    MemoryInline::FlatWrite8(r8_stbu_ea_5, static_cast<uint8_t>(r0));
    r8 = r8_stbu_ea_5;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000D860;
    }
}

loc_8000D87C:
{
    r5 = MemoryInline::FlatRead8(r6);
    r0 = (r5 + -1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
}

loc_8000D888:
{
    r7 = r4;
    goto loc_8000D894;
}

loc_8000D890:
{
    r7 = (r7 + 1);
}

loc_8000D894:
{
    r0 = MemoryInline::FlatRead8(r7);
}

loc_8000D89C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000D890;
    }
}

loc_8000D8A0:
{
}

loc_8000D8A4:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r4))) {
        goto loc_8000D954;
    }
}

loc_8000D8A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r6 = (r7 - r4);
    r8 = (r6 & 255);
    r5 = MemoryInline::FlatRead16((r3 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = (r4 + r0);
}

loc_8000D8C0:
{
    r0 = (r5 - r8);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r5 = (r6 - r7);
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r6))) {
        goto loc_8000D948;
    }
}

loc_8000D8D0:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
}

loc_8000D8D4:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000D930;
    }
}

loc_8000D8DC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r7);
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r7 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r7 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r7 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r7 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r7 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r7 + 6));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r7 + 7));
    r7 = (r7 + 8);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000D8DC;
    }
}

loc_8000D928:
{
    r5 = (r5 & 7);
}

loc_8000D92C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8000D948;
    }
}

loc_8000D930:
{
    ctr = r5;
}

loc_8000D934:
{
    r0 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000D934;
    }
}

loc_8000D948:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 - r8);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_8000D954:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r4 = (r3 + 5);
    r5 = (r4 + r0);
    r0 = (r5 - r4);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_8000D96C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000D980;
    }
}

loc_8000D970:
{
    r5 = (r5 + -1);
    r0 = MemoryInline::FlatRead8(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000D978:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000D980;
    }
}

loc_8000D97C:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000D970;
    }
}

loc_8000D980:
{
    r4 = (r5 - r4);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_8000D98C:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 12));
            r20 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r1 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r1 + 60));
    r1 = (r1 + 64);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF81FFB gpr_write=0xFFF81FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000D47C func_8000D47C preserves=true fpr_mask=0x00000000
