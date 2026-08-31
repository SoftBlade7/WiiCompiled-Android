#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D710C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r0_addc_right_4 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_adde_left_3 = 0;
    uint32_t r0_adde_left_4 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_10 = 0;
    uint32_t r31_psq_tmp_11 = 0;
    uint32_t r31_psq_tmp_12 = 0;
    uint32_t r31_psq_tmp_13 = 0;
    uint32_t r31_psq_tmp_14 = 0;
    uint32_t r31_psq_tmp_15 = 0;
    uint32_t r31_psq_tmp_16 = 0;
    uint32_t r31_psq_tmp_17 = 0;
    uint32_t r31_psq_tmp_18 = 0;
    uint32_t r31_psq_tmp_19 = 0;
    uint32_t r31_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_20 = 0;
    uint32_t r31_psq_tmp_21 = 0;
    uint32_t r31_psq_tmp_22 = 0;
    uint32_t r31_psq_tmp_23 = 0;
    uint32_t r31_psq_tmp_24 = 0;
    uint32_t r31_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_4 = 0;
    uint32_t r31_psq_tmp_5 = 0;
    uint32_t r31_psq_tmp_6 = 0;
    uint32_t r31_psq_tmp_7 = 0;
    uint32_t r31_psq_tmp_8 = 0;
    uint32_t r31_psq_tmp_9 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
    uint32_t r3_psq_tmp_15 = 0;
    uint32_t r3_psq_tmp_16 = 0;
    uint32_t r3_psq_tmp_17 = 0;
    uint32_t r3_psq_tmp_18 = 0;
    uint32_t r3_psq_tmp_19 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_20 = 0;
    uint32_t r3_psq_tmp_21 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_12 = 0;
    uint32_t r4_psq_tmp_13 = 0;
    uint32_t r4_psq_tmp_14 = 0;
    uint32_t r4_psq_tmp_15 = 0;
    uint32_t r4_psq_tmp_16 = 0;
    uint32_t r4_psq_tmp_17 = 0;
    uint32_t r4_psq_tmp_18 = 0;
    uint32_t r4_psq_tmp_19 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_20 = 0;
    uint32_t r4_psq_tmp_21 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807D710C;

loc_807D710C:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 160);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    r21 = (r5 * 48);
    r30 = 0x808A0000u;
    r25 = r3;
    r26 = r4;
    r0 = (r3 + r21);
    r27 = r5;
    r0_addic_src_0 = r0;
    r0 = (r0_addic_src_0 + 276);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(276)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_807D7144:
{
    r30 = (r30 + 29696);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D7158;
    }
}

loc_807D714C:
{
    r3 = MemoryInline::FlatRead32(r4);
    r4 = r0;
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5, f5.d);
    // end of inlined leaf 0x80199D30
}

loc_807D7158:
{
    r3 = (r25 + r21);
    r29 = (r3 + 468);
    r21 = (r3 + 276);
    r3 = r21;
    r4 = r29;
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_7 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_8 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_8, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_9 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_9, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_10 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_10 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_10, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_11 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_11 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_11, f5.d);
    // end of inlined leaf 0x80199D30
    f0.d = MemoryInline::FlatReadFloat32((r21 + 12));
    r22 = (r27 * 12);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 28));
    r31 = (r25 + r22);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = MemoryInline::FlatRead8((r25 + 573));
    r3 = MemoryInline::FlatRead32((r25 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D719C:
{
    f31.d = MemoryInline::FlatReadFloat32((r3 + 192));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D73A0;
    }
}

loc_807D71A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_807D71A8:
{
    r28 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D71B8;
    }
}

loc_807D71B0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807D3054u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    goto loc_807D71BC;
}

loc_807D71B8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807D30A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_807D71BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D71C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D737C;
    }
}

loc_807D71C4:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r0 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r3 = 0x809C0000u;
    r6 = 0x808A0000u;
    r5 = (r25 + r22);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r7 = 552075264;
    r8 = MemoryInline::FlatRead32((r6 + 26316));
    r6 = (r7 + 4095);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r5 = (r5 + 1012);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    r7 = (r1 + 20);
    r9 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 1004));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    ctx->lr = 0x807D7220u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    ctx->fpr[3].d = PPC_PsToScalarInline(ctx->fpr[3].d);
    ctx->fpr[4].d = PPC_PsToScalarInline(ctx->fpr[4].d);
    ctx->fpr[5].d = PPC_PsToScalarInline(ctx->fpr[5].d);
    InvokeDirectCpu<0x8078F500u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807D7224:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D7344;
    }
}

loc_807D722C:
{
    r3 = (r1 + 44);
    r24_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r24 = (r24_rot_1 & -4);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_1 = (r31 + 1060);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_1));
    r22 = (r25 + r24);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 300));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f1.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f0.d), f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_2 = (r31 + 1060);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_2, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_3 = (r31 + 1068);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_12 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_12));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f1.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f0.d), f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_4 = (r31 + 1068);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_4, f2.d);
    r3 = MemoryInline::FlatRead32((r22 + 1124));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_807D726C:
{
    MemoryInline::FlatWrite32((r22 + 1124), r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_807D7344;
    }
}

