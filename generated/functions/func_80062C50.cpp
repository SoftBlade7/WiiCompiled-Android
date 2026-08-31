#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80062C50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r11_mdest_0 = 0;
    uint32_t r11_mdest_1 = 0;
    uint32_t r11_mdest_2 = 0;
    uint32_t r11_mdest_3 = 0;
    uint32_t r11_mdest_4 = 0;
    uint32_t r11_mdest_5 = 0;
    uint32_t r11_mdest_6 = 0;
    uint32_t r11_mrot_0 = 0;
    uint32_t r11_mrot_1 = 0;
    uint32_t r11_mrot_2 = 0;
    uint32_t r11_mrot_3 = 0;
    uint32_t r11_mrot_4 = 0;
    uint32_t r11_mrot_5 = 0;
    uint32_t r11_mrot_6 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r27_mdest_0 = 0;
    uint32_t r27_mdest_1 = 0;
    uint32_t r27_mdest_2 = 0;
    uint32_t r27_mdest_3 = 0;
    uint32_t r27_mdest_4 = 0;
    uint32_t r27_mdest_5 = 0;
    uint32_t r27_mdest_6 = 0;
    uint32_t r27_mdest_7 = 0;
    uint32_t r27_mdest_8 = 0;
    uint32_t r27_mrot_0 = 0;
    uint32_t r27_mrot_1 = 0;
    uint32_t r27_mrot_2 = 0;
    uint32_t r27_mrot_3 = 0;
    uint32_t r27_mrot_4 = 0;
    uint32_t r27_mrot_5 = 0;
    uint32_t r27_mrot_6 = 0;
    uint32_t r27_mrot_7 = 0;
    uint32_t r27_mrot_8 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
    uint32_t r27_rot_6 = 0;
    uint32_t r27_rot_7 = 0;
    uint32_t r27_rot_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mdest_4 = 0;
    uint32_t r6_mdest_5 = 0;
    uint32_t r6_mdest_6 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_mrot_4 = 0;
    uint32_t r6_mrot_5 = 0;
    uint32_t r6_mrot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mdest_4 = 0;
    uint32_t r9_mdest_5 = 0;
    uint32_t r9_mdest_6 = 0;
    uint32_t r9_mdest_7 = 0;
    uint32_t r9_mdest_8 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_mrot_4 = 0;
    uint32_t r9_mrot_5 = 0;
    uint32_t r9_mrot_6 = 0;
    uint32_t r9_mrot_7 = 0;
    uint32_t r9_mrot_8 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t mkw_fifo_burst_0[9];
    uint8_t mkw_fifo_burst_1[9];
    uint8_t mkw_fifo_burst_2[9];
    uint8_t mkw_fifo_burst_3[9];
    uint8_t mkw_fifo_burst_4[9];
    uint8_t mkw_fifo_burst_5[9];
    uint8_t mkw_fifo_burst_6[9];
    uint8_t mkw_fifo_burst_7[9];
    uint8_t mkw_fifo_burst_8[18];
    uint8_t mkw_fifo_burst_9[23];

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80062C50;

loc_80062C50:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 132u, (r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 116u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 120u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 124u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r10 = MemoryInline::FlatRead32(r3);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 48), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_80062C74:
{
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063364;
    }
}

loc_80062C7C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r10, 0, 20u, true, false);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 0u, r10);
    r0 = (r11 & 1);
}

loc_80062C84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80062D20;
    }
}

loc_80062C88:
{
    r0 = (r11 & 2);
}

loc_80062C8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80062CD8;
    }
}

loc_80062C90:
{
    r31 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r10 + 4));
    r12 = -872349696;
    r30 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r10 + 5));
    r27 = 16;
    r29 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r10 + 6));
    r11 = 0;
    r28 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r10 + 7));
    r0 = 4108;
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r31));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r27));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r28));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80062D6C;
}

loc_80062CD8:
{
    r31 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r10 + 4));
    r12 = -872349696;
    r30 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r10 + 5));
    r27 = 16;
    r29 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r10 + 6));
    r11 = 0;
    r28 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r10 + 7));
    r0 = 4108;
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r31));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r27));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r28));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80062D6C;
}

loc_80062D20:
{
    r0 = (r11 & 2);
}

loc_80062D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80062D6C;
    }
}

