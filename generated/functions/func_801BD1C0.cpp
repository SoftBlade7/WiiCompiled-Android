#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BD1C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfdx_801BD3FC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r18_rot_1 = 0;
    uint32_t r18_rot_2 = 0;
    uint32_t r18_rot_3 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_subfic_ra_0 = 0;
    uint32_t r5_subfic_ra_1 = 0;
    uint32_t r5_subfic_ra_2 = 0;
    uint32_t r5_subfic_ra_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801BD1C0;

loc_801BD1C0:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 148u, (r1 + 148), r0);
    r11 = (r1 + 144);
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
    r10 = 0x80250000u;
    r10 = (r10 + 11984);
    guest_range_1 = MemoryInline::ResolveRangeHost(r10, 0, 64u, true, false);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, r10);
    r11 = (r6 + 1);
    r25 = r4;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r10 + 4));
    r31 = r7;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r10 + 8));
    r4 = (r4 + r11);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r10 + 12));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r10 + 16));
        }
    }
    r30 = r6;
    r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r10 + 20));
    r28 = r3;
    r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r10 + 24));
    r29 = r5;
    r23 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r10 + 28));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r4) >> 1);
    r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r10 + 32));
    r3 = r31;
    r21 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r10 + 36));
    r4 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r10 + 40));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r10 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r10 + 48));
            r11 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r10 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r10 + 56));
            r6 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r10 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 8), r9);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 12), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 20), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 24), r27);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 28), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 32), r24);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 40), r22);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 48), r20);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 56), r12);
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 60), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 64), r7);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 68), r6);
    }
    ctx->lr = 0x801BD288u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r25 & 1);
}

loc_801BD28C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801BD2AC;
    }
}

loc_801BD290:
{
    r11 = 0;
    r12 = 127;
    r5 = 0;
    r27 = 0;
    r26 = 0;
    r25 = 0;
    goto loc_801BD2C4;
}

loc_801BD2AC:
{
    r11 = MemoryInline::FlatRead32(r28);
    r12 = MemoryInline::FlatRead32((r28 + 4));
    r5 = MemoryInline::FlatRead32((r28 + 8));
    r27 = MemoryInline::FlatRead32((r28 + 12));
    r26 = MemoryInline::FlatRead32((r28 + 16));
    r25 = MemoryInline::FlatRead32((r28 + 20));
}

loc_801BD2C4:
{
    r3 = 65536;
    r24 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -26176));
    r4 = (r3 + -1);
    r6 = 0;
    r0 = -65536;
    r23 = 1127219200;
    ctr = r30;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801BD2E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801BD464;
    }
}

loc_801BD2EC:
{
    r5 = MemoryInline::FlatRead16(r29);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r10 = 0;
    r9 = 0;
    r8 = 0;
}

loc_801BD300:
{
    r7 = 0;
    r29 = (r29 + 2);
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r11))) {
        goto loc_801BD310;
    }
}

loc_801BD30C:
{
    r7 = 1;
}

loc_801BD310:
{
    r19 = (r5 - r11);
    r5 = (static_cast<int32_t>(r19) >> 31);
    r27 = (r5 ^ r19);
    r27 = (r27 - r5);
}

loc_801BD324:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r12))) {
        goto loc_801BD330;
    }
}

loc_801BD328:
{
    r8 = 1;
    r27 = (r27 - r12);
}

loc_801BD330:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r5 = (r5 + r12);
    r26 = (static_cast<int32_t>(r5) >> 1);
}

loc_801BD340:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r26))) {
        goto loc_801BD34C;
    }
}

loc_801BD344:
{
    r9 = 1;
    r27 = (r27 - r26);
}

loc_801BD34C:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r5 = (r5 + r26);
    r25 = (static_cast<int32_t>(r5) >> 1);
}

loc_801BD35C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r25))) {
        goto loc_801BD368;
    }
}

loc_801BD360:
{
    r10 = 1;
    r27 = (r27 - r25);
}

loc_801BD368:
{
    r20 = (r25 * r10);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & -2);
    r19_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r19 = (r19_rot_2 & 1);
    r5_subfic_ra_2 = r5;
    r5 = (1 - r5_subfic_ra_2);
    r19 = (r19 + r25);
    r21 = (r12 * r8);
    r19 = (static_cast<int32_t>(r19) >> 1);
    r22 = (r26 * r9);
    r21 = (r20 + r21);
    r22 = (r19 + r22);
    r22 = (r21 + r22);
    r5 = (r5 * r22);
}

loc_801BD39C:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r4))) {
        goto loc_801BD3A4;
    }
}

loc_801BD3A0:
{
    r5 = (r3 + -1);
}

loc_801BD3A4:
{
}

loc_801BD3A8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_801BD3B0;
    }
}

loc_801BD3AC:
{
    r5 = -65536;
}

loc_801BD3B0:
{
    r11 = (r11 + r5);
}

loc_801BD3B8:
{
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(32767))) {
        goto loc_801BD3C0;
    }
}

loc_801BD3BC:
{
    r11 = 32767;
}

loc_801BD3C0:
{
}

loc_801BD3C4:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(-32768))) {
        goto loc_801BD3CC;
    }
}

loc_801BD3C8:
{
    r11 = -32768;
}

loc_801BD3CC:
{
    r12 = (r12 ^ -2147483648);
    r18_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r18 = (r18_rot_2 & -4);
    MemoryInline::FlatWriteRam32((r1 + 76), r12);
    r22 = (r6 & 1);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & -2);
    r8 = (r10 + r18);
    MemoryInline::FlatWriteRam32((r1 + 72), r23);
    r8 = (r9 + r8);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r8 = (r8_rot_2 & -8);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r12 = (r12_rot_2 & 1);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    r9 = (r9 + r18);
    addr_lfdx_801BD3FC_loc_0 = (r24 + r8);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_801BD3FC_loc_0);
    r8 = (r12 + r6);
    f1.d = (f1.d - f2.d);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r12 = (static_cast<int32_t>(r8) >> 1);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r8 = (r8_rot_3 & -8);
    r7 = (r10 + r9);
    r7 = (r8 + r7);
    r22 = (r22 + -1);
    f0.d = (f1.d * f0.d);
    r9 = (r22 & 4);
    r7 = (r7 & 255);
    r31_addr_2 = (r31 + r12);
    r8 = MemoryInline::FlatRead8(r31_addr_2);
    r7 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r9));
    r7 = (r8 | r7);
    f0.d = PPC_Fctiwz(f0.d);
    r31_addr_3 = (r31 + r12);
    MemoryInline::FlatWrite8(r31_addr_3, static_cast<uint8_t>(r7));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r12 = fctiwzword0;
}

loc_801BD448:
{
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(127))) {
        goto loc_801BD450;
    }
}

loc_801BD44C:
{
    r12 = 127;
}

loc_801BD450:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(24576));
}

loc_801BD454:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801BD45C;
    }
}

loc_801BD458:
{
    r12 = 24576;
}

loc_801BD45C:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801BD2EC;
    }
}

loc_801BD464:
{
    MemoryInline::FlatWrite32(r28, r11);
    r11 = (r1 + 144);
    r3 = r30;
    MemoryInline::FlatWrite32((r28 + 4), r12);
    MemoryInline::FlatWrite32((r28 + 8), r5);
    MemoryInline::FlatWrite32((r28 + 12), r27);
    MemoryInline::FlatWrite32((r28 + 16), r26);
    MemoryInline::FlatWrite32((r28 + 20), r25);
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC1FFF gpr_write=0xFFFC1FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801BD1C0 func_801BD1C0 preserves=true fpr_mask=0x00000000
