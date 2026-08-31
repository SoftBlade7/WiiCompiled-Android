#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80017A74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80017A74;

loc_80017A74:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r0 = 1072693248;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r4 & 2147483647);
}

loc_80017AA4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80017AE4;
    }
}

loc_80017AA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r3 + -1072693248);
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80017AD0;
    }
}

loc_80017AB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80017ABC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80017AC8;
    }
}

loc_80017AC0:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32488));
    goto loc_80017D20;
}

loc_80017AC8:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32480));
    goto loc_80017D20;
}

loc_80017AD0:
{
    r3 = 0x80380000u;
    r0 = 33;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 19488));
    goto loc_80017D20;
}

loc_80017AE4:
{
    r0 = 1071644672;
}

loc_80017AEC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80017BA0;
    }
}

loc_80017AF0:
{
    r0 = 1012924416;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80017AF8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80017B04;
    }
}

loc_80017AFC:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32472));
    goto loc_80017D20;
}

loc_80017B04:
{
    f12.d = (f1.d * f1.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -32472), 0, 104u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -32424));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r2 + -32384));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -32432));
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -32440));
    f4.d = (f0.d * f12.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 80u, (r2 + -32392));
    f2.d = (f2.d * f12.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r2 + -32400));
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -32448));
    f3.d = (f3.d + f4.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r2 + -32408));
    f0.d = (f0.d + f2.d);
    f11.d = (f12.d * f3.d);
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -32456));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -32416));
    f6.d = (f12.d * f0.d);
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -32464));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r2 + -32376));
    f10.d = (f10.d + f11.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -32472));
    f5.d = (f5.d + f6.d);
    f6.d = (f12.d * f10.d);
    f5.d = (f12.d * f5.d);
    f6.d = (f9.d + f6.d);
    f4.d = (f4.d + f5.d);
    f5.d = (f12.d * f6.d);
    f4.d = (f12.d * f4.d);
    f5.d = (f8.d + f5.d);
    f4.d = (f3.d + f4.d);
    f3.d = (f12.d * f5.d);
    f3.d = (f7.d + f3.d);
    f3.d = (f12.d * f3.d);
    f3.d = (f3.d / f4.d);
    f3.d = (f1.d * f3.d);
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d - f2.d);
    f1.d = (f0.d - f1.d);
    goto loc_80017D20;
}

loc_80017BA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80017BA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80017C58;
    }
}

loc_80017BA8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -32464), 0, 104u, true, false);
    f11.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -32416));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r2 + -32368));
    f1.d = (f11.d + f1.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -32424));
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -32432));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r2 + -32392));
    f1.d = (f0.d * f1.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 80u, (r2 + -32384));
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -32440));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r2 + -32400));
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r2 + -32448));
    f10.d = (f4.d * f1.d);
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 8u, (r2 + -32456));
    f4.d = (f0.d * f1.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -32408));
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -32464));
    f9.d = (f9.d + f10.d);
    f3.d = (f3.d + f4.d);
    f4.d = (f1.d * f9.d);
    f3.d = (f1.d * f3.d);
    f4.d = (f8.d + f4.d);
    f2.d = (f2.d + f3.d);
    f3.d = (f1.d * f4.d);
    f2.d = (f1.d * f2.d);
    f3.d = (f7.d + f3.d);
    f0.d = (f0.d + f2.d);
    f2.d = (f1.d * f3.d);
    f0.d = (f1.d * f0.d);
    f2.d = (f6.d + f2.d);
    f30.d = (f11.d + f0.d);
    f0.d = (f1.d * f2.d);
    f0.d = (f5.d + f0.d);
    f31.d = (f1.d * f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = (f31.d / f30.d);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -32376));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32360));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32480));
    f4.d = (f4.d * f1.d);
    f3.d = (f4.d - f3.d);
    f1.d = (f1.d + f3.d);
    f1.d = (f2.d * f1.d);
    f1.d = (f0.d - f1.d);
    goto loc_80017D20;
}

loc_80017C58:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32416));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32368));
    f1.d = (f2.d - f1.d);
    f31.d = (f0.d * f1.d);
    f1.d = f31.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -32464), 0, 112u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r2 + -32424));
    r0 = 0;
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f1.d);
    f4.d = (f2.d * f31.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 80u, (r2 + -32384));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 32u, (r2 + -32432));
    f2.d = (f0.d * f31.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 72u, (r2 + -32392));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = (f3.d + f4.d);
    f11.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = (f0.d + f2.d);
    f10.d = (f11.d * f11.d);
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r2 + -32440));
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r2 + -32448));
    f2.d = (f31.d * f3.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 64u, (r2 + -32400));
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -32456));
    f5.d = (f31.d * f0.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r2 + -32408));
    f0.d = (f6.d + f2.d);
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 0u, (r2 + -32464));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 48u, (r2 + -32416));
    f10.d = (f31.d - f10.d);
    f9.d = (f31.d * f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 104u, (r2 + -32360));
    f4.d = (f4.d + f5.d);
    f5.d = (f8.d + f9.d);
    f4.d = (f31.d * f4.d);
    f5.d = (f31.d * f5.d);
    f3.d = (f3.d + f4.d);
    f8.d = (f1.d + f11.d);
    f4.d = (f7.d + f5.d);
    f3.d = (f31.d * f3.d);
    f4.d = (f31.d * f4.d);
    f3.d = (f2.d + f3.d);
    f5.d = (f10.d / f8.d);
    f2.d = (f6.d + f4.d);
    f2.d = (f31.d * f2.d);
    f2.d = (f2.d / f3.d);
    f1.d = (f2.d * f1.d);
    f1.d = (f5.d + f1.d);
    f1.d = (f11.d + f1.d);
    f1.d = (f0.d * f1.d);
}

loc_80017D20:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0001FFF fpr_write=0xC0001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80017A74 func_80017A74 preserves=false fpr_mask=0xC0000000
