#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040B30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r19_psq_tmp_0 = 0;
    uint32_t r19_psq_tmp_1 = 0;
    uint32_t r19_psq_tmp_2 = 0;
    uint32_t r19_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
    uint32_t r1_psq_tmp_12 = 0;
    uint32_t r1_psq_tmp_13 = 0;
    uint32_t r1_psq_tmp_14 = 0;
    uint32_t r1_psq_tmp_15 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r23_psq_tmp_0 = 0;
    uint32_t r23_psq_tmp_1 = 0;
    uint32_t r23_psq_tmp_2 = 0;
    uint32_t r23_psq_tmp_3 = 0;
    uint32_t r23_psq_tmp_4 = 0;
    uint32_t r23_psq_tmp_5 = 0;
    uint32_t r23_psq_tmp_6 = 0;
    uint32_t r23_psq_tmp_7 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r28_psq_tmp_6 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
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
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80040B30;

loc_80040B30:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -1168), 0, 1176u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -1168), r1);
    r1 = (r1 + -1168);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 1172u, (r1 + 1172), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 1152u, (r1 + 1152), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 1160);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 1136u, (r1 + 1136), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 1144);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 1120u, (r1 + 1120), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 1128);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 1104u, (r1 + 1104), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 1112);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 1088u, (r1 + 1088), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 1096);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 1072u, (r1 + 1072), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 1080);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 1056u, (r1 + 1056), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 1064);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 1040u, (r1 + 1040), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 1048);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 1024u, (r1 + 1024), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 1032);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 1008u, (r1 + 1008), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 1016);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 992u, (r1 + 992), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 1000);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 976u, (r1 + 976), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 984);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 960u, (r1 + 960), f19.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_12 = (r1 + 968);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_12, PPC_PsFromScalarInline(f19.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 944u, (r1 + 944), f18.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_13 = (r1 + 952);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_13, PPC_PsFromScalarInline(f18.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 928u, (r1 + 928), f17.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_14 = (r1 + 936);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_14, PPC_PsFromScalarInline(f17.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 912u, (r1 + 912), f16.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_15 = (r1 + 920);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_15, PPC_PsFromScalarInline(f16.d));
    r11 = (r1 + 912);
    // inline leaf 0x80021580 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -4), r31);
    // end of inlined leaf 0x80021580
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r0 = 1127219200;
    r21 = r4;
    r22 = r5;
    MemoryInline::WriteResolved32(guest_range_4, 832u, (r1 + 832), r0);
    r20 = r3;
    r4 = r22;
    r6 = r21;
    MemoryInline::WriteResolved32(guest_range_4, 840u, (r1 + 840), r0);
    r5 = (r7 + 156);
    ctx->lr = 0x80040BF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8003C3C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 1;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016F37Cu>(ctx);
    r3 = 13;
    r4 = (r13 + -32544);
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016DC34u>(ctx);
    r3 = 9;
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
    r0 = MemoryInline::FlatRead8((r20 + 192));
}

loc_80040C28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80040C38;
    }
}

loc_80040C2C:
{
    r3 = 13;
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
}

loc_80040C38:
{
    r3 = 0;
    r4 = 9;
    r5 = 1;
    r6 = 4;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016DC68u>(ctx);
    r3 = 0;
    r4 = 13;
    r5 = 1;
    r6 = 0;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016DC68u>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x80173214u>(ctx);
    r4 = MemoryInline::FlatRead32((r22 + 36));
    guest_range_1 = MemoryInline::ResolveRangeHost(r21, 0, 140u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r21);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r21 + 4));
        }
    }
    r27 = (r4 + 156);
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 592), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 596), r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30168));
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 592), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r21 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r21 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 604), r0);
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 600), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r21 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r21 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 612), r0);
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 608), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r21 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r21 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 620), r0);
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 616), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r21 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r21 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r1 + 628), r0);
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r1 + 624), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r21 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r21 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r1 + 636), r0);
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r1 + 632), r3);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 136u, (r21 + 136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80040CE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80040DF4;
    }
}

loc_80040CE8:
{
    r3 = (r1 + 176);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801730CCu>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 176));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 848), f0.d);
    r0 = fctiwzword0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80040D04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80040DE4;
    }
}

