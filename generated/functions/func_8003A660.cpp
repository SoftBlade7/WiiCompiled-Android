#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003A660(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_46 = 0;
    uint32_t r0_rot_47 = 0;
    uint32_t r0_rot_48 = 0;
    uint32_t r0_rot_49 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_50 = 0;
    uint32_t r0_rot_51 = 0;
    uint32_t r0_rot_52 = 0;
    uint32_t r0_rot_53 = 0;
    uint32_t r0_rot_54 = 0;
    uint32_t r0_rot_55 = 0;
    uint32_t r0_rot_56 = 0;
    uint32_t r0_rot_57 = 0;
    uint32_t r0_rot_58 = 0;
    uint32_t r0_rot_59 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r17_addic_src_0 = 0;
    uint32_t r17_addic_src_1 = 0;
    uint32_t r17_addic_src_2 = 0;
    uint32_t r17_addic_src_3 = 0;
    uint32_t r17_addic_src_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
    uint32_t r1_psq_tmp_12 = 0;
    uint32_t r1_psq_tmp_13 = 0;
    uint32_t r1_psq_tmp_14 = 0;
    uint32_t r1_psq_tmp_15 = 0;
    uint32_t r1_psq_tmp_16 = 0;
    uint32_t r1_psq_tmp_17 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r22_addic_src_0 = 0;
    uint32_t r22_addic_src_1 = 0;
    uint32_t r22_addic_src_2 = 0;
    uint32_t r22_addic_src_3 = 0;
    uint32_t r22_addic_src_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f14 = ctx->fpr[14];
    PPC_FPR f15 = ctx->fpr[15];
    PPC_FPR f16 = ctx->fpr[16];
    PPC_FPR f17 = ctx->fpr[17];
    PPC_FPR f18 = ctx->fpr[18];
    PPC_FPR f19 = ctx->fpr[19];
    PPC_FPR f20 = ctx->fpr[20];
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8003A660;

loc_8003A660:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -560), 0, 568u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -560), r1);
    r1 = (r1 + -560);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 564u, (r1 + 564), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 544u, (r1 + 544), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 552);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 528u, (r1 + 528), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 536);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 512u, (r1 + 512), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 520);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 496u, (r1 + 496), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 480u, (r1 + 480), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 464u, (r1 + 464), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 448u, (r1 + 448), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 432u, (r1 + 432), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 416u, (r1 + 416), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 400u, (r1 + 400), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 384u, (r1 + 384), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 368u, (r1 + 368), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 352u, (r1 + 352), f19.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_12 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_12, PPC_PsFromScalarInline(f19.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 336u, (r1 + 336), f18.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_13 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_13, PPC_PsFromScalarInline(f18.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 320u, (r1 + 320), f17.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_14 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_14, PPC_PsFromScalarInline(f17.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 304u, (r1 + 304), f16.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_15 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_15, PPC_PsFromScalarInline(f16.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 288u, (r1 + 288), f15.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_16 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_16, PPC_PsFromScalarInline(f15.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 272u, (r1 + 272), f14.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_17 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_17, PPC_PsFromScalarInline(f14.d));
    r11 = (r1 + 272);
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
    f23.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_8003A70C:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 176), r0);
    r26 = r3;
    r27 = r4;
    MemoryInline::FlatWriteRam32((r1 + 184), r0);
    r28 = r5;
    r29 = r6;
    r30 = r9;
    r31 = r10;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003BE80;
    }
}

loc_8003A734:
{
    f31.d = MemoryInline::FlatReadFloat32(r8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -30316), 0, 52u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r2 + -30280));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_8003A744:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f0.d);
    f30.d = MemoryInline::FlatReadFloat32((r8 + 8));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003A754;
    }
}

loc_8003A750:
{
    f31.d = f1.d;
}

loc_8003A754:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r2 + -30280));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8003A760:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003A768;
    }
}

loc_8003A764:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f1.d);
}

loc_8003A768:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r2 + -30280));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8003A770:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003A778;
    }
}

loc_8003A774:
{
    f30.d = f0.d;
}

loc_8003A778:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -30304));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 12));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8003A784:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003A790;
    }
}

loc_8003A788:
{
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r2 + -30280));
    goto loc_8003A798;
}

loc_8003A790:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -30300));
    f29.d = PpcFmulsInline(f0.d, f1.d);
}

loc_8003A798:
{
    f27.d = MemoryInline::FlatReadFloat32((r4 + 120));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r2 + -30276));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30308));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r2 + -30272));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f29.d));
    f1.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003A7BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003A7C4;
    }
}

loc_8003A7C0:
{
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f0.d));
}

loc_8003A7C4:
{
    r0 = (r7 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003A7C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B574;
    }
}

loc_8003A7CC:
{
    r0 = (r6 + 1);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r0 = (r6 & 1);
    r4 = (r6 + -1);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r2 + -30288));
    r0 = (r0 ^ r8);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r5 = (r8 + r6);
    r5 = (static_cast<int32_t>(r5) >> 1);
    r0 = (r0 - r8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -30312));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r22 = (r5 + 1);
    r0 = (r3 + r4);
    r19 = 0;
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
    r20 = (r3 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003A828;
    }
}

loc_8003A824:
{
    r19 = 2;
}

loc_8003A828:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    r23 = (r6 * r6);
    f21.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -30304));
    r25 = (r7 & 16777216);
    f22.d = (-(f0.d));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r2 + -30288));
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30308));
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r2 + -30296));
    r18 = 1;
    f19.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30316));
    r17 = 1;
    f18.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r2 + -30280));
    r21 = 0;
    f17.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r2 + -30268));
    r24 = 196608;
    goto loc_8003AAD0;
}

