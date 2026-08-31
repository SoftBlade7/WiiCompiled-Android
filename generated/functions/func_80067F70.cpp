#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80067F70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r12_psq_tmp_0 = 0;
    uint32_t r12_psq_tmp_1 = 0;
    uint32_t r12_psq_tmp_10 = 0;
    uint32_t r12_psq_tmp_11 = 0;
    uint32_t r12_psq_tmp_12 = 0;
    uint32_t r12_psq_tmp_13 = 0;
    uint32_t r12_psq_tmp_14 = 0;
    uint32_t r12_psq_tmp_15 = 0;
    uint32_t r12_psq_tmp_16 = 0;
    uint32_t r12_psq_tmp_17 = 0;
    uint32_t r12_psq_tmp_18 = 0;
    uint32_t r12_psq_tmp_19 = 0;
    uint32_t r12_psq_tmp_2 = 0;
    uint32_t r12_psq_tmp_20 = 0;
    uint32_t r12_psq_tmp_21 = 0;
    uint32_t r12_psq_tmp_3 = 0;
    uint32_t r12_psq_tmp_4 = 0;
    uint32_t r12_psq_tmp_5 = 0;
    uint32_t r12_psq_tmp_6 = 0;
    uint32_t r12_psq_tmp_7 = 0;
    uint32_t r12_psq_tmp_8 = 0;
    uint32_t r12_psq_tmp_9 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_10 = 0;
    uint32_t r27_addr_11 = 0;
    uint32_t r27_addr_12 = 0;
    uint32_t r27_addr_13 = 0;
    uint32_t r27_addr_14 = 0;
    uint32_t r27_addr_15 = 0;
    uint32_t r27_addr_16 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r27_addr_8 = 0;
    uint32_t r27_addr_9 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mdest_4 = 0;
    uint32_t r5_mdest_5 = 0;
    uint32_t r5_mdest_6 = 0;
    uint32_t r5_mdest_7 = 0;
    uint32_t r5_mdest_8 = 0;
    uint32_t r5_mdest_9 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_mrot_4 = 0;
    uint32_t r5_mrot_5 = 0;
    uint32_t r5_mrot_6 = 0;
    uint32_t r5_mrot_7 = 0;
    uint32_t r5_mrot_8 = 0;
    uint32_t r5_mrot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mdest_3 = 0;
    uint32_t r7_mdest_4 = 0;
    uint32_t r7_mdest_5 = 0;
    uint32_t r7_mdest_6 = 0;
    uint32_t r7_mdest_7 = 0;
    uint32_t r7_mdest_8 = 0;
    uint32_t r7_mdest_9 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_mrot_3 = 0;
    uint32_t r7_mrot_4 = 0;
    uint32_t r7_mrot_5 = 0;
    uint32_t r7_mrot_6 = 0;
    uint32_t r7_mrot_7 = 0;
    uint32_t r7_mrot_8 = 0;
    uint32_t r7_mrot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80067F70;

loc_80067F70:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80067F88:
{
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80067FB4;
    }
}

loc_80067F9C:
{
    r3 = r28;
    r4 = (r13 + -32464);
    ctx->lr = 0x80067FA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004E250u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80067FAC:
{
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80068234;
    }
}

loc_80067FB4:
{
    // inline leaf 0x800678F0 (3 guest instruction(s))
    r3 = 0x802C0000u;
    r3 = (r3 + -10752);
    // end of inlined leaf 0x800678F0
    r30 = r3;
    r31 = -268435456;
    goto loc_80068228;
}

loc_80067FC4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80067FC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800681E8;
    }
}

loc_80067FCC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29444));
    r3 = MemoryInline::FlatRead8((r29 + 1));
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f0.d)));
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r11 = MemoryInline::FlatRead8((r29 + 3));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r10 = (r3 + r0);
    r29 = (r29 + 4);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r9 = (r9_rot_2 & -4);
    PpcSetPairedFprInline(f1, PPC_PsMerge00Inline(f0.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge00Inline(f0.d, f0.d));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r11), static_cast<uint32_t>(0));
}

