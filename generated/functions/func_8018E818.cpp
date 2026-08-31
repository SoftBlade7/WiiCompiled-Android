#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018E818(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_8018E818;

loc_8018E818:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -448), 0, 456u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -448), r1);
    r1 = (r1 + -448);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 452u, (r1 + 452), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 432u, (r1 + 432), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 416u, (r1 + 416), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 400u, (r1 + 400), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 384u, (r1 + 384), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 368u, (r1 + 368), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 352u, (r1 + 352), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 336u, (r1 + 336), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 320u, (r1 + 320), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    r11 = (r1 + 320);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 292u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 296u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 300u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 300u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 304u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 316u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r28 = r3;
    r29 = r4;
    r30 = r5;
    // inline leaf 0x8018C334 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x8018C334
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 12), f1.d);
    r3 = r28;
    // inline leaf 0x8018C33C (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x8018C33C
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 8), f1.d);
    r3 = r28;
    r6 = r29;
    r7 = r30;
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    r31 = 0;
    ctx->lr = 0x8018E8ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8018EF68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29.d = f1.d;
    r3 = r28;
    // inline leaf 0x8018C334 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x8018C334
    r3 = r28;
    // inline leaf 0x8018C33C (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x8018C33C
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r28;
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    MemoryInline::FlatWriteRam32((r1 + 64), r28);
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    // inline leaf 0x8018B0AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x8018B0AC
    r4 = r3;
    r3 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x80187E50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    MemoryInline::FlatWriteRam32((r1 + 48), r29);
    r3 = (r1 + 48);
    r12 = (r1 + 52);
    ctx->lr = 0x8018E910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    // nop
    r4 = 0x80250000u;
    r5 = 0x80250000u;
    f31.d = MemoryInline::FlatReadFloat32((r4 + 11264));
    r4 = 0x80250000u;
    f25.d = MemoryInline::FlatReadFloat32((r5 + 11280));
    r26 = r3;
    f27.d = MemoryInline::FlatReadFloat64((r4 + 11272));
    r27 = 1127219200;
    goto loc_8018EEBC;
}

loc_8018E938:
{
    r4 = (r26 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_8018E940:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8018EE1C;
    }
}

loc_8018E944:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    MemoryInline::FlatWriteRam32((r1 + 68), r5);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    r5 = (r1 + 64);
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r3 = MemoryInline::FlatRead32((r28 + 92));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8018E96Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_8018E970:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8018EDE8;
    }
}

loc_8018E974:
{
    r0 = MemoryInline::FlatRead32((r28 + 88));
    r0 = (r0 & 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8018E980:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018EB98;
    }
}

