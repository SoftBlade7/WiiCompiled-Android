#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022AFD8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8022AFD8;

loc_8022AFD8:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 112);
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
    r0 = MemoryInline::FlatRead8((r4 + 8));
    r6 = 1127219200;
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8022B008:
{
    r26 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r6);
    r27 = r4;
    r28 = r5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022B3F4;
    }
}

loc_8022B01C:
{
    r6 = MemoryInline::FlatRead16((r4 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 8));
}

loc_8022B028:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_8022B030;
    }
}

loc_8022B02C:
{
    r6 = r0;
}

loc_8022B030:
{
    r7 = MemoryInline::FlatRead16((r4 + 18));
    r25 = (r6 & 65535);
    r0 = MemoryInline::FlatRead16((r3 + 10));
}

loc_8022B040:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r0))) {
        goto loc_8022B048;
    }
}

loc_8022B044:
{
    r7 = r0;
}

loc_8022B048:
{
    r31 = (r7 & 65535);
    r30 = (r4 + 40);
    r29 = (r5 + 40);
    r24 = 0;
    goto loc_8022B084;
}

loc_8022B05C:
{
    r0 = (r24 & 65535);
    r3 = MemoryInline::FlatRead32((r26 + 12));
    r5 = (r0 * 80);
    f1.d = f31.d;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r4 = (r30 + r5);
    r5 = (r29 + r5);
    ctx->lr = 0x8022B080u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8022B424u>(ctx);
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
    r11 = ctx->gpr[11];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r24 = (r24 + 1);
}

loc_8022B084:
{
    r0 = (r24 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r25));
}

loc_8022B08C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022B05C;
    }
}

loc_8022B090:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25116));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8022B098:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022B0C0;
    }
}

loc_8022B09C:
{
    r5 = MemoryInline::FlatRead8((r27 + 20));
    r4 = MemoryInline::FlatRead8((r27 + 21));
    r3 = MemoryInline::FlatRead8((r27 + 22));
    r0 = MemoryInline::FlatRead8((r27 + 23));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_8022B1F0;
}

loc_8022B0C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25112));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8022B0C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022B0F0;
    }
}

loc_8022B0CC:
{
    r5 = MemoryInline::FlatRead8((r28 + 20));
    r4 = MemoryInline::FlatRead8((r28 + 21));
    r3 = MemoryInline::FlatRead8((r28 + 22));
    r0 = MemoryInline::FlatRead8((r28 + 23));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_8022B1F0;
}

loc_8022B0F0:
{
    r3 = MemoryInline::FlatRead8((r27 + 20));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r0 = MemoryInline::FlatRead8((r28 + 20));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r3 = MemoryInline::FlatRead8((r27 + 21));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r0 = MemoryInline::FlatRead8((r28 + 21));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f8.d = MemoryInline::FlatReadFloat64((r2 + -25104));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r3 = MemoryInline::FlatRead8((r27 + 22));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f8.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f8.d));
    r0 = MemoryInline::FlatRead8((r28 + 22));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f8.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f7.d = PpcFmulsInline(f7.d, f9.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f6.d = PpcFmulsInline(f6.d, f31.d);
    r3 = MemoryInline::FlatRead8((r27 + 23));
    r0 = MemoryInline::FlatRead8((r28 + 23));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f8.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f4.d = PpcFmulsInline(f4.d, f31.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f3.d = PpcFmulsInline(f3.d, f9.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f8.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    f2.d = PpcFmulsInline(f2.d, f31.d);
    f1.d = PpcFmulsInline(f1.d, f9.d);
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f3.d = PPC_Fctiwz(f4.d);
    f5.d = PPC_Fctiwz(f6.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword0 = PPC_FprLowWordInline(f3.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f5.d);
    r4 = fctiwzword0;
    fctiwzword2 = PPC_FprLowWordInline(f2.d);
    r0 = fctiwzword1;
    r3 = fctiwzword2;
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = fctiwzword3;
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_8022B1F0:
{
    r3 = MemoryInline::FlatRead16((r27 + 16));
    r5 = 0;
    r0 = MemoryInline::FlatRead16((r28 + 16));
    r4 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r3 * 80);
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -25116));
    r4 = MemoryInline::FlatRead8((r1 + 28));
    r0 = (r0 * 80);
    r8 = MemoryInline::FlatRead8((r1 + 29));
    r3 = (r30 + r3);
    r7 = MemoryInline::FlatRead8((r1 + 30));
    r6 = MemoryInline::FlatRead8((r1 + 31));
    MemoryInline::FlatWrite8((r26 + 20), static_cast<uint8_t>(r4));
    r4 = (r29 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25112));
    MemoryInline::FlatWrite8((r26 + 21), static_cast<uint8_t>(r8));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -25104));
    MemoryInline::FlatWrite8((r26 + 22), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r26 + 23), static_cast<uint8_t>(r6));
    ctr = r31;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(0));
}

