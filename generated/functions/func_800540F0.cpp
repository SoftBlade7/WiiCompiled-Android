#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800540F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr3 = ctx->gqr[3];
    [[maybe_unused]] uint32_t mkw_gqr6 = ctx->gqr[6];
    [[maybe_unused]] uint32_t mkw_gqr7 = ctx->gqr[7];

    goto loc_800540F0;

loc_800540F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r5 = (r3 + 16);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 16u, true, false);
    r6 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
    r0 = (r6 + -1);
    r0 = (r0 * 6);
    r4 = (r3 + r0);
    r4 = (r4 + 16);
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r5));
    SetCRFloatResident(cr, 0, f1.d, PPC_PsToScalarInline(f0.d));
}

loc_80054114:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054130;
    }
}

loc_8005411C:
{
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 2);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 3u>(ctx, mkw_gqr3, r5_psq_tmp_0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
        }
    }
    f1.d = PPC_Fmadds(f1.d, PPC_PsToScalarInline(f2.d), f0.d);
    goto loc_80054264;
}

loc_80054130:
{
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r4));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f1.d);
}

loc_80054138:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054154;
    }
}

loc_80054140:
{
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 2);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 3u>(ctx, mkw_gqr3, r4_psq_tmp_1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
        }
    }
    f1.d = PPC_Fmadds(f1.d, PPC_PsToScalarInline(f2.d), f0.d);
    goto loc_80054264;
}

loc_80054154:
{
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r5));
    r4 = (r1 + 10);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r6));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f0.d)));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 3u>(ctx, r4));
    r4 = (r1 + 12);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 4));
    f2.d = PpcFmulsInline(f3.d, PPC_PsToScalarInline(f2.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r4, PPC_PsFromScalarInline(f0.d));
    r5 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r0 = (r0 * 6);
    r4 = (r3 + r0);
    r6 = (r4 + 16);
    // psq_store w=1 quant=6 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 6u>(ctx, r5, PPC_PsFromScalarInline(f1.d));
    r4 = MemoryInline::FlatRead16((r1 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_800541A4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_800541B8;
    }
}

loc_800541A8:
{
    r6 = (r6 + -6);
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800541B0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_800541A8;
    }
}

loc_800541B4:
{
    goto loc_800541C8;
}

loc_800541B8:
{
    r6 = (r6 + 6);
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800541C0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r5))) {
        goto loc_800541B8;
    }
}

loc_800541C4:
{
    r6 = (r6 + -6);
}

loc_800541C8:
{
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r6));
    SetCRFloatResident(cr, 0, f1.d, PPC_PsToScalarInline(f0.d));
}

loc_800541D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800541E8;
    }
}

loc_800541D4:
{
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r6_psq_tmp_1 = (r6 + 2);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 3u>(ctx, mkw_gqr3, r6_psq_tmp_1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
        }
    }
    f1.d = PPC_Fmadds(f1.d, PPC_PsToScalarInline(f2.d), f0.d);
    goto loc_80054264;
}

loc_800541E8:
{
    r4 = (r6 + 6);
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r6_psq_tmp_2 = (r6 + 2);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 3u>(ctx, mkw_gqr3, r6_psq_tmp_2));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
        }
    }
    f5.d = PPC_Fmadds(f2.d, PPC_PsToScalarInline(f3.d), f0.d);
    // psq_load w=1 quant=7 (using PPC_PsqL)
    r6_psq_tmp_3 = (r6 + 4);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<1u, 7u>(ctx, mkw_gqr7, r6_psq_tmp_3));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 2);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 3u>(ctx, mkw_gqr3, r4_psq_tmp_2));
    f0.d = PPC_Fmadds(f2.d, PPC_PsToScalarInline(f3.d), f0.d);
    // psq_load w=1 quant=7 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 4);
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<1u, 7u>(ctx, mkw_gqr7, r4_psq_tmp_3));
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r6));
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r4));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f3.d)));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29784));
    f11.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f4.d) - PPC_PsToScalarInline(f3.d)));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29780));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -29788));
    PpcSetPairedFprInline(f9, PPC_Fres(PPC_PsFromScalarInline(f11.d)));
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f9.d, f9.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f9.d, f9.d));
    PpcSetPairedFprInline(f9, PPC_PsNmsubInline(PPC_PsFromScalarInline(f11.d), f3.d, f8.d));
    f3.d = PpcFmulsInline(f10.d, PPC_PsToScalarInline(f9.d));
    f8.d = PPC_Fmsubs(f10.d, PPC_PsToScalarInline(f9.d), f4.d);
    f1.d = PPC_Fmsubs(f2.d, f3.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, PPC_PsToScalarInline(f7.d));
    f4.d = PpcFmulsInline(f10.d, f8.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PPC_Fmadds(f8.d, PPC_PsToScalarInline(f6.d), f2.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PPC_Fmadds(f3.d, f0.d, f5.d);
    f1.d = PPC_Fmadds(f4.d, f1.d, f0.d);
}

loc_80054264:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x00000FFA fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800540F0 func_800540F0 preserves=true fpr_mask=0x00000000
