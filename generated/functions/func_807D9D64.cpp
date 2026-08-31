#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D9D64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_10 = 0;
    uint32_t r28_psq_tmp_11 = 0;
    uint32_t r28_psq_tmp_12 = 0;
    uint32_t r28_psq_tmp_13 = 0;
    uint32_t r28_psq_tmp_14 = 0;
    uint32_t r28_psq_tmp_15 = 0;
    uint32_t r28_psq_tmp_16 = 0;
    uint32_t r28_psq_tmp_17 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r28_psq_tmp_6 = 0;
    uint32_t r28_psq_tmp_7 = 0;
    uint32_t r28_psq_tmp_8 = 0;
    uint32_t r28_psq_tmp_9 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_4 = 0;
    uint32_t r31_psq_tmp_5 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_4 = 0;
    uint32_t r7_psq_tmp_0 = 0;
    uint32_t r7_psq_tmp_1 = 0;
    uint32_t r7_psq_tmp_2 = 0;
    uint32_t r7_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807D9D64;

loc_807D9D64:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 140), r31);
    MemoryInline::FlatWriteRam32((r1 + 136), r30);
    MemoryInline::FlatWriteRam32((r1 + 132), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + 30112);
    MemoryInline::FlatWriteRam32((r1 + 128), r28);
    r28 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r28 + 64));
    // inline leaf 0x807D3F24 (13 guest instruction(s))
}

loc_inl1_0x807D3F24:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 24576);
}

loc_inl1_0x807D3F38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x807D3F3C:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
}

loc_inl1_0x807D3F4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(27))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x807D3F50:
{
    r3 = 1;
    goto loc_inl1_cont_807D3F24;
}

loc_inl1_return:
{
}

loc_inl1_cont_807D3F24:
{
    // end of inlined leaf 0x807D3F24
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D9DAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D9DD8;
    }
}

loc_807D9DB0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x807D9DD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_807D9DFC;
}

loc_807D9DD8:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x807D9DFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807D9DFC:
{
    r3 = MemoryInline::FlatRead32((r28 + 64));
    r31 = 0;
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 24576);
}

loc_807D9E14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D9E30;
    }
}

loc_807D9E18:
{
    r3 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_807D9E2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807D9E34;
    }
}

loc_807D9E30:
{
    r31 = 1;
}

loc_807D9E34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807D9E38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D9E90;
    }
}

loc_807D9E3C:
{
    r3 = MemoryInline::FlatRead32((r28 + 64));
    // inline leaf 0x80590264 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 156);
    // end of inlined leaf 0x80590264
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r3 + 32));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r3 + 16));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r3);
    guest_range_2 = MemoryInline::ResolveRangeHost((r28 + 28), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r28 + 28), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r28 + 32), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r28 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r3 + 36));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r3 + 20));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r3 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r28 + 40), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r28 + 44), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r28 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r3 + 40));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r3 + 24));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r28 + 52), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r28 + 56), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r28 + 60), f0.d);
    goto loc_807D9FE8;
}

loc_807D9E90:
{
    r3 = MemoryInline::FlatRead32((r28 + 64));
    r4 = (r1 + 68);
    // inline leaf 0x80590C6C (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 160));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 176));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 192));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C6C
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 60));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D9EB4:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D9ECC;
    }
}

loc_807D9EC4:
{
    r4 = (r1 + 68);
    goto loc_807D9ED0;
}

loc_807D9ECC:
{
    r4 = (r1 + 56);
}

loc_807D9ED0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 40);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    r3 = MemoryInline::FlatRead32((r28 + 64));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 48);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_3 = (r28 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_3, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_4 = (r28 + 48);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_4, f2.d);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1024);
}

loc_807D9F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D9F18;
    }
}

loc_807D9F10:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    goto loc_807D9F1C;
}

loc_807D9F18:
{
    f2.d = MemoryInline::FlatReadFloat32(r29);
}

loc_807D9F1C:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 84));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_807D9F24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D9F44;
    }
}

loc_807D9F28:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807D9F34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D9F3C;
    }
}

loc_807D9F38:
{
    goto loc_807D9F5C;
}

loc_807D9F3C:
{
    f2.d = f0.d;
    goto loc_807D9F5C;
}

loc_807D9F44:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807D9F50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D9F58;
    }
}

loc_807D9F54:
{
    goto loc_807D9F5C;
}

loc_807D9F58:
{
    f2.d = f0.d;
}

loc_807D9F5C:
{
    MemoryInline::FlatWriteFloat32((r28 + 84), f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 116));
    MemoryInline::FlatWriteFloat32((r28 + 52), f1.d);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807D9F74:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 120));
    MemoryInline::FlatWriteFloat32((r28 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 124));
    MemoryInline::FlatWriteFloat32((r28 + 60), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D9FE0;
    }
}

loc_807D9F88:
{
    r3 = MemoryInline::FlatRead32((r28 + 64));
    // inline leaf 0x80590CE4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 228);
    // end of inlined leaf 0x80590CE4
    r6 = (r28 + 52);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    r4 = (r1 + 8);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_1 = (r6 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r6, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    r3 = r6;
    r5 = MemoryInline::FlatRead32((r28 + 52));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    r0 = MemoryInline::FlatRead32((r28 + 56));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r6_psq_tmp_2 = (r6 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_2, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r28 + 60));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x807D9FE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = PPC_PsToScalarInline(f0.d);
}

loc_807D9FE0:
{
    r3 = (r28 + 28);
    ctx->lr = 0x807D9FE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x807912E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
}

