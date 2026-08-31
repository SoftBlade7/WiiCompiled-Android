#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051F410(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051F410;

loc_8051F410:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r11 = (r1 + 192);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 55u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 41u, (r4 + 41));
    r29 = r5;
    r14 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    r30 = r6;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    r16 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    r31 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    r15 = 1127219200;
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    r28 = r3;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r31 = (r31 + -848);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r14));
    r14 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r14));
    r14 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    r17 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r14));
    r14 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r14));
    r14 = MemoryInline::FlatRead32((r1 + 108));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r4 + 16));
            r19 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r4 + 18));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r4 + 20));
            r21 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r4 + 22));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved16(guest_range_1, 24u, (r4 + 24));
            r23 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r4 + 26));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved16(guest_range_1, 28u, (r4 + 28));
            r25 = MemoryInline::ReadResolved16(guest_range_1, 30u, (r4 + 30));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved16(guest_range_1, 32u, (r4 + 32));
            r27 = MemoryInline::ReadResolved16(guest_range_1, 34u, (r4 + 34));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved16(guest_range_1, 36u, (r4 + 36));
            r11 = MemoryInline::ReadResolved16(guest_range_1, 38u, (r4 + 38));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved16(guest_range_1, 40u, (r4 + 40));
            r9 = MemoryInline::ReadResolved16(guest_range_1, 42u, (r4 + 42));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 44u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_1, 44u, (r4 + 44));
            r7 = MemoryInline::ReadResolved16(guest_range_1, 46u, (r4 + 46));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_1, 48u, (r4 + 48));
            r5 = MemoryInline::ReadResolved16(guest_range_1, 50u, (r4 + 50));
        }
    }
    r0 = MemoryInline::ReadResolved16(guest_range_1, 52u, (r4 + 52));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r14));
    r14 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::FlatWriteRam32((r1 + 64), r15);
    r15 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 72), r15);
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r14));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r16));
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r17));
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r18));
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r19));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r20));
    MemoryInline::FlatWriteRam16((r1 + 30), static_cast<uint16_t>(r21));
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r22));
    MemoryInline::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r23));
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r24));
    MemoryInline::FlatWriteRam16((r1 + 38), static_cast<uint16_t>(r25));
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r26));
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r27));
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r12));
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r11));
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r10));
    MemoryInline::FlatWriteRam16((r1 + 50), static_cast<uint16_t>(r9));
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteRam16((r1 + 54), static_cast<uint16_t>(r7));
    MemoryInline::FlatWriteRam16((r1 + 56), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051F588;
    }
}

loc_8051F554:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 40u, (r4 + 40));
}

loc_8051F55C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8051F588;
    }
}

loc_8051F560:
{
    r4 = MemoryInline::ReadResolved8(guest_range_1, 54u, (r4 + 54));
    r0 = (r4 + 250);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8051F570:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8051F588;
    }
}

loc_8051F574:
{
    r3 = MemoryInline::FlatRead32((r3 + 2260));
    r4 = (r1 + 8);
    r5 = 2;
    ctx->lr = 0x8051F584u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB364u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8051F5A4;
}

loc_8051F588:
{
    r4 = 0;
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 54), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r3 + 2296));
    MemoryInline::FlatWriteRam16((r1 + 50), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 60), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r4));
}

loc_8051F5A4:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r3 = MemoryInline::FlatRead16((r1 + 50));
    r0 = (r0 & 32768);
}

loc_8051F5B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F5B8;
    }
}

loc_8051F5B4:
{
    r3 = (r3 | 2048);
}

loc_8051F5B8:
{
    r0 = MemoryInline::FlatRead8((r1 + 60));
}

loc_8051F5C0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(150))) {
        goto loc_8051F5CC;
    }
}

loc_8051F5C4:
{
    r0 = (r3 | 8192);
    r3 = (r0 & 65535);
}

loc_8051F5CC:
{
    r0 = MemoryInline::FlatRead8((r1 + 61));
}

loc_8051F5D4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(150))) {
        goto loc_8051F5E0;
    }
}

loc_8051F5D8:
{
    r0 = (r3 | 512);
    r3 = (r0 & 65535);
}

loc_8051F5E0:
{
    r4 = MemoryInline::FlatRead16((r28 + 2296));
    r0 = (r3 & 16);
}

loc_8051F5E8:
{
    r6 = 0;
    r4 = (r3 & ~r4);
    r7 = (r4 & 65535);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F5FC;
    }
}

loc_8051F5F8:
{
    r6 = (r6 | 1);
}

loc_8051F5FC:
{
    r4 = (r3 & 65535);
    r5 = (r4 & 576);
}

loc_8051F604:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8051F610;
    }
}

loc_8051F608:
{
    r4 = (r6 | 2);
    r6 = (r4 & 65535);
}

loc_8051F610:
{
    r4 = (r3 & 8192);
}

loc_8051F614:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F620;
    }
}

loc_8051F618:
{
    r4 = (r6 | 4);
    r6 = (r4 & 65535);
}

