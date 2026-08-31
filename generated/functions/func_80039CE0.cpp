#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80039CE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
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

    goto loc_80039CE0;

loc_80039CE0:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -480), 0, 488u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -480), r1);
    r1 = (r1 + -480);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 484u, (r1 + 484), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 464u, (r1 + 464), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 448u, (r1 + 448), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 432u, (r1 + 432), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 416u, (r1 + 416), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 400u, (r1 + 400), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 384u, (r1 + 384), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 368u, (r1 + 368), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 352u, (r1 + 352), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 336u, (r1 + 336), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 320u, (r1 + 320), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 304u, (r1 + 304), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 288u, (r1 + 288), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 272u, (r1 + 272), f19.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_12 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_12, PPC_PsFromScalarInline(f19.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 256u, (r1 + 256), f18.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_13 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_13, PPC_PsFromScalarInline(f18.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 240u, (r1 + 240), f17.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_14 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_14, PPC_PsFromScalarInline(f17.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 224u, (r1 + 224), f16.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_15 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_15, PPC_PsFromScalarInline(f16.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 208u, (r1 + 208), f15.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_16 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_16, PPC_PsFromScalarInline(f15.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 192u, (r1 + 192), f14.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_17 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_17, PPC_PsFromScalarInline(f14.d));
    r11 = (r1 + 192);
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
    f31.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_80039D8C:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    r20 = r3;
    r21 = r4;
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    r22 = r5;
    r23 = r6;
    r24 = r8;
    r25 = r9;
    r26 = r10;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003A26C;
    }
}

loc_80039DB8:
{
    f19.d = MemoryInline::FlatReadFloat32(r8);
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -30392), 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -30392));
    f1.d = std::fabs(f19.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80039DCC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80039DD4;
    }
}

loc_80039DD0:
{
    goto loc_80039DD8;
}

loc_80039DD4:
{
    f19.d = f0.d;
}

loc_80039DD8:
{
    f21.d = MemoryInline::FlatReadFloat32((r8 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -30392));
    f1.d = std::fabs(f21.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80039DEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80039DF4;
    }
}

loc_80039DF0:
{
    goto loc_80039DF8;
}

loc_80039DF4:
{
    f21.d = f0.d;
}

loc_80039DF8:
{
    r0 = (r7 & 33554432);
}

loc_80039DFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80039E08;
    }
}

loc_80039E00:
{
    f18.d = f19.d;
    goto loc_80039E28;
}

loc_80039E08:
{
    f18.d = MemoryInline::FlatReadFloat32((r8 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -30392));
    f1.d = std::fabs(f18.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80039E1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80039E24;
    }
}

loc_80039E20:
{
    goto loc_80039E28;
}

loc_80039E24:
{
    f18.d = f0.d;
}

loc_80039E28:
{
    f17.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r2 + -30388));
    r0 = (r7 & 262144);
}

loc_80039E30:
{
    f16.d = f17.d;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80039E40;
    }
}

loc_80039E38:
{
    f15.d = MemoryInline::FlatReadFloat32((r8 + 8));
    goto loc_80039E88;
}

loc_80039E40:
{
    r3 = 196608;
    r5 = MemoryInline::FlatRead32((r4 + 236));
    r0 = (r3 + 17405);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r2 + -30336));
    r3 = (r5 * r0);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -30384));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -30376));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r2 + -30380));
        }
    }
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r4 + 236), r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f15.d = PpcFmulsInline(f0.d, f1.d);
}

loc_80039E88:
{
    r28 = (r7 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80039E8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80039F14;
    }
}

loc_80039E90:
{
    f1.d = MemoryInline::FlatReadFloat32((r8 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r2 + -30368));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30360));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80039EB0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80039EC0;
    }
}

loc_80039EB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30356));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80039EBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80039EE8;
    }
}

loc_80039EC0:
{
    r0 = MemoryInline::FlatRead16((r21 + 50));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30336));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    goto loc_80039F14;
}

loc_80039EE8:
{
    r3 = MemoryInline::FlatRead16((r21 + 50));
    f2.d = MemoryInline::FlatReadFloat32((r24 + 12));
    r0 = (r3 + -1);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30328));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
}

loc_80039F14:
{
}

loc_80039F18:
{
    r29 = r23;
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80039F24;
    }
}

loc_80039F20:
{
    r29 = (r23 * r23);
}

loc_80039F24:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -30388), 0, 68u, true, false);
    f14.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30388));
    r30 = 196608;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r2 + -30344));
    r31 = (r30 + 17405);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f0.d);
    f28.d = f14.d;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r2 + -30340));
    f29.d = f14.d;
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 52u, (r2 + -30336));
    r27 = 0;
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -30384));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            f25.d = PpcBitCastToFloatInline(resolved_pair.second);
            f26.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f25.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -30376));
            f26.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30380));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            f22.d = PpcBitCastToFloatInline(resolved_pair.first);
            f27.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f22.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r2 + -30352));
            f27.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r2 + -30348));
        }
    }
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r2 + -30328));
    MemoryInline::FlatWriteRamFloat64((r1 + 136), f0.d);
    goto loc_8003A264;
}

loc_80039F6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80039F74:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f0.d));
    f20.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80039FEC;
    }
}

loc_80039F84:
{
    r0 = MemoryInline::FlatRead32((r21 + 236));
    r4 = (r30 + 17405);
    r3 = (r0 * r4);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r21 + 236), r0);
    r3 = (r0 * r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f1.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 120));
    r3 = (r3 + 2555904);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f23.d));
    r3 = (r3 + -24893);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f24.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    MemoryInline::FlatWrite32((r21 + 236), r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f23.d));
    f17.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f24.d));
    f0.d = PpcFmulsInline(f25.d, f0.d);
    f14.d = PpcFmulsInline(f26.d, f0.d);
}