loc_80062D28:
{
    r27 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r10 + 4));
    r12 = -872349696;
    r28 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r10 + 5));
    r29 = 16;
    r31 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r10 + 6));
    r11 = 0;
    r30 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r10 + 7));
    r0 = 4108;
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r27));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r29));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r30));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 32));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_80062D6C:
{
    r11 = MemoryInline::FlatRead8(r8);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r10 + 8));
    r30 = MemoryInline::FlatRead8((r8 + 1));
    r29 = (r11 * r0);
    r31 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r10 + 9));
    r12 = MemoryInline::FlatRead8((r8 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r10 + 10));
    r11 = MemoryInline::FlatRead8((r8 + 3));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r10 + 11));
    r31 = (r30 * r31);
    r30 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r30);
    r27 = MemoryInline::ReadResolved32(guest_range_0, 0u, r10);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f6.d = MemoryInline::FlatReadFloat64((r2 + -29496));
    r12 = (r12 * r0);
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    r0 = (r27 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80062DBC:
{
    f5.d = MemoryInline::FlatReadFloat32((r2 + -29504));
    r0 = (r11 * r8);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    r8 = (r12 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r8);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -29508));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f3.d = PpcFmulsInline(f5.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f3.d = PPC_Fctiwz(f3.d);
    f2.d = PPC_Fctiwz(f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f3.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f2.d);
    r12 = fctiwzword0;
    fctiwzword2 = PPC_FprLowWordInline(f1.d);
    r11 = fctiwzword1;
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r8 = fctiwzword2;
    r0 = fctiwzword3;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80062EAC;
    }
}

loc_80062E54:
{
    r0 = (r27 & 8);
}

loc_80062E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80062E84;
    }
}

loc_80062E5C:
{
    r11 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r8 = 0;
    r0 = 4106;
    r12 = MemoryInline::FlatRead32((r1 + 44));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r8));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r12));
    goto loc_80062ED8;
}

loc_80062E84:
{
    r11 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r8 = 0;
    r0 = 4106;
    r12 = MemoryInline::FlatRead32((r1 + 44));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r8));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r12));
    goto loc_80062ED8;
}

loc_80062EAC:
{
    r0 = (r27 & 8);
}

loc_80062EB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80062ED8;
    }
}

loc_80062EB4:
{
    r11 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r8 = 0;
    r0 = 4106;
    r12 = MemoryInline::FlatRead32((r1 + 44));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r8));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r12));
}

loc_80062ED8:
{
}

loc_80062EDC:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80062F64;
    }
}

loc_80062EE0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r10);
    r0 = (r0 & 16);
}

loc_80062EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80062F20;
    }
}

loc_80062EEC:
{
    r27 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r10 + 12));
    r12 = -30783;
    r11 = -872349696;
    r0 = 16;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r0);
    r8 = 0;
    r27 = (r27 & r12);
    r0 = 4110;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r8);
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r27_mrot_1 = (r27_rot_1 & 60);
    r27_mdest_1 = (r27 & -61);
    r27 = (r27_mdest_1 | r27_mrot_1);
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
    r27_mrot_2 = (r27_rot_2 & 30720);
    r27_mdest_2 = (r27 & -30721);
    r27 = (r27_mdest_2 | r27_mrot_2);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r27);
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 9u);
}

loc_80062F20:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r10);
    r0 = (r0 & 32);
}

loc_80062F28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80062FE4;
    }
}

loc_80062F2C:
{
    r11 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r10 + 16));
    r10 = -30783;
    r8 = -872349696;
    r0 = 16;
    mkw_fifo_burst_1[0] = static_cast<uint8_t>(r0);
    r4 = 0;
    r11 = (r11 & r10);
    r0 = 4112;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_1[1] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[2] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r11_mrot_1 = (r11_rot_1 & 60);
    r11_mdest_1 = (r11 & -61);
    r11 = (r11_mdest_1 | r11_mrot_1);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r11_mrot_2 = (r11_rot_2 & 30720);
    r11_mdest_2 = (r11 & -30721);
    r11 = (r11_mdest_2 | r11_mrot_2);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_1[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r11);
        mkw_fifo_burst_1[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_1, 9u);
    goto loc_80062FE4;
}

loc_80062F64:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r10);
    r0 = (r0 & 16);
}

loc_80062F6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80062FA4;
    }
}

loc_80062F70:
{
    r27 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r10 + 12));
    r12 = -30781;
    r11 = -872349696;
    r0 = 16;
    mkw_fifo_burst_2[0] = static_cast<uint8_t>(r0);
    r8 = 0;
    r27 = (r27 & r12);
    r0 = 4110;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r8);
        mkw_fifo_burst_2[1] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[2] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r27_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r27_mrot_4 = (r27_rot_4 & 60);
    r27_mdest_4 = (r27 & -61);
    r27 = (r27_mdest_4 | r27_mrot_4);
    r27_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
    r27_mrot_5 = (r27_rot_5 & 30720);
    r27_mdest_5 = (r27 & -30721);
    r27 = (r27_mdest_5 | r27_mrot_5);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_2[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r27);
        mkw_fifo_burst_2[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_2, 9u);
}

loc_80062FA4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r10);
    r0 = (r0 & 32);
}

loc_80062FAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80062FE4;
    }
}

