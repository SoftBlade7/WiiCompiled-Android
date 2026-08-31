#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800556B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800556B0;

loc_800556B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29788));
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800556D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055738;
    }
}

loc_800556DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800556E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055738;
    }
}

loc_800556EC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800556F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055738;
    }
}

loc_800556F8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80055700:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055738;
    }
}

loc_80055704:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8005570C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055738;
    }
}

loc_80055710:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80055718:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055738;
    }
}

loc_8005571C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80055724:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055738;
    }
}

loc_80055728:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80055730:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055738;
    }
}

loc_80055734:
{
    r0 = 1;
}

loc_80055738:
{
}

loc_8005573C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80055754;
    }
}

loc_80055740:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29788));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8005574C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055754;
    }
}

loc_80055750:
{
    r5 = 1;
}

loc_80055754:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    r6 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    r0 = 0;
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80055768:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005577C;
    }
}

loc_8005576C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80055774:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005577C;
    }
}

loc_80055778:
{
    r0 = 1;
}

loc_8005577C:
{
}

loc_80055780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80055798;
    }
}

loc_80055784:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80055790:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055798;
    }
}

loc_80055794:
{
    r6 = 1;
}

loc_80055798:
{
}

loc_8005579C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800557E0;
    }
}

loc_800557A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800557A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800557C8;
    }
}

loc_800557A8:
{
    r0 = MemoryInline::FlatRead32(r3);
    r5 = (r0 | 100);
    MemoryInline::FlatWrite32(r3, r5);
    r0 = (r5 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800557B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055810;
    }
}

loc_800557BC:
{
    r0 = (r5 | 2);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80055810;
}

loc_800557C8:
{
    r5 = MemoryInline::FlatRead32(r3);
    r0 = -71;
    r5 = (r5 | 32);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80055810;
}

loc_800557E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800557E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055800;
    }
}

loc_800557E8:
{
    r5 = MemoryInline::FlatRead32(r3);
    r0 = -39;
    r5 = (r5 | 64);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80055810;
}

loc_80055800:
{
    r5 = MemoryInline::FlatRead32(r3);
    r0 = -103;
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80055810:
{
    r3 = r4;
    r4 = (r31 + 28);
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f5.d);
    // end of inlined leaf 0x80199D30
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32(r31, r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007F gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800556B0 func_800556B0 preserves=true fpr_mask=0x00000000