loc_80040D08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80040DF4;
    }
}

loc_80040D0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80040D10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80040D18;
    }
}

loc_80040D14:
{
    goto loc_80040DF4;
}

loc_80040D18:
{
    r3 = r21;
    r5 = (r1 + 56);
    r4 = (r21 + 140);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_1, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_2, f6.d);
    // end of inlined leaf 0x8019A91C
    r3 = (r1 + 56);
    r4 = r3;
    // inline leaf 0x80036F00 (25 guest instruction(s))
}

loc_inl2_0x80036F00:
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
    f6.d = PPC_PsToScalarInline(f6.d);
}

loc_inl2_cont_80036F00:
{
    // end of inlined leaf 0x80036F00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80040D38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80040DD0;
    }
}

loc_80040D3C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30168));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80040D48:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80040D90;
    }
}

loc_80040D50:
{
    f3.d = MemoryInline::FlatReadFloat32((r21 + 136));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f5.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 636));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 604));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 620));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 604), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 620), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 636), f0.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_80040DF4;
}

loc_80040D90:
{
    f3.d = MemoryInline::FlatReadFloat32((r21 + 136));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f5.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 636));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 604));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 620));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 604), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 620), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 636), f0.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_80040DF4;
}

loc_80040DD0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 636));
    f0.d = MemoryInline::FlatReadFloat32((r21 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 636), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_80040DF4;
}

loc_80040DE4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 636));
    f0.d = MemoryInline::FlatReadFloat32((r21 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 636), f0.d);
}

loc_80040DF4:
{
    r5 = r22;
    r3 = (r1 + 640);
    r4 = (r1 + 592);
    ctx->lr = 0x80040E04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8003DFC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r12 = MemoryInline::FlatRead32(r20);
    r3 = r20;
    r4 = r22;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80040E1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
    mkw_gqr0 = ctx->gqr[0];
    r26 = r3;
    r3 = r22;
    r4 = (r1 + 544);
    ctx->lr = 0x80040E2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80035260u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r5 = (r1 + 496);
    r4 = (r1 + 544);
    r3 = (r1 + 592);
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    r3 = (r1 + 496);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017310Cu>(ctx);
    r3 = MemoryInline::FlatRead32((r22 + 32));
    r4 = (r1 + 448);
    ctx->lr = 0x80040E54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80029A60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r1 + 400);
    r3 = (r1 + 544);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    r5 = (r1 + 448);
    r3 = (r1 + 400);
    r4 = r5;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    f7.d = MemoryInline::FlatReadFloat32((r1 + 488));
    r19 = (r1 + 152);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 472));
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f6.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 456));
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f7.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 484));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r19_psq_tmp_0 = (r19 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r19_psq_tmp_0));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f5.d);
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 468));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r19));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 452));
    PpcSetPairedFprInline(f8, PPC_PsMaddInline(f0.d, f0.d, f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30164));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f2.d);
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f8.d, f1.d, f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f4.d);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80040EC0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f7.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80040EE0;
    }
}

loc_80040EDC:
{
    goto loc_80040EFC;
}

loc_80040EE0:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r19));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r19_psq_tmp_1 = (r19 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r19_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r19, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r19_psq_tmp_2 = (r19 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r19_psq_tmp_2, f0.d);
}

loc_80040EFC:
{
    r3 = MemoryInline::FlatRead32((r22 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30160));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 172));
    goto loc_80040F2C;
}

loc_80040F18:
{
    MemoryInline::FlatWriteFloat32((r3 + 204), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 208), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 212), f2.d);
    r0 = MemoryInline::FlatRead16((r22 + 66));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_80040F2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80040F30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80040F40;
    }
}

loc_80040F34:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 204));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80040F3C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80040F18;
    }
}