loc_8022B248:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022B3F4;
    }
}

loc_8022B24C:
{
    SetCRFloatResident(cr, 0, f31.d, f2.d);
}

loc_8022B250:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022B280;
    }
}

loc_8022B254:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & 524280);
    r6 = (r3 + r0);
    r3_addr_4 = (r3 + r0);
    r9 = MemoryInline::FlatRead8(r3_addr_4);
    r8 = MemoryInline::FlatRead8((r6 + 1));
    r7 = MemoryInline::FlatRead8((r6 + 2));
    r6 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r6));
    goto loc_8022B3BC;
}

loc_8022B280:
{
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_8022B284:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022B2B4;
    }
}

loc_8022B288:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 524280);
    r6 = (r4 + r0);
    r4_addr_2 = (r4 + r0);
    r9 = MemoryInline::FlatRead8(r4_addr_2);
    r8 = MemoryInline::FlatRead8((r6 + 1));
    r7 = MemoryInline::FlatRead8((r6 + 2));
    r6 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r6));
    goto loc_8022B3BC;
}

loc_8022B2B4:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & 524280);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    r3_addr_5 = (r3 + r0);
    r7 = MemoryInline::FlatRead8(r3_addr_5);
    r9 = (r3 + r0);
    MemoryInline::FlatWriteRam32((r1 + 36), r7);
    r8 = (r4 + r0);
    r4_addr_3 = (r4 + r0);
    r6 = MemoryInline::FlatRead8(r4_addr_3);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    r7 = MemoryInline::FlatRead8((r9 + 1));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 36), r7);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    r6 = MemoryInline::FlatRead8((r8 + 1));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    f7.d = PpcFmulsInline(f5.d, f9.d);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r7 = MemoryInline::FlatRead8((r9 + 2));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r7);
    f6.d = PpcFmulsInline(f4.d, f31.d);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r6 = MemoryInline::FlatRead8((r8 + 2));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    f7.d = PpcFmulsInline(f5.d, f9.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r7 = MemoryInline::FlatRead8((r9 + 3));
    f4.d = PpcFmulsInline(f4.d, f31.d);
    r6 = MemoryInline::FlatRead8((r8 + 3));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    f6.d = PpcFmulsInline(f6.d, f9.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f4.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r7);
    f5.d = PpcFmulsInline(f5.d, f31.d);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f8.d = PPC_Fctiwz(f8.d);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    fctiwzword4 = PPC_FprLowWordInline(f8.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f7.d = PPC_Fctiwz(f7.d);
    r6 = fctiwzword4;
    f3.d = PpcFmulsInline(f3.d, f31.d);
    f4.d = PpcFmulsInline(f4.d, f9.d);
    fctiwzword5 = PPC_FprLowWordInline(f7.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    r6 = fctiwzword5;
    f4.d = PPC_Fctiwz(f5.d);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    f3.d = PPC_Fctiwz(f3.d);
    fctiwzword6 = PPC_FprLowWordInline(f4.d);
    fctiwzword7 = PPC_FprLowWordInline(f3.d);
    r7 = fctiwzword6;
    r6 = fctiwzword7;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
}

loc_8022B3BC:
{
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r5 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    r7 = MemoryInline::FlatRead32((r26 + 16));
    r6 = MemoryInline::FlatRead8((r1 + 24));
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead8((r1 + 25));
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r1 + 26));
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 27));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8022B24C;
    }
}

loc_8022B3F4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
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
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFF001BFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x800003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8022AFD8 func_8022AFD8 preserves=false fpr_mask=0x80000000