loc_8051F620:
{
}

loc_8051F624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F658;
    }
}

loc_8051F628:
{
}

loc_8051F62C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8051F658;
    }
}

loc_8051F630:
{
    r4 = (r7 & 576);
}

loc_8051F634:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F640;
    }
}

loc_8051F638:
{
    r4 = 1;
    MemoryInline::FlatWrite8((r28 + 2308), static_cast<uint8_t>(r4));
}

loc_8051F640:
{
    r4 = MemoryInline::FlatRead8((r28 + 2308));
}

loc_8051F648:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F660;
    }
}

loc_8051F64C:
{
    r4 = (r6 | 8);
    r6 = (r4 & 65535);
    goto loc_8051F660;
}

loc_8051F658:
{
    r4 = 0;
    MemoryInline::FlatWrite8((r28 + 2308), static_cast<uint8_t>(r4));
}

loc_8051F660:
{
    r4 = (r3 & 12);
}

loc_8051F664:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F670;
    }
}

loc_8051F668:
{
    r4 = (r6 | 32);
    r6 = (r4 & 65535);
}

loc_8051F670:
{
    r4 = (r7 & 1);
}

loc_8051F674:
{
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r3));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F6C4;
    }
}

loc_8051F680:
{
    r5 = 1;
    MemoryInline::FlatWrite8((r29 + 19), static_cast<uint8_t>(r5));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead8((r4 + 16725));
}

loc_8051F698:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F6BC;
    }
}

loc_8051F69C:
{
}

loc_8051F6A0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8051F6B0;
    }
}

loc_8051F6A4:
{
}

loc_8051F6A8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_8051F6B8;
    }
}

loc_8051F6AC:
{
    goto loc_8051F6BC;
}

loc_8051F6B0:
{
    r5 = 4;
    goto loc_8051F6BC;
}

loc_8051F6B8:
{
    r5 = 3;
}

loc_8051F6BC:
{
    MemoryInline::FlatWrite8((r29 + 18), static_cast<uint8_t>(r5));
    goto loc_8051F7A4;
}

loc_8051F6C4:
{
    r4 = (r7 & 16384);
}

loc_8051F6C8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F710;
    }
}

loc_8051F6CC:
{
    r5 = 2;
    MemoryInline::FlatWrite8((r29 + 19), static_cast<uint8_t>(r5));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead8((r4 + 16725));
}

loc_8051F6E4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F708;
    }
}

loc_8051F6E8:
{
}

loc_8051F6EC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8051F6FC;
    }
}

loc_8051F6F0:
{
}

loc_8051F6F4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_8051F704;
    }
}

loc_8051F6F8:
{
    goto loc_8051F708;
}

loc_8051F6FC:
{
    r5 = 4;
    goto loc_8051F708;
}

loc_8051F704:
{
    r5 = 3;
}

loc_8051F708:
{
    MemoryInline::FlatWrite8((r29 + 18), static_cast<uint8_t>(r5));
    goto loc_8051F7A4;
}

loc_8051F710:
{
    r4 = (r7 & 32768);
}

loc_8051F714:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F75C;
    }
}

loc_8051F718:
{
    r5 = 4;
    MemoryInline::FlatWrite8((r29 + 19), static_cast<uint8_t>(r5));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead8((r4 + 16725));
}

loc_8051F730:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F754;
    }
}

loc_8051F734:
{
}

loc_8051F738:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8051F748;
    }
}

loc_8051F73C:
{
}

loc_8051F740:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_8051F750;
    }
}

loc_8051F744:
{
    goto loc_8051F754;
}

loc_8051F748:
{
    r5 = 4;
    goto loc_8051F754;
}

loc_8051F750:
{
    r5 = 3;
}

loc_8051F754:
{
    MemoryInline::FlatWrite8((r29 + 18), static_cast<uint8_t>(r5));
    goto loc_8051F7A4;
}

loc_8051F75C:
{
    r4 = (r7 & 2);
}

loc_8051F760:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F7A4;
    }
}

loc_8051F764:
{
    r5 = 3;
    MemoryInline::FlatWrite8((r29 + 19), static_cast<uint8_t>(r5));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead8((r4 + 16725));
}

loc_8051F77C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F7A0;
    }
}

loc_8051F780:
{
}

loc_8051F784:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8051F794;
    }
}

loc_8051F788:
{
}

loc_8051F78C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_8051F79C;
    }
}

loc_8051F790:
{
    goto loc_8051F7A0;
}

loc_8051F794:
{
    r5 = 4;
    goto loc_8051F7A0;
}

loc_8051F79C:
{
    r5 = 3;
}

loc_8051F7A0:
{
    MemoryInline::FlatWrite8((r29 + 18), static_cast<uint8_t>(r5));
}

loc_8051F7A4:
{
    r4 = MemoryInline::FlatRead8((r1 + 49));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8051F91C;
    }
}

loc_8051F7B0:
{
    r4 = MemoryInline::FlatRead16((r1 + 52));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 24), 0, 32u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r31 + 48));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r31 + 40));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8051F7D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051F7D8;
    }
}

