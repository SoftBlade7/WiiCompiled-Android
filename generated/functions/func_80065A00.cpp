#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80065A00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80065A7C_loc_0 = 0;
    uint32_t addr_lfsx_80065AFC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r8 = ctx->gpr[8];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80065A00;

loc_80065A00:
{
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -29456), 0, 3104u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -29456));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    r31 = r8;
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
    r28 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r3 = (r1 + 8);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 8), f1.d);
    r4 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 12), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 16), f0.d);
    }
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_0));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 3096u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3096u, (r2 + -26360));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3100u, (r2 + -26356));
        }
    }
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_0, f3.d);
    // end of inlined leaf 0x8019AC24
}

loc_80065A6C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80065AF0;
    }
}

loc_80065A70:
{
    r0 = (r31 * 48);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -29456));
    r3 = (r29 + r0);
    addr_lfsx_80065A7C_loc_0 = (r29 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_80065A7C_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80065AA0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80065AAC;
    }
}

loc_80065AA8:
{
    goto loc_80065AB8;
}

loc_80065AAC:
{
    f1.d = f30.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 484u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 484u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 488u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f30.d, f1.d);
}

loc_80065AB8:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -29456));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 24), f1.d);
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(f3.d, f3.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_0 = (r28 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_0, PPC_PsFromScalarInline(f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsNegInline(f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 40), f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMerge01Inline(f2.d, f3.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_1 = (r28 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1, f2.d);
    goto loc_80065BFC;
}

loc_80065AF0:
{
    r31 = (r31 * 48);
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -29456));
    r3 = (r29 + r31);
    addr_lfsx_80065AFC_loc_0 = (r29 + r31);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80065AFC_loc_0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f31.d, f30.d);
}

loc_80065B20:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80065B2C;
    }
}

loc_80065B28:
{
    goto loc_80065B38;
}

loc_80065B2C:
{
    f1.d = f31.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 484u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 484u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 488u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f30.d = PpcFmulsInline(f31.d, f1.d);
}

loc_80065B38:
{
    r3 = (r29 + r31);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -29456));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f29.d, f31.d);
}

loc_80065B64:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80065B70;
    }
}

loc_80065B6C:
{
    goto loc_80065B7C;
}

loc_80065B70:
{
    f1.d = f29.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 484u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 484u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 488u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f31.d = PpcFmulsInline(f29.d, f1.d);
}

loc_80065B7C:
{
    r3 = (r29 + r31);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -29456));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_80065BA8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80065BB4;
    }
}

loc_80065BB0:
{
    goto loc_80065BC0;
}

loc_80065BB4:
{
    f1.d = f29.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 484u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 484u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 488u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f29.d, f1.d);
}

loc_80065BC0:
{
    r3 = (r1 + 8);
    PpcSetPairedFprInline(f5, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f30.d), PPC_PsFromScalarInline(f31.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -29456));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(f4.d, f4.d));
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    PpcSetPairedFprInline(f3, PPC_PsNegInline(f4.d));
    MemoryInline::FlatWriteFloat32((r28 + 24), f1.d);
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f5.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_2 = (r28 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_2, PPC_PsFromScalarInline(f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMerge01Inline(f3.d, f4.d));
    MemoryInline::FlatWriteFloat32((r28 + 40), f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f5.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_3 = (r28 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_3, f2.d);
}

loc_80065BFC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000013F gpr_write=0xF000001B gpr_return=0x00000018 fpr_read=0xE000003F fpr_write=0xE000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80065A00 func_80065A00 preserves=true fpr_mask=0x00000000
