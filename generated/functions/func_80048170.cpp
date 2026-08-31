#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80048170(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_psq_tmp_0 = 0;
    uint32_t r10_psq_tmp_1 = 0;
    uint32_t r10_psq_tmp_10 = 0;
    uint32_t r10_psq_tmp_2 = 0;
    uint32_t r10_psq_tmp_3 = 0;
    uint32_t r10_psq_tmp_4 = 0;
    uint32_t r10_psq_tmp_5 = 0;
    uint32_t r10_psq_tmp_6 = 0;
    uint32_t r10_psq_tmp_7 = 0;
    uint32_t r10_psq_tmp_8 = 0;
    uint32_t r10_psq_tmp_9 = 0;
    uint32_t r11_psq_tmp_0 = 0;
    uint32_t r11_psq_tmp_1 = 0;
    uint32_t r12_psq_tmp_0 = 0;
    uint32_t r12_psq_tmp_1 = 0;
    uint32_t r14_psq_tmp_0 = 0;
    uint32_t r14_psq_tmp_1 = 0;
    uint32_t r14_psq_tmp_2 = 0;
    uint32_t r14_psq_tmp_3 = 0;
    uint32_t r14_psq_tmp_4 = 0;
    uint32_t r14_psq_tmp_5 = 0;
    uint32_t r14_psq_tmp_6 = 0;
    uint32_t r15_psq_tmp_0 = 0;
    uint32_t r15_psq_tmp_1 = 0;
    uint32_t r16_psq_tmp_0 = 0;
    uint32_t r16_psq_tmp_1 = 0;
    uint32_t r16_psq_tmp_2 = 0;
    uint32_t r16_psq_tmp_3 = 0;
    uint32_t r16_psq_tmp_4 = 0;
    uint32_t r16_psq_tmp_5 = 0;
    uint32_t r17_psq_tmp_0 = 0;
    uint32_t r17_psq_tmp_1 = 0;
    uint32_t r17_psq_tmp_2 = 0;
    uint32_t r17_psq_tmp_3 = 0;
    uint32_t r17_psq_tmp_4 = 0;
    uint32_t r17_psq_tmp_5 = 0;
    uint32_t r18_psq_tmp_0 = 0;
    uint32_t r18_psq_tmp_1 = 0;
    uint32_t r18_psq_tmp_2 = 0;
    uint32_t r18_psq_tmp_3 = 0;
    uint32_t r18_psq_tmp_4 = 0;
    uint32_t r18_psq_tmp_5 = 0;
    uint32_t r19_psq_tmp_0 = 0;
    uint32_t r19_psq_tmp_1 = 0;
    uint32_t r19_psq_tmp_2 = 0;
    uint32_t r19_psq_tmp_3 = 0;
    uint32_t r19_psq_tmp_4 = 0;
    uint32_t r19_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r20_psq_tmp_0 = 0;
    uint32_t r20_psq_tmp_1 = 0;
    uint32_t r20_psq_tmp_2 = 0;
    uint32_t r20_psq_tmp_3 = 0;
    uint32_t r20_psq_tmp_4 = 0;
    uint32_t r20_psq_tmp_5 = 0;
    uint32_t r21_psq_tmp_0 = 0;
    uint32_t r21_psq_tmp_1 = 0;
    uint32_t r21_psq_tmp_2 = 0;
    uint32_t r21_psq_tmp_3 = 0;
    uint32_t r21_psq_tmp_4 = 0;
    uint32_t r21_psq_tmp_5 = 0;
    uint32_t r21_psq_tmp_6 = 0;
    uint32_t r21_psq_tmp_7 = 0;
    uint32_t r22_psq_tmp_0 = 0;
    uint32_t r22_psq_tmp_1 = 0;
    uint32_t r22_psq_tmp_2 = 0;
    uint32_t r22_psq_tmp_3 = 0;
    uint32_t r22_psq_tmp_4 = 0;
    uint32_t r22_psq_tmp_5 = 0;
    uint32_t r23_psq_tmp_0 = 0;
    uint32_t r23_psq_tmp_1 = 0;
    uint32_t r23_psq_tmp_2 = 0;
    uint32_t r23_psq_tmp_3 = 0;
    uint32_t r23_psq_tmp_4 = 0;
    uint32_t r23_psq_tmp_5 = 0;
    uint32_t r23_psq_tmp_6 = 0;
    uint32_t r23_psq_tmp_7 = 0;
    uint32_t r24_psq_tmp_0 = 0;
    uint32_t r24_psq_tmp_1 = 0;
    uint32_t r24_psq_tmp_2 = 0;
    uint32_t r24_psq_tmp_3 = 0;
    uint32_t r24_psq_tmp_4 = 0;
    uint32_t r24_psq_tmp_5 = 0;
    uint32_t r25_psq_tmp_0 = 0;
    uint32_t r25_psq_tmp_1 = 0;
    uint32_t r25_psq_tmp_2 = 0;
    uint32_t r25_psq_tmp_3 = 0;
    uint32_t r25_psq_tmp_4 = 0;
    uint32_t r25_psq_tmp_5 = 0;
    uint32_t r25_psq_tmp_6 = 0;
    uint32_t r25_psq_tmp_7 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_5 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_5 = 0;
    uint32_t r27_psq_tmp_6 = 0;
    uint32_t r27_psq_tmp_7 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r29_psq_tmp_7 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint32_t r30_psq_tmp_6 = 0;
    uint32_t r30_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
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
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_10 = 0;
    uint32_t r5_psq_tmp_11 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_9 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_10 = 0;
    uint32_t r6_psq_tmp_11 = 0;
    uint32_t r6_psq_tmp_12 = 0;
    uint32_t r6_psq_tmp_13 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_4 = 0;
    uint32_t r6_psq_tmp_5 = 0;
    uint32_t r6_psq_tmp_6 = 0;
    uint32_t r6_psq_tmp_7 = 0;
    uint32_t r6_psq_tmp_8 = 0;
    uint32_t r6_psq_tmp_9 = 0;
    uint32_t r7_psq_tmp_0 = 0;
    uint32_t r7_psq_tmp_1 = 0;
    uint32_t r7_psq_tmp_2 = 0;
    uint32_t r7_psq_tmp_3 = 0;
    uint32_t r7_psq_tmp_4 = 0;
    uint32_t r8_psq_tmp_0 = 0;
    uint32_t r8_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_2 = 0;
    uint32_t r8_psq_tmp_3 = 0;
    uint32_t r8_psq_tmp_4 = 0;
    uint32_t r8_psq_tmp_5 = 0;
    uint32_t r8_psq_tmp_6 = 0;
    uint32_t r8_psq_tmp_7 = 0;
    uint32_t r9_psq_tmp_0 = 0;
    uint32_t r9_psq_tmp_1 = 0;
    uint32_t r9_psq_tmp_2 = 0;
    uint32_t r9_psq_tmp_3 = 0;
    uint32_t r9_psq_tmp_4 = 0;
    uint32_t r9_psq_tmp_5 = 0;
    uint32_t r9_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
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

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80048170;