loc_80040F40:
{
    r4 = MemoryInline::FlatRead8((r27 + 169));
    r3 = r20;
    r0 = MemoryInline::FlatRead8((r27 + 170));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r12 = MemoryInline::FlatRead32(r20);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -30136));
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 836), r5);
    r4 = (r4 ^ -2147483648);
    r0 = MemoryInline::FlatRead16(r27);
    MemoryInline::FlatWriteRam32((r1 + 844), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 832));
    r4 = (r0 & 2048);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 840));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30156));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    ctr = r12;
    ctx->lr = 0x80040F9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
    mkw_gqr0 = ctx->gqr[0];
    r12 = MemoryInline::FlatRead32(r20);
    r19 = r3;
    r0 = MemoryInline::FlatRead16(r27);
    r3 = r20;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = (r0 & 2048);
    ctr = r12;
    ctx->lr = 0x80040FBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
    mkw_gqr0 = ctx->gqr[0];
    r12 = r19;
    r25 = r3;
    r3 = r22;
    r24 = 1;
    ctr = r12;
    ctx->lr = 0x80040FD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
    mkw_gqr0 = ctx->gqr[0];
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -30168), 0, 48u, true, false);
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 32u, (r2 + -30136));
    r23 = r3;
    f20.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -30152));
    r30 = (r1 + 140);
    f21.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -30168));
    r29 = (r1 + 44);
    f22.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r2 + -30148));
    r28 = (r1 + 104);
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r2 + -30128));
    r31 = 0x80240000u;
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r2 + -30144));
    r19 = 0x80240000u;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 4u);
        if (resolved_pair.valid) {
            f25.d = PpcBitCastToFloatInline(resolved_pair.second);
            f26.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f25.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -30160));
            f26.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r2 + -30164));
        }
    }
    f8.d = PPC_PsToScalarInline(f8.d);
    goto loc_80041810;
}

loc_80041010:
{
    r5 = MemoryInline::FlatRead8((r23 + 228));
    f1.d = MemoryInline::FlatReadFloat32((r23 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 56));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(255));
}

loc_80041020:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80041068;
    }
}

loc_80041028:
{
    r3 = MemoryInline::FlatRead32((r23 + 200));
    r4 = MemoryInline::FlatRead8((r3 + 137));
}

loc_80041034:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_80041068;
    }
}

loc_80041038:
{
    r0 = MemoryInline::FlatRead8((r3 + 138));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (100 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r0 * r5);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 836), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 832));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f0.d = PpcFmulsInline(f20.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_80041068:
{
    r3 = MemoryInline::FlatRead32((r23 + 200));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f31.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f31.d, f26.d);
}

loc_80041078:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800417F8;
    }
}

loc_8004107C:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r0 = (r0 & 24576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16384));
}

loc_8004108C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800410AC;
    }
}

loc_80041090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800410A0;
    }
}

loc_80041094:
{
}

loc_80041098:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8192))) {
        goto loc_800410BC;
    }
}

loc_8004109C:
{
    goto loc_800410DC;
}

loc_800410A0:
{
}

loc_800410A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24576))) {
        goto loc_800410CC;
    }
}

loc_800410A8:
{
    goto loc_800410DC;
}

loc_800410AC:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_800410E8;
}

loc_800410BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 60));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_800410E8;
}

loc_800410CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_800410E8;
}

loc_800410DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 60));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_800410E8:
{
    r5 = MemoryInline::FlatRead8((r23 + 228));
}

loc_800410F0:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_80041134;
    }
}

loc_800410F4:
{
    r3 = MemoryInline::FlatRead32((r23 + 200));
    r4 = MemoryInline::FlatRead8((r3 + 137));
}

loc_80041100:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_80041134;
    }
}

loc_80041104:
{
    r0 = MemoryInline::FlatRead8((r3 + 138));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (100 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r0 * r5);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 844), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 840));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f19.d));
    f0.d = PpcFmulsInline(f20.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_80041134:
{
    r3 = MemoryInline::FlatRead32((r23 + 200));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 92));
    f30.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f30.d, f26.d);
}

loc_80041144:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800417F8;
    }
}

loc_80041148:
{
    r0 = MemoryInline::FlatRead8((r27 + 176));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -30160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80041154:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800411D0;
    }
}

