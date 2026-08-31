#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80042D30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
    uint32_t r1_psq_tmp_12 = 0;
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
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
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

    goto loc_80042D30;

loc_80042D30:
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
    r11 = (r1 + 352);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r0 = 1127219200;
    r26 = r4;
    r27 = r5;
    MemoryInline::WriteResolved32(guest_range_3, 280u, (r1 + 280), r0);
    r25 = r3;
    r4 = r27;
    r6 = r26;
    MemoryInline::WriteResolved32(guest_range_3, 288u, (r1 + 288), r0);
    r5 = (r7 + 156);
    ctx->lr = 0x80042DD8u;
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
    r4 = (r13 + -32512);
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
    r0 = MemoryInline::FlatRead8((r25 + 192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80042E10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80042E20;
    }
}

loc_80042E14:
{
    r3 = 13;
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
}

loc_80042E20:
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
    r5 = MemoryInline::FlatRead32((r27 + 36));
    r3 = r27;
    r4 = (r1 + 232);
    r31 = (r5 + 156);
    ctx->lr = 0x80042E6Cu;
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
    guest_range_1 = MemoryInline::ResolveRangeHost(r26, 0, 140u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r26);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r26 + 4));
        }
    }
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 184), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 4u, (r1 + 188), r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30120));
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 184), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r26 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r26 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r1 + 196), r0);
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 192), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r26 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r26 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r1 + 204), r0);
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 200), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r26 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r26 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r1 + 212), r0);
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 208), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r26 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r26 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 220), r0);
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 216), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r26 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r26 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 44u, (r1 + 228), r0);
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r1 + 224), r3);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 136u, (r26 + 136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80042ED8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80042FE8;
    }
}

loc_80042EDC:
{
    r3 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801730CCu>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 296), f0.d);
    r0 = fctiwzword0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80042EF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80042FD8;
    }
}

loc_80042EFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80042FE8;
    }
}

loc_80042F00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80042F04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80042F0C;
    }
}

loc_80042F08:
{
    goto loc_80042FE8;
}

loc_80042F0C:
{
    r3 = r26;
    r5 = (r1 + 44);
    r4 = (r26 + 140);
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
    r3 = (r1 + 44);
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

loc_80042F2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80042FC4;
    }
}

loc_80042F30:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30120));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80042F3C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80042F84;
    }
}

loc_80042F44:
{
    f3.d = MemoryInline::FlatReadFloat32((r26 + 136));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f5.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 228));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 196));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 212));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 212), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 228), f0.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_80042FE8;
}

loc_80042F84:
{
    f3.d = MemoryInline::FlatReadFloat32((r26 + 136));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f5.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 228));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 196));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 212));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 212), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 228), f0.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_80042FE8;
}

loc_80042FC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 228));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 228), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_80042FE8;
}

loc_80042FD8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 228));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 228), f0.d);
}

loc_80042FE8:
{
    r5 = (r1 + 184);
    r4 = (r1 + 232);
    r3 = r5;
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
    r3 = (r1 + 184);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017310Cu>(ctx);
    r4 = MemoryInline::FlatRead8((r31 + 169));
    r3 = r25;
    r0 = MemoryInline::FlatRead8((r31 + 170));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r12 = MemoryInline::FlatRead32(r25);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -30096));
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 284), r5);
    r4 = (r4 ^ -2147483648);
    r0 = MemoryInline::FlatRead16(r31);
    MemoryInline::FlatWriteRam32((r1 + 292), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 280));
    r4 = (r0 & 2048);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 288));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30116));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    ctr = r12;
    ctx->lr = 0x80043060u;
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
    ctx->fpr[13] = f13;
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
    r12 = MemoryInline::FlatRead32(r25);
    r23 = r3;
    r0 = MemoryInline::FlatRead16(r31);
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = (r0 & 2048);
    ctr = r12;
    ctx->lr = 0x80043080u;
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
    ctx->fpr[13] = f13;
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
    r12 = r23;
    r30 = r3;
    r3 = r27;
    r29 = 1;
    ctr = r12;
    ctx->lr = 0x80043098u;
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
    ctx->fpr[13] = f13;
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
    f25.d = MemoryInline::FlatReadFloat64((r2 + -30096));
    r28 = r3;
    f26.d = MemoryInline::FlatReadFloat32((r2 + -30112));
    r23 = 0x80240000u;
    f28.d = MemoryInline::FlatReadFloat64((r2 + -30088));
    r24 = 0x80240000u;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -30104));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30120));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -30100));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -30108));
    goto loc_800435E8;
}

loc_800430C4:
{
    r5 = MemoryInline::FlatRead8((r28 + 228));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 56));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(255));
}

loc_800430D4:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004311C;
    }
}

loc_800430DC:
{
    r3 = MemoryInline::FlatRead32((r28 + 200));
    r4 = MemoryInline::FlatRead8((r3 + 137));
}

loc_800430E8:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_8004311C;
    }
}