loc_8051F7D4:
{
    goto loc_8051F7E4;
}

loc_8051F7D8:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_8051F7E4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r31 + 44));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8051F7EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051F7F4;
    }
}

loc_8051F7F0:
{
    f2.d = f0.d;
}

loc_8051F7F4:
{
    r4 = MemoryInline::FlatRead16((r1 + 54));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r31 + 48));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r31 + 40));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8051F814:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051F81C;
    }
}

loc_8051F818:
{
    goto loc_8051F828;
}

loc_8051F81C:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_8051F828:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r31 + 44));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8051F830:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051F838;
    }
}

loc_8051F834:
{
    f3.d = f0.d;
}

loc_8051F838:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r31 + 44));
    r4 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -10492));
    r4 = 0x809C0000u;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword0;
    MemoryInline::FlatWrite8((r29 + 16), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead8((r4 + 16725));
}

loc_8051F86C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051F8A0;
    }
}

loc_8051F870:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r31 + 32));
    r4 = MemoryInline::FlatRead32((r1 + 84));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r31 + 24));
    r4 = (r4 & 255);
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f4.d = (-(f0.d));
    goto loc_8051F8C8;
}

loc_8051F8A0:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r31 + 32));
    r4 = MemoryInline::FlatRead32((r1 + 84));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r31 + 24));
    r4 = (r4 & 255);
    MemoryInline::FlatWriteRam32((r1 + 76), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
}

loc_8051F8C8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r31 + 44));
    r4 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -10492));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r31 + 32));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r31 + 24));
    MemoryInline::FlatWriteFloat32((r29 + 8), f4.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword1;
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r4 = (r4 & 255);
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
    r4 = fctiwzword2;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    MemoryInline::FlatWrite8((r29 + 17), static_cast<uint8_t>(r4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 12), f0.d);
}

loc_8051F91C:
{
    r4 = MemoryInline::FlatRead8((r29 + 20));
}

loc_8051F924:
{
    r5 = 0;
    r4 = (r4 | 128);
    MemoryInline::FlatWrite8((r29 + 20), static_cast<uint8_t>(r4));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F938;
    }
}

loc_8051F934:
{
    r5 = (r5 | 1);
}

loc_8051F938:
{
    r0 = (r3 & 64);
}

loc_8051F93C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F948;
    }
}

loc_8051F940:
{
    r0 = (r5 | 2);
    r5 = (r0 & 65535);
}

loc_8051F948:
{
    r0 = (r3 & 1024);
}

loc_8051F94C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F958;
    }
}

loc_8051F950:
{
    r0 = (r5 | 4);
    r5 = (r0 & 65535);
}

loc_8051F958:
{
    r0 = (r3 & 1);
}

loc_8051F95C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F968;
    }
}

loc_8051F960:
{
    r0 = (r5 | 8);
    r5 = (r0 & 65535);
}

loc_8051F968:
{
    r0 = (r3 & 16384);
}

loc_8051F96C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F978;
    }
}

loc_8051F970:
{
    r0 = (r5 | 16);
    r5 = (r0 & 65535);
}

loc_8051F978:
{
    r0 = (r3 & 2);
}

loc_8051F97C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F988;
    }
}

loc_8051F980:
{
    r0 = (r5 | 32);
    r5 = (r0 & 65535);
}

loc_8051F988:
{
    r0 = (r3 & 32768);
}

loc_8051F98C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F998;
    }
}

loc_8051F990:
{
    r0 = (r5 | 64);
    r5 = (r0 & 65535);
}

loc_8051F998:
{
    r0 = (r3 & 2048);
}

loc_8051F99C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F9A8;
    }
}

loc_8051F9A0:
{
    r0 = (r5 | 128);
    r5 = (r0 & 65535);
}

loc_8051F9A8:
{
    r0 = (r3 & 65535);
    r0 = (r0 & 4108);
}

loc_8051F9B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F9BC;
    }
}

loc_8051F9B4:
{
    r0 = (r5 | 256);
    r5 = (r0 & 65535);
}

loc_8051F9BC:
{
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead16((r29 + 6));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 49));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051FA5C;
    }
}

loc_8051F9D4:
{
    r4 = MemoryInline::FlatRead8((r29 + 16));
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r0 = MemoryInline::FlatRead8((r3 + 16725));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051F9EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051FA14;
    }
}

loc_8051F9F0:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r4);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = (-(f0.d));
    goto loc_8051FA30;
}

loc_8051FA14:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
}

loc_8051FA30:
{
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 32));
    r0 = MemoryInline::FlatRead8((r29 + 17));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    MemoryInline::FlatWrite8((r30 + 25), static_cast<uint8_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
}

loc_8051FA5C:
{
    r0 = MemoryInline::FlatRead16((r1 + 50));
    r11 = (r1 + 192);
    MemoryInline::FlatWrite16((r28 + 2296), static_cast<uint16_t>(r0));
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051F410 func_8051F410 preserves=true fpr_mask=0x00000000
