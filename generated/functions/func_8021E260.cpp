#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021E260(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8021E260;

loc_8021E260:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    r11 = (r1 + 288);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -25508), 0, 60u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -25484));
    r22 = 1127219200;
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 164u, true, false);
    r23 = MemoryInline::ReadResolved8(guest_range_2, 0u, r4);
    r24 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r4 + 1));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E288:
{
    r25 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 2));
    r26 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r4 + 3));
    r27 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
    r28 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r4 + 8));
    r29 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r4 + 9));
    r30 = MemoryInline::ReadResolved8(guest_range_2, 10u, (r4 + 10));
    r31 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r4 + 11));
    r12 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r4 + 12));
    r11 = MemoryInline::ReadResolved8(guest_range_2, 13u, (r4 + 13));
    r10 = MemoryInline::ReadResolved8(guest_range_2, 14u, (r4 + 14));
    r9 = MemoryInline::ReadResolved8(guest_range_2, 15u, (r4 + 15));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_2, 28u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_2, 28u, (r4 + 28));
            r7 = MemoryInline::ReadResolved16(guest_range_2, 30u, (r4 + 30));
        }
    }
    r6 = MemoryInline::ReadResolved8(guest_range_2, 128u, (r4 + 128));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 129u, (r4 + 129));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 180u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 168u, (r1 + 200), r22);
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 16), 0, 148u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r5 + 16));
    MemoryInline::WriteResolved32(guest_range_5, 176u, (r1 + 208), r22);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r4 + 16));
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r1 + 32), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r1 + 33), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r1 + 34), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r1 + 35), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 36), r27);
    MemoryInline::WriteResolved8(guest_range_5, 8u, (r1 + 40), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_5, 9u, (r1 + 41), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_5, 10u, (r1 + 42), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_5, 11u, (r1 + 43), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 12u, (r1 + 44), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_5, 13u, (r1 + 45), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_5, 14u, (r1 + 46), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_5, 15u, (r1 + 47), static_cast<uint8_t>(r9));
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_5, 28u, (r1 + 60), r8);
        MemoryInline::WriteResolved16(guest_range_5, 30u, (r1 + 62), r7);
    }
    MemoryInline::WriteResolved8(guest_range_5, 128u, (r1 + 160), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 129u, (r1 + 161), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E320;
    }
}

loc_8021E31C:
{
    goto loc_8021E344;
}

loc_8021E320:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E328:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021E334;
    }
}

loc_8021E32C:
{
    f3.d = f4.d;
    goto loc_8021E344;
}

loc_8021E334:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8021E344:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -25484));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E350:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E378;
    }
}

loc_8021E354:
{
    r8 = MemoryInline::ReadResolved8(guest_range_2, 20u, (r4 + 20));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 21u, (r4 + 21));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 22u, (r4 + 22));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 23u, (r4 + 23));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_8021E4A8;
}

loc_8021E378:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E380:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021E3A8;
    }
}

loc_8021E384:
{
    r8 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r5 + 20));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r5 + 21));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r5 + 22));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r5 + 23));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_8021E4A8;
}

loc_8021E3A8:
{
    r6 = MemoryInline::ReadResolved8(guest_range_2, 20u, (r4 + 20));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 204), r6);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r5 + 20));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 21u, (r4 + 21));
    MemoryInline::FlatWriteRam32((r1 + 204), r6);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r5 + 21));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 52u, (r2 + -25456));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 200));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 22u, (r4 + 22));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 204), r6);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f9.d));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r5 + 22));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f8.d = PpcFmulsInline(f8.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f7.d = PpcFmulsInline(f7.d, f1.d);
    r6 = MemoryInline::ReadResolved8(guest_range_2, 23u, (r4 + 23));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r5 + 23));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 204), r6);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f6.d = PpcFmulsInline(f6.d, f10.d);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f4.d = PpcFmulsInline(f4.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f10.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f4.d = PPC_Fctiwz(f5.d);
    f6.d = PPC_Fctiwz(f7.d);
    f3.d = PPC_Fctiwz(f3.d);
    fctiwzword0 = PPC_FprLowWordInline(f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f4.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f6.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 216), f6.d);
    r7 = fctiwzword0;
    fctiwzword2 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 232), f3.d);
    r0 = fctiwzword1;
    r6 = fctiwzword2;
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 240), f0.d);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = fctiwzword3;
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_8021E4A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -25484));
    r8 = MemoryInline::FlatRead8((r1 + 28));
    r7 = MemoryInline::FlatRead8((r1 + 29));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E4C0:
{
    r6 = MemoryInline::FlatRead8((r1 + 30));
    r0 = MemoryInline::FlatRead8((r1 + 31));
    MemoryInline::FlatWriteRam8((r1 + 52), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 53), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 54), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 55), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E500;
    }
}

loc_8021E4DC:
{
    r8 = MemoryInline::ReadResolved8(guest_range_2, 24u, (r4 + 24));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r4 + 25));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 26u, (r4 + 26));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 27u, (r4 + 27));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    goto loc_8021E630;
}

loc_8021E500:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E508:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021E530;
    }
}

