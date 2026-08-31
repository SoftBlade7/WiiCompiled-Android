#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B80E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_10 = 0;
    uint32_t r31_psq_tmp_11 = 0;
    uint32_t r31_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_4 = 0;
    uint32_t r31_psq_tmp_5 = 0;
    uint32_t r31_psq_tmp_6 = 0;
    uint32_t r31_psq_tmp_7 = 0;
    uint32_t r31_psq_tmp_8 = 0;
    uint32_t r31_psq_tmp_9 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B80E0;

loc_807B80E0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r1 + 228), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 208u, (r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 192u, (r1 + 192), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 144);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 24);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    r28 = 0x808A0000u;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 12);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    r6 = (r1 + 92);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 12));
    r31 = r3;
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f1.d, f0.d));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 20));
    r28 = (r28 + 25224);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 24));
    r4 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 48), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 84), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 88), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r6, f6.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 32);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 20);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    r3 = r6;
    r0 = MemoryInline::FlatRead32((r1 + 92));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f1.d, f0.d));
    r5 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r0);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r6_psq_tmp_0 = (r6 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r6_psq_tmp_0, f6.d);
    r0 = MemoryInline::FlatRead32((r1 + 100));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r5);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r0);
    }
    ctx->lr = 0x807B81A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80793F04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_0 = (r31 + 24);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_0));
    r3 = (r1 + 80);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31));
    f28.d = f1.d;
    r4 = (r1 + 20);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_1 = (r31 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_2 = (r31 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_2));
    r0 = MemoryInline::FlatRead32((r1 + 80));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    r5 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_4, f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x807B81E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80793F04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    r3 = (r1 + 68);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r4 = (r1 + 8);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f28.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_3 = (r31 + 36);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_4 = (r31 + 12);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_4));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    PpcSetPairedFprInline(f5, PPC_PsSubInline(f6.d, f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r31 + 60), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 64), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f5.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_5 = (r31 + 44);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_6 = (r31 + 20);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_6));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    PpcSetPairedFprInline(f5, PPC_PsSubInline(f6.d, f5.d));
    r5 = MemoryInline::FlatRead32((r1 + 72));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_5, f5.d);
    r0 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x807B8270u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80793F04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = (-(f28.d));
    f28.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f29.d = MemoryInline::FlatReadFloat32((r28 + 4));
    r27 = (r1 + 56);
    f30.d = MemoryInline::FlatReadFloat32(r28);
    r26 = (r1 + 44);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f28.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f7.d = MemoryInline::FlatReadFloat32((r31 + 84));
    r25 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 88));
    r29 = 0x808B0000u;
    f1.d = PpcFmulsInline(f1.d, f8.d);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 92));
    f0.d = PpcFmulsInline(f29.d, f29.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_7 = (r31 + 48);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_7));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f29.d));
    f31.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
    r30 = 0x808B0000u;
    f9.d = PpcFmulsInline(f29.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 72), f5.d);
    f0.d = PpcFmulsInline(f13.d, f13.d);
    f1.d = PpcFmulsInline(f28.d, f29.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f12.d = PpcFmulsInline(f13.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f8.d);
    f6.d = PpcFmulsInline(f1.d, f13.d);
    f3.d = PpcFmulsInline(f7.d, f9.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f11.d = PpcFmulsInline(f6.d, f29.d);
    f0.d = PpcFmulsInline(f6.d, f13.d);
    MemoryInline::FlatWriteFloat32((r31 + 76), f1.d);
    PpcSetPairedFprInline(f10, PPC_PsMuls0Inline(f10.d, PPC_PsFromScalarInline(f12.d)));
    f6.d = PpcFmulsInline(f5.d, f11.d);
    f5.d = PpcFmulsInline(f1.d, f11.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f7.d = PpcFmulsInline(f1.d, f8.d);
    MemoryInline::FlatWriteFloat32((r31 + 112), f29.d);
    f1.d = PpcFmulsInline(f4.d, f9.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f7.d));
    MemoryInline::FlatWriteFloat32((r31 + 80), f4.d);
    f4.d = PpcFmulsInline(f4.d, f11.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r27, f10.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_8 = (r31 + 56);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_8));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 56));
    PpcSetPairedFprInline(f10, PPC_PsMuls0Inline(f10.d, PPC_PsFromScalarInline(f12.d)));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 60));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_0 = (r27 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r27_psq_tmp_0, f10.d);
    f10.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f10.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f9.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f6.d));
    f9.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f9.d = PpcFmulsInline(f9.d, f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f9.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f6.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f6.d = PpcFmulsInline(f6.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 96), f29.d);
}

loc_807B8390:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 112));
    r3 = r27;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_10 = (r31 + 48);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_10));
    r4 = r26;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r31 + 112), f3.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f3.d));
    f2.d = PpcFmulsInline(f28.d, f3.d);
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = PpcFmulsInline(f6.d, f6.d);
    f5.d = PpcFmulsInline(f2.d, f6.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = PpcFmulsInline(f6.d, f1.d);
    f6.d = PpcFmulsInline(f5.d, f6.d);
    f5.d = PpcFmulsInline(f5.d, f3.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r26, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_11 = (r31 + 56);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_11));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_2 = (r26 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_2, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f1.d = MemoryInline::FlatReadFloat32(r26);
    f2.d = PpcFmulsInline(f2.d, f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32(r26, f4.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f2.d = PpcFmulsInline(f2.d, f6.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r26 + 4), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f2.d = PpcFmulsInline(f2.d, f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r26 + 8), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    MemoryInline::FlatWriteFloat32(r26, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 4), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 80));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 8), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    MemoryInline::FlatWriteFloat32(r26, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 4), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 92));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r26 + 8), f0.d);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f29.d);
}

loc_807B8484:
{
    f27.d = f1.d;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B84A4;
    }
}

loc_807B8490:
{
    r3 = (r29 + 22260);
    r5 = (r30 + 22224);
    r4 = 627;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807B84A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    ctx->fpr[2].d = PPC_PsToScalarInline(ctx->fpr[2].d);
    ctx->fpr[3].d = PPC_PsToScalarInline(ctx->fpr[3].d);
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807B84A4:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f27.d), f29.d);
}

loc_807B84A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B84B8;
    }
}

loc_807B84B0:
{
    f1.d = f29.d;
    goto loc_807B84C4;
}

loc_807B84B8:
{
    f1.d = f27.d;
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
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f27.d), f1.d);
}

loc_807B84C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    r25 = (r25 + 1);
    r0 = r27;
    r27 = r26;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(8));
}

loc_807B84DC:
{
    r26 = r0;
    MemoryInline::FlatWriteFloat32((r31 + 96), f0.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807B8390;
    }
}

loc_807B84E8:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B84F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B8504;
    }
}

loc_807B84F8:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    goto loc_807B8508;
}

loc_807B8504:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
}

loc_807B8508:
{
    MemoryInline::FlatWriteFloat32((r31 + 100), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 116), 0, 116u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 92u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 76u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 144));
    r11 = (r1 + 144);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 112u, (r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807B80E0 func_807B80E0 preserves=false fpr_mask=0xF8000000