loc_807D9FE8:
{
    r3 = MemoryInline::FlatRead32((r28 + 64));
    r4 = (r1 + 44);
    r3 = MemoryInline::FlatRead32((r3 + 108));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x807DA004u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32(r28);
    r4 = (r1 + 44);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x807DA01Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807DA020:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_807DA094;
    }
}

loc_807DA024:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r3 = MemoryInline::FlatRead32((r28 + 64));
    f31.d = PpcFmulsInline(f1.d, f0.d);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = 0x802A0000u;
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    r4 = (r4 + 16688);
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f3.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 16), f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = PpcFmulsInline(f3.d, f31.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 20), f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = PpcFmulsInline(f3.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 24), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 12), f1.d);
    goto loc_807DA350;
}

loc_807DA094:
{
    r3 = MemoryInline::FlatRead32((r28 + 64));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = MemoryInline::FlatRead32(r3);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 556));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 24u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807DA0C4:
{
    MemoryInline::FlatWriteRam32((r1 + 32), r4);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807DA0DC;
    }
}

loc_807DA0D4:
{
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
}

loc_807DA0DC:
{
    r4 = (r1 + 68);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_6 = (r28 + 4);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r29 + 8));
    PpcSetPairedFprInline(f8, PPC_PsSubInline(f3.d, f6.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r29 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    PpcSetPairedFprInline(f8, PPC_PsMadds0Inline(f8.d, PPC_PsFromScalarInline(f1.d), f6.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_7 = (r28 + 12);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_7));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_8 = (r28 + 4);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_8, f8.d);
    r3 = MemoryInline::FlatRead32((r28 + 64));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_3));
    f5.d = MemoryInline::FlatReadFloat32((r28 + 4));
    PpcSetPairedFprInline(f8, PPC_PsSubInline(f3.d, f6.d));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 8));
    PpcSetPairedFprInline(f8, PPC_PsMadds0Inline(f8.d, PPC_PsFromScalarInline(f1.d), f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_9 = (r28 + 12);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_9, f8.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f6.d = PpcFmulsInline(f7.d, f6.d);
    f5.d = PpcFmulsInline(f5.d, f6.d);
    f3.d = PpcFmulsInline(f3.d, f6.d);
    f1.d = PpcFmulsInline(f1.d, f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    r8 = MemoryInline::FlatRead32((r28 + 64));
    r7 = (r1 + 32);
    r6 = 0x802A0000u;
    r6 = (r6 + 16640);
    r5 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead32(r8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_1 = (r7 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r7_psq_tmp_1));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807DA190:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r7, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    r3 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r7_psq_tmp_2 = (r7 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r7_psq_tmp_2, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807DA214;
    }
}

loc_807DA1B4:
{
    r3 = r8;
    // inline leaf 0x80590224 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 24);
    // end of inlined leaf 0x80590224
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r28 + 64));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r31 = (r1 + 20);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r31, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    r3 = MemoryInline::FlatRead32((r28 + 64));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_1 = (r31 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r31_psq_tmp_1, f0.d);
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r31));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_2 = (r31 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r31_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r31, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_3 = (r31 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r31_psq_tmp_3, f0.d);
}

loc_807DA214:
{
    r3 = (r1 + 20);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_10 = (r28 + 72);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_10));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r28 + 80));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(PPC_PsFromScalarInline(f5.d), PPC_PsFromScalarInline(f5.d), f3.d));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f0.d), f1.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f0.d, f1.d, f1.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), PPC_PsToScalarInline(f2.d));
}

loc_807DA244:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807DA294;
    }
}

loc_807DA248:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f6.d = MemoryInline::FlatReadFloat32((r28 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f4.d = MemoryInline::FlatReadFloat32((r28 + 76));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 80), f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 72), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
    goto loc_807DA2E0;
}

loc_807DA294:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f7.d = MemoryInline::FlatReadFloat32((r28 + 72));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r29 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f7.d));
    f6.d = MemoryInline::FlatReadFloat32((r28 + 76));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r29 + 20));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    f0.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 80), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 72), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
}

loc_807DA2E0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_11 = (r28 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_11));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_12 = (r28 + 72);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_12));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 32));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_13 = (r28 + 24);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_13));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_14 = (r28 + 80);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_14));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_15 = (r28 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_15, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f7.d = MemoryInline::FlatReadFloat32((r28 + 16));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_16 = (r28 + 24);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_16, f0.d);
    f6.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f7.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f5.d = MemoryInline::FlatReadFloat32((r28 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r29 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r29 + 20));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 16), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 24), f0.d);
    f8.d = PPC_PsToScalarInline(f8.d);
}

loc_807DA350:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r28, 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r28 + 28));
    r29 = 0;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r28 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 52u, (r28 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r28 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r28 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r28 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 56u, (r28 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r28 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r28 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 48u, (r28 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r1 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 60u, (r28 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 40u, (r1 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r28 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r1 + 124), f0.d);
    r28 = MemoryInline::ReadResolved32(guest_range_3, 0u, r28);
}

loc_807DA3B8:
{
    r3 = MemoryInline::FlatRead32((r28 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807DA3C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807DA3D4;
    }
}

loc_807DA3C8:
{
    r5 = (r1 + 80);
    r4 = 0;
    ctx->lr = 0x807DA3D4u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8006DB90u>(ctx);
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
    cr = ctx->cr;
}

loc_807DA3D4:
{
    r29 = (r29 + 1);
    r28 = (r28 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(2));
}

loc_807DA3E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807DA3B8;
    }
}

loc_807DA3E4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 164));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r30 = MemoryInline::FlatRead32((r1 + 136));
    r29 = MemoryInline::FlatRead32((r1 + 132));
    r28 = MemoryInline::FlatRead32((r1 + 128));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D9D64 func_807D9D64 preserves=false fpr_mask=0x80000000