loc_8003A868:
{
}

loc_8003A86C:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_8003A8E4;
    }
}

loc_8003A870:
{
}

loc_8003A874:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_8003A894;
    }
}

loc_8003A878:
{
}

loc_8003A87C:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(1))) {
        goto loc_8003A89C;
    }
}

loc_8003A880:
{
}

loc_8003A884:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(2))) {
        goto loc_8003A8A4;
    }
}

loc_8003A888:
{
}

loc_8003A88C:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(3))) {
        goto loc_8003A8AC;
    }
}

loc_8003A890:
{
    goto loc_8003A8B0;
}

loc_8003A894:
{
    r20 = (r20 + -1);
    goto loc_8003A8B0;
}

loc_8003A89C:
{
    r22 = (r22 + 1);
    goto loc_8003A8B0;
}

loc_8003A8A4:
{
    r20 = (r20 + 1);
    goto loc_8003A8B0;
}

loc_8003A8AC:
{
    r22 = (r22 + -1);
}

loc_8003A8B0:
{
    r17_addic_src_2 = r17;
    r17 = (r17_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r17_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8003A8B4:
{
    if ((static_cast<int32_t>(r17) > static_cast<int32_t>(0))) {
        goto loc_8003A8E4;
    }
}

loc_8003A8B8:
{
    r19 = (r19 + 1);
}

loc_8003A8C0:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(4))) {
        goto loc_8003A8C8;
    }
}

loc_8003A8C4:
{
    r19 = 0;
}

loc_8003A8C8:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r19 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8003A8E0;
    }
}

loc_8003A8DC:
{
    r18 = (r18 + 1);
}

loc_8003A8E0:
{
    r17 = r18;
}

loc_8003A8E4:
{
    r0 = (r22 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    r0 = (r20 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f25.d));
    f1.d = PpcFmulsInline(f1.d, f29.d);
    f0.d = PpcFmulsInline(f0.d, f29.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f24.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f24.d));
    f1.d = std::fabs(f2.d);
    f0.d = std::fabs(f3.d);
    f4.d = PpcFmulsInline(f2.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f5.d = PpcFmulsInline(f3.d, f30.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003A930:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003A938;
    }
}

loc_8003A934:
{
    goto loc_8003A93C;
}

loc_8003A938:
{
    f1.d = f0.d;
}

loc_8003A93C:
{
    f0.d = std::fabs(f3.d);
    f2.d = std::fabs(f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f24.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003A954:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003A95C;
    }
}

loc_8003A958:
{
    goto loc_8003A960;
}

loc_8003A95C:
{
    f1.d = f0.d;
}

loc_8003A960:
{
    SetCRFloatResident(cr, 0, f21.d, f28.d);
}

loc_8003A964:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f22.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f5.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003AA00;
    }
}

loc_8003A974:
{
}

loc_8003A978:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8003A9BC;
    }
}

loc_8003A97C:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f19.d));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f24.d - f0.d));
    goto loc_8003A9F4;
}

loc_8003A9BC:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f19.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f24.d - f0.d));
}

loc_8003A9F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f0.d);
}

loc_8003AA00:
{
    SetCRFloatResident(cr, 0, f21.d, f27.d);
}

loc_8003AA04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003AA30;
    }
}

loc_8003AA08:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f18.d);
}

loc_8003AA18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003AA40;
    }
}

loc_8003AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f18.d);
}

loc_8003AA2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003AA40;
    }
}

loc_8003AA30:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f21.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f17.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f21.d);
    goto loc_8003AAA8;
}

loc_8003AA40:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x8003AA48u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BB64u>(ctx);
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
    f5 = ctx->fpr[5];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f2.d);
    PpcSetPairedFprInline(f26, PPC_Fres(PPC_PsFromScalarInline(f4.d)));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f26.d, f26.d));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f26.d, f26.d));
    f14.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    PpcSetPairedFprInline(f26, PPC_PsNmsubInline(PPC_PsFromScalarInline(f4.d), f2.d, f3.d));
    SetCRFloatResident(cr, 0, f14.d, f21.d);
}

loc_8003AA78:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003AA88;
    }
}

loc_8003AA80:
{
    f0.d = f21.d;
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_8003AA94;
}

loc_8003AA88:
{
    f1.d = f14.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f14.d, f1.d);
}

loc_8003AA94:
{
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f26.d), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    f26.d = PPC_PsToScalarInline(f26.d);
}

loc_8003AAA8:
{
    f1.d = f23.d;
    r3 = r26;
    r6 = r27;
    r7 = r28;
    r8 = r30;
    r9 = r31;
    r4 = (r1 + 164);
    r5 = (r1 + 152);
    ctx->lr = 0x8003AACCu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8003A320u>(ctx);
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
    f5 = ctx->fpr[5];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r21 = (r21 + 1);
}

loc_8003AAD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r23));
}

loc_8003AAD4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003A868;
    }
}

loc_8003AAD8:
{
    f0.d = (-(f31.d));
    f24.d = MemoryInline::FlatReadFloat32((r2 + -30304));
    f25.d = (-(f30.d));
    f22.d = MemoryInline::FlatReadFloat64((r2 + -30288));
    MemoryInline::FlatWriteRamFloat64((r1 + 200), f0.d);
    r21 = 1;
    f21.d = MemoryInline::FlatReadFloat32((r2 + -30308));
    r24 = 196608;
    f20.d = MemoryInline::FlatReadFloat64((r2 + -30296));
    f19.d = MemoryInline::FlatReadFloat32((r2 + -30316));
    f18.d = MemoryInline::FlatReadFloat32((r2 + -30280));
    f17.d = MemoryInline::FlatReadFloat32((r2 + -30268));
    goto loc_8003B2A4;
}