loc_8021E50C:
{
    r8 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r5 + 24));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 9u, (r5 + 25));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 10u, (r5 + 26));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 11u, (r5 + 27));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    goto loc_8021E630;
}

loc_8021E530:
{
    r6 = MemoryInline::ReadResolved8(guest_range_2, 24u, (r4 + 24));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 204), r6);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r5 + 24));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r4 + 25));
    MemoryInline::FlatWriteRam32((r1 + 204), r6);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 9u, (r5 + 25));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 52u, (r2 + -25456));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 200));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 26u, (r4 + 26));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 204), r6);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f9.d));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 10u, (r5 + 26));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f8.d = PpcFmulsInline(f8.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f7.d = PpcFmulsInline(f7.d, f1.d);
    r6 = MemoryInline::ReadResolved8(guest_range_2, 27u, (r4 + 27));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 11u, (r5 + 27));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 204), r6);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f6.d = PpcFmulsInline(f6.d, f10.d);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f4.d = PpcFmulsInline(f4.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f10.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f4.d = PPC_Fctiwz(f5.d);
    f6.d = PPC_Fctiwz(f7.d);
    f3.d = PPC_Fctiwz(f3.d);
    fctiwzword4 = PPC_FprLowWordInline(f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 232), f4.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f6.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 240), f6.d);
    r7 = fctiwzword4;
    fctiwzword6 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f3.d);
    r0 = fctiwzword5;
    r6 = fctiwzword6;
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 216), f0.d);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = fctiwzword7;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_8021E630:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -25484));
    r8 = MemoryInline::FlatRead8((r1 + 24));
    r7 = MemoryInline::FlatRead8((r1 + 25));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E648:
{
    r6 = MemoryInline::FlatRead8((r1 + 26));
    r0 = MemoryInline::FlatRead8((r1 + 27));
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r8));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r5 + 32));
    MemoryInline::FlatWriteRam8((r1 + 57), static_cast<uint8_t>(r7));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r4 + 32));
    MemoryInline::FlatWriteRam8((r1 + 58), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 59), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E670;
    }
}

loc_8021E66C:
{
    goto loc_8021E694;
}

loc_8021E670:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E678:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021E684;
    }
}

loc_8021E67C:
{
    f3.d = f4.d;
    goto loc_8021E694;
}

loc_8021E684:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8021E694:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -25484));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E6A0:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r5 + 36));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r4 + 36));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E6B0;
    }
}

loc_8021E6AC:
{
    goto loc_8021E6D4;
}

loc_8021E6B0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E6B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021E6C4;
    }
}

loc_8021E6BC:
{
    f3.d = f4.d;
    goto loc_8021E6D4;
}

loc_8021E6C4:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8021E6D4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -25484));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E6E0:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 48u, (r5 + 64));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r4 + 64));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E6F0;
    }
}

loc_8021E6EC:
{
    goto loc_8021E714;
}

loc_8021E6F0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E6F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021E704;
    }
}

loc_8021E6FC:
{
    f3.d = f4.d;
    goto loc_8021E714;
}

loc_8021E704:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8021E714:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -25484));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E720:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 52u, (r5 + 68));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r4 + 68));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E730;
    }
}

loc_8021E72C:
{
    goto loc_8021E754;
}

loc_8021E730:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E738:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021E744;
    }
}

loc_8021E73C:
{
    f3.d = f4.d;
    goto loc_8021E754;
}

loc_8021E744:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8021E754:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -25484));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E760:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 80u, (r5 + 96));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 96u, (r4 + 96));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E770;
    }
}

loc_8021E76C:
{
    goto loc_8021E794;
}

loc_8021E770:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E778:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021E784;
    }
}

loc_8021E77C:
{
    f3.d = f4.d;
    goto loc_8021E794;
}

loc_8021E784:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8021E794:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -25484));
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E7A0:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 84u, (r5 + 100));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 100u, (r4 + 100));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E7B0;
    }
}

loc_8021E7AC:
{
    goto loc_8021E7D4;
}

loc_8021E7B0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E7B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021E7C4;
    }
}

loc_8021E7BC:
{
    f3.d = f4.d;
    goto loc_8021E7D4;
}

loc_8021E7C4:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8021E7D4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -25484));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E7E0:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 140u, (r5 + 156));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 156u, (r4 + 156));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E7F0;
    }
}

loc_8021E7EC:
{
    goto loc_8021E814;
}

loc_8021E7F0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E7F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021E804;
    }
}

loc_8021E7FC:
{
    f3.d = f4.d;
    goto loc_8021E814;
}

loc_8021E804:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8021E814:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -25484));
    MemoryInline::FlatWriteRamFloat32((r1 + 188), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E820:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 144u, (r5 + 160));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 160u, (r4 + 160));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E830;
    }
}

loc_8021E82C:
{
    goto loc_8021E854;
}

loc_8021E830:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E838:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021E844;
    }
}

loc_8021E83C:
{
    f3.d = f4.d;
    goto loc_8021E854;
}

loc_8021E844:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f1.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_8021E854:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f3.d);
    r4 = (r1 + 32);
    r12 = MemoryInline::FlatRead32((r3 + 4));
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x8021E86Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r11 = (r1 + 288);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8021E260 func_8021E260 preserves=true fpr_mask=0x00000000