loc_80041158:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r23_psq_tmp_2 = (r23 + 172);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r23_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r23_psq_tmp_3 = (r23 + 184);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r23_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r23_psq_tmp_4 = (r23 + 180);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r23_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r23_psq_tmp_5 = (r23 + 192);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r23_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_2 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_2, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_2));
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f2.d);
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r30));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f0.d, f0.d, f1.d));
    PpcSetPairedFprInline(f16, PPC_PsSum0Inline(f0.d, f1.d, f1.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f16.d), f21.d);
}

loc_800411A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800411B8;
    }
}

loc_800411B0:
{
    f0.d = f21.d;
    f1.d = PPC_PsToScalarInline(f1.d);
    goto loc_800411C4;
}

loc_800411B8:
{
    f1.d = f16.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f16.d), f1.d);
}

loc_800411C4:
{
    f0.d = PpcFmulsInline(f22.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    f16.d = PPC_PsToScalarInline(f16.d);
}

loc_800411D0:
{
    r3 = r20;
    r4 = r23;
    r5 = r27;
    r6 = r21;
    r7 = r24;
    r8 = 0;
    ctx->lr = 0x800411ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8003CB60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r23 + 154));
    r24 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r23 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r23 + 68));
}

loc_80041200:
{
    f0.d = MemoryInline::FlatReadFloat32((r23 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    r3 = MemoryInline::FlatRead8((r27 + 175));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80041230;
    }
}

loc_80041218:
{
    MemoryInline::FlatWriteRam32((r1 + 836), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 832));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f23.d));
    f0.d = PpcFmulsInline(f24.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
}

loc_80041230:
{
    r0 = MemoryInline::FlatRead8((r23 + 155));
}

loc_80041238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80041258;
    }
}

loc_8004123C:
{
    MemoryInline::FlatWriteRam32((r1 + 844), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 840));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f23.d));
    f1.d = PpcFmulsInline(f24.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
}

loc_80041258:
{
    r0 = MemoryInline::FlatRead8((r23 + 156));
}

loc_80041260:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80041280;
    }
}

loc_80041264:
{
    MemoryInline::FlatWriteRam32((r1 + 836), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 832));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f23.d));
    f1.d = PpcFmulsInline(f24.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
}

loc_80041280:
{
    r4 = MemoryInline::FlatRead32((r23 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80041288:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 96));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f21.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f25.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f21.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f25.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f21.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f25.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004139C;
    }
}

loc_800412D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800413F4;
    }
}

loc_800412D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800412DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800412EC;
    }
}

loc_800412E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80041344;
    }
}

loc_800412E4:
{
    goto loc_800413F4;
}

loc_800412EC:
{
    SetCRFloatResident(cr, 0, f21.d, f4.d);
}

loc_800412F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80041304;
    }
}

loc_800412F4:
{
    f1.d = (-(f4.d));
    r3 = (r1 + 8);
    r4 = (r1 + 12);
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80041304:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = (-(f1.d));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 352), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f25.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 0u, (r1 + 352), f25.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 4u, (r1 + 356), f21.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f21.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 8u, (r1 + 360), f21.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 12u, (r1 + 364), f21.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f21.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 16u, (r1 + 368), f21.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 20u, (r1 + 372), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 24u, (r1 + 376), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 28u, (r1 + 380), f21.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f21.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 32u, (r1 + 384), f21.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 36u, (r1 + 388), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 40u, (r1 + 392), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 44u, (r1 + 396), f21.d);
    }
    goto loc_800414DC;
}

loc_80041344:
{
    SetCRFloatResident(cr, 0, f21.d, f2.d);
}

loc_80041348:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004135C;
    }
}

loc_8004134C:
{
    f1.d = (-(f2.d));
    r3 = (r1 + 16);
    r4 = (r1 + 20);
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8004135C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = (-(f0.d));
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 352), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 0u, (r1 + 352), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 4u, (r1 + 356), f21.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 8u, (r1 + 360), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 12u, (r1 + 364), f21.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f21.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f25.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 16u, (r1 + 368), f21.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 20u, (r1 + 372), f25.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f21.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 24u, (r1 + 376), f21.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 28u, (r1 + 380), f21.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 32u, (r1 + 384), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 36u, (r1 + 388), f21.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 40u, (r1 + 392), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 44u, (r1 + 396), f21.d);
    }
    goto loc_800414DC;
}