loc_80062FB0:
{
    r11 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r10 + 16));
    r10 = -30781;
    r8 = -872349696;
    r0 = 16;
    mkw_fifo_burst_3[0] = static_cast<uint8_t>(r0);
    r4 = 0;
    r11 = (r11 & r10);
    r0 = 4112;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_3[1] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[2] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r11_mrot_3 = (r11_rot_3 & 60);
    r11_mdest_3 = (r11 & -61);
    r11 = (r11_mdest_3 | r11_mrot_3);
    r11_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r11_mrot_4 = (r11_rot_4 & 30720);
    r11_mdest_4 = (r11 & -30721);
    r11 = (r11_mdest_4 | r11_mrot_4);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_3[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r11);
        mkw_fifo_burst_3[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_3[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_3[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_3, 9u);
}

loc_80062FE4:
{
    r4 = 0x802C0000u;
    r4 = (r4 + -32704);
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_80062FF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800632EC;
    }
}

loc_80062FF8:
{
    r3 = MemoryInline::FlatRead32(r3);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 20), 0, 20u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 20));
    r0 = (r4 & 1);
}

loc_80063004:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800630A0;
    }
}

loc_80063008:
{
    r0 = (r4 & 2);
}

loc_8006300C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80063058;
    }
}

loc_80063010:
{
    r31 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 24));
    r5 = -872349696;
    r12 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 25));
    r8 = 16;
    r11 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 26));
    r4 = 0;
    r10 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 27));
    r0 = 4109;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r31));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r10));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 28));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_800630EC;
}

loc_80063058:
{
    r31 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 24));
    r5 = -872349696;
    r12 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 25));
    r8 = 16;
    r11 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 26));
    r4 = 0;
    r10 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 27));
    r0 = 4109;
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r31));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r10));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 24));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_800630EC;
}

loc_800630A0:
{
    r0 = (r4 & 2);
}

loc_800630A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800630EC;
    }
}

loc_800630A8:
{
    r31 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 24));
    r5 = -872349696;
    r12 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 25));
    r8 = 16;
    r11 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 26));
    r4 = 0;
    r10 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 27));
    r0 = 4109;
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r31));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r10));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_800630EC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 20));
    r0 = (r4 & 4);
}

loc_800630F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80063190;
    }
}

loc_800630F8:
{
    r0 = (r4 & 8);
}

loc_800630FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80063148;
    }
}

loc_80063100:
{
    r31 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 28));
    r5 = -872349696;
    r12 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r3 + 29));
    r8 = 16;
    r11 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r3 + 30));
    r4 = 0;
    r10 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r3 + 31));
    r0 = 4107;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r31));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r10));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_800631DC;
}

loc_80063148:
{
    r31 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 28));
    r5 = -872349696;
    r12 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r3 + 29));
    r8 = 16;
    r11 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r3 + 30));
    r4 = 0;
    r10 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r3 + 31));
    r0 = 4107;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r31));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r10));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_800631DC;
}

loc_80063190:
{
    r0 = (r4 & 8);
}

loc_80063194:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800631DC;
    }
}

loc_80063198:
{
    r31 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 28));
    r5 = -872349696;
    r12 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r3 + 29));
    r8 = 16;
    r11 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r3 + 30));
    r4 = 0;
    r10 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r3 + 31));
    r0 = 4107;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r10));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_800631DC:
{
}

loc_800631E0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80063268;
    }
}

loc_800631E4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 20));
    r0 = (r0 & 16);
}

loc_800631EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80063224;
    }
}

loc_800631F0:
{
    r9 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 32));
    r8 = -30783;
    r5 = -872349696;
    r0 = 16;
    mkw_fifo_burst_4[0] = static_cast<uint8_t>(r0);
    r4 = 0;
    r9 = (r9 & r8);
    r0 = 4111;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_4[1] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[2] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r9_mrot_1 = (r9_rot_1 & 60);
    r9_mdest_1 = (r9 & -61);
    r9 = (r9_mdest_1 | r9_mrot_1);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r9_mrot_2 = (r9_rot_2 & 30720);
    r9_mdest_2 = (r9 & -30721);
    r9 = (r9_mdest_2 | r9_mrot_2);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_4[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r9);
        mkw_fifo_burst_4[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_4[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_4[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_4, 9u);
}

loc_80063224:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 20));
    r0 = (r0 & 32);
}

loc_8006322C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80063320;
    }
}