loc_80067FFC:
{
    PpcSetPairedFprInline(f3, PPC_PsMerge00Inline(f0.d, f0.d));
    r27_addr_2 = (r27 + r9);
    MemoryInline::FlatWrite32(r27_addr_2, r31);
    PpcSetPairedFprInline(f4, PPC_PsMerge00Inline(f0.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMerge00Inline(f0.d, f0.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800681C4;
    }
}

loc_80068010:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
}

loc_80068014:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80068134;
    }
}

loc_8006801C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 12u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 0u, r29);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r29 + 1));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_3 & -256);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r29 + 3));
    r0 = (r4 + r0);
    r7 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r29 + 5));
    r4 = (r0 * 48);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r29 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r6 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 2));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_3 & -65536);
    r27_addr_4 = (r27 + r9);
    r3 = MemoryInline::FlatRead32(r27_addr_4);
    r12 = (r30 + r4);
    r27_addr_5 = (r27 + r0);
    r0 = MemoryInline::FlatRead32(r27_addr_5);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r7_mrot_3 = (r7_rot_3 & 65280);
    r7_mdest_3 = (r7 & -65281);
    r7 = (r7_mdest_3 | r7_mrot_3);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_3 = (r12 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_3));
    r0 = (r3 & r0);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r5_mrot_3 = (r5_rot_4 & -16777216);
    r5_mdest_3 = (r5 & 16777215);
    r5 = (r5_mdest_3 | r5_mrot_3);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_4 = (r12 + 16);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_4));
    r4 = (r7 | r5);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_5 = (r12 + 24);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_6 = (r12 + 32);
    PpcSetPairedFprInline(f11, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_7 = (r12 + 40);
    PpcSetPairedFprInline(f12, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_7));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r27_addr_6 = (r27 + r9);
    MemoryInline::FlatWrite32(r27_addr_6, r0);
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f7.d, PPC_PsFromScalarInline(f6.d), f0.d));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r29 + 6));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f8.d, PPC_PsFromScalarInline(f6.d), f1.d));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r29 + 9));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f9.d, PPC_PsFromScalarInline(f6.d), f2.d));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r29 + 7));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_4 & -256);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_5 & -65536);
    r0 = (r4 + r0);
    r6 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r29 + 8));
    r4 = (r0 * 48);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r29 + 10));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r29 + 11));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r7_mrot_4 = (r7_rot_4 & 65280);
    r7_mdest_4 = (r7 & -65281);
    r7 = (r7_mdest_4 | r7_mrot_4);
    PpcSetPairedFprInline(f3, PPC_PsMadds0Inline(f10.d, PPC_PsFromScalarInline(f6.d), f3.d));
    r12 = (r30 + r4);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r5_mrot_4 = (r5_rot_6 & -16777216);
    r5_mdest_4 = (r5 & 16777215);
    r5 = (r5_mdest_4 | r5_mrot_4);
    r4 = (r7 | r5);
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f11.d, PPC_PsFromScalarInline(f6.d), f4.d));
    PpcSetPairedFprInline(f5, PPC_PsMadds0Inline(f12.d, PPC_PsFromScalarInline(f6.d), f5.d));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12));
    r29 = (r29 + 12);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_8 = (r12 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_9 = (r12 + 16);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_9));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f7.d, PPC_PsFromScalarInline(f6.d), f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_10 = (r12 + 24);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_10));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f8.d, PPC_PsFromScalarInline(f6.d), f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_11 = (r12 + 32);
    PpcSetPairedFprInline(f11, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_11));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f9.d, PPC_PsFromScalarInline(f6.d), f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_12 = (r12 + 40);
    PpcSetPairedFprInline(f12, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_12));
    r27_addr_7 = (r27 + r9);
    r3 = MemoryInline::FlatRead32(r27_addr_7);
    PpcSetPairedFprInline(f3, PPC_PsMadds0Inline(f10.d, PPC_PsFromScalarInline(f6.d), f3.d));
    r27_addr_8 = (r27 + r0);
    r0 = MemoryInline::FlatRead32(r27_addr_8);
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f11.d, PPC_PsFromScalarInline(f6.d), f4.d));
    PpcSetPairedFprInline(f5, PPC_PsMadds0Inline(f12.d, PPC_PsFromScalarInline(f6.d), f5.d));
    r0 = (r3 & r0);
    r27_addr_9 = (r27 + r9);
    MemoryInline::FlatWrite32(r27_addr_9, r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8006801C;
    }
}