loc_80048170:
{
    MemoryInline::FlatWriteRam32((r1 + -976), r1);
    r1 = (r1 + -976);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 980), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 960), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 968);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 944), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 952);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 928), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 936);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 912), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 920);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 896), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 904);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 880), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 888);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 864), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 872);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 848), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 856);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    r11 = (r1 + 848);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29956));
    r11 = 1127219200;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29928));
    r3 = (r4 ^ -2147483648);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29924));
    r0 = (r5 ^ -2147483648);
    f11.d = PpcFmulsInline(f30.d, f2.d);
    MemoryInline::FlatWriteRam32((r1 + 732), r3);
    f0.d = PpcFmulsInline(f31.d, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8));
    MemoryInline::FlatWriteRam32((r1 + 728), r11);
    r15 = (r1 + 236);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 736), r11);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f29.d = MemoryInline::FlatReadFloat64((r2 + -29936));
    MemoryInline::FlatWriteRam32((r1 + 740), r0);
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f11.d)));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 736));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 728));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    PpcSetPairedFprInline(f24, PPC_PsMuls0Inline(f6.d, PPC_PsFromScalarInline(f10.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f29.d));
    r11 = (r1 + 260);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r15, f24.d);
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f9.d)));
    PpcSetPairedFprInline(f28, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r15));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_0 = (r6 + 8);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_0));
    r14 = (r1 + 248);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_0 = (r7 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_0));
    r12 = (r1 + 224);
    PpcSetPairedFprInline(f12, PPC_PsAddInline(f0.d, f13.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r14, f13.d);
    PpcSetPairedFprInline(f24, PPC_PsMuls0Inline(f6.d, PPC_PsFromScalarInline(f10.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_0 = (r8 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_0));
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f9.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r12, f12.d);
    PpcSetPairedFprInline(f27, PPC_Fres(PPC_PsFromScalarInline(f3.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r12));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r11, f8.d);
    r3 = (r1 + 212);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRamFloat32((r1 + 596), f10.d);
    PpcSetPairedFprInline(f6, f8.d);
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f11.d)));
    PpcSetPairedFprInline(f12, PPC_PsAddInline(f24.d, f13.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f7.d, f6.d));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f28.d, f28.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 600), f9.d);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f28.d, f28.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f6.d);
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f12.d, f8.d));
    PpcSetPairedFprInline(f5, PPC_PsAddInline(f27.d, f27.d));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f27.d, f27.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    PpcSetPairedFprInline(f28, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 604), f11.d);
    PpcSetPairedFprInline(f27, PPC_PsNmsubInline(PPC_PsFromScalarInline(f3.d), f4.d, f5.d));
    MemoryInline::FlatWriteRam32((r1 + 24), r8);
    MemoryInline::FlatWriteRam32((r1 + 28), r10);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r15_psq_tmp_0 = (r15 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r15_psq_tmp_0, f24.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r14_psq_tmp_0 = (r14 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r14_psq_tmp_0, f13.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r12_psq_tmp_0 = (r12 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r12_psq_tmp_0, f12.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r11_psq_tmp_0 = (r11 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r11_psq_tmp_0, f8.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_0, f6.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_1 = (r6 + 12);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_1));
    r0 = 1;
    f7.d = MemoryInline::FlatReadFloat32((r6 + 36));
    r19 = (r1 + 296);
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f10.d)));
    f6.d = MemoryInline::FlatReadFloat32((r7 + 36));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_1 = (r7 + 12);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_1));
    f7.d = PpcFmulsInline(f7.d, f10.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_2 = (r6 + 24);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_2));
    f6.d = PpcFmulsInline(f6.d, f9.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_2 = (r7 + 24);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_2));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f9.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_1 = (r8 + 12);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_1));
    r18 = (r1 + 308);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_2 = (r8 + 24);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_2));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f10.d)));
    f8.d = MemoryInline::FlatReadFloat32((r8 + 36));
    r14 = (r1 + 356);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r18, f4.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_3 = (r7 + 20);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_3));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f9.d)));
    r12 = (r1 + 368);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r14, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_3 = (r6 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_3));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f9.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r12, f1.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    r16 = (r1 + 320);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f11.d)));
    r10 = (r1 + 380);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f11.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r19, f5.d);
    f8.d = PpcFmulsInline(f8.d, f11.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_4 = (r6 + 20);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r16, f3.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f10.d)));
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f10.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_3 = (r8 + 20);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_3));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r10, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_4 = (r8 + 32);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_4));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f11.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_4 = (r7 + 32);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_4));
    r11 = (r1 + 344);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f11.d)));
    f26.d = MemoryInline::FlatReadFloat32((r1 + 216));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f9.d)));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 212));
    f13.d = MemoryInline::FlatReadFloat32((r1 + 220));
    r17 = (r1 + 284);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f11, PPC_PsqLStackInline<0u, 0u>(ctx, r19));
    r15 = (r1 + 272);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f10, PPC_PsqLStackInline<0u, 0u>(ctx, r18));
    r3 = (r1 + 332);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r14));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_800483C4:
{
    PpcSetPairedFprInline(f24, PPC_PsAddInline(f11.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f10, PPC_PsqLStackInline<0u, 0u>(ctx, r16));
    PpcSetPairedFprInline(f25, PPC_PsAddInline(f8.d, f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r10));
    PpcSetPairedFprInline(f11, f24.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r11, f25.d);
    PpcSetPairedFprInline(f25, PPC_PsAddInline(f2.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r11));
    PpcSetPairedFprInline(f10, PPC_PsAddInline(f11.d, f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r17, f24.d);
    PpcSetPairedFprInline(f24, PPC_PsAddInline(f5.d, f4.d));
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f8.d, f7.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r15, f10.d);
    PpcSetPairedFprInline(f10, PPC_PsAddInline(f24.d, f3.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f7.d);
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f25.d, f0.d));
    f12.d = MemoryInline::FlatReadFloat32((r1 + 272));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r15_psq_tmp_1 = (r15 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r15_psq_tmp_1, f10.d);
    f11.d = MemoryInline::FlatReadFloat32((r1 + 276));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f7.d);
    f10.d = MemoryInline::FlatReadFloat32((r1 + 280));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 648), 0, 100u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 648), f9.d);
    f9.d = MemoryInline::FlatReadFloat32((r1 + 332));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 336));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 340));
    MemoryInline::WriteResolved32(guest_range_2, 96u, (r1 + 744), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f26.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f13.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 652), f26.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 656), f13.d);
    }
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r19_psq_tmp_0 = (r19 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r19_psq_tmp_0, f5.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r18_psq_tmp_0 = (r18 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r18_psq_tmp_0, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r17_psq_tmp_0 = (r17 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r17_psq_tmp_0, f24.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r16_psq_tmp_0 = (r16 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r16_psq_tmp_0, f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f12.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 660), f12.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 664), f11.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r1 + 668), f10.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r14_psq_tmp_1 = (r14 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r14_psq_tmp_1, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r12_psq_tmp_1 = (r12 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r12_psq_tmp_1, f1.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r11_psq_tmp_1 = (r11 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r11_psq_tmp_1, f25.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_0 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_0, f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r1 + 672), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r1 + 676), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r1 + 680), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r1 + 684), f6.d);
    }
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80048BD4;
    }
}