loc_8003AB0C:
{
    r0 = (r21 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    r22 = 1;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f22.d));
    f0.d = PpcFmulsInline(f0.d, f29.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f21.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 192));
    f2.d = std::fabs(f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    f26.d = PpcFmulsInline(f1.d, f0.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    goto loc_8003AD04;
}

loc_8003AB48:
{
    r0 = (r22 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f22.d));
    f0.d = PpcFmulsInline(f0.d, f29.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f21.d));
    f0.d = std::fabs(f1.d);
    f2.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f14.d);
}

loc_8003AB70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003AB78;
    }
}

loc_8003AB74:
{
    goto loc_8003AB7C;
}

loc_8003AB78:
{
    f0.d = f14.d;
}

loc_8003AB7C:
{
    f1.d = std::fabs(f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f14.d);
}

loc_8003AB8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003AB94;
    }
}

loc_8003AB90:
{
    goto loc_8003AB98;
}

loc_8003AB94:
{
    f1.d = f14.d;
}

loc_8003AB98:
{
    SetCRFloatResident(cr, 0, f24.d, f28.d);
}

loc_8003AB9C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f26.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f25.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003AC38;
    }
}

loc_8003ABAC:
{
}

loc_8003ABB0:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8003ABF4;
    }
}

loc_8003ABB4:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f19.d));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
    goto loc_8003AC2C;
}

loc_8003ABF4:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f19.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
}

loc_8003AC2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f0.d);
}

loc_8003AC38:
{
    SetCRFloatResident(cr, 0, f24.d, f27.d);
}

loc_8003AC3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003AC68;
    }
}

loc_8003AC40:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f18.d);
}

loc_8003AC50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003AC78;
    }
}

loc_8003AC54:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f18.d);
}

loc_8003AC64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003AC78;
    }
}

loc_8003AC68:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f17.d);
    goto loc_8003ACDC;
}

loc_8003AC78:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x8003AC80u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BB64u>(ctx);
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
    f5 = ctx->fpr[5];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    PpcSetPairedFprInline(f16, PPC_Fres(PPC_PsFromScalarInline(f4.d)));
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f16.d, f16.d));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f16.d, f16.d));
    f15.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    PpcSetPairedFprInline(f16, PPC_PsNmsubInline(PPC_PsFromScalarInline(f4.d), f2.d, f3.d));
    SetCRFloatResident(cr, 0, f15.d, f24.d);
}

loc_8003ACB4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003ACC4;
    }
}

loc_8003ACBC:
{
    f0.d = f24.d;
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_8003ACD0;
}

loc_8003ACC4:
{
    f1.d = f15.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f15.d, f1.d);
}

loc_8003ACD0:
{
    f0.d = (-(f0.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f16.d), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f0.d);
    f16.d = PPC_PsToScalarInline(f16.d);
}

loc_8003ACDC:
{
    f1.d = f23.d;
    r3 = r26;
    r6 = r27;
    r7 = r28;
    r8 = r30;
    r9 = r31;
    r4 = (r1 + 140);
    r5 = (r1 + 128);
    ctx->lr = 0x8003AD00u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8003A320u>(ctx);
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
    f5 = ctx->fpr[5];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r22 = (r22 + 1);
}

loc_8003AD04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r29));
}

loc_8003AD08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003AB48;
    }
}

loc_8003AD0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    r22 = 1;
    f0.d = std::fabs(f0.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    goto loc_8003AEE0;
}

loc_8003AD20:
{
    r0 = (r22 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f22.d));
    f0.d = PpcFmulsInline(f0.d, f29.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f21.d));
    f0.d = std::fabs(f1.d);
    f2.d = PpcFmulsInline(f1.d, f30.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f14.d);
}

loc_8003AD48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003AD50;
    }
}

loc_8003AD4C:
{
    goto loc_8003AD54;
}

loc_8003AD50:
{
    f0.d = f14.d;
}

loc_8003AD54:
{
    f1.d = std::fabs(f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f14.d);
}

loc_8003AD64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003AD6C;
    }
}

loc_8003AD68:
{
    goto loc_8003AD70;
}

loc_8003AD6C:
{
    f1.d = f14.d;
}

loc_8003AD70:
{
    SetCRFloatResident(cr, 0, f24.d, f28.d);
}

loc_8003AD74:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f26.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f2.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003AE10;
    }
}

loc_8003AD84:
{
}

loc_8003AD88:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8003ADCC;
    }
}

loc_8003AD8C:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f19.d));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
    goto loc_8003AE04;
}

loc_8003ADCC:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_14 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f19.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
}

loc_8003AE04:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
}

loc_8003AE10:
{
    SetCRFloatResident(cr, 0, f24.d, f27.d);
}

loc_8003AE14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003AE40;
    }
}

loc_8003AE18:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f18.d);
}

loc_8003AE28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003AE50;
    }
}

loc_8003AE2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f18.d);
}

loc_8003AE3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003AE50;
    }
}

loc_8003AE40:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f21.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f24.d);
    goto loc_8003AEB8;
}

loc_8003AE50:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x8003AE58u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BB64u>(ctx);
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
    f5 = ctx->fpr[5];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    PpcSetPairedFprInline(f15, PPC_Fres(PPC_PsFromScalarInline(f4.d)));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f15.d, f15.d));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f15.d, f15.d));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    PpcSetPairedFprInline(f15, PPC_PsNmsubInline(PPC_PsFromScalarInline(f4.d), f2.d, f3.d));
    SetCRFloatResident(cr, 0, f16.d, f24.d);
}

loc_8003AE84:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003AE94;
    }
}

loc_8003AE8C:
{
    f0.d = f24.d;
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_8003AEA0;
}