loc_8018E984:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 248u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 32), f31.d);
    r31 = MemoryInline::FlatRead32((r1 + 68));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 36), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 40), f31.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 44), f31.d);
    guest_range_2 = MemoryInline::ResolveRangeHost(r28, 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r28);
    MemoryInline::WriteResolved8(guest_range_1, 152u, (r1 + 184), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r28 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 153u, (r1 + 185), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r28 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 154u, (r1 + 186), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r28 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 155u, (r1 + 187), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r28 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 156u, (r1 + 188), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r28 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 157u, (r1 + 189), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r28 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 158u, (r1 + 190), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r28 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 159u, (r1 + 191), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r28 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 160u, (r1 + 192), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r28 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 161u, (r1 + 193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 10u, (r28 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 162u, (r1 + 194), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r28 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 163u, (r1 + 195), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r28 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 164u, (r1 + 196), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 13u, (r28 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 165u, (r1 + 197), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 14u, (r28 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 166u, (r1 + 198), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 15u, (r28 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 167u, (r1 + 199), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 16u, (r28 + 16));
    MemoryInline::WriteResolved8(guest_range_1, 168u, (r1 + 200), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 17u, (r28 + 17));
    MemoryInline::WriteResolved8(guest_range_1, 169u, (r1 + 201), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 18u, (r28 + 18));
    MemoryInline::WriteResolved8(guest_range_1, 170u, (r1 + 202), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 19u, (r28 + 19));
    MemoryInline::WriteResolved8(guest_range_1, 171u, (r1 + 203), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 20u, (r28 + 20));
    MemoryInline::WriteResolved8(guest_range_1, 172u, (r1 + 204), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 21u, (r28 + 21));
    MemoryInline::WriteResolved8(guest_range_1, 173u, (r1 + 205), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 22u, (r28 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 174u, (r1 + 206), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 23u, (r28 + 23));
    MemoryInline::WriteResolved8(guest_range_1, 175u, (r1 + 207), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 24u, (r28 + 24));
    MemoryInline::WriteResolved8(guest_range_1, 176u, (r1 + 208), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r28 + 25));
    MemoryInline::WriteResolved8(guest_range_1, 177u, (r1 + 209), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 26u, (r28 + 26));
    MemoryInline::WriteResolved8(guest_range_1, 178u, (r1 + 210), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 27u, (r28 + 27));
    MemoryInline::WriteResolved8(guest_range_1, 179u, (r1 + 211), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 28u, (r28 + 28));
    MemoryInline::WriteResolved8(guest_range_1, 180u, (r1 + 212), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 29u, (r28 + 29));
    MemoryInline::WriteResolved8(guest_range_1, 181u, (r1 + 213), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 30u, (r28 + 30));
    MemoryInline::WriteResolved8(guest_range_1, 182u, (r1 + 214), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 31u, (r28 + 31));
    MemoryInline::WriteResolved8(guest_range_1, 183u, (r1 + 215), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r28 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 184u, (r1 + 216), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r28 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r28 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 188u, (r1 + 220), r3);
        MemoryInline::WriteResolved32(guest_range_1, 192u, (r1 + 224), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 44u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r28 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r28 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 196u, (r1 + 228), r3);
        MemoryInline::WriteResolved32(guest_range_1, 200u, (r1 + 232), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r28 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 204u, (r1 + 236), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r28 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r28 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 208u, (r1 + 240), r3);
        MemoryInline::WriteResolved32(guest_range_1, 212u, (r1 + 244), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_2, 64u, (r28 + 64));
    MemoryInline::WriteResolved8(guest_range_1, 216u, (r1 + 248), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 65u, (r28 + 65));
    MemoryInline::WriteResolved8(guest_range_1, 217u, (r1 + 249), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 66u, (r28 + 66));
    MemoryInline::WriteResolved8(guest_range_1, 218u, (r1 + 250), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 67u, (r28 + 67));
    f1.d = f31.d;
    f2.d = f31.d;
    r3 = (r1 + 184);
    MemoryInline::WriteResolved8(guest_range_1, 219u, (r1 + 251), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r28 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 220u, (r1 + 252), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r28 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 224u, (r1 + 256), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 76u, (r28 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 228u, (r1 + 260), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 80u, (r28 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 232u, (r1 + 264), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 84u, (r28 + 84));
    MemoryInline::WriteResolved32(guest_range_1, 236u, (r1 + 268), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 88u, (r28 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 240u, (r1 + 272), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 92u, (r28 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 244u, (r1 + 276), r0);
    // inline leaf 0x8018C2F8 (3 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 196u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 196u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 200u, (r3 + 48), f2.d);
    }
    // end of inlined leaf 0x8018C2F8
    r4 = (r31 - r29);
    r5 = r31;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    r3 = (r1 + 184);
    r0 = (r0 + r4);
    r4 = (r1 + 32);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r6 = (r30 - r0);
    ctx->lr = 0x8018EB64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8018E324u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r3 = (r1 + 184);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r4 = 0;
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x8018EB7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8018B064u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f26.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    r3 = r28;
    f1.d = PpcFmulsInline(f1.d, f25.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x8018C304 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x8018C304
    goto loc_8018EDE0;
}

loc_8018EB98:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8018EB9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018EDB0;
    }
}

loc_8018EBA0:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 168u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 16), f31.d);
    r31 = MemoryInline::FlatRead32((r1 + 68));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 20), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 24), f31.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 28), f31.d);
    guest_range_4 = MemoryInline::ResolveRangeHost(r28, 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, r28);
    MemoryInline::WriteResolved8(guest_range_3, 72u, (r1 + 88), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r28 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 73u, (r1 + 89), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r28 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 74u, (r1 + 90), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r28 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 75u, (r1 + 91), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r28 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 76u, (r1 + 92), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r28 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 77u, (r1 + 93), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r28 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 78u, (r1 + 94), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r28 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 79u, (r1 + 95), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 8u, (r28 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 80u, (r1 + 96), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 9u, (r28 + 9));
    MemoryInline::WriteResolved8(guest_range_3, 81u, (r1 + 97), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 10u, (r28 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 82u, (r1 + 98), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 11u, (r28 + 11));
    MemoryInline::WriteResolved8(guest_range_3, 83u, (r1 + 99), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 12u, (r28 + 12));
    MemoryInline::WriteResolved8(guest_range_3, 84u, (r1 + 100), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 13u, (r28 + 13));
    MemoryInline::WriteResolved8(guest_range_3, 85u, (r1 + 101), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 14u, (r28 + 14));
    MemoryInline::WriteResolved8(guest_range_3, 86u, (r1 + 102), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 15u, (r28 + 15));
    MemoryInline::WriteResolved8(guest_range_3, 87u, (r1 + 103), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 16u, (r28 + 16));
    MemoryInline::WriteResolved8(guest_range_3, 88u, (r1 + 104), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 17u, (r28 + 17));
    MemoryInline::WriteResolved8(guest_range_3, 89u, (r1 + 105), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r28 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 90u, (r1 + 106), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 19u, (r28 + 19));
    MemoryInline::WriteResolved8(guest_range_3, 91u, (r1 + 107), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 20u, (r28 + 20));
    MemoryInline::WriteResolved8(guest_range_3, 92u, (r1 + 108), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 21u, (r28 + 21));
    MemoryInline::WriteResolved8(guest_range_3, 93u, (r1 + 109), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 22u, (r28 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 94u, (r1 + 110), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 23u, (r28 + 23));
    MemoryInline::WriteResolved8(guest_range_3, 95u, (r1 + 111), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 24u, (r28 + 24));
    MemoryInline::WriteResolved8(guest_range_3, 96u, (r1 + 112), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r28 + 25));
    MemoryInline::WriteResolved8(guest_range_3, 97u, (r1 + 113), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 26u, (r28 + 26));
    MemoryInline::WriteResolved8(guest_range_3, 98u, (r1 + 114), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 27u, (r28 + 27));
    MemoryInline::WriteResolved8(guest_range_3, 99u, (r1 + 115), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 28u, (r28 + 28));
    MemoryInline::WriteResolved8(guest_range_3, 100u, (r1 + 116), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 29u, (r28 + 29));
    MemoryInline::WriteResolved8(guest_range_3, 101u, (r1 + 117), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 30u, (r28 + 30));
    MemoryInline::WriteResolved8(guest_range_3, 102u, (r1 + 118), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 31u, (r28 + 31));
    MemoryInline::WriteResolved8(guest_range_3, 103u, (r1 + 119), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r28 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 104u, (r1 + 120), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r28 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r28 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 108u, (r1 + 124), r3);
        MemoryInline::WriteResolved32(guest_range_3, 112u, (r1 + 128), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 44u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r28 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r28 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 116u, (r1 + 132), r3);
        MemoryInline::WriteResolved32(guest_range_3, 120u, (r1 + 136), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r28 + 52));
    MemoryInline::WriteResolved32(guest_range_3, 124u, (r1 + 140), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r28 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r28 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 128u, (r1 + 144), r3);
        MemoryInline::WriteResolved32(guest_range_3, 132u, (r1 + 148), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_4, 64u, (r28 + 64));
    MemoryInline::WriteResolved8(guest_range_3, 136u, (r1 + 152), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 65u, (r28 + 65));
    MemoryInline::WriteResolved8(guest_range_3, 137u, (r1 + 153), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 66u, (r28 + 66));
    MemoryInline::WriteResolved8(guest_range_3, 138u, (r1 + 154), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 67u, (r28 + 67));
    f1.d = f31.d;
    f2.d = f31.d;
    r3 = (r1 + 88);
    MemoryInline::WriteResolved8(guest_range_3, 139u, (r1 + 155), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 68u, (r28 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 140u, (r1 + 156), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r28 + 72));
    MemoryInline::WriteResolved32(guest_range_3, 144u, (r1 + 160), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 76u, (r28 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 148u, (r1 + 164), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 80u, (r28 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 152u, (r1 + 168), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 84u, (r28 + 84));
    MemoryInline::WriteResolved32(guest_range_3, 156u, (r1 + 172), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r28 + 88));
    MemoryInline::WriteResolved32(guest_range_3, 160u, (r1 + 176), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 92u, (r28 + 92));
    MemoryInline::WriteResolved32(guest_range_3, 164u, (r1 + 180), r0);
    // inline leaf 0x8018C2F8 (3 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 116u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 120u, (r3 + 48), f2.d);
    }
    // end of inlined leaf 0x8018C2F8
    r4 = (r31 - r29);
    r5 = r31;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    r3 = (r1 + 88);
    r0 = (r0 + r4);
    r4 = (r1 + 16);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r6 = (r30 - r0);
    ctx->lr = 0x8018ED80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8018E324u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = (r1 + 88);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r4 = 0;
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x8018ED98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8018B064u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f26.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    r3 = r28;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x8018C304 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x8018C304
    goto loc_8018EDE0;
}

