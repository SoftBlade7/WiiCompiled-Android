#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80038CD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
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
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80038CD0;

loc_80038CD0:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -544), 0, 552u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -544), r1);
    r1 = (r1 + -544);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 548u, (r1 + 548), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 528u, (r1 + 528), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 536);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 512u, (r1 + 512), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 520);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 496u, (r1 + 496), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 480u, (r1 + 480), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 464u, (r1 + 464), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 448u, (r1 + 448), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 432u, (r1 + 432), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 416u, (r1 + 416), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 400u, (r1 + 400), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 384u, (r1 + 384), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 368u, (r1 + 368), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 352u, (r1 + 352), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 336u, (r1 + 336), f19.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_12 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_12, PPC_PsFromScalarInline(f19.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 320u, (r1 + 320), f18.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_13 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_13, PPC_PsFromScalarInline(f18.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 304u, (r1 + 304), f17.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_14 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_14, PPC_PsFromScalarInline(f17.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 288u, (r1 + 288), f16.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_15 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_15, PPC_PsFromScalarInline(f16.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 272u, (r1 + 272), f15.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_16 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_16, PPC_PsFromScalarInline(f15.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 256u, (r1 + 256), f14.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_17 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_17, PPC_PsFromScalarInline(f14.d));
    r11 = (r1 + 256);
    // inline leaf 0x80021574 (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021574
    f25.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_80038D7C:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 168), r0);
    r27 = r3;
    r28 = r4;
    MemoryInline::FlatWriteRam32((r1 + 176), r0);
    r29 = r5;
    r22 = r6;
    r16 = r7;
    r17 = r8;
    r30 = r9;
    r31 = r10;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003947C;
    }
}

loc_80038DAC:
{
    f1.d = MemoryInline::FlatReadFloat32((r8 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -30544), 0, 80u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30544));
    f31.d = MemoryInline::FlatReadFloat32(r8);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -30540));
    f1.d = std::fabs(f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80038DCC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80038DD4;
    }
}

loc_80038DD0:
{
    goto loc_80038DD8;
}

loc_80038DD4:
{
    f31.d = f0.d;
}

loc_80038DD8:
{
    r0 = (r7 & 33554432);
}

loc_80038DDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80038DEC;
    }
}

loc_80038DE0:
{
    f29.d = f31.d;
    f28.d = f31.d;
    goto loc_80038E2C;
}

loc_80038DEC:
{
    f29.d = MemoryInline::FlatReadFloat32((r8 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -30540));
    f1.d = std::fabs(f29.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80038E00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80038E08;
    }
}

loc_80038E04:
{
    goto loc_80038E0C;
}

loc_80038E08:
{
    f29.d = f0.d;
}

loc_80038E0C:
{
    f28.d = MemoryInline::FlatReadFloat32((r8 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -30540));
    f1.d = std::fabs(f28.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80038E20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80038E28;
    }
}

loc_80038E24:
{
    goto loc_80038E2C;
}

loc_80038E28:
{
    f28.d = f0.d;
}

loc_80038E2C:
{
    r0 = (r7 & 262144);
}

loc_80038E30:
{
    f27.d = MemoryInline::FlatReadFloat32((r8 + 8));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80038E84;
    }
}

loc_80038E38:
{
    r3 = 196608;
    r5 = MemoryInline::FlatRead32((r4 + 236));
    r0 = (r3 + 17405);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r2 + -30480));
    r3 = (r5 * r0);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30536));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -30528));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -30532));
        }
    }
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r4 + 236), r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_80038E84:
{
    r0 = (r7 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80038E88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800391FC;
    }
}

loc_80038E8C:
{
    f1.d = MemoryInline::FlatReadFloat32((r8 + 12));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    r21 = (r3 + 1);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -30520));
    r20 = 0;
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r19 = 1;
    r18 = 0;
    r17 = 0;
    f1.d = f26.d;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8001BBE8u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -30536), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r2 + -30512));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80038EC8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80038ED8;
    }
}

loc_80038ECC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r2 + -30508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80038ED4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80038EDC;
    }
}

loc_80038ED8:
{
    r17 = 1;
}

