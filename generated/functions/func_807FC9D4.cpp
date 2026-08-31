#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FC9D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807FC9D4;

loc_807FC9D4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 108), r31);
    r31 = r7;
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r1 + 104), r30);
    r30 = r4;
    r4 = r6;
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r29);
    r29 = r3;
    r3 = (r1 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 96), r28);
    r28 = r5;
    r5 = (r30 + 48);
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r0);
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r0);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 4), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, r3, f0.d);
    }
    // end of inlined leaf 0x8051486C
    r4 = 0x808B0000u;
    r3 = (r30 + 200);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -21568));
    r4 = (r1 + 32);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 36), f0.d);
    r5 = (r1 + 44);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_0));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_0 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_0, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_1, f6.d);
    // end of inlined leaf 0x8019A91C
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 180), 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 184));
}

loc_807FCA40:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r0))) {
        goto loc_807FCA4C;
    }
}

loc_807FCA44:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 180));
    goto loc_807FCA6C;
}

loc_807FCA4C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 188));
}

loc_807FCA54:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r0))) {
        goto loc_807FCA68;
    }
}

loc_807FCA58:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 180));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    goto loc_807FCA6C;
}

loc_807FCA68:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 180));
}

loc_807FCA6C:
{
}

loc_807FCA70:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(4))) {
        goto loc_807FCA80;
    }
}

loc_807FCA74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(5));
}

loc_807FCA78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FCB74;
    }
}

loc_807FCA7C:
{
    goto loc_807FCC68;
}

loc_807FCA80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807FCA84:
{
    r3 = (r1 + 20);
    r4 = (r1 + 44);
    r0 = -1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FCA98;
    }
}

loc_807FCA94:
{
    r0 = 1;
}

loc_807FCA98:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r28 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat64((r28 + -21528));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 184));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 188));
        }
    }
    r3 = (r31 - r3);
    f2.d = MemoryInline::FlatReadFloat64((r28 + -21528));
    r0 = (r31 - r0);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f2.d = std::fabs(f1.d);
    f1.d = std::fabs(f0.d);
    f0.d = PPC_Fctiwz(f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    r3 = fctiwzword0;
    r0 = fctiwzword1;
}

loc_807FCB0C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_807FCB14;
    }
}

loc_807FCB10:
{
    r0 = r3;
}

loc_807FCB14:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r3 = 0x808B0000u;
    r5 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat64((r3 + -21528));
    r3 = r29;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r4 = (r1 + 20);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 17356));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807FCB40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807FCB50;
    }
}

loc_807FCB44:
{
    r5 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 17352));
    goto loc_807FCB6C;
}

loc_807FCB50:
{
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r5 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 17352));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
}

loc_807FCB6C:
{
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    goto loc_807FCC84;
}

loc_807FCB74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807FCB78:
{
    r3 = (r1 + 8);
    r4 = (r1 + 44);
    r0 = 1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FCB8C;
    }
}

loc_807FCB88:
{
    r0 = -1;
}

loc_807FCB8C:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r28 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat64((r28 + -21528));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 184));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 188));
        }
    }
    r3 = (r31 - r3);
    f2.d = MemoryInline::FlatReadFloat64((r28 + -21528));
    r0 = (r31 - r0);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f2.d = std::fabs(f1.d);
    f1.d = std::fabs(f0.d);
    f0.d = PPC_Fctiwz(f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f1.d);
    r3 = fctiwzword2;
    r0 = fctiwzword3;
}

loc_807FCC00:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_807FCC08;
    }
}

loc_807FCC04:
{
    r0 = r3;
}

loc_807FCC08:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r3 = 0x808B0000u;
    r5 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat64((r3 + -21528));
    r3 = r29;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    r4 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 17356));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807FCC34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807FCC44;
    }
}

loc_807FCC38:
{
    r5 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 17352));
    goto loc_807FCC60;
}

loc_807FCC44:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r5 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 17352));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
}

loc_807FCC60:
{
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    goto loc_807FCC84;
}

loc_807FCC68:
{
    r4 = 0x802A0000u;
    r4 = (r4 + 16640);
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r29 + 4), r0);
    MemoryInline::FlatWrite32(r29, r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r29 + 8), r0);
}

loc_807FCC84:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    r28 = MemoryInline::FlatRead32((r1 + 96));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FB gpr_write=0xF000003B gpr_return=0x00000018 fpr_read=0x0000104D fpr_write=0x00001F7F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FC9D4 func_807FC9D4 preserves=true fpr_mask=0x00000000
