#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80036770(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80036770;

loc_80036770:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    f2.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r3;
    r3 = (r1 + 32);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    r4 = r3;
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    // inline leaf 0x80036F00 (25 guest instruction(s))
}

loc_inl0_0x80036F00:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30776));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f3.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_0));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30772));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f4.d, f4.d, f6.d));
    PpcSetPairedFprInline(f5, PPC_PsSum0Inline(f5.d, f6.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f5.d), f2.d);
}

loc_inl0_0x80036F24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80036F54;
    }
}

loc_inl0_0x80036F28:
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
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_0, f4.d);
    r3 = 1;
    goto loc_inl0_cont_80036F00;
}

loc_inl0_0x80036F54:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f4.d);
    r3 = 0;
    f6.d = PPC_PsToScalarInline(f6.d);
}

loc_inl0_cont_80036F00:
{
    // end of inlined leaf 0x80036F00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800367B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800367C0;
    }
}

loc_800367B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30808));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
}

loc_800367C0:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 20));
    r4 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80036F00u>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800367E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800367F4;
    }
}

loc_800367EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30808));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
}

loc_800367F4:
{
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8019ACCCu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    r3 = (r1 + 8);
    r4 = (r1 + 32);
    r5 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8019ACCCu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r1 + 32));
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30812));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 16), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 32), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 4), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 20), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 36), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 8), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 24), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 40), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 28), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 44), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 60));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 56));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001E gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000039 fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80036770 func_80036770 preserves=true fpr_mask=0x00000000