loc_80063230:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 36));
    r5 = -30783;
    r4 = -872349696;
    r0 = 16;
    mkw_fifo_burst_5[0] = static_cast<uint8_t>(r0);
    r3 = 0;
    r6 = (r6 & r5);
    r0 = 4113;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_5[1] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[2] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r6_mrot_1 = (r6_rot_1 & 60);
    r6_mdest_1 = (r6 & -61);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(7));
    r6_mrot_2 = (r6_rot_2 & 30720);
    r6_mdest_2 = (r6 & -30721);
    r6 = (r6_mdest_2 | r6_mrot_2);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_5[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_5[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_5[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_5[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_5, 9u);
    goto loc_80063320;
}

loc_80063268:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 20));
    r0 = (r0 & 16);
}

loc_80063270:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800632A8;
    }
}

loc_80063274:
{
    r9 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 32));
    r8 = -30781;
    r5 = -872349696;
    r0 = 16;
    mkw_fifo_burst_6[0] = static_cast<uint8_t>(r0);
    r4 = 0;
    r9 = (r9 & r8);
    r0 = 4111;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_6[1] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_6[2] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r9_mrot_4 = (r9_rot_4 & 60);
    r9_mdest_4 = (r9 & -61);
    r9 = (r9_mdest_4 | r9_mrot_4);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r9_mrot_5 = (r9_rot_5 & 30720);
    r9_mdest_5 = (r9 & -30721);
    r9 = (r9_mdest_5 | r9_mrot_5);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_6[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_6[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r9);
        mkw_fifo_burst_6[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_6[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_6[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_6[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_6, 9u);
}

loc_800632A8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 20));
    r0 = (r0 & 32);
}

loc_800632B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80063320;
    }
}

loc_800632B4:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 36));
    r5 = -30781;
    r4 = -872349696;
    r0 = 16;
    mkw_fifo_burst_7[0] = static_cast<uint8_t>(r0);
    r3 = 0;
    r6 = (r6 & r5);
    r0 = 4113;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_7[1] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_7[2] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r6_mrot_3 = (r6_rot_3 & 60);
    r6_mdest_3 = (r6 & -61);
    r6 = (r6_mdest_3 | r6_mrot_3);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(7));
    r6_mrot_4 = (r6_rot_4 & 30720);
    r6_mdest_4 = (r6 & -30721);
    r6 = (r6_mdest_4 | r6_mrot_4);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_7[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_7[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_7[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_7[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_7[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_7[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_7, 9u);
    goto loc_80063320;
}

loc_800632EC:
{
    r5 = -872349696;
    r6 = 16;
    mkw_fifo_burst_8[0] = static_cast<uint8_t>(r6);
    r4 = 0;
    r3 = 4111;
    r0 = 4113;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_8[1] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_8[2] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_8[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_8[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_8[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_8[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_8[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_8[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_8[9] = static_cast<uint8_t>(r6);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_8[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_8[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_8[12] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_8[13] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_8[14] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_8[15] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_8[16] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_8[17] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_8, 18u);
}

loc_80063320:
{
    r3 = 0x802C0000u;
    r31 = (r3 + -32704);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r4 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80063330:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063364;
    }
}

loc_80063334:
{
    r0 = (r4 & 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8006333C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063364;
    }
}

loc_80063340:
{
    r3 = MemoryInline::FlatRead8((r3 + -32704));
    r4 = MemoryInline::FlatRead8((r31 + 1));
    r5 = MemoryInline::FlatRead8((r31 + 2));
    r6 = MemoryInline::FlatRead8((r31 + 3));
    r7 = MemoryInline::FlatRead32((r31 + 4));
    // inline leaf 0x800605C0 (32 guest instruction(s))
    r10 = -872349696;
    r11 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r11));
    r9 = -33030144;
    r8 = (r2 + -29560);
    r5 = (r5 + -1);
    r0 = (r9 + -961);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r8_addr_1 = (r8 + r7);
    r7 = MemoryInline::FlatRead8(r8_addr_1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r8 = (r8_rot_1 & 16711680);
    mkw_fifo_burst_9[0] = static_cast<uint8_t>(r11);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(14));
    r6 = (r6_rot_6 & -16384);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r5 = (r5_rot_1 & -1024);
    r0 = (r3 | r0);
    r7 = 16;
    r8 = (r8 | r6);
    r6 = 0;
    r0 = (r5 | r0);
    r5 = 4105;
    r0 = (r8 | r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_9[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_9[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_9[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = 4159;
    mkw_fifo_burst_9[5] = static_cast<uint8_t>(r7);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_9[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_9[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_9[10] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_9[11] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_9[12] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[13] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_9[14] = static_cast<uint8_t>(r7);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_9[15] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[16] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_9[17] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[18] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_9[19] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_9[20] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_9[21] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[22] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_9, 23u);
    // end of inlined leaf 0x800605C0
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r0 | 3);
    MemoryInline::FlatWriteRam32((r31 + 8), r0);
}

loc_80063364:
{
    r11 = (r1 + 128);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8001FFF gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80062C50 func_80062C50 preserves=true fpr_mask=0x00000000