loc_8018EDB0:
{
    r3 = r28;
    // inline leaf 0x8018C334 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x8018C334
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_8018EDC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8018EDCC;
    }
}

loc_8018EDC8:
{
    goto loc_8018EDD0;
}

loc_8018EDCC:
{
    f0.d = f29.d;
}

loc_8018EDD0:
{
    f29.d = f0.d;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    r3 = r28;
    // inline leaf 0x8018C304 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x8018C304
}

loc_8018EDE0:
{
    r31 = 0;
    goto loc_8018EE10;
}

loc_8018EDE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8018EDEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018EDF8;
    }
}

loc_8018EDF0:
{
    r31 = 0;
    goto loc_8018EE10;
}

loc_8018EDF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8018EDFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018EE08;
    }
}

loc_8018EE00:
{
    r31 = 1;
    goto loc_8018EE10;
}

loc_8018EE08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_8018EE0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018EED8;
    }
}

loc_8018EE10:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    goto loc_8018EEA8;
}

loc_8018EE1C:
{
    r3 = r28;
    // inline leaf 0x8018C33C (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x8018C33C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8018EE28:
{
    f24.d = f1.d;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018EE3C;
    }
}

loc_8018EE30:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 76));
    r3 = r28;
    // inline leaf 0x8018C314 (4 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x8018C314
}

