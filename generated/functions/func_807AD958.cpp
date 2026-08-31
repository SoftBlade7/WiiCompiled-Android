#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AD958(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint32_t r30_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807AD958;

loc_807AD958:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 23288);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 28), 0, 304u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 272u, (r31 + 300));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 752));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_807AD984:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AD9A4;
    }
}

loc_807AD988:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 284u, (r31 + 312));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807AD994:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AD99C;
    }
}

loc_807AD998:
{
    goto loc_807AD9BC;
}

loc_807AD99C:
{
    f2.d = f0.d;
    goto loc_807AD9BC;
}

loc_807AD9A4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 284u, (r31 + 312));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807AD9B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807AD9B8;
    }
}

loc_807AD9B4:
{
    goto loc_807AD9BC;
}

loc_807AD9B8:
{
    f2.d = f0.d;
}

loc_807AD9BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 732));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 292u, (r31 + 320));
    r0 = MemoryInline::FlatRead32((r3 + 696));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r4 = MemoryInline::FlatRead16((r3 + 764));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(32768));
}

loc_807AD9D4:
{
    MemoryInline::FlatWriteFloat32((r3 + 752), f2.d);
    r0 = (r4 + 35);
    MemoryInline::FlatWriteFloat32((r3 + 732), f0.d);
    MemoryInline::FlatWrite16((r3 + 764), static_cast<uint16_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807AD9FC;
    }
}

loc_807AD9E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 760));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 296u, (r31 + 324));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 760), f0.d);
    goto loc_807ADA0C;
}

loc_807AD9FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 760));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 284u, (r31 + 312));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 760), f0.d);
}

loc_807ADA0C:
{
    r3 = MemoryInline::FlatRead32((r3 + 640));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807ADA20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807ADA54;
    }
}

loc_807ADA24:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(29));
}

loc_807ADA34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807ADA54;
    }
}

loc_807ADA38:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 28));
    r3 = r30;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 300u, (r31 + 328));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 760));
    r4 = MemoryInline::FlatRead16((r30 + 764));
    ctx->lr = 0x807ADA50u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807B4400u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_807ADA6C;
}

loc_807ADA54:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 252u, (r31 + 280));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 752));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 760));
    r4 = MemoryInline::FlatRead16((r30 + 764));
    ctx->lr = 0x807ADA6Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807B4400u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807ADA6C:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x807ADA78u;
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
    InvokeDirectCpu<0x807ACB24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = 65536;
    r4 = MemoryInline::FlatRead32((r30 + 696));
    r0 = (r3 + 8000);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807ADA88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807ADB24;
    }
}

loc_807ADA8C:
{
    r3 = (r4 + -65536);
    r0 = 1127219200;
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 264));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 340));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 332));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 684));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 336));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 284));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 692));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r30 + 712));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807ADAE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807ADB10;
    }
}

loc_807ADAEC:
{
    r3 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 792);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 800);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_3 = (r30 + 780);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_4 = (r30 + 788);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_4, f0.d);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_807ADB10:
{
    r3 = r30;
    r4 = (r1 + 8);
    r5 = 1;
    ctx->lr = 0x807ADB20u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807ACE1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    goto loc_807ADB2C;
}

loc_807ADB24:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 708), r0);
}

loc_807ADB2C:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r30;
    r4 = 260;
    ctx->lr = 0x807ADB3Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807A2F38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807AD958 func_807AD958 preserves=true fpr_mask=0x00000000