loc_80038EDC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    f23.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r2 + -30500));
    r4 = (r22 * r0);
    f19.d = (-(f29.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r2 + -30488));
    r3 = 196608;
    r0 = (r21 + -1);
    f22.d = static_cast<double>(PpcForceSingleValueInline(f23.d - f30.d));
    r23 = (r16 & 16777216);
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 64u, (r2 + -30472));
    f17.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -30528));
    r22 = (r4 + 2);
    f18.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r2 + -30504));
    r25 = (r0 ^ -2147483648);
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r2 + -30480));
    r26 = (r3 + 17405);
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -30536));
    r16 = 0;
    f21.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r2 + -30496));
    r24 = 0;
    f20.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -30492));
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    goto loc_800391F0;
}

loc_80038F38:
{
    MemoryInline::FlatWriteRam32((r1 + 172), r25);
    r0 = (r20 ^ -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(1));
}

loc_80038F44:
{
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f16.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f16.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f17.d, f0.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f18.d + f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80038F70;
    }
}

loc_80038F68:
{
    f1.d = f27.d;
    goto loc_80038FD8;
}

loc_80038F70:
{
}

loc_80038F74:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_80038FA8;
    }
}

loc_80038F78:
{
    r0 = (r18 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r0 = (r19 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f16.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f16.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    goto loc_80038FD8;
}

loc_80038FA8:
{
    r0 = (r19 + -1);
    r3 = (r18 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f16.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f16.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_80038FD8:
{
    r18 = (r18 + 1);
}

loc_80038FE0:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(r19))) {
        goto loc_80039024;
    }
}

loc_80038FE4:
{
    r24 = (r24 + 2);
    r18 = 0;
}

loc_80038FF0:
{
    r20 = (r20 + 1);
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(r21))) {
        goto loc_80039010;
    }
}

loc_80038FF8:
{
}

loc_80038FFC:
{
    r0 = (r19 + 3);
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(1))) {
        goto loc_80039008;
    }
}

loc_80039004:
{
    r0 = (r19 + 4);
}

loc_80039008:
{
    r19 = r0;
    goto loc_80039024;
}

loc_80039010:
{
}

loc_80039014:
{
    r0 = 1;
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(4))) {
        goto loc_80039020;
    }
}

loc_8003901C:
{
    r0 = (r19 + -4);
}

loc_80039020:
{
    r19 = r0;
}

loc_80039024:
{
    r0 = MemoryInline::FlatRead32((r28 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_8003902C:
{
    r3 = (r0 * r26);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r28 + 236), r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f24.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80039060;
    }
}

loc_80039054:
{
    f0.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f23.d - f0.d));
}

loc_80039060:
{
    f0.d = PpcFmulsInline(f2.d, f22.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f21.d);
    r3 = (r1 + 120);
    r4 = (r1 + 128);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f1.d = f14.d;
    r3 = (r1 + 160);
    f0.d = PpcFmulsInline(f0.d, f20.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80036F70u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f5.d = PpcFmulsInline(f31.d, f15.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f1.d = PpcFmulsInline(f28.d, f15.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f3.d = PpcFmulsInline(f19.d, f15.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f5.d = PpcFmulsInline(f6.d, f5.d);
    r3 = (r1 + 132);
    f1.d = PpcFmulsInline(f2.d, f3.d);
    r4 = (r1 + 156);
    f2.d = PpcFmulsInline(f4.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f1.d);
    f0.d = PpcFmulsInline(f6.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f0.d);
    // inline leaf 0x80036F00 (25 guest instruction(s))
}

loc_inl1_0x80036F00:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30776));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f3.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_2));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30772));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f4.d, f4.d, f6.d));
    PpcSetPairedFprInline(f5, PPC_PsSum0Inline(f5.d, f6.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f5.d), f2.d);
}

loc_inl1_0x80036F24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x80036F54;
    }
}

loc_inl1_0x80036F28:
{
    f2.d = PPC_Frsqrte(PPC_PsToScalarInline(f5.d));
    f6.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f5.d), f1.d);
    f2.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_2, f4.d);
    r3 = 1;
    goto loc_inl1_cont_80036F00;
}

loc_inl1_0x80036F54:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_3, f4.d);
    r3 = 0;
    f6.d = PPC_PsToScalarInline(f6.d);
}

loc_inl1_cont_80036F00:
{
    // end of inlined leaf 0x80036F00
    f1.d = f14.d;
    ctx->lr = 0x800390E0u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8001B590u>(ctx);
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
    r16 = ctx->gpr[16];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f21.d);
}

loc_800390E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80039104;
    }
}

loc_800390EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f0.d);
}