loc_8018EE3C:
{
    r3 = r28;
    r31 = 1;
    // inline leaf 0x8018B0AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x8018B0AC
    r25 = r3;
    r3 = r28;
    // inline leaf 0x8018BFA8 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    // end of inlined leaf 0x8018BFA8
    r12 = MemoryInline::FlatRead32(r25);
    f26.d = f1.d;
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8018EE6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r0 = (0 - r3);
    MemoryInline::FlatWriteRam32((r1 + 280), r27);
    r0 = (r0 ^ -2147483648);
    r3 = r28;
    MemoryInline::FlatWriteRam32((r1 + 284), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 280));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f1.d = PpcFmulsInline(f0.d, f26.d);
    // inline leaf 0x8018C324 (4 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    // end of inlined leaf 0x8018C324
    r3 = r28;
    r4 = (r26 & 65535);
    ctx->lr = 0x8018EE9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8018C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f1.d = f24.d;
    r3 = r28;
    // inline leaf 0x8018C30C (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    // end of inlined leaf 0x8018C30C
}

loc_8018EEA8:
{
    r3 = (r1 + 48);
    r12 = (r1 + 52);
    ctx->lr = 0x8018EEB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    // nop
    r26 = r3;
}

loc_8018EEBC:
{
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r3 = (r5 - r29);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_8018EED4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r30))) {
        goto loc_8018E938;
    }
}

loc_8018EED8:
{
    r0 = MemoryInline::FlatRead32((r28 + 88));
    r0 = (r0 & 768);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(256));
}

loc_8018EEE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018EEF0;
    }
}

loc_8018EEE8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(512));
}

loc_8018EEEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018EF00;
    }
}

loc_8018EEF0:
{
    f1.d = f28.d;
    r3 = r28;
    // inline leaf 0x8018C30C (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    // end of inlined leaf 0x8018C30C
    goto loc_8018EF0C;
}

loc_8018EF00:
{
    f1.d = f30.d;
    r3 = r28;
    // inline leaf 0x8018C324 (4 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    // end of inlined leaf 0x8018C324
}

loc_8018EF0C:
{
    f1.d = f29.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 292), 0, 164u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 140u, (r1 + 432));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 124u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 108u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 92u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 76u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 60u, (r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 44u, (r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 28u, (r1 + 320));
    r11 = (r1 + 320);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_5, 160u, (r1 + 452));
    ctx->lr = r0;
    r1 = (r1 + 448);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8018E818 func_8018E818 preserves=false fpr_mask=0xFF000000
