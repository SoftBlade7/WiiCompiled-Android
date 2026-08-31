#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8068A888(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r17_psq_tmp_0 = 0;
    uint32_t r17_psq_tmp_1 = 0;
    uint32_t r17_psq_tmp_2 = 0;
    uint32_t r17_psq_tmp_3 = 0;
    uint32_t r17_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r22_psq_tmp_0 = 0;
    uint32_t r22_psq_tmp_1 = 0;
    uint32_t r22_psq_tmp_2 = 0;
    uint32_t r22_psq_tmp_3 = 0;
    uint32_t r22_psq_tmp_4 = 0;
    uint32_t r22_psq_tmp_5 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_15 = nullptr;
    uint8_t* guest_range_16 = nullptr;
    uint8_t* guest_range_17 = nullptr;
    uint8_t* guest_range_18 = nullptr;
    uint8_t* guest_range_19 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_20 = nullptr;
    uint8_t* guest_range_21 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8068A888;

loc_8068A888:
{
    MemoryInline::FlatWriteRam32((r1 + -384), r1);
    r1 = (r1 + -384);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 388), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 368), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 352), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 336), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 320), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 304), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 304);
    // inline leaf 0x80021578 (16 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -60), r17);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -56), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -4), r31);
    // end of inlined leaf 0x80021578
    r0 = MemoryInline::FlatRead8((r3 + 84));
    r30 = 0x808A0000u;
    f31.d = f1.d;
    r19 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8068A8D8:
{
    r20 = r4;
    r21 = r6;
    r22 = r7;
    r23 = r8;
    r30 = (r30 + -11336);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068A8F8;
    }
}

loc_8068A8F0:
{
    r5 = (r3 + 72);
    goto loc_8068A928;
}

loc_8068A8F8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 20);
    r4 = (r19 + 88);
    ctx->lr = 0x8068A90Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r5 = (r19 + 72);
    MemoryInline::FlatWriteFloat32((r19 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r19 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r19 + 80), f0.d);
}

loc_8068A928:
{
    r3 = (r1 + 128);
    r4 = (r19 + 60);
    r6 = (r19 + 48);
    ctx->lr = 0x8068A938u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022FC34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 128);
    r4 = (r1 + 176);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022FABCu>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r5 = r20;
    r3 = (r1 + 8);
    r4 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->xer = xer;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r4 = MemoryInline::FlatRead32((r19 + 192));
    r0 = 1127219200;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    MemoryInline::FlatWriteRam32((r1 + 224), r0);
    r3 = (r3 + r4);
    f1.d = MemoryInline::FlatReadFloat64((r30 + 24));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 1);
    f2.d = std::fabs(f0.d);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 228), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 224));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8068A98C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8068A9B0;
    }
}

loc_8068A990:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 228), r3);
    f2.d = std::fabs(f0.d);
    MemoryInline::FlatWriteRam32((r1 + 224), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 224));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8068A9AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8068A9B8;
    }
}

loc_8068A9B0:
{
    r0 = 0;
    goto loc_8068A9BC;
}

loc_8068A9B8:
{
    r0 = 1;
}

loc_8068A9BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8068A9C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8068A9CC;
    }
}

loc_8068A9C4:
{
    r3 = 0;
    goto loc_8068AFA8;
}

loc_8068A9CC:
{
    r3 = 0x808A0000u;
    f29.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f30.d = MemoryInline::FlatReadFloat32((r30 + 36));
    r28 = (r1 + 56);
    f28.d = MemoryInline::FlatReadFloat32((r3 + -11252));
    r29 = (r1 + 44);
    r25 = 0;
    r18 = 0;
    r27 = 0;
    r31 = 0x808C0000u;
    r24 = 0;
    r17 = 1;
}

loc_8068A9FC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(9));
}

loc_8068AA00:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8068AD30;
    }
}