loc_8004139C:
{
    SetCRFloatResident(cr, 0, f21.d, f0.d);
}

loc_800413A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800413B4;
    }
}

loc_800413A4:
{
    f1.d = (-(f0.d));
    r3 = (r1 + 24);
    r4 = (r1 + 28);
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_800413B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = (-(f1.d));
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 352), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_8, 0u, (r1 + 352), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_8, 4u, (r1 + 356), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f21.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_8, 8u, (r1 + 360), f21.d);
        MemoryInline::WriteResolvedFloat32(guest_range_8, 12u, (r1 + 364), f21.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_8, 16u, (r1 + 368), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_8, 20u, (r1 + 372), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f21.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_8, 24u, (r1 + 376), f21.d);
        MemoryInline::WriteResolvedFloat32(guest_range_8, 28u, (r1 + 380), f21.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f21.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_8, 32u, (r1 + 384), f21.d);
        MemoryInline::WriteResolvedFloat32(guest_range_8, 36u, (r1 + 388), f21.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f25.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_8, 40u, (r1 + 392), f25.d);
        MemoryInline::WriteResolvedFloat32(guest_range_8, 44u, (r1 + 396), f21.d);
    }
    goto loc_800414DC;
}

loc_800413F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    SetCRFloatResident(cr, 0, f21.d, f0.d);
}

loc_800413FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80041410;
    }
}

loc_80041400:
{
    f1.d = (-(f0.d));
    r3 = (r1 + 8);
    r4 = (r1 + 12);
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80041410:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    SetCRFloatResident(cr, 0, f21.d, f0.d);
}

loc_80041418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004142C;
    }
}

loc_8004141C:
{
    f1.d = (-(f0.d));
    r3 = (r1 + 16);
    r4 = (r1 + 20);
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8004142C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    SetCRFloatResident(cr, 0, f21.d, f0.d);
}

loc_80041434:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80041448;
    }
}

loc_80041438:
{
    f1.d = (-(f0.d));
    r3 = (r1 + 24);
    r4 = (r1 + 28);
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80041448:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f11.d = (-(f1.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = PpcFmulsInline(f8.d, f1.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = PpcFmulsInline(f9.d, f1.d);
    f3.d = PpcFmulsInline(f9.d, f4.d);
    f5.d = PpcFmulsInline(f2.d, f6.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = PpcFmulsInline(f9.d, f6.d);
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 352), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_9, 12u, (r1 + 364), f21.d);
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f10.d = PpcFmulsInline(f8.d, f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_9, 28u, (r1 + 380), f21.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 24u, (r1 + 376), f3.d);
    f3.d = PpcFmulsInline(f0.d, f6.d);
    f2.d = PpcFmulsInline(f8.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_9, 8u, (r1 + 360), f1.d);
    f1.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = PpcFmulsInline(f8.d, f6.d);
    f9.d = PpcFmulsInline(f7.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_9, 32u, (r1 + 384), f11.d);
    f5.d = PpcFmulsInline(f7.d, f6.d);
    f7.d = PpcFmulsInline(f7.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_9, 36u, (r1 + 388), f9.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 0u, (r1 + 352), f7.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_9, 16u, (r1 + 368), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_9, 20u, (r1 + 372), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_9, 4u, (r1 + 356), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f21.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_9, 40u, (r1 + 392), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_9, 44u, (r1 + 396), f21.d);
    }
}

loc_800414DC:
{
    r0 = MemoryInline::FlatRead8((r27 + 177));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800414E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800415C0;
    }
}

loc_800414E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800415C0;
    }
}

loc_800414EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800414F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800414F8;
    }
}

loc_800414F4:
{
    goto loc_800415C0;
}

