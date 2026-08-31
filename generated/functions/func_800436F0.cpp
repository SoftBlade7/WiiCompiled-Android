#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800436F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r18_rot_1 = 0;
    uint32_t r18_rot_2 = 0;
    uint32_t r18_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r23_psq_tmp_0 = 0;
    uint32_t r23_psq_tmp_1 = 0;
    uint32_t r23_psq_tmp_2 = 0;
    uint32_t r23_psq_tmp_3 = 0;
    uint32_t r23_psq_tmp_4 = 0;
    uint32_t r23_psq_tmp_5 = 0;
    uint32_t r23_psq_tmp_6 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r29_psq_tmp_7 = 0;
    uint32_t r29_psq_tmp_8 = 0;
    uint32_t r29_psq_tmp_9 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800436F0;

loc_800436F0:
{
    MemoryInline::FlatWriteRam32((r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 340), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 320), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 304), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 288), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 256);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r21 = r4;
    r22 = r5;
    r20 = r3;
    r4 = r22;
    r6 = r21;
    r5 = (r7 + 156);
    ctx->lr = 0x8004374Cu;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80043774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80043784;
    }
}

loc_80043778:
{
    r3 = 13;
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
}

loc_80043784:
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
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x80173214u>(ctx);
    r5 = MemoryInline::FlatRead32((r22 + 36));
    r3 = r22;
    r4 = (r1 + 136);
    r27 = (r5 + 156);
    ctx->lr = 0x800437D0u;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
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
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 92), r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30080));
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 88), r3);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 100), r0);
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 96), r3);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 108), r0);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 104), r3);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 116), r0);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 112), r3);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 124), r0);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 120), r3);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 132), r0);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 128), r3);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 136u, (r21 + 136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8004383C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80043950;
    }
}

loc_80043840:
{
    r3 = (r1 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801730CCu>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    r0 = fctiwzword0;
}

loc_8004385C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80043874;
    }
}

loc_80043860:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8004386C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80043940;
    }
}

loc_80043870:
{
    goto loc_80043950;
}

loc_80043874:
{
    r3 = r21;
    r4 = (r21 + 140);
    r5 = (r1 + 24);
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
    r3 = (r1 + 24);
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

loc_80043894:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004392C;
    }
}

loc_80043898:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800438A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800438EC;
    }
}

loc_800438AC:
{
    f3.d = MemoryInline::FlatReadFloat32((r21 + 136));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f5.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_80043950;
}

loc_800438EC:
{
    f3.d = MemoryInline::FlatReadFloat32((r21 + 136));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f5.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_80043950;
}

loc_8004392C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r21 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_80043950;
}

loc_80043940:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r21 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
}

loc_80043950:
{
    r3 = (r1 + 88);
    r4 = (r1 + 136);
    r5 = r3;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    r3 = (r1 + 88);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017310Cu>(ctx);
    r12 = MemoryInline::FlatRead32(r20);
    r3 = r20;
    r0 = MemoryInline::FlatRead16(r27);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r4 = (r0 & 2048);
    ctr = r12;
    ctx->lr = 0x80043988u;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
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
    r18 = r3;
    r0 = MemoryInline::FlatRead16(r27);
    r3 = r20;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = (r0 & 2048);
    ctr = r12;
    ctx->lr = 0x800439A8u;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r12 = r18;
    r26 = r3;
    r3 = r22;
    r25 = 0;
    r24 = 1;
    ctr = r12;
    ctx->lr = 0x800439C4u;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    f30.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    r23 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30076));
    r30 = (r1 + 12);
    f28.d = MemoryInline::FlatReadFloat32((r2 + -30068));
    r29 = (r1 + 36);
    f27.d = MemoryInline::FlatReadFloat32((r2 + -30072));
    r28 = (r1 + 48);
    r31 = 1127219200;
    r19 = -872349696;
    goto loc_80043D20;
}

loc_800439F0:
{
    r4 = MemoryInline::FlatRead8((r23 + 228));
    f1.d = MemoryInline::FlatReadFloat32((r23 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 56));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_80043A00:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80043A4C;
    }
}

loc_80043A08:
{
    r3 = MemoryInline::FlatRead32((r23 + 200));
    r5 = MemoryInline::FlatRead8((r3 + 137));
}

loc_80043A14:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_80043A4C;
    }
}

loc_80043A18:
{
    r0 = MemoryInline::FlatRead8((r3 + 138));
    MemoryInline::FlatWriteRam32((r1 + 184), r31);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (100 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r0 * r4);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r5));
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_80043A4C:
{
    r3 = MemoryInline::FlatRead32((r23 + 200));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f27.d);
}

loc_80043A60:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80043D08;
    }
}

loc_80043A64:
{
    r6 = MemoryInline::FlatRead32((r23 + 200));
    r3 = MemoryInline::FlatRead32((r6 + 36));
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r0 = (r0 & 24576);
}