loc_8003AE94:
{
    f1.d = f16.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f16.d, f1.d);
}

loc_8003AEA0:
{
    f2.d = PpcFmulsInline(PPC_PsToScalarInline(f15.d), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    f15.d = PPC_PsToScalarInline(f15.d);
}

loc_8003AEB8:
{
    f1.d = f23.d;
    r3 = r26;
    r6 = r27;
    r7 = r28;
    r8 = r30;
    r9 = r31;
    r4 = (r1 + 116);
    r5 = (r1 + 104);
    ctx->lr = 0x8003AEDCu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8003A320u>(ctx);
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
    f5 = ctx->fpr[5];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r22 = (r22 + 1);
}

loc_8003AEE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r29));
}

loc_8003AEE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003AD20;
    }
}

loc_8003AEE8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    r22 = r29;
    f0.d = std::fabs(f0.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    goto loc_8003B0B4;
}

loc_8003AEFC:
{
    r0 = (r22 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f22.d));
    f0.d = PpcFmulsInline(f0.d, f29.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f21.d));
    f0.d = std::fabs(f1.d);
    f2.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f14.d);
}

loc_8003AF24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003AF2C;
    }
}

loc_8003AF28:
{
    goto loc_8003AF30;
}

loc_8003AF2C:
{
    f0.d = f14.d;
}

loc_8003AF30:
{
    f1.d = std::fabs(f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f14.d);
}

loc_8003AF40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003AF48;
    }
}

loc_8003AF44:
{
    goto loc_8003AF4C;
}

loc_8003AF48:
{
    f1.d = f14.d;
}

loc_8003AF4C:
{
    SetCRFloatResident(cr, 0, f24.d, f28.d);
}

loc_8003AF50:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f26.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f30.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003AFEC;
    }
}

loc_8003AF60:
{
}

loc_8003AF64:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8003AFA8;
    }
}

loc_8003AF68:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_18 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f19.d));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
    goto loc_8003AFE0;
}

loc_8003AFA8:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_19 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f19.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
}

loc_8003AFE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
}

loc_8003AFEC:
{
    SetCRFloatResident(cr, 0, f24.d, f27.d);
}

loc_8003AFF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B01C;
    }
}

loc_8003AFF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f18.d);
}

loc_8003B004:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003B02C;
    }
}

loc_8003B008:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f18.d);
}

loc_8003B018:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003B02C;
    }
}

loc_8003B01C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f21.d);
    goto loc_8003B08C;
}

loc_8003B02C:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x8003B034u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BB64u>(ctx);
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
    f5 = ctx->fpr[5];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    PpcSetPairedFprInline(f15, PPC_Fres(PPC_PsFromScalarInline(f4.d)));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f15.d, f15.d));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f15.d, f15.d));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    PpcSetPairedFprInline(f15, PPC_PsNmsubInline(PPC_PsFromScalarInline(f4.d), f2.d, f3.d));
    SetCRFloatResident(cr, 0, f16.d, f24.d);
}

loc_8003B068:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003B078;
    }
}

loc_8003B070:
{
    f0.d = f24.d;
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_8003B084;
}

loc_8003B078:
{
    f1.d = f16.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f16.d, f1.d);
}

loc_8003B084:
{
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f15.d), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    f15.d = PPC_PsToScalarInline(f15.d);
}

loc_8003B08C:
{
    f1.d = f23.d;
    r3 = r26;
    r6 = r27;
    r7 = r28;
    r8 = r30;
    r9 = r31;
    r4 = (r1 + 92);
    r5 = (r1 + 80);
    ctx->lr = 0x8003B0B0u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8003A320u>(ctx);
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
    f5 = ctx->fpr[5];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r22 = (r22 + -1);
}

loc_8003B0B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(1));
}

loc_8003B0B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003AEFC;
    }
}

loc_8003B0BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    r22 = r29;
    f0.d = std::fabs(f0.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    goto loc_8003B298;
}

loc_8003B0D0:
{
    r0 = (r22 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f22.d));
    f0.d = PpcFmulsInline(f0.d, f29.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f21.d));
    f0.d = std::fabs(f1.d);
    f2.d = PpcFmulsInline(f1.d, f30.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f14.d);
}

loc_8003B0F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003B100;
    }
}

loc_8003B0FC:
{
    goto loc_8003B104;
}

loc_8003B100:
{
    f0.d = f14.d;
}

loc_8003B104:
{
    f1.d = std::fabs(f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f14.d);
}

loc_8003B114:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003B11C;
    }
}

loc_8003B118:
{
    goto loc_8003B120;
}

loc_8003B11C:
{
    f1.d = f14.d;
}

loc_8003B120:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    SetCRFloatResident(cr, 0, f24.d, f28.d);
}

loc_8003B128:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f26.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f2.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B1C4;
    }
}

loc_8003B138:
{
}

loc_8003B13C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8003B180;
    }
}

loc_8003B140:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_23 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f19.d));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
    goto loc_8003B1B8;
}

loc_8003B180:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_24 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f19.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
}

loc_8003B1B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
}

loc_8003B1C4:
{
    SetCRFloatResident(cr, 0, f24.d, f27.d);
}

loc_8003B1C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B1F4;
    }
}

loc_8003B1CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f18.d);
}

loc_8003B1DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003B204;
    }
}

loc_8003B1E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f18.d);
}

loc_8003B1F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003B204;
    }
}

loc_8003B1F4:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f17.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f24.d);
    goto loc_8003B270;
}

