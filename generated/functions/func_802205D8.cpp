#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802205D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
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
    uint32_t ctr = ctx->ctr;

    goto loc_802205D8;

loc_802205D8:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -25424), 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    r22 = 1127219200;
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 64u, true, false);
    r23 = MemoryInline::ReadResolved8(guest_range_2, 0u, r4);
    r24 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r4 + 1));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220600:
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
    r8 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r4 + 16));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 20u, (r4 + 20));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 21u, (r4 + 21));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 22u, (r4 + 22));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 80u, (r1 + 88), r22);
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 18), 0, 46u, true, false);
    r21 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r5 + 18));
    MemoryInline::WriteResolved32(guest_range_5, 88u, (r1 + 96), r22);
    r22 = MemoryInline::ReadResolved8(guest_range_2, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r1 + 8), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r1 + 9), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r1 + 10), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r1 + 11), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 12), r27);
    MemoryInline::WriteResolved8(guest_range_5, 8u, (r1 + 16), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_5, 9u, (r1 + 17), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_5, 10u, (r1 + 18), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_5, 11u, (r1 + 19), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 12u, (r1 + 20), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_5, 13u, (r1 + 21), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_5, 14u, (r1 + 22), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_5, 15u, (r1 + 23), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved16(guest_range_5, 16u, (r1 + 24), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved8(guest_range_5, 20u, (r1 + 28), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_5, 21u, (r1 + 29), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 22u, (r1 + 30), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80220698;
    }
}

loc_80220694:
{
    goto loc_802206E4;
}

loc_80220698:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802206A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802206AC;
    }
}

loc_802206A4:
{
    r22 = r21;
    goto loc_802206E4;
}

loc_802206AC:
{
    MemoryInline::FlatWriteRam32((r1 + 92), r22);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -25368));
    MemoryInline::FlatWriteRam32((r1 + 100), r21);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 88));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 96));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 104), f0.d);
    r22 = fctiwzword0;
}

loc_802206E4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r22));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802206F0:
{
    r6 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r5 + 19));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 19u, (r4 + 19));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80220700;
    }
}

loc_802206FC:
{
    goto loc_8022074C;
}

loc_80220700:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220708:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80220714;
    }
}

loc_8022070C:
{
    r0 = r6;
    goto loc_8022074C;
}

loc_80220714:
{
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -25368));
    MemoryInline::FlatWriteRam32((r1 + 100), r6);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 88));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 96));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 104), f0.d);
    r0 = fctiwzword1;
}

loc_8022074C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220758:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 6u, (r5 + 24));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r4 + 24));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80220768;
    }
}

loc_80220764:
{
    goto loc_8022078C;
}

loc_80220768:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220770:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022077C;
    }
}

loc_80220774:
{
    f3.d = f4.d;
    goto loc_8022078C;
}

loc_8022077C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022078C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220798:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 10u, (r5 + 28));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r4 + 28));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802207A8;
    }
}

loc_802207A4:
{
    goto loc_802207CC;
}

loc_802207A8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802207B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802207BC;
    }
}

loc_802207B4:
{
    f3.d = f4.d;
    goto loc_802207CC;
}

loc_802207BC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_802207CC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802207D8:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 14u, (r5 + 32));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r4 + 32));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802207E8;
    }
}

loc_802207E4:
{
    goto loc_8022080C;
}

loc_802207E8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802207F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802207FC;
    }
}

loc_802207F4:
{
    f3.d = f4.d;
    goto loc_8022080C;
}

loc_802207FC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022080C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220818:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 18u, (r5 + 36));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r4 + 36));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80220828;
    }
}

loc_80220824:
{
    goto loc_8022084C;
}

loc_80220828:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220830:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022083C;
    }
}

loc_80220834:
{
    f3.d = f4.d;
    goto loc_8022084C;
}

loc_8022083C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022084C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220858:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 30u, (r5 + 48));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r4 + 48));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80220868;
    }
}

loc_80220864:
{
    goto loc_8022088C;
}

loc_80220868:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220870:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022087C;
    }
}

loc_80220874:
{
    f3.d = f4.d;
    goto loc_8022088C;
}

loc_8022087C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022088C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220898:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 34u, (r5 + 52));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r4 + 52));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802208A8;
    }
}

loc_802208A4:
{
    goto loc_802208CC;
}

loc_802208A8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802208B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802208BC;
    }
}

loc_802208B4:
{
    f3.d = f4.d;
    goto loc_802208CC;
}

loc_802208BC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_802208CC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802208D8:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 22u, (r5 + 40));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r4 + 40));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802208E8;
    }
}

loc_802208E4:
{
    goto loc_8022090C;
}

loc_802208E8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802208F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802208FC;
    }
}

loc_802208F4:
{
    f3.d = f4.d;
    goto loc_8022090C;
}

loc_802208FC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022090C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220918:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 26u, (r5 + 44));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r4 + 44));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80220928;
    }
}

loc_80220924:
{
    goto loc_8022094C;
}

loc_80220928:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220930:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022093C;
    }
}

loc_80220934:
{
    f3.d = f4.d;
    goto loc_8022094C;
}

loc_8022093C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022094C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220958:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 38u, (r5 + 56));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 56u, (r4 + 56));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80220968;
    }
}

loc_80220964:
{
    goto loc_8022098C;
}

loc_80220968:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220970:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022097C;
    }
}

loc_80220974:
{
    f3.d = f4.d;
    goto loc_8022098C;
}

loc_8022097C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8022098C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25424));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80220998:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 42u, (r5 + 60));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 60u, (r4 + 60));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802209A8;
    }
}

loc_802209A4:
{
    goto loc_802209CC;
}

loc_802209A8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -25396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802209B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802209BC;
    }
}

loc_802209B4:
{
    f3.d = f4.d;
    goto loc_802209CC;
}

loc_802209BC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f1.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_802209CC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f3.d);
    r4 = (r1 + 8);
    r12 = MemoryInline::FlatRead32((r3 + 4));
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x802209E4u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r11 = (r1 + 160);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802205D8 func_802205D8 preserves=true fpr_mask=0x00000000