loc_80048478:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r15 = (r9 & 1);
    r0 = (r3 + 2);
    MemoryInline::FlatWriteRam32((r1 + 752), r0);
    r0 = (r9 & 4);
    r30 = (r1 + 700);
    MemoryInline::FlatWriteRam32((r1 + 748), r0);
    r29 = (r1 + 712);
    r14 = (r1 + 536);
    r28 = (r1 + 560);
    r27 = (r1 + 688);
    r25 = (r1 + 660);
    r26 = (r1 + 500);
    r23 = (r1 + 672);
    r24 = (r1 + 488);
    r22 = (r1 + 512);
    r21 = (r1 + 648);
    r20 = (r1 + 440);
    r19 = (r1 + 464);
    r18 = (r1 + 404);
    r17 = (r1 + 392);
    r16 = (r1 + 416);
    r31 = -872349696;
    goto loc_80048BC4;
}

loc_800484D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 744));
    r10 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 732), r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r10));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 728));
    r10 = MemoryInline::FlatRead32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    r9 = MemoryInline::FlatRead32((r1 + 648));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r10));
    r10 = MemoryInline::FlatRead32((r1 + 20));
    f5.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f28.d));
    MemoryInline::FlatWriteRam32((r1 + 688), r9);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f11, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r10));
    r10 = MemoryInline::FlatRead32((r1 + 16));
    f0.d = PpcFmulsInline(f5.d, f5.d);
    r8 = MemoryInline::FlatRead32((r1 + 652));
    r3 = MemoryInline::FlatRead32((r1 + 672));
    MemoryInline::FlatWriteRam32((r1 + 692), r8);
    r8 = (r1 + 32);
    f10.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 712), r3);
    r7 = MemoryInline::FlatRead32((r1 + 656));
    r3 = (r1 + 56);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    r6 = MemoryInline::FlatRead32((r1 + 660));
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f10.d)));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    r9 = MemoryInline::FlatRead32((r1 + 24));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r9_psq_tmp_2 = (r9 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r9_psq_tmp_2));
    r9 = (r1 + 80);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f5.d);
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f6.d, PPC_PsFromScalarInline(f9.d)));
    r9 = r10;
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r9_psq_tmp_3 = (r9 + 8);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r9_psq_tmp_3));
    r9 = (r1 + 56);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f12.d);
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f11.d, PPC_PsFromScalarInline(f8.d)));
    r9 = (r1 + 68);
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f6.d, PPC_PsFromScalarInline(f9.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f7.d);
    r9 = (r1 + 56);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r9));
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f10.d)));
    r9 = MemoryInline::FlatRead32((r1 + 20));
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f0.d, f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_2 = (r10 + 12);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r9_psq_tmp_4 = (r9 + 8);
    PpcSetPairedFprInline(f11, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r9_psq_tmp_4));
    r9 = (r1 + 80);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r9));
    r9 = r10;
    PpcSetPairedFprInline(f1, f6.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_3, f12.d);
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f9.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r9_psq_tmp_5 = (r9 + 20);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r9_psq_tmp_5));
    r9 = (r1 + 44);
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f11.d, PPC_PsFromScalarInline(f8.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f6.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    r3 = (r1 + 68);
    r9 = (r1 + 116);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r8, f0.d);
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f12.d, f7.d));
    r5 = MemoryInline::FlatRead32((r1 + 664));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_4, f7.d);
    r3 = (r1 + 44);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f6.d, f5.d));
    r4 = MemoryInline::FlatRead32((r1 + 668));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f9.d)));
    r0 = MemoryInline::FlatRead32((r1 + 676));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_6 = (r8 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r8_psq_tmp_6, f0.d);
    r11 = MemoryInline::FlatRead32((r1 + 680));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_5, f6.d);
    r3 = (r1 + 80);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 684));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_6, f5.d);
    r3 = r9;
    MemoryInline::FlatWriteRam32((r1 + 696), r7);
    MemoryInline::FlatWriteRam32((r1 + 700), r6);
    MemoryInline::FlatWriteRam32((r1 + 704), r5);
    MemoryInline::FlatWriteRam32((r1 + 708), r4);
    MemoryInline::FlatWriteRam32((r1 + 716), r0);
    MemoryInline::FlatWriteRam32((r1 + 720), r11);
    MemoryInline::FlatWriteRamFloat32((r1 + 724), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 584), f9.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 588), f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 592), f10.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 596), f9.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 600), f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 604), f10.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 608), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 612), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 616), f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_7, f4.d);
    r4 = MemoryInline::FlatRead32((r1 + 20));
    r6 = (r1 + 188);
    r3 = MemoryInline::FlatRead32((r1 + 20));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 24);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 12);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8));
    r3 = r10;
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f8.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 24);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9));
    r4 = MemoryInline::FlatRead32((r1 + 24));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f8.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r6, f0.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f9.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 12);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    r4 = (r1 + 128);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f3.d);
    r4 = (r1 + 176);
    r6 = MemoryInline::FlatRead32((r1 + 20));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f10.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    r3 = 152;
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_6 = (r6 + 20);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_6));
    r6 = r10;
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_7 = (r6 + 32);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_7));
    r4 = MemoryInline::FlatRead32((r1 + 24));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f8.d)));
    r6 = MemoryInline::FlatRead32((r1 + 20));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f9.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 24);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    r4 = 0;
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_8 = (r6 + 32);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_8));
    r6 = (r1 + 140);
    PpcSetPairedFprInline(f11, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f10.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r6, f2.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f8.d)));
    r6 = MemoryInline::FlatRead32((r1 + 24));
    f6.d = MemoryInline::FlatReadFloat32((r10 + 36));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_9 = (r6 + 20);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_9));
    r6 = (r1 + 200);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r6, f11.d);
    f6.d = PpcFmulsInline(f6.d, f9.d);
    r6 = MemoryInline::FlatRead32((r1 + 24));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f10.d)));
    r0 = MemoryInline::FlatRead32((r1 + 752));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_10 = (r6 + 32);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_10));
    r6 = MemoryInline::FlatRead32((r1 + 20));
    r5 = (r0 & 65535);
    PpcSetPairedFprInline(f11, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f10.d)));
    r8 = MemoryInline::FlatRead32((r1 + 612));
    f5.d = MemoryInline::FlatReadFloat32((r6 + 36));
    r6 = MemoryInline::FlatRead32((r1 + 24));
    f5.d = PpcFmulsInline(f5.d, f8.d);
    r7 = MemoryInline::FlatRead32((r1 + 616));
    f7.d = MemoryInline::FlatReadFloat32((r6 + 36));
    r6 = r9;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    r6 = (r1 + 128);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    f7.d = PpcFmulsInline(f7.d, f10.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    r6 = (r1 + 104);
    PpcSetPairedFprInline(f13, PPC_PsAddInline(f9.d, f8.d));
    r9 = MemoryInline::FlatRead32((r1 + 608));
    MemoryInline::FlatWriteRam32((r1 + 648), r9);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f5.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r6, f13.d);
    r6 = (r1 + 176);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    r6 = (r1 + 188);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    r6 = (r1 + 104);
    PpcSetPairedFprInline(f13, PPC_PsAddInline(f4.d, f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    r6 = (r1 + 140);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    PpcSetPairedFprInline(f12, PPC_PsAddInline(f7.d, f6.d));
    r6 = (r1 + 164);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r6, f12.d);
    r6 = (r1 + 200);
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f8.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    r6 = (r1 + 164);
    PpcSetPairedFprInline(f12, PPC_PsAddInline(f1.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    r6 = (r1 + 92);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r6, f7.d);
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f13.d, f2.d));
    PpcSetPairedFprInline(f4, PPC_PsAddInline(f6.d, f4.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r6_psq_tmp_11 = (r6 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r6_psq_tmp_11, f7.d);
    r6 = (r1 + 152);
    f9.d = MemoryInline::FlatReadFloat32((r1 + 96));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r6, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsAddInline(f12.d, f11.d));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 92));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r6_psq_tmp_12 = (r6 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r6_psq_tmp_12, f4.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 160));
    MemoryInline::FlatWriteRamFloat32((r1 + 636), f6.d);
    f8.d = MemoryInline::FlatReadFloat32((r1 + 100));
    r10 = MemoryInline::FlatRead32((r1 + 636));
    MemoryInline::FlatWriteRamFloat32((r1 + 624), f9.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 152));
    MemoryInline::FlatWriteRamFloat32((r1 + 620), f10.d);
    r0 = MemoryInline::FlatRead32((r1 + 624));
    MemoryInline::FlatWriteRamFloat32((r1 + 628), f8.d);
    r6 = MemoryInline::FlatRead32((r1 + 620));
    MemoryInline::FlatWriteRamFloat32((r1 + 632), f7.d);
    r11 = MemoryInline::FlatRead32((r1 + 628));
    r12 = MemoryInline::FlatRead32((r1 + 632));
    MemoryInline::FlatWriteRamFloat32((r1 + 640), f4.d);
    MemoryInline::FlatWriteRam32((r1 + 760), r10);
    r10 = MemoryInline::FlatRead32((r1 + 640));
    MemoryInline::FlatWriteRam32((r1 + 756), r10);
    r10 = (r1 + 128);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_3 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_3, f3.d);
    r10 = (r1 + 104);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_4 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_4, f13.d);
    r10 = (r1 + 140);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_5 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_5, f2.d);
    r10 = (r1 + 176);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_6 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_6, f1.d);
    r10 = (r1 + 188);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_7 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_7, f0.d);
    r10 = (r1 + 164);
    MemoryInline::FlatWriteRam32((r1 + 664), r0);
    r0 = MemoryInline::FlatRead32((r1 + 760));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_8 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_8, f12.d);
    r10 = (r1 + 200);
    MemoryInline::FlatWriteRam32((r1 + 676), r0);
    r0 = MemoryInline::FlatRead32((r1 + 756));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_9 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_9, f11.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 644), f5.d);
    MemoryInline::FlatWriteRam32((r1 + 652), r8);
    MemoryInline::FlatWriteRam32((r1 + 656), r7);
    MemoryInline::FlatWriteRam32((r1 + 660), r6);
    MemoryInline::FlatWriteRam32((r1 + 668), r11);
    MemoryInline::FlatWriteRam32((r1 + 672), r12);
    MemoryInline::FlatWriteRam32((r1 + 680), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 684), f5.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 748));
}