loc_8003B204:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x8003B20Cu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BB64u>(ctx);
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
    f5 = ctx->fpr[5];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    PpcSetPairedFprInline(f15, PPC_Fres(PPC_PsFromScalarInline(f4.d)));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f15.d, f15.d));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f15.d, f15.d));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    PpcSetPairedFprInline(f15, PPC_PsNmsubInline(PPC_PsFromScalarInline(f4.d), f2.d, f3.d));
    SetCRFloatResident(cr, 0, f16.d, f24.d);
}

loc_8003B238:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003B248;
    }
}

loc_8003B240:
{
    f0.d = f24.d;
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_8003B254;
}

loc_8003B248:
{
    f1.d = f16.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f16.d, f1.d);
}

loc_8003B254:
{
    f2.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f15.d), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
    f15.d = PPC_PsToScalarInline(f15.d);
}

loc_8003B270:
{
    f1.d = f23.d;
    r3 = r26;
    r6 = r27;
    r7 = r28;
    r8 = r30;
    r9 = r31;
    r4 = (r1 + 68);
    r5 = (r1 + 56);
    ctx->lr = 0x8003B294u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8003A320u>(ctx);
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
    f5 = ctx->fpr[5];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r22 = (r22 + -1);
}

loc_8003B298:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(1));
}

loc_8003B29C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003B0D0;
    }
}

loc_8003B2A0:
{
    r21 = (r21 + 1);
}

loc_8003B2A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r29));
}

loc_8003B2A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003AB0C;
    }
}

loc_8003B2AC:
{
    r21 = (r29 + -1);
    f20.d = MemoryInline::FlatReadFloat32((r2 + -30304));
    f22.d = MemoryInline::FlatReadFloat64((r2 + -30288));
    r22 = r21;
    f21.d = MemoryInline::FlatReadFloat32((r2 + -30308));
    r18 = 1;
    f19.d = MemoryInline::FlatReadFloat64((r2 + -30296));
    r19 = 1;
    f18.d = MemoryInline::FlatReadFloat32((r2 + -30316));
    r20 = 2;
    f17.d = MemoryInline::FlatReadFloat32((r2 + -30280));
    r17 = 0;
    r24 = 196608;
    goto loc_8003B568;
}

loc_8003B2E4:
{
}

loc_8003B2E8:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_8003B37C;
    }
}

loc_8003B2EC:
{
}

loc_8003B2F0:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8003B310;
    }
}

loc_8003B2F4:
{
}

loc_8003B2F8:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(1))) {
        goto loc_8003B318;
    }
}

loc_8003B2FC:
{
}

loc_8003B300:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(2))) {
        goto loc_8003B320;
    }
}

loc_8003B304:
{
}

loc_8003B308:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(3))) {
        goto loc_8003B328;
    }
}

loc_8003B30C:
{
    goto loc_8003B32C;
}

loc_8003B310:
{
    r18 = (r18 + -1);
    goto loc_8003B32C;
}

loc_8003B318:
{
    r19 = (r19 + 1);
    goto loc_8003B32C;
}

loc_8003B320:
{
    r18 = (r18 + 1);
    goto loc_8003B32C;
}

loc_8003B328:
{
    r19 = (r19 + -1);
}

loc_8003B32C:
{
    r22_addic_src_2 = r22;
    r22 = (r22_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r22_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8003B330:
{
    if ((static_cast<int32_t>(r22) > static_cast<int32_t>(0))) {
        goto loc_8003B37C;
    }
}

loc_8003B334:
{
}

loc_8003B338:
{
    r4 = 3;
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8003B344;
    }
}

loc_8003B340:
{
    r4 = (r20 + -1);
}

loc_8003B344:
{
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    r0 = (r4 & 1);
    r0 = (r0 ^ r3);
    r20 = r4;
    r0 = (r0 - r3);
}

loc_8003B35C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8003B378;
    }
}

loc_8003B360:
{
}

loc_8003B364:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8003B374;
    }
}

loc_8003B368:
{
    r0 = (r29 + -1);
}

loc_8003B370:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(r0))) {
        goto loc_8003B378;
    }
}

loc_8003B374:
{
    r21 = (r21 + -1);
}

loc_8003B378:
{
    r22 = r21;
}

loc_8003B37C:
{
    r0 = (r18 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r0 = (r19 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f22.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f22.d));
    f1.d = PpcFmulsInline(f1.d, f29.d);
    f0.d = PpcFmulsInline(f0.d, f29.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f21.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f21.d));
    f1.d = std::fabs(f2.d);
    f0.d = std::fabs(f3.d);
    f4.d = PpcFmulsInline(f2.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f5.d = PpcFmulsInline(f3.d, f30.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003B3C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003B3D0;
    }
}

loc_8003B3CC:
{
    goto loc_8003B3D4;
}

loc_8003B3D0:
{
    f1.d = f0.d;
}

loc_8003B3D4:
{
    f0.d = std::fabs(f3.d);
    f2.d = std::fabs(f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003B3EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003B3F4;
    }
}

loc_8003B3F0:
{
    goto loc_8003B3F8;
}

loc_8003B3F4:
{
    f1.d = f0.d;
}

loc_8003B3F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    SetCRFloatResident(cr, 0, f20.d, f28.d);
}

loc_8003B400:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f5.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B49C;
    }
}

loc_8003B410:
{
}

loc_8003B414:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8003B458;
    }
}

loc_8003B418:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_28 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f18.d));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
    goto loc_8003B490;
}

loc_8003B458:
{
    r3 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_29 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f18.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
}

loc_8003B490:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
}

loc_8003B49C:
{
    SetCRFloatResident(cr, 0, f20.d, f27.d);
}

loc_8003B4A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B4CC;
    }
}

loc_8003B4A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f17.d);
}

loc_8003B4B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003B4DC;
    }
}

loc_8003B4B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f17.d);
}

