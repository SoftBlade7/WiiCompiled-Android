#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022CA4C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    uint32_t cr = ctx->cr;

    goto loc_8022CA4C;

loc_8022CA4C:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r11 = (r1 + 208);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 78u, true, false);
    r26 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r4 + 8));
    r20 = 1127219200;
    r21 = MemoryInline::ReadResolved8(guest_range_1, 0u, r4);
    r22 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r4 + 1));
}

loc_8022CA74:
{
    r23 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r4 + 2));
    r24 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r4 + 3));
    r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    r27 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r4 + 9));
    r28 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r4 + 10));
    r29 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r4 + 11));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r4 + 12));
    r31 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r4 + 13));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r4 + 14));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r4 + 15));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r4 + 19));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r4 + 16));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r4 + 17));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r4 + 20));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r4 + 22));
        }
    }
    r0 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r4 + 18));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 80u, (r1 + 112), r20);
    MemoryInline::WriteResolved32(guest_range_5, 88u, (r1 + 120), r20);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r1 + 32), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r1 + 33), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r1 + 34), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r1 + 35), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 36), r25);
    MemoryInline::WriteResolved8(guest_range_5, 8u, (r1 + 40), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_5, 9u, (r1 + 41), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 10u, (r1 + 42), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_5, 11u, (r1 + 43), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_5, 12u, (r1 + 44), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_5, 13u, (r1 + 45), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 14u, (r1 + 46), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_5, 15u, (r1 + 47), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_5, 19u, (r1 + 51), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_5, 16u, (r1 + 48), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_5, 17u, (r1 + 49), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_5, 20u, (r1 + 52), r7);
        MemoryInline::WriteResolved16(guest_range_5, 22u, (r1 + 54), r6);
    }
    MemoryInline::WriteResolved8(guest_range_5, 18u, (r1 + 50), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(2))) {
        goto loc_8022CB18;
    }
}

loc_8022CB0C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 108), static_cast<uint16_t>(r0));
    goto loc_8022CB20;
}

loc_8022CB18:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 76u, (r4 + 76));
    MemoryInline::FlatWriteRam16((r1 + 108), static_cast<uint16_t>(r0));
}

loc_8022CB20:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -25096), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 24), 0, 48u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r5 + 48));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CB2C:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r4 + 48));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022CB38;
    }
}

loc_8022CB34:
{
    goto loc_8022CB5C;
}

loc_8022CB38:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CB40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022CB4C;
    }
}

loc_8022CB44:
{
    f3.d = f4.d;
    goto loc_8022CB5C;
}

loc_8022CB4C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022CB5C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f3.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8022CB6C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022CB78;
    }
}

loc_8022CB74:
{
    goto loc_8022CB7C;
}

loc_8022CB78:
{
    f2.d = f0.d;
}

loc_8022CB7C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CB88:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r5 + 24));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r4 + 24));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022CB98;
    }
}

loc_8022CB94:
{
    goto loc_8022CBBC;
}

loc_8022CB98:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CBA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022CBAC;
    }
}

loc_8022CBA4:
{
    f3.d = f4.d;
    goto loc_8022CBBC;
}

loc_8022CBAC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022CBBC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CBC8:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r5 + 28));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r4 + 28));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022CBD8;
    }
}

loc_8022CBD4:
{
    goto loc_8022CBFC;
}

loc_8022CBD8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CBE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022CBEC;
    }
}

loc_8022CBE4:
{
    f3.d = f4.d;
    goto loc_8022CBFC;
}

loc_8022CBEC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022CBFC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CC08:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r5 + 32));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r4 + 32));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022CC18;
    }
}

loc_8022CC14:
{
    goto loc_8022CC3C;
}

loc_8022CC18:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CC20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022CC2C;
    }
}

loc_8022CC24:
{
    f3.d = f4.d;
    goto loc_8022CC3C;
}

loc_8022CC2C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022CC3C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CC48:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r5 + 36));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r4 + 36));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022CC58;
    }
}

loc_8022CC54:
{
    goto loc_8022CC7C;
}

loc_8022CC58:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CC60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022CC6C;
    }
}

loc_8022CC64:
{
    f3.d = f4.d;
    goto loc_8022CC7C;
}

loc_8022CC6C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022CC7C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CC88:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r5 + 40));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r4 + 40));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022CC98;
    }
}

loc_8022CC94:
{
    goto loc_8022CCBC;
}

loc_8022CC98:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CCA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022CCAC;
    }
}

loc_8022CCA4:
{
    f3.d = f4.d;
    goto loc_8022CCBC;
}

loc_8022CCAC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022CCBC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CCC8:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r5 + 44));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r4 + 44));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022CCD8;
    }
}

loc_8022CCD4:
{
    goto loc_8022CCFC;
}

loc_8022CCD8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CCE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022CCEC;
    }
}

loc_8022CCE4:
{
    f3.d = f4.d;
    goto loc_8022CCFC;
}

loc_8022CCEC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022CCFC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CD08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022CD30;
    }
}

loc_8022CD0C:
{
    r8 = MemoryInline::ReadResolved8(guest_range_1, 52u, (r4 + 52));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 53u, (r4 + 53));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 54u, (r4 + 54));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 55u, (r4 + 55));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_8022CE60;
}

loc_8022CD30:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CD38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022CD60;
    }
}