loc_800488A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80048A30;
    }
}

loc_800488A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800488B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80048BB8;
    }
}

loc_800488B4:
{
    r3 = r0;
    r0 = (r3 + 1);
    r3 = MemoryInline::FlatRead32((r1 + 28));
    ctr = r0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80048BB8;
    }
}

loc_800488C8:
{
    f5.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r5 = (r1 + 548);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(0));
}

loc_800488D8:
{
    f6.d = MemoryInline::FlatReadFloat32(r3);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f5.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_3 = (r29 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r29_psq_tmp_3));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f6.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r14, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f5.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r14));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_3 = (r30 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r30_psq_tmp_3));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f3.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r28, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f3.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r14_psq_tmp_4 = (r14 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r14_psq_tmp_4, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_3 = (r27 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r27_psq_tmp_3));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_3 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_3, f3.d);
    r5 = (r1 + 572);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f1.d, f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 572));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_3 = (r28 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r28_psq_tmp_3, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 576));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_4 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_4, f2.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 580));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80048978;
    }
}

loc_80048958:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 740), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 724));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 736));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f27.d), f0.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
}

loc_80048978:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r25));
    r5 = (r1 + 524);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r23));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(0));
}

loc_80048988:
{
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_3 = (r25 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r25_psq_tmp_3));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r23_psq_tmp_3 = (r23 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r23_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r26, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f6.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r24, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r24));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r21));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_3 = (r26 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r26_psq_tmp_3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r22, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r22));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r22_psq_tmp_3 = (r22 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r22_psq_tmp_3, f0.d);
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f1.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r21_psq_tmp_3 = (r21 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r21_psq_tmp_3));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r24_psq_tmp_3 = (r24 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r24_psq_tmp_3, f3.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f0.d, f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 524));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_5 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_5, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 528));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 532));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80048A20;
    }
}