loc_8003B4C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003B4DC;
    }
}

loc_8003B4CC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f20.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f21.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f20.d);
    goto loc_8003B540;
}

loc_8003B4DC:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x8003B4E4u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BB64u>(ctx);
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
    f5 = ctx->fpr[5];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    PpcSetPairedFprInline(f14, PPC_Fres(PPC_PsFromScalarInline(f4.d)));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f14.d, f14.d));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f14.d, f14.d));
    f15.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    PpcSetPairedFprInline(f14, PPC_PsNmsubInline(PPC_PsFromScalarInline(f4.d), f2.d, f3.d));
    SetCRFloatResident(cr, 0, f15.d, f20.d);
}

loc_8003B514:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003B524;
    }
}

loc_8003B51C:
{
    f0.d = f20.d;
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_8003B530;
}

loc_8003B524:
{
    f1.d = f15.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f15.d, f1.d);
}

loc_8003B530:
{
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f14.d), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    f14.d = PPC_PsToScalarInline(f14.d);
}

loc_8003B540:
{
    f1.d = f23.d;
    r3 = r26;
    r6 = r27;
    r7 = r28;
    r8 = r30;
    r9 = r31;
    r4 = (r1 + 44);
    r5 = (r1 + 32);
    ctx->lr = 0x8003B564u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8003A320u>(ctx);
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
    f5 = ctx->fpr[5];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r17 = (r17 + 1);
}

loc_8003B568:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(r23));
}

loc_8003B56C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003B2E4;
    }
}

loc_8003B570:
{
    goto loc_8003BE80;
}

loc_8003B574:
{
    f17.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -30304));
    r17 = 0;
    f21.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -30312));
    r24 = 196608;
    f22.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r2 + -30268));
    r25 = 715849728;
    f18.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30308));
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r2 + -30296));
    f20.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30316));
    goto loc_8003BE78;
}

loc_8003B59C:
{
    SetCRFloatResident(cr, 0, f17.d, f29.d);
}

loc_8003B5A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003B634;
    }
}

loc_8003B5A4:
{
    r0 = MemoryInline::FlatRead32((r27 + 236));
    r4 = (r24 + 17405);
    r3 = (r0 * r4);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r3 = (r0 * r4);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_33 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r3 = (r3 + 2555904);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r3 = (r0 * r4);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_34 & 65535);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_35 & 65535);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f2.d = PpcFmulsInline(f21.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = PpcFmulsInline(f21.d, f1.d);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f18.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f25.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f18.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    goto loc_8003BB54;
}

loc_8003B634:
{
    SetCRFloatResident(cr, 0, f18.d, f29.d);
}

loc_8003B638:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003B8E0;
    }
}

loc_8003B63C:
{
    r4 = MemoryInline::FlatRead32((r27 + 236));
    r0 = (r24 + 17405);
    r3 = (r25 + -21845);
    r4 = (r4 * r0);
    r4 = (r4 + 2555904);
    r6 = (r4 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r6);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r5 = (r5_rot_2 & 65535);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    r3 = (r4 + r3);
    r3 = (r3 * 6);
    r3 = (r5 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B6A0;
    }
}

loc_8003B674:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8003B678:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B700;
    }
}

loc_8003B67C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8003B680:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B760;
    }
}

loc_8003B684:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_8003B688:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B7C0;
    }
}

loc_8003B68C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_8003B690:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B820;
    }
}

loc_8003B694:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_8003B698:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003B880;
    }
}

loc_8003B69C:
{
    goto loc_8003BB54;
}

loc_8003B6A0:
{
    r3 = (r6 * r0);
    f24.d = f18.d;
    r3 = (r3 + 2555904);
    r4 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r4);
    r3 = (r4 * r0);
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_46 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    r3 = (r3 + 2555904);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_47 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_47 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = PpcFmulsInline(f21.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f18.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    goto loc_8003BB54;
}

loc_8003B700:
{
    r3 = (r6 * r0);
    f24.d = MemoryInline::FlatReadFloat32((r2 + -30268));
    r3 = (r3 + 2555904);
    r4 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r4);
    r3 = (r4 * r0);
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_44 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    r3 = (r3 + 2555904);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_45 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = PpcFmulsInline(f21.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f18.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    goto loc_8003BB54;
}

loc_8003B760:
{
    r3 = (r6 * r0);
    f25.d = f18.d;
    r3 = (r3 + 2555904);
    r4 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r4);
    r3 = (r4 * r0);
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_42 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    r3 = (r3 + 2555904);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_43 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = PpcFmulsInline(f21.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f18.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    goto loc_8003BB54;
}

loc_8003B7C0:
{
    r3 = (r6 * r0);
    f25.d = MemoryInline::FlatReadFloat32((r2 + -30268));
    r3 = (r3 + 2555904);
    r4 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r4);
    r3 = (r4 * r0);
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_40 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    r3 = (r3 + 2555904);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_41 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = PpcFmulsInline(f21.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f18.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    goto loc_8003BB54;
}

loc_8003B820:
{
    r3 = (r6 * r0);
    f26.d = f18.d;
    r3 = (r3 + 2555904);
    r4 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r4);
    r3 = (r4 * r0);
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_38 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    r3 = (r3 + 2555904);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_39 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = PpcFmulsInline(f21.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f25.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f18.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    goto loc_8003BB54;
}

loc_8003B880:
{
    r3 = (r6 * r0);
    f26.d = MemoryInline::FlatReadFloat32((r2 + -30268));
    r3 = (r3 + 2555904);
    r4 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r4);
    r3 = (r4 * r0);
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_36 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    r3 = (r3 + 2555904);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_37 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = PpcFmulsInline(f21.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f25.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f18.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    goto loc_8003BB54;
}