loc_800430EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 138));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (100 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r0 * r5);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 284), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 280));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f25.d));
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_8004311C:
{
    r3 = MemoryInline::FlatRead32((r28 + 200));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f24.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f24.d, f27.d);
}

loc_8004312C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800435D0;
    }
}

loc_80043130:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r0 = (r0 & 24576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16384));
}

loc_80043140:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80043160;
    }
}

loc_80043144:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80043154;
    }
}

loc_80043148:
{
}

loc_8004314C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8192))) {
        goto loc_80043170;
    }
}

loc_80043150:
{
    goto loc_80043190;
}

loc_80043154:
{
}

loc_80043158:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24576))) {
        goto loc_80043180;
    }
}

loc_8004315C:
{
    goto loc_80043190;
}

loc_80043160:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_8004319C;
}

loc_80043170:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 60));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_8004319C;
}

loc_80043180:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_8004319C;
}

loc_80043190:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 60));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_8004319C:
{
    r5 = MemoryInline::FlatRead8((r28 + 228));
}

loc_800431A4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_800431E8;
    }
}

loc_800431A8:
{
    r3 = MemoryInline::FlatRead32((r28 + 200));
    r4 = MemoryInline::FlatRead8((r3 + 137));
}

loc_800431B4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_800431E8;
    }
}

loc_800431B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 138));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (100 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r0 * r5);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 288));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f25.d));
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_800431E8:
{
    r3 = MemoryInline::FlatRead32((r28 + 200));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 92));
    f23.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f23.d, f27.d);
}

loc_800431F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800435D0;
    }
}

loc_800431FC:
{
    r3 = r25;
    r4 = r28;
    r5 = r31;
    r6 = r26;
    r7 = r29;
    r8 = 0;
    ctx->lr = 0x80043218u;
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
    ctx->fpr[13] = f13;
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
    r0 = MemoryInline::FlatRead8((r28 + 154));
    r29 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r28 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 68));
}

loc_8004322C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    r3 = MemoryInline::FlatRead8((r31 + 175));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004325C;
    }
}

loc_80043244:
{
    MemoryInline::FlatWriteRam32((r1 + 284), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 280));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
}

loc_8004325C:
{
    r0 = MemoryInline::FlatRead8((r28 + 155));
}

loc_80043264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80043284;
    }
}

loc_80043268:
{
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 288));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f28.d));
    f1.d = PpcFmulsInline(f29.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
}

loc_80043284:
{
    r0 = MemoryInline::FlatRead8((r28 + 156));
}

loc_8004328C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800432AC;
    }
}

loc_80043290:
{
    MemoryInline::FlatWriteRam32((r1 + 284), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 280));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f28.d));
    f1.d = PpcFmulsInline(f29.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
}

loc_800432AC:
{
    r4 = MemoryInline::FlatRead32((r28 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_800432B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 96));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 100));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 104));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004339C;
    }
}

loc_800432E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800433EC;
    }
}

loc_800432EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800432F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80043300;
    }
}

loc_800432F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8004334C;
    }
}

loc_800432F8:
{
    goto loc_800433EC;
}

loc_80043300:
{
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = (-(f1.d));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 136), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f30.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 136), f30.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 140), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 144), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 148), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r1 + 152), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r1 + 156), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 24u, (r1 + 160), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r1 + 164), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r1 + 168), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r1 + 172), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r1 + 176), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 44u, (r1 + 180), f31.d);
    }
    goto loc_800434B0;
}

loc_8004334C:
{
    f1.d = f3.d;
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = (-(f0.d));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 136), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 0u, (r1 + 136), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 4u, (r1 + 140), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 8u, (r1 + 144), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 12u, (r1 + 148), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f30.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 16u, (r1 + 152), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 20u, (r1 + 156), f30.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 24u, (r1 + 160), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 28u, (r1 + 164), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 32u, (r1 + 168), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 36u, (r1 + 172), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 40u, (r1 + 176), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 44u, (r1 + 180), f31.d);
    }
    goto loc_800434B0;
}

loc_8004339C:
{
    f1.d = f0.d;
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = (-(f1.d));
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 136), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 0u, (r1 + 136), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 4u, (r1 + 140), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 8u, (r1 + 144), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 12u, (r1 + 148), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 16u, (r1 + 152), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 20u, (r1 + 156), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 24u, (r1 + 160), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 28u, (r1 + 164), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 32u, (r1 + 168), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 36u, (r1 + 172), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f30.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 40u, (r1 + 176), f30.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 44u, (r1 + 180), f31.d);
    }
    goto loc_800434B0;
}

