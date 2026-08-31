#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800387A0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
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

    goto loc_800387A0;

loc_800387A0:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -416), 0, 424u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -416), r1);
    r1 = (r1 + -416);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 420u, (r1 + 420), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 400u, (r1 + 400), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 384u, (r1 + 384), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 368u, (r1 + 368), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 352u, (r1 + 352), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 336u, (r1 + 336), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 320u, (r1 + 320), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 304u, (r1 + 304), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 288u, (r1 + 288), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 272u, (r1 + 272), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 256u, (r1 + 256), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 240u, (r1 + 240), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 224u, (r1 + 224), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 208u, (r1 + 208), f19.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_12 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_12, PPC_PsFromScalarInline(f19.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 192u, (r1 + 192), f18.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_13 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_13, PPC_PsFromScalarInline(f18.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 176u, (r1 + 176), f17.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_14 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_14, PPC_PsFromScalarInline(f17.d));
    r11 = (r1 + 176);
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
    f18.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_80038834:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    r20 = r3;
    r21 = r4;
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    r22 = r5;
    r23 = r6;
    r27 = r7;
    r24 = r8;
    r25 = r9;
    r26 = r10;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80038C3C;
    }
}

loc_80038864:
{
    f25.d = MemoryInline::FlatReadFloat32(r8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -30616), 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30616));
    f1.d = std::fabs(f25.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80038878:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80038880;
    }
}

loc_8003887C:
{
    goto loc_80038884;
}

loc_80038880:
{
    f25.d = f0.d;
}

loc_80038884:
{
    r0 = (r7 & 33554432);
}

loc_80038888:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80038894;
    }
}

loc_8003888C:
{
    f23.d = f25.d;
    goto loc_800388B4;
}

loc_80038894:
{
    f23.d = MemoryInline::FlatReadFloat32((r8 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30616));
    f1.d = std::fabs(f23.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800388A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800388B0;
    }
}

loc_800388AC:
{
    goto loc_800388B4;
}

loc_800388B0:
{
    f23.d = f0.d;
}

loc_800388B4:
{
    f22.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -30612));
    r0 = (r7 & 262144);
}

loc_800388BC:
{
    f21.d = f22.d;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800388CC;
    }
}

loc_800388C4:
{
    f20.d = MemoryInline::FlatReadFloat32((r8 + 8));
    goto loc_80038914;
}

loc_800388CC:
{
    r3 = 196608;
    r5 = MemoryInline::FlatRead32((r4 + 236));
    r0 = (r3 + 17405);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -30560));
    r3 = (r5 * r0);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30608));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -30600));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -30604));
        }
    }
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r4 + 236), r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f20.d = PpcFmulsInline(f0.d, f1.d);
}

loc_80038914:
{
    r28 = (r7 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80038918:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800389A0;
    }
}

loc_8003891C:
{
    f1.d = MemoryInline::FlatReadFloat32((r8 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -30592));
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30584));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003893C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003894C;
    }
}

loc_80038940:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30580));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80038948:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80038974;
    }
}

loc_8003894C:
{
    r0 = MemoryInline::FlatRead16((r21 + 50));
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30560));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    goto loc_800389A0;
}

loc_80038974:
{
    r3 = MemoryInline::FlatRead16((r21 + 50));
    f2.d = MemoryInline::FlatReadFloat32((r24 + 12));
    r0 = (r3 + -1);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30552));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
}

loc_800389A0:
{
    r31 = 196608;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -30572));
    r29 = (r27 & 16777216);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -30612));
    f26.d = MemoryInline::FlatReadFloat64((r2 + -30560));
    r30 = (r31 + 17405);
    f27.d = MemoryInline::FlatReadFloat32((r2 + -30608));
    r27 = 0;
    f28.d = MemoryInline::FlatReadFloat32((r2 + -30576));
    f31.d = MemoryInline::FlatReadFloat64((r2 + -30552));
    f17.d = MemoryInline::FlatReadFloat32((r2 + -30568));
    goto loc_80038C34;
}