loc_80039104:
{
    r7 = (r1 + 132);
    r3 = r27;
    r5 = r28;
    r4 = (r1 + 144);
    r8 = r7;
    r6 = (r1 + 156);
    r9 = (r1 + 120);
    ctx->lr = 0x80039124u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80037630u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r28 + 236));
    f1.d = f25.d;
    r3 = r27;
    r4 = r30;
    r6 = (r0 * r26);
    r5 = r28;
    r6 = (r6 + 2555904);
    r0 = (r6 + -24893);
    MemoryInline::FlatWrite32((r28 + 236), r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    r10 = MemoryInline::FlatRead32((r1 + 144));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    r9 = MemoryInline::FlatRead32((r1 + 148));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    r8 = MemoryInline::FlatRead32((r1 + 152));
    r7 = MemoryInline::FlatRead32((r1 + 156));
    r6 = MemoryInline::FlatRead32((r1 + 160));
    f15.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f24.d));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    MemoryInline::FlatWriteRam32((r1 + 48), r10);
    MemoryInline::FlatWriteRam32((r1 + 52), r9);
    MemoryInline::FlatWriteRam32((r1 + 56), r8);
    MemoryInline::FlatWriteRam32((r1 + 60), r7);
    MemoryInline::FlatWriteRam32((r1 + 64), r6);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80037B00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r28 + 103));
    r4 = r3;
    r12 = MemoryInline::FlatRead32((r29 + 28));
    r3 = r29;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r7 = r31;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = (r4 & 65535);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r5 = (r1 + 60);
    r6 = (r1 + 48);
    r8 = (r28 + 252);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f16.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    r9 = MemoryInline::FlatRead32((r28 + 248));
    r10 = MemoryInline::FlatRead16((r28 + 232));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f15.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f0.d));
    ctr = r12;
    ctx->lr = 0x800391ECu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
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
    r16 = ctx->gpr[16];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r16 = (r16 + 1);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
}

loc_800391F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(r22));
}

loc_800391F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80038F38;
    }
}

loc_800391F8:
{
    goto loc_8003947C;
}

loc_800391FC:
{
    r3 = 196608;
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r2 + -30480));
    f20.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30536));
    r25 = (r7 & 16777216);
    f21.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30544));
    r26 = (r3 + 17405);
    f22.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r2 + -30500));
    r16 = 0;
    f23.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -30528));
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r2 + -30504));
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r2 + -30496));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r2 + -30472));
    f14.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 56u, (r2 + -30488));
    goto loc_80039474;
}

loc_80039234:
{
    r0 = MemoryInline::FlatRead32((r28 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_8003923C:
{
    r3 = (r0 * r26);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    MemoryInline::FlatWrite32((r28 + 236), r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f0.d = MemoryInline::FlatReadFloat32((r17 + 4));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f21.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f19.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80039288;
    }
}

loc_8003926C:
{
    f0.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_80039294;
}

loc_80039288:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_80039294:
{
    r5 = (r3 * r26);
    r3 = (r1 + 20);
    r4 = (r1 + 16);
    r5 = (r5 + 2555904);
    r0 = (r5 + -24893);
    MemoryInline::FlatWrite32((r28 + 236), r0);
    r5 = (r0 * r26);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f1.d = MemoryInline::FlatReadFloat32((r17 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r17 + 8));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r5 = (r5 + 2555904);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f19.d));
    r5 = (r5 + -24893);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0 = (r0_rot_10 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f20.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    MemoryInline::FlatWrite32((r28 + 236), r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    f0.d = PpcFmulsInline(f23.d, f0.d);
    f16.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f0.d));
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = f16.d;
    r3 = (r1 + 12);
    r4 = (r1 + 8);
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f7.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f28.d, f15.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f5.d = PpcFmulsInline(f31.d, f15.d);
    f6.d = (-(f7.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = (-(f0.d));
    f2.d = PpcFmulsInline(f29.d, f15.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f7.d, f1.d);
    f5.d = PpcFmulsInline(f6.d, f5.d);
    r3 = (r1 + 84);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r4 = (r1 + 108);
    f3.d = PpcFmulsInline(f4.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    // inline leaf 0x80036F00 (25 guest instruction(s))
}

loc_inl2_0x80036F00:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30776));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f3.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30772));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f4.d, f4.d, f6.d));
    PpcSetPairedFprInline(f5, PPC_PsSum0Inline(f5.d, f6.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f5.d), f2.d);
}

loc_inl2_0x80036F24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x80036F54;
    }
}

