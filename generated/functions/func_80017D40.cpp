#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80017D40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80017D40;

loc_80017D40:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r0 = 1072693248;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r31 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = (r31 & 2147483647);
}

loc_80017D80:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80017DC0;
    }
}

loc_80017D84:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r30 + -1072693248);
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80017DAC;
    }
}

loc_80017D94:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32352));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32344));
    f2.d = (f2.d * f1.d);
    f0.d = (f0.d * f1.d);
    f1.d = (f2.d + f0.d);
    goto loc_80017FA8;
}

loc_80017DAC:
{
    r3 = 0x80380000u;
    r0 = 33;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 19488));
    goto loc_80017FA8;
}

loc_80017DC0:
{
    r0 = 1071644672;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80017DC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80017E7C;
    }
}

loc_80017DCC:
{
    r0 = 1044381696;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80017DD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80017DF0;
    }
}

loc_80017DD8:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32336));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32328));
    f2.d = (f2.d + f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80017DE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80017DF4;
    }
}

loc_80017DEC:
{
    goto loc_80017FA8;
}

loc_80017DF0:
{
    f31.d = (f1.d * f1.d);
}

loc_80017DF4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -32328), 0, 88u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -32280));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 80u, (r2 + -32248));
    f4.d = (f2.d * f31.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -32288));
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -32296));
    f2.d = (f0.d * f31.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r2 + -32256));
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -32304));
    f4.d = (f3.d + f4.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r2 + -32264));
    f0.d = (f0.d + f2.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -32272));
    f9.d = (f31.d * f4.d);
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r2 + -32312));
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 8u, (r2 + -32320));
    f4.d = (f31.d * f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -32328));
    f8.d = (f8.d + f9.d);
    f3.d = (f3.d + f4.d);
    f4.d = (f31.d * f8.d);
    f3.d = (f31.d * f3.d);
    f4.d = (f7.d + f4.d);
    f2.d = (f2.d + f3.d);
    f3.d = (f31.d * f4.d);
    f2.d = (f31.d * f2.d);
    f3.d = (f6.d + f3.d);
    f2.d = (f0.d + f2.d);
    f0.d = (f31.d * f3.d);
    f0.d = (f5.d + f0.d);
    f0.d = (f31.d * f0.d);
    f0.d = (f0.d / f2.d);
    f0.d = (f1.d * f0.d);
    f1.d = (f1.d + f0.d);
    goto loc_80017FA8;
}

loc_80017E7C:
{
    f1.d = std::fabs(f1.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -32328), 0, 96u, true, false);
    f11.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -32328));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r2 + -32240));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -32280));
    f3.d = (f11.d - f1.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 80u, (r2 + -32248));
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -32288));
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -32296));
    f31.d = (f2.d * f3.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r2 + -32256));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r2 + -32264));
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -32304));
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -32312));
    f10.d = (f0.d * f31.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -32272));
    f4.d = (f1.d * f31.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -32320));
    f9.d = (f9.d + f10.d);
    f1.d = f31.d;
    f3.d = (f3.d + f4.d);
    f4.d = (f31.d * f9.d);
    f3.d = (f31.d * f3.d);
    f4.d = (f8.d + f4.d);
    f2.d = (f2.d + f3.d);
    f3.d = (f31.d * f4.d);
    f2.d = (f31.d * f2.d);
    f3.d = (f7.d + f3.d);
    f0.d = (f0.d + f2.d);
    f2.d = (f31.d * f3.d);
    f0.d = (f31.d * f0.d);
    f2.d = (f6.d + f2.d);
    f29.d = (f11.d + f0.d);
    f0.d = (f31.d * f2.d);
    f0.d = (f5.d + f0.d);
    f30.d = (f31.d * f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1072627712;
    r0 = (r3 + 13107);
}

loc_80017F18:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80017F44;
    }
}

loc_80017F1C:
{
    f4.d = (f30.d / f29.d);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -32232));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32344));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32352));
    f4.d = (f1.d * f4.d);
    f1.d = (f1.d + f4.d);
    f1.d = (f3.d * f1.d);
    f1.d = (f1.d - f2.d);
    f1.d = (f0.d - f1.d);
    goto loc_80017F98;
}

loc_80017F44:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f1.d);
    r0 = 0;
    f5.d = MemoryInline::FlatReadFloat64((r2 + -32232));
    f8.d = (f30.d / f29.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -32344));
    f7.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32224));
    f4.d = (f5.d * f1.d);
    f0.d = (f7.d * f7.d);
    f6.d = (f1.d + f7.d);
    f4.d = (f4.d * f8.d);
    f1.d = (f31.d - f0.d);
    f0.d = (f5.d * f7.d);
    f1.d = (f1.d / f6.d);
    f1.d = (f5.d * f1.d);
    f1.d = (f3.d - f1.d);
    f3.d = (f2.d - f0.d);
    f0.d = (f4.d - f1.d);
    f0.d = (f0.d - f3.d);
    f1.d = (f2.d - f0.d);
}

loc_80017F98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80017F9C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80017FA4;
    }
}

loc_80017FA0:
{
    goto loc_80017FA8;
}

loc_80017FA4:
{
    f1.d = (-(f1.d));
}

loc_80017FA8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0003FFF gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0xE0000FFF fpr_write=0xE0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80017D40 func_80017D40 preserves=false fpr_mask=0xE0000000