loc_807D7274:
{
    r3 = MemoryInline::FlatRead32((r25 + 16));
    // inline leaf 0x807C6F0C (12 guest instruction(s))
}

loc_inl3_0x807C6F0C:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 33554432);
}

loc_inl3_0x807C6F20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x807C6F24:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r4 & 16777216);
    r0_mrot_1 = (r4 & 8192);
    r0_mdest_1 = (r0 & -8193);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_inl3_0x807C6F30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x807C6F34:
{
    r3 = 1;
    goto loc_inl3_cont_807C6F0C;
}

loc_inl3_return:
{
}

loc_inl3_cont_807C6F0C:
{
    // end of inlined leaf 0x807C6F0C
    r4 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 308));
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r23 = r3;
    r21 = MemoryInline::FlatRead32((r4 + 8));
    r3 = r21;
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
    ctx->fpr[3] = f3;
    ctx->xer = xer;
    InvokeDirectCpu<0x805556A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 304));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 176));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRFloatResident(cr, 0, f31.d, f2.d);
}

loc_807D72A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D72C4;
    }
}

loc_807D72AC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 212));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    goto loc_807D72C8;
}

loc_807D72C4:
{
    f3.d = PpcFmulsInline(f3.d, f31.d);
}

loc_807D72C8:
{
}

loc_807D72CC:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_807D72D8;
    }
}

loc_807D72D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 212));
    f3.d = PpcFmulsInline(f3.d, f0.d);
}

loc_807D72D8:
{
    r4 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 312));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    r3 = r21;
    r24 = (r25 + r24);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f3.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_5 = (r31 + 1036);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_5, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_12 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_12));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f3.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_6 = (r31 + 1044);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_6, f0.d);
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
    ctx->fpr[3] = f3;
    ctx->xer = xer;
    InvokeDirectCpu<0x805556A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    xer = ctx->xer;
}

loc_807D7308:
{
    MemoryInline::FlatWriteFloat32((r24 + 1116), f1.d);
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_807D7320;
    }
}

loc_807D7310:
{
    f1.d = MemoryInline::FlatReadFloat32((r24 + 1116));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 212));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 1116), f0.d);
}

loc_807D7320:
{
    f1.d = MemoryInline::FlatReadFloat32((r24 + 1116));
    r3 = r21;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 316));
    r4 = 8;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r24 + 1116), f0.d);
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_1 = r0;
    r0 = (r8 + r0_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_1 + r6);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r0 = (r3 + 6);
    MemoryInline::FlatWrite32((r22 + 1124), r0);
}

loc_807D7344:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_8 = (r31 + 1036);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_8));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_9 = (r31 + 1036);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_9, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_10 = (r31 + 1044);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_10));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_11 = (r31 + 1044);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_11, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_12 = (r31 + 1060);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_13 = (r31 + 1036);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_13));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_14 = (r31 + 1060);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_14, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_15 = (r31 + 1068);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_15));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_16 = (r31 + 1068);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_16, f0.d);
}

loc_807D737C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807D7380:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D73A0;
    }
}

loc_807D7384:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 324));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_18 = (r31 + 1060);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_18));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_19 = (r31 + 1060);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_19, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_20 = (r31 + 1068);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_20));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_21 = (r31 + 1068);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_21, f1.d);
}

loc_807D73A0:
{
    r5 = (r1 + 8);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r5));
    r4 = (r25 + r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_23 = (r31 + 1060);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_23));
    r3 = r29;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 336));
    PpcSetPairedFprInline(f4, PPC_PsAddInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<1u, 0u>(ctx, r5_psq_tmp_0));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 332));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 328));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_24 = (r31 + 1068);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_24));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    PpcSetPairedFprInline(f4, PPC_PsAddInline(f5.d, f4.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_1, f4.d);
    MemoryInline::FlatWriteFloat32((r29 + 12), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 28), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r29 + 44), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 1064));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 1116));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f31.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = PpcFmulsInline(f4.d, f0.d);
    ctx->lr = 0x807D7418u;
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807DF004u>(ctx);
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
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807D741C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D7430;
    }
}

loc_807D7420:
{
    r4 = MemoryInline::FlatRead32(r26);
    r3 = r29;
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_16 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_16));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_16 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_16, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_17 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_17));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_17 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_17, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_18 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_18));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_18 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_18, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_19 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_19));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_19 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_19, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_20 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_20));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_20 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_20, f5.d);
    // end of inlined leaf 0x80199D30
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    goto loc_807D7438;
}

loc_807D7430:
{
    r3 = MemoryInline::FlatRead32(r26);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199D04u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_807D7438:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 160);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
        r21 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -44));
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 40u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D710C func_807D710C preserves=false fpr_mask=0x80000000
