#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80086610(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r8_psq_tmp_0 = 0;
    uint32_t r8_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_2 = 0;
    uint32_t r8_psq_tmp_3 = 0;
    uint32_t r8_psq_tmp_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80086610;

loc_80086610:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 24u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 132));
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80086620:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80086674;
    }
}

loc_80086624:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 120));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80086630:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80086674;
    }
}

loc_80086634:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80086640:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80086674;
    }
}

loc_80086644:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80086650:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80086674;
    }
}

loc_80086654:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80086660:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80086674;
    }
}

loc_80086664:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 128));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80086670:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8008667C;
    }
}

loc_80086674:
{
    r0 = 0;
    goto loc_80086680;
}

loc_8008667C:
{
    r0 = 1;
}

loc_80086680:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80086684:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80086690;
    }
}

loc_80086688:
{
    r3 = 0;
    goto loc_800867B4;
}

loc_80086690:
{
    r0 = 6;
    r7 = r3;
    r8 = (r3 + 144);
    r5 = (r1 + 20);
    r6 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28892));
    r3 = 1;
    ctr = r0;
}

loc_800866B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 144));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800866B8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800866D4;
    }
}

loc_800866C0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_800866E4;
}

loc_800866D4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
}

loc_800866E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 148));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800866EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80086708;
    }
}

loc_800866F4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    goto loc_80086718;
}

loc_80086708:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_80086718:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 152));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80086720:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008673C;
    }
}

loc_80086728:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    goto loc_8008674C;
}

loc_8008673C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_8008674C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_2 = (r8 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_2 = (r5 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r5_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r5));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 12));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f4.d, f3.d, f1.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f3.d, f1.d, f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + PPC_PsToScalarInline(f1.d)));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80086774:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80086780;
    }
}

loc_80086778:
{
    r3 = 0;
    goto loc_800867B4;
}

loc_80086780:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_3 = (r8 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_2 = (r6 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r6_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<1u, 0u>(ctx, r6));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f3.d));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f4.d, f5.d, f1.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f3.d, f1.d, f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + PPC_PsToScalarInline(f1.d)));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800867A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800867A8;
    }
}

loc_800867A4:
{
    r3 = 2;
}

loc_800867A8:
{
    r7 = (r7 + 16);
    r8 = (r8 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800866B0;
    }
}

loc_800867B4:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000001EB gpr_return=0x00000008 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80086610 func_80086610 preserves=true fpr_mask=0x00000000