loc_80048A00:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 732), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 684));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 728));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f27.d), f0.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
}

loc_80048A20:
{
    r3 = (r3 + 8);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800488C8;
    }
}

loc_80048A2C:
{
    goto loc_80048BB8;
}

loc_80048A30:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80048A3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80048BB8;
    }
}

loc_80048A40:
{
    r3 = r0;
    r0 = (r3 + 1);
    r3 = MemoryInline::FlatRead32((r1 + 28));
    ctr = r0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80048BB8;
    }
}

loc_80048A54:
{
    f5.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r5 = (r1 + 452);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r23));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(0));
}

loc_80048A64:
{
    f6.d = MemoryInline::FlatReadFloat32(r3);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f5.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r25));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r23_psq_tmp_5 = (r23 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r23_psq_tmp_5));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f6.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r20, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f5.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r20));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_5 = (r25 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r25_psq_tmp_5));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f3.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r21));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r19, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r19));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f3.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r20_psq_tmp_3 = (r20 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r20_psq_tmp_3, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r21_psq_tmp_5 = (r21 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r21_psq_tmp_5));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_7 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_7, f3.d);
    r5 = (r1 + 476);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f1.d, f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 476));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r19_psq_tmp_3 = (r19 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r19_psq_tmp_3, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 480));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_8 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_8, f2.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 484));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80048B04;
    }
}