loc_8003B8E0:
{
    r0 = MemoryInline::FlatRead32((r27 + 236));
    r4 = (r24 + 17405);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    f1.d = PpcFmulsInline(f31.d, f28.d);
    r3 = (r0 * r4);
    f3.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = PpcFmulsInline(f29.d, f3.d);
    r3 = (r3 + 2555904);
    f3.d = PpcFmulsInline(f28.d, f3.d);
    r3 = (r3 + -24893);
    f1.d = PpcFmulsInline(f29.d, f0.d);
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_48 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f2.d = PpcFmulsInline(f30.d, f2.d);
    f3.d = PpcFmulsInline(f30.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f4.d = PpcFmulsInline(f28.d, f2.d);
    MemoryInline::FlatWrite32((r27 + 236), r3);
    f2.d = PpcFmulsInline(f30.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f4.d = PpcFmulsInline(f29.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8003B94C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003B9F8;
    }
}

loc_8003B950:
{
    r3 = (r3 * r4);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r3 = (r0 * r4);
    r0_rot_49 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_49 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r3 = (r3 + 2555904);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    r3 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r3);
    r0_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_50 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = PpcFmulsInline(f21.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f18.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    f25.d = PpcFmulsInline(f28.d, f0.d);
    SetCRFloatResident(cr, 0, f25.d, f17.d);
}

loc_8003B9B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003B9C0;
    }
}

loc_8003B9B8:
{
    f25.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f25.d));
    goto loc_8003B9C4;
}

loc_8003B9C0:
{
    f25.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f25.d));
}

loc_8003B9C4:
{
    r0 = (r24 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_51 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    goto loc_8003BB54;
}

loc_8003B9F8:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8003B9FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003BAA8;
    }
}

loc_8003BA00:
{
    r3 = (r3 * r4);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r3 = (r0 * r4);
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_52 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    r3 = (r3 + 2555904);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r3 = (r0 * r4);
    r0_rot_53 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_53 & 65535);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_54 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_54 & 65535);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f2.d = PpcFmulsInline(f21.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = PpcFmulsInline(f21.d, f1.d);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f18.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f18.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    f25.d = PpcFmulsInline(f29.d, f1.d);
    f24.d = PpcFmulsInline(f28.d, f0.d);
    SetCRFloatResident(cr, 0, f24.d, f17.d);
}

loc_8003BA90:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BAA0;
    }
}

loc_8003BA98:
{
    f24.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f24.d));
    goto loc_8003BB54;
}

loc_8003BAA0:
{
    f24.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f24.d));
    goto loc_8003BB54;
}

loc_8003BAA8:
{
    r3 = (r3 * r4);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r3);
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_55 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    f26.d = PpcFmulsInline(f28.d, f0.d);
    SetCRFloatResident(cr, 0, f26.d, f17.d);
}

loc_8003BADC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BAEC;
    }
}

loc_8003BAE4:
{
    f26.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f26.d));
    goto loc_8003BAF0;
}

loc_8003BAEC:
{
    f26.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f26.d));
}

loc_8003BAF0:
{
    r4 = (r24 + 17405);
    r3 = (r3 * r4);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r3 = (r0 * r4);
    r0_rot_56 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_56 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    r3 = (r3 + 2555904);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r27 + 236), r0);
    r0_rot_57 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_57 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = PpcFmulsInline(f21.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f18.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    f25.d = PpcFmulsInline(f29.d, f1.d);
    f24.d = PpcFmulsInline(f29.d, f0.d);
}

loc_8003BB54:
{
    SetCRFloatResident(cr, 0, f25.d, f17.d);
}

loc_8003BB58:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f17.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f17.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f17.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BB9C;
    }
}

loc_8003BB6C:
{
    f0.d = std::fabs(f26.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f25.d, f0.d);
}

loc_8003BB78:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BB9C;
    }
}

loc_8003BB80:
{
    f0.d = std::fabs(f24.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f25.d, f0.d);
}

loc_8003BB8C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BB9C;
    }
}

loc_8003BB94:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f18.d);
    goto loc_8003BC68;
}

loc_8003BB9C:
{
    SetCRFloatResident(cr, 0, f25.d, f17.d);
}

loc_8003BBA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003BBD8;
    }
}

loc_8003BBA4:
{
    f1.d = std::fabs(f26.d);
    f0.d = (-(f25.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8003BBB4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BBD8;
    }
}

loc_8003BBBC:
{
    f1.d = std::fabs(f24.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8003BBC8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BBD8;
    }
}

loc_8003BBD0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f22.d);
    goto loc_8003BC68;
}

loc_8003BBD8:
{
    SetCRFloatResident(cr, 0, f26.d, f17.d);
}

loc_8003BBDC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BC14;
    }
}

loc_8003BBE4:
{
    f0.d = std::fabs(f25.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f26.d, f0.d);
}

loc_8003BBF0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BC14;
    }
}

loc_8003BBF8:
{
    f0.d = std::fabs(f24.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f26.d, f0.d);
}

loc_8003BC04:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BC14;
    }
}

loc_8003BC0C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f18.d);
    goto loc_8003BC68;
}

loc_8003BC14:
{
    SetCRFloatResident(cr, 0, f26.d, f17.d);
}

loc_8003BC18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003BC50;
    }
}

loc_8003BC1C:
{
    f1.d = std::fabs(f25.d);
    f0.d = (-(f26.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8003BC2C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BC50;
    }
}

loc_8003BC34:
{
    f1.d = std::fabs(f24.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8003BC40:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BC50;
    }
}

loc_8003BC48:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f22.d);
    goto loc_8003BC68;
}