loc_8068AA04:
{
    r3 = (r31 + 6312);
    r3_addr_2 = (r3 + r18);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8068AA14u:
        goto loc_8068AA14;
        break;
    case 0x8068AA64u:
        goto loc_8068AA64;
        break;
    case 0x8068AAB4u:
        goto loc_8068AAB4;
        break;
    case 0x8068AB04u:
        goto loc_8068AB04;
        break;
    case 0x8068AB54u:
        goto loc_8068AB54;
        break;
    case 0x8068ABA4u:
        goto loc_8068ABA4;
        break;
    case 0x8068ABF4u:
        goto loc_8068ABF4;
        break;
    case 0x8068AC44u:
        goto loc_8068AC44;
        break;
    case 0x8068AC94u:
        goto loc_8068AC94;
        break;
    case 0x8068ACE4u:
        goto loc_8068ACE4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
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
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8068AA14:
{
    r3 = MemoryInline::FlatRead32((r19 + 176));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r3);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r1 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r1 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r1 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r3 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r3 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 56u, (r3 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 60u, (r3 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r3 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 100), f0.d);
    goto loc_8068AD30;
}

loc_8068AA64:
{
    r3 = MemoryInline::FlatRead32((r19 + 176));
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, r3);
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 24u, (r1 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r1 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r1 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 60u, (r3 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 64u, (r3 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 68u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 12u, (r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 16u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 20u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 100), f0.d);
    goto loc_8068AD30;
}

loc_8068AAB4:
{
    r3 = MemoryInline::FlatRead32((r19 + 176));
    guest_range_6 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 0u, (r3 + 12));
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 24u, (r1 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 4u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 28u, (r1 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 8u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 32u, (r1 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 48u, (r3 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 12u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 52u, (r3 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 16u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 56u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 20u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 60u, (r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 0u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 64u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 4u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 68u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 8u, (r1 + 100), f0.d);
    goto loc_8068AD30;
}

loc_8068AB04:
{
    r3 = MemoryInline::FlatRead32((r19 + 176));
    guest_range_8 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 0u, (r3 + 12));
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_9, 24u, (r1 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 4u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 28u, (r1 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 8u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 32u, (r1 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 60u, (r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 12u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 64u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 16u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 68u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 20u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 12u, (r3 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 0u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 16u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 4u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 20u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 8u, (r1 + 100), f0.d);
    goto loc_8068AD30;
}

loc_8068AB54:
{
    r3 = MemoryInline::FlatRead32((r19 + 176));
    guest_range_10 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 0u, (r3 + 24));
    guest_range_11 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_11, 24u, (r1 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 4u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_11, 28u, (r1 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 8u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_11, 32u, (r1 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 48u, (r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_11, 12u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 52u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_11, 16u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 56u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_11, 20u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 60u, (r3 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_11, 0u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 64u, (r3 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_11, 4u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 68u, (r3 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_11, 8u, (r1 + 100), f0.d);
    goto loc_8068AD30;
}

loc_8068ABA4:
{
    r3 = MemoryInline::FlatRead32((r19 + 176));
    guest_range_12 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 0u, (r3 + 24));
    guest_range_13 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_13, 24u, (r1 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 4u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 28u, (r1 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 8u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 32u, (r1 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 60u, (r3 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 12u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 64u, (r3 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 16u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 68u, (r3 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 20u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 12u, (r3 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 0u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 16u, (r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 4u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 20u, (r3 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 8u, (r1 + 100), f0.d);
    goto loc_8068AD30;
}

loc_8068ABF4:
{
    r3 = MemoryInline::FlatRead32((r19 + 176));
    guest_range_14 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 60u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 0u, (r3 + 36));
    guest_range_15 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_15, 24u, (r1 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 4u, (r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_15, 28u, (r1 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 8u, (r3 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_15, 32u, (r1 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 48u, (r3 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_15, 12u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 52u, (r3 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_15, 16u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 56u, (r3 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_15, 20u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 12u, (r3 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_15, 0u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 16u, (r3 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_15, 4u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 20u, (r3 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_15, 8u, (r1 + 100), f0.d);
    goto loc_8068AD30;
}

loc_8068AC44:
{
    r3 = MemoryInline::FlatRead32((r19 + 176));
    guest_range_16 = MemoryInline::ResolveRangeHost(r3, 0, 60u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 36u, (r3 + 36));
    guest_range_17 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_17, 24u, (r1 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 40u, (r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 28u, (r1 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 44u, (r3 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 32u, (r1 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 48u, (r3 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 12u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 52u, (r3 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 16u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 56u, (r3 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 20u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 0u, r3);
    MemoryInline::WriteResolvedFloat32(guest_range_17, 0u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 4u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 8u, (r1 + 100), f0.d);
    goto loc_8068AD30;
}

loc_8068AC94:
{
    r3 = MemoryInline::FlatRead32((r19 + 176));
    guest_range_18 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_18, 0u, (r3 + 48));
    guest_range_19 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_19, 24u, (r1 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_18, 4u, (r3 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_19, 28u, (r1 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_18, 8u, (r3 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_19, 32u, (r1 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_18, 36u, (r3 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_19, 12u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_18, 40u, (r3 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_19, 16u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_18, 44u, (r3 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_19, 20u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_18, 24u, (r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_19, 0u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_18, 28u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_19, 4u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_18, 32u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_19, 8u, (r1 + 100), f0.d);
    goto loc_8068AD30;
}

loc_8068ACE4:
{
    r3 = MemoryInline::FlatRead32((r19 + 176));
    guest_range_20 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_20, 0u, (r3 + 48));
    guest_range_21 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_21, 24u, (r1 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_20, 4u, (r3 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_21, 28u, (r1 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_20, 8u, (r3 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_21, 32u, (r1 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_20, 24u, (r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_21, 12u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_20, 28u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_21, 16u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_20, 32u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_21, 20u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_20, 12u, (r3 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_21, 0u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_20, 16u, (r3 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_21, 4u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_20, 20u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_21, 8u, (r1 + 100), f0.d);
}

loc_8068AD30:
{
    r7 = r20;
    r3 = (r1 + 80);
    r4 = (r1 + 116);
    r5 = (r1 + 104);
    r6 = (r1 + 92);
    ctx->lr = 0x8068AD48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80862E24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r20;
    r4 = (r1 + 80);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    f27.d = f1.d;
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f28.d);
}

loc_8068AD5C:
{
    if (((cr & 0x80000000u) == 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_8068AF90;
    }
}

loc_8068AD60:
{
    r5 = r20;
    r3 = (r1 + 68);
    r4 = (r1 + 80);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r5 = MemoryInline::FlatRead32((r1 + 68));
    r3 = (r1 + 56);
    r4 = MemoryInline::FlatRead32((r1 + 72));
    r0 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 56), r5);
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    ctx->lr = 0x8068AD90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r19 + 184));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r28_psq_tmp_2));
    r4 = (r0 + r27);
    r27_addr_2 = (r27 + r0);
    r3 = MemoryInline::FlatRead32(r27_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r28));
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r29));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_2 = (r29 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r29_psq_tmp_2));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f0.d, f1.d, f3.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f29.d);
}

loc_8068ADD0:
{
    if (((cr & 0x40000000u) != 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_8068ADE8;
    }
}

loc_8068ADD4:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f30.d);
}

loc_8068ADD8:
{
    if (((cr & 0x80000000u) == 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_8068AF90;
    }
}

loc_8068ADDC:
{
    f0.d = PpcFmulsInline(f31.d, f31.d);
    SetCRFloatResident(cr, 0, f0.d, PPC_PsToScalarInline(f27.d));
}

loc_8068ADE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8068AF90;
    }
}

loc_8068ADE8:
{
    r26 = PPC_Slw(static_cast<uint32_t>(r17), static_cast<uint32_t>(r24));
    r0 = (r21 & r26);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068AF90;
    }
}

loc_8068ADF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8068AE18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f27.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
    r3 = (r1 + 32);
    r4 = (r1 + 44);
    f1.d = f27.d;
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
}

loc_8068AE30:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8068AF74;
    }
}

loc_8068AE34:
{
    r5 = 0;
    r0 = 1;
    r18 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r3 = r22;
    r4 = r22;
    r17 = (r1 + 44);
    r5 = (r1 + 32);
    // inline leaf 0x800855C0 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x800855C0
    r3 = (r22 + 12);
    r5 = (r1 + 32);
    r4 = r3;
    // inline leaf 0x80085580 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80085580
    r3 = 552075264;
    r0 = (r3 + 4095);
    r0 = (r18 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068AEB4;
    }
}

loc_8068AE74:
{
    f0.d = MemoryInline::FlatReadFloat32((r22 + 72));
    SetCRFloatResident(cr, 0, f27.d, f0.d);
}

loc_8068AE7C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8068AE8C;
    }
}

loc_8068AE80:
{
    MemoryInline::FlatWriteFloat32((r22 + 72), f27.d);
    r0 = 1;
    goto loc_8068AE90;
}

loc_8068AE8C:
{
    r0 = 0;
}

loc_8068AE90:
{
}

loc_8068AE94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068AF74;
    }
}

loc_8068AE98:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r22 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r22 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r22 + 44), f0.d);
    goto loc_8068AF74;
}

loc_8068AEB4:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r18 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068AF74;
    }
}

loc_8068AEC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r22 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8068AED0:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
}

loc_8068AED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068AF38;
    }
}

loc_8068AEDC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r22_psq_tmp_1 = (r22 + 52);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r22_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r17_psq_tmp_1 = (r17 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r17_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r22_psq_tmp_2 = (r22 + 48);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r22_psq_tmp_2));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r17));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 84));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f2.d, f3.d, f4.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f2.d)));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8068AF08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8068AF18;
    }
}

loc_8068AF0C:
{
    MemoryInline::FlatWriteFloat32((r22 + 84), f1.d);
    r0 = 1;
    goto loc_8068AF1C;
}

loc_8068AF18:
{
    r0 = 0;
}

loc_8068AF1C:
{
}

loc_8068AF20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068AF38;
    }
}

loc_8068AF24:
{
    f1.d = MemoryInline::FlatReadFloat32((r22 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8068AF30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8068AF38;
    }
}

loc_8068AF34:
{
    MemoryInline::FlatWriteFloat32((r22 + 84), f0.d);
}

loc_8068AF38:
{
    f0.d = MemoryInline::FlatReadFloat32((r22 + 76));
    SetCRFloatResident(cr, 0, f27.d, f0.d);
}

loc_8068AF40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8068AF50;
    }
}

loc_8068AF44:
{
    MemoryInline::FlatWriteFloat32((r22 + 76), f27.d);
    r0 = 1;
    goto loc_8068AF54;
}

loc_8068AF50:
{
    r0 = 0;
}

loc_8068AF54:
{
}

loc_8068AF58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068AF74;
    }
}

loc_8068AF5C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r22 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r22 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r22 + 56), f0.d);
}

loc_8068AF74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_8068AF78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068AF88;
    }
}

loc_8068AF7C:
{
    r0 = MemoryInline::FlatRead32(r23);
    r0 = (r0 | r26);
    MemoryInline::FlatWrite32(r23, r0);
}

loc_8068AF88:
{
    r3 = 1;
    goto loc_8068AFA8;
}

loc_8068AF90:
{
    r25 = (r25 + 1);
    r18 = (r18 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(10));
}

loc_8068AF9C:
{
    r27 = (r27 + 12);
    if (((cr & 0x80000000u) != 0)) {
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        f27.d = PPC_PsToScalarInline(f27.d);
        goto loc_8068A9FC;
    }
}

loc_8068AFA4:
{
    r3 = 0;
}

loc_8068AFA8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 304);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 304));
    // inline leaf 0x800215C4 (16 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -4));
    // end of inlined leaf 0x800215C4
    r0 = MemoryInline::FlatRead32((r1 + 388));
    ctx->lr = r0;
    r1 = (r1 + 384);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8068A888 func_8068A888 preserves=false fpr_mask=0xF8000000