loc_80039FEC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f15.d + f17.d));
    r3 = (r1 + 20);
    r4 = (r1 + 16);
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
    f1.d = f14.d;
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = (-(f20.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r3 = (r1 + 72);
    f3.d = PpcFmulsInline(f20.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = PpcFmulsInline(f21.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f20.d));
    r4 = r3;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    f1.d = PpcFmulsInline(f19.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = PpcFmulsInline(f18.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    r0 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
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
}

loc_inl1_cont_80036F00:
{
    // end of inlined leaf 0x80036F00
    f1.d = MemoryInline::FlatReadFloat32((r1 + 104));
    r3 = (r1 + 60);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    r4 = r3;
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    // inline leaf 0x80036F00 (25 guest instruction(s))
}

loc_inl2_0x80036F00:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30776));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f3.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_3));
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
    r3_psq_tmp_5 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_5, f4.d);
    r3 = 1;
    goto loc_inl2_cont_80036F00;
}

loc_inl2_0x80036F54:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_6, f4.d);
    r3 = 0;
}

loc_inl2_cont_80036F00:
{
    // end of inlined leaf 0x80036F00
    SetCRFloatResident(cr, 0, f29.d, f20.d);
}

loc_8003A0A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003A0E0;
    }
}

loc_8003A0A8:
{
    f0.d = (-(f18.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f4.d = PpcFmulsInline(f19.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = PpcFmulsInline(f21.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    goto loc_8003A128;
}

loc_8003A0E0:
{
    f0.d = (-(f20.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f20.d));
    f5.d = PpcFmulsInline(f20.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = PpcFmulsInline(f21.d, f2.d);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f2.d);
    f1.d = PpcFmulsInline(f19.d, f4.d);
    f0.d = PpcFmulsInline(f18.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
}

loc_8003A128:
{
    r3 = (r1 + 48);
    r4 = r3;
    // inline leaf 0x80036F00 (25 guest instruction(s))
}

loc_inl3_0x80036F00:
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
    r3_psq_tmp_8 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_8, f4.d);
    r3 = 1;
    goto loc_inl3_cont_80036F00;
}

loc_inl3_0x80036F54:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_9, f4.d);
    r3 = 0;
    f6.d = PPC_PsToScalarInline(f6.d);
}

loc_inl3_cont_80036F00:
{
    // end of inlined leaf 0x80036F00
    r3 = r20;
    r5 = r21;
    r4 = (r1 + 84);
    r6 = (r1 + 96);
    r7 = (r1 + 48);
    r8 = (r1 + 72);
    r9 = (r1 + 60);
    ctx->lr = 0x8003A154u;
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
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r21 + 236));
    f1.d = f31.d;
    r3 = r20;
    r4 = r25;
    r6 = (r0 * r31);
    r5 = r21;
    r6 = (r6 + 2555904);
    r0 = (r6 + -24893);
    MemoryInline::FlatWrite32((r21 + 236), r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    r10 = MemoryInline::FlatRead32((r1 + 84));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    r9 = MemoryInline::FlatRead32((r1 + 88));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f23.d));
    r8 = MemoryInline::FlatRead32((r1 + 92));
    r7 = MemoryInline::FlatRead32((r1 + 96));
    r6 = MemoryInline::FlatRead32((r1 + 100));
    f20.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f24.d));
    r0 = MemoryInline::FlatRead32((r1 + 104));
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
    r0 = MemoryInline::FlatRead8((r21 + 103));
    r4 = r3;
    r12 = MemoryInline::FlatRead32((r22 + 28));
    r3 = r22;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r7 = r26;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = (r4 & 65535);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r5 = (r1 + 36);
    r6 = (r1 + 24);
    r8 = (r21 + 252);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r9 = MemoryInline::FlatRead32((r21 + 248));
    r10 = MemoryInline::FlatRead16((r21 + 232));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f20.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    ctr = r12;
    ctx->lr = 0x8003A21Cu;
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
}

loc_8003A220:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8003A260;
    }
}

loc_8003A224:
{
    r3 = (r27 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r23));
    r0 = (r0 * r23);
    r0 = (r3 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8003A244;
    }
}

loc_8003A238:
{
    f17.d = static_cast<double>(PpcForceSingleValueInline(f17.d + f16.d));
    f14.d = MemoryInline::FlatReadFloat32((r2 + -30388));
    goto loc_8003A260;
}

loc_8003A244:
{
    r0 = (r23 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f14.d = static_cast<double>(PpcForceSingleValueInline(f14.d + f0.d));
}

loc_8003A260:
{
    r27 = (r27 + 1);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
}

loc_8003A264:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r29));
}

loc_8003A268:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80039F6C;
    }
}

loc_8003A26C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 192), 0, 296u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 272u, (r1 + 464));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 256u, (r1 + 448));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 240u, (r1 + 432));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 224u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 208u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 192u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 176u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 160u, (r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 144u, (r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 128u, (r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 112u, (r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 96u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 80u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 64u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 48u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 32u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f15.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 16u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 192);
    f14.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 0u, (r1 + 192));
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::ReadResolved32(guest_range_5, 292u, (r1 + 484));
    ctx->lr = r0;
    r1 = (r1 + 480);
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
// RECOMP_REGISTRATION base 0x80039CE0 func_80039CE0 preserves=false fpr_mask=0xFFFFC000