loc_800414F8:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f27.d));
    guest_range_10 = MemoryInline::ResolveRangeHost((r1 + 352), 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 16u, (r1 + 368));
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 0u, (r1 + 352));
    f6.d = PpcFmulsInline(f31.d, f29.d);
    f1.d = (-(f0.d));
    f16.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 40u, (r1 + 392));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f25.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 32u, (r1 + 384));
    f5.d = (-(f11.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 8u, (r1 + 360));
    f2.d = (-(f3.d));
    f18.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 20u, (r1 + 372));
    f4.d = PpcFmulsInline(f30.d, f4.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 4u, (r1 + 356));
    f17.d = PpcFmulsInline(f1.d, f6.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 36u, (r1 + 388));
    f10.d = PpcFmulsInline(f5.d, f6.d);
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 24u, (r1 + 376));
    f13.d = PpcFmulsInline(f18.d, f4.d);
    f8.d = PpcFmulsInline(f9.d, f4.d);
    f16.d = PpcFmulsInline(f16.d, f31.d);
    f13.d = static_cast<double>(PpcForceSingleValueInline(f17.d - f13.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f8.d));
    guest_range_11 = MemoryInline::ResolveRangeHost((r1 + 304), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_11, 40u, (r1 + 344), f16.d);
    f5.d = PpcFmulsInline(f30.d, f27.d);
    f13.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f13.d));
    f2.d = PpcFmulsInline(f2.d, f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_11, 28u, (r1 + 332), f13.d);
    f13.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f8.d));
    f10.d = PpcFmulsInline(f1.d, f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_11, 16u, (r1 + 320), f13.d);
    f3.d = PpcFmulsInline(f3.d, f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_11, 12u, (r1 + 316), f0.d);
    f0.d = PpcFmulsInline(f1.d, f4.d);
    f7.d = PpcFmulsInline(f7.d, f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_11, 36u, (r1 + 340), f10.d);
    f10.d = PpcFmulsInline(f12.d, f31.d);
    f12.d = PpcFmulsInline(f18.d, f5.d);
    f5.d = PpcFmulsInline(f9.d, f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_11, 8u, (r1 + 312), f7.d);
    f8.d = PpcFmulsInline(f11.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_11, 20u, (r1 + 324), f12.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_11, 4u, (r1 + 308), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_11, 0u, (r1 + 304), f8.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_11, 24u, (r1 + 328), f10.d);
    MemoryInline::WriteResolvedFloat32(guest_range_11, 32u, (r1 + 336), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_11, 44u, (r1 + 348), f0.d);
    goto loc_80041678;
}

loc_800415C0:
{
    guest_range_12 = MemoryInline::ResolveRangeHost((r1 + 352), 0, 44u, true, false);
    f18.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 32u, (r1 + 384));
    f1.d = PpcFmulsInline(f31.d, f29.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 0u, (r1 + 352));
    f0.d = PpcFmulsInline(f30.d, f28.d);
    f3.d = (-(f18.d));
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 40u, (r1 + 392));
    f2.d = (-(f6.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 8u, (r1 + 360));
    f12.d = PpcFmulsInline(f13.d, f0.d);
    f27.d = PpcFmulsInline(f3.d, f1.d);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 16u, (r1 + 368));
    f5.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = PpcFmulsInline(f4.d, f0.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 24u, (r1 + 376));
    f9.d = (-(f10.d));
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 36u, (r1 + 388));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f12.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 4u, (r1 + 356));
    f11.d = PpcFmulsInline(f11.d, f31.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f28.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_12, 20u, (r1 + 372));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f3.d));
    guest_range_13 = MemoryInline::ResolveRangeHost((r1 + 304), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_13, 40u, (r1 + 344), f11.d);
    f11.d = PpcFmulsInline(f13.d, f30.d);
    f12.d = PpcFmulsInline(f18.d, f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_13, 44u, (r1 + 348), f5.d);
    f5.d = PpcFmulsInline(f7.d, f31.d);
    f7.d = PpcFmulsInline(f8.d, f30.d);
    f10.d = PpcFmulsInline(f10.d, f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_13, 12u, (r1 + 316), f3.d);
    f2.d = PpcFmulsInline(f2.d, f31.d);
    f4.d = PpcFmulsInline(f4.d, f30.d);
    MemoryInline::WriteResolvedFloat32(guest_range_13, 32u, (r1 + 336), f12.d);
    f3.d = PpcFmulsInline(f6.d, f31.d);
    f1.d = PpcFmulsInline(f9.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_13, 20u, (r1 + 324), f7.d);
    f0.d = PpcFmulsInline(f8.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_13, 4u, (r1 + 308), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 0u, (r1 + 304), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_13, 8u, (r1 + 312), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_13, 16u, (r1 + 320), f10.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_13, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_13, 24u, (r1 + 328), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_13, 28u, (r1 + 332), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_13, 36u, (r1 + 340), f11.d);
}