loc_80048AE4:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 740), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 684));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 736));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f27.d), f0.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
}

loc_80048B04:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    r5 = (r1 + 428);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(0));
}

loc_80048B14:
{
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_5 = (r30 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r30_psq_tmp_5));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_5 = (r29 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r29_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r18, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f6.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r17, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r18));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r17));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r18_psq_tmp_3 = (r18 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r18_psq_tmp_3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r16, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r16));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r16_psq_tmp_3 = (r16 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r16_psq_tmp_3, f0.d);
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f1.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_5 = (r27 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r27_psq_tmp_5));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r17_psq_tmp_3 = (r17 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r17_psq_tmp_3, f3.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f0.d, f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 428));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_9 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_9, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 432));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 436));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80048BAC;
    }
}

loc_80048B8C:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 732), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 724));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 728));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f27.d), f0.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
}

loc_80048BAC:
{
    r3 = (r3 + 8);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80048A54;
    }
}

loc_80048BB8:
{
    r3 = MemoryInline::FlatRead32((r1 + 744));
    r3 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 744), r3);
}

loc_80048BC4:
{
    r3 = MemoryInline::FlatRead32((r1 + 744));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80048BD0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800484D8;
    }
}

loc_80048BD4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 848), 0, 136u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 112u, (r1 + 960));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 944));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 928));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 912));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 896));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 880));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 864));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 848);
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 848));
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::ReadResolved32(guest_range_3, 132u, (r1 + 980));
    ctx->lr = r0;
    r1 = (r1 + 976);
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
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
// RECOMP_REGISTRATION base 0x80048170 func_80048170 preserves=false fpr_mask=0xFF000000