loc_8022CD3C:
{
    r8 = MemoryInline::ReadResolved8(guest_range_3, 28u, (r5 + 52));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 29u, (r5 + 53));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 30u, (r5 + 54));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 31u, (r5 + 55));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_8022CE60;
}

loc_8022CD60:
{
    r6 = MemoryInline::ReadResolved8(guest_range_1, 52u, (r4 + 52));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 116), r6);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 28u, (r5 + 52));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 53u, (r4 + 53));
    MemoryInline::FlatWriteRam32((r1 + 116), r6);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 120));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 29u, (r5 + 53));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r2 + -25056));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 54u, (r4 + 54));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 116), r6);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f9.d));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 30u, (r5 + 54));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f8.d = PpcFmulsInline(f8.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f7.d = PpcFmulsInline(f7.d, f1.d);
    r6 = MemoryInline::ReadResolved8(guest_range_1, 55u, (r4 + 55));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 31u, (r5 + 55));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 116), r6);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f6.d = PpcFmulsInline(f6.d, f10.d);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f4.d = PpcFmulsInline(f4.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
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
    MemoryInline::FlatWriteRamFloat64((r1 + 136), f4.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f6.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f6.d);
    r7 = fctiwzword0;
    fctiwzword2 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f3.d);
    r0 = fctiwzword1;
    r6 = fctiwzword2;
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 152), f0.d);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = fctiwzword3;
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_8022CE60:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    r8 = MemoryInline::FlatRead8((r1 + 28));
    r7 = MemoryInline::FlatRead8((r1 + 29));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CE78:
{
    r6 = MemoryInline::FlatRead8((r1 + 30));
    r0 = MemoryInline::FlatRead8((r1 + 31));
    MemoryInline::FlatWriteRam8((r1 + 84), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 85), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 86), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 87), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022CEB8;
    }
}

loc_8022CE94:
{
    r8 = MemoryInline::ReadResolved8(guest_range_1, 56u, (r4 + 56));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 57u, (r4 + 57));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 58u, (r4 + 58));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 59u, (r4 + 59));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    goto loc_8022CFE8;
}

loc_8022CEB8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022CEC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022CEE8;
    }
}

loc_8022CEC4:
{
    r8 = MemoryInline::ReadResolved8(guest_range_3, 32u, (r5 + 56));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 33u, (r5 + 57));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 34u, (r5 + 58));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 35u, (r5 + 59));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    goto loc_8022CFE8;
}

loc_8022CEE8:
{
    r6 = MemoryInline::ReadResolved8(guest_range_1, 56u, (r4 + 56));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 116), r6);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 32u, (r5 + 56));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 57u, (r4 + 57));
    MemoryInline::FlatWriteRam32((r1 + 116), r6);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 120));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 33u, (r5 + 57));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r2 + -25056));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 58u, (r4 + 58));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 116), r6);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f9.d));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 34u, (r5 + 58));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f8.d = PpcFmulsInline(f8.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f7.d = PpcFmulsInline(f7.d, f1.d);
    r6 = MemoryInline::ReadResolved8(guest_range_1, 59u, (r4 + 59));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 35u, (r5 + 59));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 116), r6);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f6.d = PpcFmulsInline(f6.d, f10.d);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f4.d = PpcFmulsInline(f4.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
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
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f4.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f6.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 152), f6.d);
    r7 = fctiwzword4;
    fctiwzword6 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 136), f3.d);
    r0 = fctiwzword5;
    r6 = fctiwzword6;
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f0.d);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = fctiwzword7;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_8022CFE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    r8 = MemoryInline::FlatRead8((r1 + 24));
    r7 = MemoryInline::FlatRead8((r1 + 25));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022D000:
{
    r6 = MemoryInline::FlatRead8((r1 + 26));
    r0 = MemoryInline::FlatRead8((r1 + 27));
    MemoryInline::FlatWriteRam8((r1 + 88), static_cast<uint8_t>(r8));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r5 + 60));
    MemoryInline::FlatWriteRam8((r1 + 89), static_cast<uint8_t>(r7));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 60u, (r4 + 60));
    MemoryInline::FlatWriteRam8((r1 + 90), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 91), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022D028;
    }
}

loc_8022D024:
{
    goto loc_8022D04C;
}

loc_8022D028:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022D030:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022D03C;
    }
}

loc_8022D034:
{
    f3.d = f4.d;
    goto loc_8022D04C;
}

loc_8022D03C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022D04C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022D058:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r5 + 64));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r4 + 64));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022D068;
    }
}

loc_8022D064:
{
    goto loc_8022D08C;
}

loc_8022D068:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022D070:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022D07C;
    }
}

loc_8022D074:
{
    f3.d = f4.d;
    goto loc_8022D08C;
}

loc_8022D07C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022D08C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -25096));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022D098:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r5 + 68));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r4 + 68));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022D0A8;
    }
}

loc_8022D0A4:
{
    goto loc_8022D0CC;
}

loc_8022D0A8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -25080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022D0B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022D0BC;
    }
}

loc_8022D0B4:
{
    f3.d = f4.d;
    goto loc_8022D0CC;
}

loc_8022D0BC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f1.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_8022D0CC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f3.d);
    r4 = (r1 + 32);
    ctx->lr = 0x8022D0D8u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022B414u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r11 = (r1 + 208);
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFF01FD3 gpr_return=0x00000010 fpr_read=0xFFFFFFFF fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8022CA4C func_8022CA4C preserves=true fpr_mask=0x00000000