loc_80041678:
{
    r12 = r26;
    r5 = r23;
    r3 = (r1 + 116);
    r4 = (r1 + 640);
    ctr = r12;
    ctx->lr = 0x80041690u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
    mkw_gqr0 = ctx->gqr[0];
    r5 = (r1 + 104);
    r4 = (r1 + 116);
    r3 = (r23 + 204);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_5 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_5, f10.d);
    // end of inlined leaf 0x8019ACCC
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r28_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r28));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f1.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f26.d);
}

loc_800416B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800416C4;
    }
}

loc_800416BC:
{
    r0 = 0;
    goto loc_800416E4;
}

loc_800416C4:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    r0 = 1;
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_3 = (r28 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r28_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r28, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_4 = (r28 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r28_psq_tmp_4, f0.d);
}

loc_800416E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800416E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80041704;
    }
}

loc_800416EC:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
}

loc_80041704:
{
    r5 = (r1 + 128);
    r4 = (r1 + 104);
    r3 = (r1 + 116);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_6 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_6, f10.d);
    // end of inlined leaf 0x8019ACCC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    r5 = (r1 + 208);
    MemoryInline::FlatWriteFloat32((r23 + 204), f0.d);
    r4 = (r1 + 304);
    r3 = (r1 + 256);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteFloat32((r23 + 208), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteFloat32((r23 + 212), f0.d);
    r7 = MemoryInline::FlatRead32((r23 + 172));
    r6 = MemoryInline::FlatRead32((r23 + 176));
    r0 = MemoryInline::FlatRead32((r23 + 180));
    MemoryInline::FlatWriteRam32((r1 + 92), r7);
    f10.d = MemoryInline::FlatReadFloat32((r1 + 112));
    MemoryInline::FlatWriteRam32((r1 + 96), r6);
    f9.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    f8.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f11.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    MemoryInline::FlatWriteRamFloat32((r1 + 256), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 260), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 264), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 268), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 272), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 276), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 280), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 284), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 288), f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 292), f9.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 296), f10.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 300), f11.d);
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    r5 = MemoryInline::FlatRead8((r20 + 192));
    r3 = (r1 + 208);
    r4 = (r31 + 29568);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    ctx->lr = 0x800417D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800406D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r27 + 173));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_800417D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800417F8;
    }
}

loc_800417DC:
{
    r5 = MemoryInline::FlatRead8((r20 + 192));
    r3 = (r1 + 208);
    r4 = (r19 + 29616);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    ctx->lr = 0x800417F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800406D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800417F8:
{
    r12 = r25;
    r3 = r22;
    r4 = r23;
    ctr = r12;
    ctx->lr = 0x8004180Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
    mkw_gqr0 = ctx->gqr[0];
    r23 = r3;
}

loc_80041810:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80041814:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80041010;
    }
}

loc_80041818:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_14 = MemoryInline::ResolveRangeHost((r1 + 912), 0, 264u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 240u, (r1 + 1152));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 224u, (r1 + 1136));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 208u, (r1 + 1120));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 192u, (r1 + 1104));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 176u, (r1 + 1088));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 160u, (r1 + 1072));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 144u, (r1 + 1056));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 128u, (r1 + 1040));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 112u, (r1 + 1024));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 96u, (r1 + 1008));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 80u, (r1 + 992));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 64u, (r1 + 976));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 48u, (r1 + 960));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 32u, (r1 + 944));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 16u, (r1 + 928));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 912);
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_14, 0u, (r1 + 912));
    // inline leaf 0x800215CC (14 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r11 + -4));
    // end of inlined leaf 0x800215CC
    r0 = MemoryInline::ReadResolved32(guest_range_14, 260u, (r1 + 1172));
    ctx->lr = r0;
    r1 = (r1 + 1168);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80040B30 func_80040B30 preserves=false fpr_mask=0xF8070000
