#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023A5C4(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023A5C4;

loc_8023A5C4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    f31.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
    r30 = r5;
    f4.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24496));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
    r28 = r3;
    r29 = r4;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8023A64C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8023A658;
    }
}

loc_8023A650:
{
    f1.d = f0.d;
    goto loc_8023A668;
}

loc_8023A658:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24492));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8023A660:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8023A668;
    }
}

loc_8023A664:
{
    f1.d = f0.d;
}

loc_8023A668:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -24488));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8023A670:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8023A680;
    }
}

loc_8023A674:
{
    f1.d = (-(f1.d));
    r31 = 1;
    goto loc_8023A684;
}

loc_8023A680:
{
    r31 = 0;
}

loc_8023A684:
{
    ctx->lr = 0x8023A688u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F8C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f30.d = f1.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24504));
    f2.d = f1.d;
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8023A69C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8023A6A4;
    }
}

loc_8023A6A0:
{
    goto loc_8023A6A8;
}

loc_8023A6A4:
{
    f2.d = (-(f1.d));
}

loc_8023A6A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24480));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8023A6B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8023A6C0;
    }
}

loc_8023A6B4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24496));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    goto loc_8023A6E4;
}

loc_8023A6C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24496));
    f29.d = PpcFmulsInline(f31.d, f30.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f29.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f30.d = PpcFmulsInline(f31.d, f1.d);
    f1.d = f29.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f31.d = PpcFmulsInline(f31.d, f1.d);
}

loc_8023A6E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8023A6E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023A6F0;
    }
}

loc_8023A6EC:
{
    f31.d = (-(f31.d));
}

loc_8023A6F0:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f7.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f6.d = PpcFmulsInline(f31.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f5.d = PpcFmulsInline(f30.d, f1.d);
    f4.d = PpcFmulsInline(f31.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f3.d = PpcFmulsInline(f30.d, f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f2.d = PpcFmulsInline(f31.d, f2.d);
    MemoryInline::FlatWriteFloat32(r30, f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f1.d = PpcFmulsInline(f30.d, f1.d);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 72u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r1 + 32));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 28));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 16));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0003FFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0xE0001FFF fpr_write=0xE0001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8023A5C4 func_8023A5C4 preserves=false fpr_mask=0xE0000000