loc_800389D0:
{
    r0 = MemoryInline::FlatRead32((r21 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800389D8:
{
    r3 = (r0 * r30);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r21 + 236), r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f19.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f28.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f26.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80038A48;
    }
}

loc_80038A08:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f24.d));
    f0.d = PpcFmulsInline(f19.d, f19.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f0.d));
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_80038A1C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80038A2C;
    }
}

loc_80038A24:
{
    f24.d = f30.d;
    goto loc_80038A54;
}

loc_80038A2C:
{
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
    f2.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f24.d));
    f0.d = PpcFmulsInline(f19.d, f19.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f0.d));
    f24.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_80038A54;
}

loc_80038A48:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f24.d));
    f0.d = PpcFmulsInline(f19.d, f0.d);
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f0.d));
}

loc_80038A54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80038A58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80038A98;
    }
}

loc_80038A5C:
{
    r3 = MemoryInline::FlatRead32((r21 + 236));
    r0 = (r31 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r21 + 236), r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f1.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f27.d));
    f22.d = PpcFmulsInline(f0.d, f1.d);
}

loc_80038A98:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f20.d + f22.d));
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f1.d);
    f1.d = PpcFmulsInline(f1.d, f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f30.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    r4 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f2.d);
    f1.d = PpcFmulsInline(f25.d, f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 68));
    f0.d = PpcFmulsInline(f0.d, f24.d);
    r0 = MemoryInline::FlatRead32((r1 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f1.d);
    f0.d = PpcFmulsInline(f23.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 120));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80038B00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80038B14;
    }
}

loc_80038B04:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f30.d);
    goto loc_80038B40;
}

loc_80038B14:
{
    f1.d = PpcFmulsInline(f24.d, f0.d);
    r3 = (r1 + 40);
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
}

loc_80038B40:
{
    r3 = r20;
    r5 = r21;
    r4 = (r1 + 76);
    r6 = (r1 + 88);
    r7 = (r1 + 40);
    r8 = (r1 + 52);
    r9 = (r1 + 64);
    ctx->lr = 0x80038B60u;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r21 + 236));
    f1.d = f18.d;
    r3 = r20;
    r4 = r25;
    r6 = (r0 * r30);
    r5 = r21;
    r6 = (r6 + 2555904);
    r0 = (r6 + -24893);
    MemoryInline::FlatWrite32((r21 + 236), r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r10 = MemoryInline::FlatRead32((r1 + 76));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r9 = MemoryInline::FlatRead32((r1 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    r8 = MemoryInline::FlatRead32((r1 + 84));
    r7 = MemoryInline::FlatRead32((r1 + 88));
    r6 = MemoryInline::FlatRead32((r1 + 92));
    f19.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
    r0 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 16), r10);
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    MemoryInline::FlatWriteRam32((r1 + 24), r8);
    MemoryInline::FlatWriteRam32((r1 + 28), r7);
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
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
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r21 + 103));
    r4 = r3;
    r12 = MemoryInline::FlatRead32((r22 + 28));
    r3 = r22;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r7 = r26;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = (r4 & 65535);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    r5 = (r1 + 28);
    r6 = (r1 + 16);
    r8 = (r21 + 252);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    r9 = MemoryInline::FlatRead32((r21 + 248));
    r10 = MemoryInline::FlatRead16((r21 + 232));
    f0.d = PpcFmulsInline(f17.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f19.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    ctr = r12;
    ctx->lr = 0x80038C24u;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80038C28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80038C30;
    }
}

loc_80038C2C:
{
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f21.d));
}

loc_80038C30:
{
    r27 = (r27 + 1);
}

loc_80038C34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r23));
}

loc_80038C38:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800389D0;
    }
}

loc_80038C3C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 176), 0, 248u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 224u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 208u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 192u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 176u, (r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 160u, (r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 176);
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 176));
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::ReadResolved32(guest_range_4, 244u, (r1 + 420));
    ctx->lr = r0;
    r1 = (r1 + 416);
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
// RECOMP_REGISTRATION base 0x800387A0 func_800387A0 preserves=false fpr_mask=0xFFFE0000