loc_800433EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f10.d = (-(f0.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = PpcFmulsInline(f7.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f11.d = PpcFmulsInline(f8.d, f0.d);
    f2.d = PpcFmulsInline(f8.d, f4.d);
    f3.d = PpcFmulsInline(f1.d, f5.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f8.d, f5.d);
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 136), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_8, 32u, (r1 + 168), f10.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f3.d = PpcFmulsInline(f11.d, f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_8, 12u, (r1 + 148), f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_8, 24u, (r1 + 160), f2.d);
    f2.d = PpcFmulsInline(f7.d, f4.d);
    f9.d = PpcFmulsInline(f7.d, f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_8, 8u, (r1 + 144), f0.d);
    f8.d = PpcFmulsInline(f6.d, f8.d);
    f10.d = PpcFmulsInline(f6.d, f5.d);
    f6.d = PpcFmulsInline(f6.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_8, 28u, (r1 + 164), f31.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f1.d = PpcFmulsInline(f11.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_8, 0u, (r1 + 136), f6.d);
    f0.d = PpcFmulsInline(f7.d, f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_8, 16u, (r1 + 152), f10.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_8, 20u, (r1 + 156), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_8, 4u, (r1 + 140), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_8, 36u, (r1 + 172), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_8, 40u, (r1 + 176), f9.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_8, 44u, (r1 + 180), f31.d);
}

loc_800434B0:
{
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 136), 0, 44u, true, false);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 16u, (r1 + 152));
    f1.d = PpcFmulsInline(f24.d, f22.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 0u, (r1 + 136));
    f0.d = PpcFmulsInline(f23.d, f21.d);
    f3.d = (-(f11.d));
    f19.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 32u, (r1 + 168));
    f2.d = (-(f6.d));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 20u, (r1 + 156));
    f11.d = PpcFmulsInline(f11.d, f24.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 4u, (r1 + 140));
    f10.d = PpcFmulsInline(f3.d, f1.d);
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 36u, (r1 + 172));
    f8.d = PpcFmulsInline(f9.d, f0.d);
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 40u, (r1 + 176));
    f3.d = PpcFmulsInline(f4.d, f0.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 24u, (r1 + 160));
    f5.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 8u, (r1 + 144));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f8.d));
    guest_range_10 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_10, 16u, (r1 + 104), f11.d);
    f20.d = (-(f19.d));
    r3 = (r1 + 88);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    r4 = (r23 + 29664);
    f10.d = PpcFmulsInline(f12.d, f24.d);
    f5.d = PpcFmulsInline(f13.d, f23.d);
    MemoryInline::WriteResolvedFloat32(guest_range_10, 40u, (r1 + 128), f10.d);
    f10.d = PpcFmulsInline(f19.d, f24.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f21.d + f8.d));
    f7.d = PpcFmulsInline(f7.d, f24.d);
    MemoryInline::WriteResolvedFloat32(guest_range_10, 32u, (r1 + 120), f10.d);
    f9.d = PpcFmulsInline(f9.d, f23.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 28u, (r1 + 116), f8.d);
    f2.d = PpcFmulsInline(f2.d, f24.d);
    f4.d = PpcFmulsInline(f4.d, f23.d);
    MemoryInline::WriteResolvedFloat32(guest_range_10, 12u, (r1 + 100), f3.d);
    f6.d = PpcFmulsInline(f6.d, f24.d);
    f1.d = PpcFmulsInline(f20.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_10, 4u, (r1 + 92), f4.d);
    f0.d = PpcFmulsInline(f13.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_10, 0u, (r1 + 88), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 8u, (r1 + 96), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_10, 20u, (r1 + 108), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_10, 24u, (r1 + 112), f7.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_10, 36u, (r1 + 124), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_10, 44u, (r1 + 132), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 172));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 12u, (r1 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 28u, (r1 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 180));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 44u, (r1 + 132), f0.d);
    r5 = MemoryInline::FlatRead8((r25 + 192));
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    ctx->lr = 0x800435A8u;
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
    InvokeDirectCpu<0x80042BF0u>(ctx);
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
    r0 = MemoryInline::FlatRead8((r31 + 173));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_800435B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800435D0;
    }
}

loc_800435B4:
{
    r5 = MemoryInline::FlatRead8((r25 + 192));
    r3 = (r1 + 88);
    r4 = (r24 + 29712);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    ctx->lr = 0x800435D0u;
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
    InvokeDirectCpu<0x80042BF0u>(ctx);
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

loc_800435D0:
{
    r12 = r30;
    r3 = r27;
    r4 = r28;
    ctr = r12;
    ctx->lr = 0x800435E4u;
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
    ctx->fpr[13] = f13;
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
    r28 = r3;
}

loc_800435E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_800435EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800430C4;
    }
}

loc_800435F0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_11 = MemoryInline::ResolveRangeHost((r1 + 352), 0, 216u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 192u, (r1 + 544));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 176u, (r1 + 528));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 160u, (r1 + 512));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 144u, (r1 + 496));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 128u, (r1 + 480));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 112u, (r1 + 464));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 96u, (r1 + 448));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 80u, (r1 + 432));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 64u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 48u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 32u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 16u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 352);
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 0u, (r1 + 352));
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::ReadResolved32(guest_range_11, 212u, (r1 + 564));
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
    ctx->fpr[13] = f13;
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
// RECOMP_REGISTRATION base 0x80042D30 func_80042D30 preserves=false fpr_mask=0xFFF80000