loc_inl2_0x80036F28:
{
    f2.d = PPC_Frsqrte(PPC_PsToScalarInline(f5.d));
    f6.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f5.d), f1.d);
    f2.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_6, f4.d);
    r3 = 1;
    goto loc_inl2_cont_80036F00;
}

loc_inl2_0x80036F54:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_7, f4.d);
    r3 = 0;
}

loc_inl2_cont_80036F00:
{
    // end of inlined leaf 0x80036F00
    r0 = MemoryInline::FlatRead32((r1 + 112));
    r3 = (r1 + 72);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r4 = r3;
    r5 = MemoryInline::FlatRead32((r1 + 108));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::FlatWriteRam32((r1 + 72), r5);
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f30.d);
    // inline leaf 0x80036F00 (25 guest instruction(s))
}

loc_inl3_0x80036F00:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30776));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f3.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_5));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30772));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f4.d, f4.d, f6.d));
    PpcSetPairedFprInline(f5, PPC_PsSum0Inline(f5.d, f6.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f5.d), f2.d);
}

loc_inl3_0x80036F24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_0x80036F54;
    }
}

loc_inl3_0x80036F28:
{
    f2.d = PPC_Frsqrte(PPC_PsToScalarInline(f5.d));
    f6.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f5.d), f1.d);
    f2.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_9, f4.d);
    r3 = 1;
    goto loc_inl3_cont_80036F00;
}

loc_inl3_0x80036F54:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_10 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_10, f4.d);
    r3 = 0;
    f6.d = PPC_PsToScalarInline(f6.d);
}

loc_inl3_cont_80036F00:
{
    // end of inlined leaf 0x80036F00
    r7 = (r1 + 84);
    r3 = r27;
    r5 = r28;
    r4 = (r1 + 96);
    r8 = r7;
    r6 = (r1 + 108);
    r9 = (r1 + 72);
    ctx->lr = 0x800393ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80037630u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r28 + 236));
    f1.d = f25.d;
    r3 = r27;
    r4 = r30;
    r6 = (r0 * r26);
    r5 = r28;
    r6 = (r6 + 2555904);
    r0 = (r6 + -24893);
    MemoryInline::FlatWrite32((r28 + 236), r0);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_11 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r10 = MemoryInline::FlatRead32((r1 + 96));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r9 = MemoryInline::FlatRead32((r1 + 100));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    r8 = MemoryInline::FlatRead32((r1 + 104));
    r7 = MemoryInline::FlatRead32((r1 + 108));
    r6 = MemoryInline::FlatRead32((r1 + 112));
    f15.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f20.d));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::FlatWriteRam32((r1 + 24), r10);
    MemoryInline::FlatWriteRam32((r1 + 28), r9);
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    MemoryInline::FlatWriteRam32((r1 + 36), r7);
    MemoryInline::FlatWriteRam32((r1 + 40), r6);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80037B00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r28 + 103));
    r4 = r3;
    r12 = MemoryInline::FlatRead32((r29 + 28));
    r3 = r29;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r7 = r31;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = (r4 & 65535);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    r5 = (r1 + 36);
    r6 = (r1 + 24);
    r8 = (r28 + 252);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    r9 = MemoryInline::FlatRead32((r28 + 248));
    r10 = MemoryInline::FlatRead16((r28 + 232));
    f0.d = PpcFmulsInline(f14.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f15.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f0.d));
    ctr = r12;
    ctx->lr = 0x80039470u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
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
    r16 = ctx->gpr[16];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r16 = (r16 + 1);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
}

loc_80039474:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(r22));
}

loc_80039478:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80039234;
    }
}

loc_8003947C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 256), 0, 296u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 272u, (r1 + 528));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 256u, (r1 + 512));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 240u, (r1 + 496));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 224u, (r1 + 480));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 208u, (r1 + 464));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 192u, (r1 + 448));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 176u, (r1 + 432));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 160u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 144u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 128u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 112u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 96u, (r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 80u, (r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 64u, (r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 48u, (r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 32u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f15.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 16u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 256);
    f14.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 0u, (r1 + 256));
    // inline leaf 0x800215C0 (17 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C0
    r0 = MemoryInline::ReadResolved32(guest_range_5, 292u, (r1 + 548));
    ctx->lr = r0;
    r1 = (r1 + 544);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80038CD0 func_80038CD0 preserves=false fpr_mask=0xFFFFC000