loc_8006812C:
{
    r11 = (r11 & 1);
}

loc_80068130:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        f7.d = PPC_PsToScalarInline(f7.d);
        f8.d = PPC_PsToScalarInline(f8.d);
        f9.d = PPC_PsToScalarInline(f9.d);
        f10.d = PPC_PsToScalarInline(f10.d);
        f11.d = PPC_PsToScalarInline(f11.d);
        f12.d = PPC_PsToScalarInline(f12.d);
        goto loc_800681C4;
    }
}

loc_80068134:
{
    ctr = r11;
}

loc_80068138:
{
    r4 = MemoryInline::FlatRead8(r29);
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_7 & -256);
    r3 = MemoryInline::FlatRead8((r29 + 3));
    r0 = (r4 + r0);
    r8 = MemoryInline::FlatRead8((r29 + 4));
    r4 = (r0 * 48);
    r6 = MemoryInline::FlatRead8((r29 + 2));
    r7 = MemoryInline::FlatRead8((r29 + 5));
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_9 & -65536);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r7_mrot_7 = (r7_rot_7 & 65280);
    r7_mdest_7 = (r7 & -65281);
    r7 = (r7_mdest_7 | r7_mrot_7);
    r27_addr_12 = (r27 + r9);
    r3 = MemoryInline::FlatRead32(r27_addr_12);
    r12 = (r30 + r4);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r5_mrot_7 = (r5_rot_10 & -16777216);
    r5_mdest_7 = (r5 & 16777215);
    r5 = (r5_mdest_7 | r5_mrot_7);
    r4 = (r7 | r5);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r29 = (r29 + 6);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_15 = (r12 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_15));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_16 = (r12 + 16);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_16));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f7.d, PPC_PsFromScalarInline(f6.d), f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_17 = (r12 + 24);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_17));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f8.d, PPC_PsFromScalarInline(f6.d), f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_18 = (r12 + 32);
    PpcSetPairedFprInline(f11, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_18));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f9.d, PPC_PsFromScalarInline(f6.d), f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r12_psq_tmp_19 = (r12 + 40);
    PpcSetPairedFprInline(f12, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r12_psq_tmp_19));
    r27_addr_13 = (r27 + r0);
    r0 = MemoryInline::FlatRead32(r27_addr_13);
    PpcSetPairedFprInline(f3, PPC_PsMadds0Inline(f10.d, PPC_PsFromScalarInline(f6.d), f3.d));
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f11.d, PPC_PsFromScalarInline(f6.d), f4.d));
    r0 = (r3 & r0);
    PpcSetPairedFprInline(f5, PPC_PsMadds0Inline(f12.d, PPC_PsFromScalarInline(f6.d), f5.d));
    r27_addr_14 = (r27 + r9);
    MemoryInline::FlatWrite32(r27_addr_14, r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80068138;
    } else {
        f7.d = PPC_PsToScalarInline(f7.d);
        f8.d = PPC_PsToScalarInline(f8.d);
        f9.d = PPC_PsToScalarInline(f9.d);
        f10.d = PPC_PsToScalarInline(f10.d);
        f11.d = PPC_PsToScalarInline(f11.d);
        f12.d = PPC_PsToScalarInline(f12.d);
    }
}

loc_800681C4:
{
    r0 = (r10 * 48);
    r3 = (r26 + r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f3.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f4.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6, f5.d);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    goto loc_80068228;
}

loc_800681E8:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r29 + 3));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r6 = (r6_rot_2 & -256);
    r5 = MemoryInline::FlatRead8((r29 + 2));
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_9 & -256);
    r25 = (r6 + r5);
    r4 = (r4 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E3A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = (r25 * 48);
    r4 = (r3 + 160);
    r3 = (r26 + r0);
    r5 = (r30 + r0);
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
    r29 = (r29 + 5);
}

loc_80068228:
{
    r0 = MemoryInline::FlatRead8(r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80068230:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80067FC4;
    }
}

loc_80068234:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE003FFF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x8000DFFF fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80067F70 func_80067F70 preserves=true fpr_mask=0x00000000