loc_8003BC50:
{
    SetCRFloatResident(cr, 0, f24.d, f17.d);
}

loc_8003BC54:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BC64;
    }
}

loc_8003BC5C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f18.d);
    goto loc_8003BC68;
}

loc_8003BC64:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f22.d);
}

loc_8003BC68:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    f3.d = PpcFmulsInline(f26.d, f31.d);
    f1.d = PpcFmulsInline(f24.d, f30.d);
    f2.d = PpcFmulsInline(f25.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    SetCRFloatResident(cr, 0, f17.d, f27.d);
}

loc_8003BC80:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003BE50;
    }
}

loc_8003BC8C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    SetCRFloatResident(cr, 0, f17.d, f0.d);
}

loc_8003BC94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003BD2C;
    }
}

loc_8003BC98:
{
    f0.d = std::fabs(f1.d);
    f1.d = std::fabs(f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003BCAC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003BCB4;
    }
}

loc_8003BCB0:
{
    goto loc_8003BCB8;
}

loc_8003BCB4:
{
    f1.d = f0.d;
}

loc_8003BCB8:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x8003BCC0u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BB64u>(ctx);
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
    f5 = ctx->fpr[5];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    PpcSetPairedFprInline(f15, PPC_Fres(PPC_PsFromScalarInline(f4.d)));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f15.d, f15.d));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f15.d, f15.d));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    PpcSetPairedFprInline(f15, PPC_PsNmsubInline(PPC_PsFromScalarInline(f4.d), f2.d, f3.d));
    SetCRFloatResident(cr, 0, f16.d, f17.d);
}

loc_8003BCEC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BCFC;
    }
}

loc_8003BCF4:
{
    f0.d = f17.d;
    goto loc_8003BD08;
}

loc_8003BCFC:
{
    f1.d = f16.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f16.d, f1.d);
}

loc_8003BD08:
{
    f3.d = PpcFmulsInline(PPC_PsToScalarInline(f15.d), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f15.d = PPC_PsToScalarInline(f15.d);
    goto loc_8003BE50;
}

loc_8003BD2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f17.d, f0.d);
}

loc_8003BD34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003BDC8;
    }
}

loc_8003BD38:
{
    f0.d = std::fabs(f1.d);
    f1.d = std::fabs(f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003BD4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003BD54;
    }
}

loc_8003BD50:
{
    goto loc_8003BD58;
}

loc_8003BD54:
{
    f1.d = f0.d;
}

loc_8003BD58:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x8003BD60u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BB64u>(ctx);
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
    f5 = ctx->fpr[5];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    PpcSetPairedFprInline(f15, PPC_Fres(PPC_PsFromScalarInline(f4.d)));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f15.d, f15.d));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f15.d, f15.d));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    PpcSetPairedFprInline(f15, PPC_PsNmsubInline(PPC_PsFromScalarInline(f4.d), f2.d, f3.d));
    SetCRFloatResident(cr, 0, f16.d, f17.d);
}

loc_8003BD90:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BDA0;
    }
}

loc_8003BD98:
{
    f0.d = f17.d;
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_8003BDAC;
}

loc_8003BDA0:
{
    f1.d = f16.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f16.d, f1.d);
}

loc_8003BDAC:
{
    f2.d = PpcFmulsInline(PPC_PsToScalarInline(f15.d), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f15.d = PPC_PsToScalarInline(f15.d);
    goto loc_8003BE50;
}

loc_8003BDC8:
{
    f0.d = std::fabs(f2.d);
    f1.d = std::fabs(f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003BDDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003BDE4;
    }
}

loc_8003BDE0:
{
    goto loc_8003BDE8;
}

loc_8003BDE4:
{
    f1.d = f0.d;
}

loc_8003BDE8:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x8003BDF0u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BB64u>(ctx);
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
    f5 = ctx->fpr[5];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    PpcSetPairedFprInline(f15, PPC_Fres(PPC_PsFromScalarInline(f4.d)));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f15.d, f15.d));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f15.d, f15.d));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    PpcSetPairedFprInline(f15, PPC_PsNmsubInline(PPC_PsFromScalarInline(f4.d), f2.d, f3.d));
    SetCRFloatResident(cr, 0, f16.d, f17.d);
}

loc_8003BE24:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BE34;
    }
}

loc_8003BE2C:
{
    f0.d = f17.d;
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_8003BE40;
}

loc_8003BE34:
{
    f1.d = f16.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f16.d, f1.d);
}

loc_8003BE40:
{
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f15.d), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f15.d = PPC_PsToScalarInline(f15.d);
}

loc_8003BE50:
{
    f1.d = f23.d;
    r3 = r26;
    r6 = r27;
    r7 = r28;
    r8 = r30;
    r9 = r31;
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    ctx->lr = 0x8003BE74u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8003A320u>(ctx);
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
    f5 = ctx->fpr[5];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r17 = (r17 + 1);
}

loc_8003BE78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(r29));
}

loc_8003BE7C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003B59C;
    }
}

loc_8003BE80:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 272), 0, 296u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 272u, (r1 + 544));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 256u, (r1 + 528));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 240u, (r1 + 512));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 224u, (r1 + 496));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 208u, (r1 + 480));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 192u, (r1 + 464));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 176u, (r1 + 448));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 160u, (r1 + 432));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f15.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 272);
    f14.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 272));
    // inline leaf 0x800215C4 (16 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -4));
    // end of inlined leaf 0x800215C4
    r0 = MemoryInline::ReadResolved32(guest_range_4, 292u, (r1 + 564));
    ctx->lr = r0;
    r1 = (r1 + 560);
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
    ctx->fpr[5] = f5;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8003A660 func_8003A660 preserves=false fpr_mask=0xFFFFC000