loc_80043A78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16384))) {
        goto loc_80043A90;
    }
}

loc_80043A7C:
{
}

loc_80043A80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8192))) {
        goto loc_80043AA0;
    }
}

loc_80043A84:
{
}

loc_80043A88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24576))) {
        goto loc_80043AB0;
    }
}

loc_80043A8C:
{
    goto loc_80043AC0;
}

loc_80043A90:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80043ACC;
}

loc_80043AA0:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 60));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80043ACC;
}

loc_80043AB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80043ACC;
}

loc_80043AC0:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 60));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_80043ACC:
{
    r4 = MemoryInline::FlatRead8((r23 + 228));
}

loc_80043AD4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_80043B18;
    }
}

loc_80043AD8:
{
    r5 = MemoryInline::FlatRead8((r6 + 137));
}

loc_80043AE0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_80043B18;
    }
}

loc_80043AE4:
{
    r0 = MemoryInline::FlatRead8((r6 + 138));
    MemoryInline::FlatWriteRam32((r1 + 184), r31);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (100 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r0 * r4);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r5));
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_80043B18:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 92));
    f29.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f29.d, f27.d);
}

loc_80043B24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80043D08;
    }
}

loc_80043B28:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r23_psq_tmp_2 = (r23 + 172);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r23_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r23_psq_tmp_3 = (r23 + 184);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r23_psq_tmp_3));
    r4 = MemoryInline::FlatRead32((r23 + 172));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r23_psq_tmp_4 = (r23 + 180);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r23_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r23_psq_tmp_5 = (r23 + 192);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r23_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    r3 = MemoryInline::FlatRead32((r23 + 176));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_2 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_2, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    r0 = MemoryInline::FlatRead32((r23 + 180));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_2 = (r29 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r29_psq_tmp_2));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r29));
    MemoryInline::FlatWriteRam32((r1 + 48), r4);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f1.d, f1.d, f0.d));
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f27.d);
}

loc_80043B90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80043B9C;
    }
}

loc_80043B94:
{
    r0 = 0;
    f1.d = PPC_PsToScalarInline(f1.d);
    goto loc_80043BBC;
}

loc_80043B9C:
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
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    r0 = 1;
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_3 = (r29 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r29_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_4 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_4, f0.d);
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_80043BBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80043BC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80043D08;
    }
}

loc_80043BC4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f29.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_6 = (r29 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r29_psq_tmp_6));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f29.d)));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32504));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80043BEC:
{
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_7 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_7, f2.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r28_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f4.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_8 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_8, f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80043C10;
    }
}

loc_80043C08:
{
    r3 = (r1 + 8);
    goto loc_80043C14;
}

loc_80043C10:
{
    r3 = (r13 + -32504);
}

loc_80043C14:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    r4 = fctiwzword1;
    r3 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80043C2C:
{
    if (((cr & 0x20000000u) != 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80043D08;
    }
}

loc_80043C30:
{
    r0 = (r25 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80043C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80043C68;
    }
}

loc_80043C3C:
{
    r25 = r4;
    r4 = 5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016F314u>(ctx);
    r3 = r20;
    r4 = r23;
    r5 = r27;
    r6 = r21;
    r7 = r24;
    r8 = 1;
    ctx->lr = 0x80043C64u;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    ctx->fpr[4].d = PPC_PsToScalarInline(ctx->fpr[4].d);
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80043C84;
}

loc_80043C68:
{
    r3 = r20;
    r4 = r23;
    r5 = r27;
    r6 = r21;
    r7 = r24;
    r8 = 0;
    ctx->lr = 0x80043C84u;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    ctx->fpr[4].d = PPC_PsToScalarInline(ctx->fpr[4].d);
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80043C84:
{
    r6 = MemoryInline::FlatRead8((r20 + 192));
    r24 = 0;
    r3 = 168;
    r4 = 0;
    r0 = (0 - r6);
    r5 = 2;
    r0 = (r0 | r6);
    r18_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r18 = (r18_rot_2 & 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
}

loc_80043CB0:
{
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80043CD8;
    }
}

loc_80043CC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30080));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30080));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
}

loc_80043CD8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_80043CE0:
{
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_80043D08;
    }
}

loc_80043CF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30080));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30064));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
}

loc_80043D08:
{
    r12 = r26;
    r3 = r22;
    r4 = r23;
    ctr = r12;
    ctx->lr = 0x80043D1Cu;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
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

loc_80043D20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80043D24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800439F0;
    }
}

loc_80043D28:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 256);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 340));
    ctx->lr = r0;
    r1 = (r1 + 336);
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
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
// RECOMP_REGISTRATION base 0x800436F0 func_800436F0 preserves=false fpr_mask=0xF8000000
