#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009CDD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8009CDD0;

loc_8009CDD0:
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
    f0.d = f1.d;
    f1.d = f2.d;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    f31.d = f3.d;
    r31 = r5;
    f30.d = f4.d;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    f2.d = f0.d;
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x8009CE1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[7] = f7;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009CF50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -28220), 0, 68u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -28184));
    f6.d = (-(f30.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -28176));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f30.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f30.d));
    SetCRFloatResident(cr, 0, f3.d, f5.d);
}

loc_8009CE38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CE74;
    }
}

loc_8009CE3C:
{
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_8009CE40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CE4C;
    }
}

loc_8009CE44:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -28180));
    goto loc_8009CF10;
}

loc_8009CE4C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28216));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28220));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_8009CF10;
}

loc_8009CE74:
{
    SetCRFloatResident(cr, 0, f3.d, f6.d);
}

loc_8009CE78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CE84;
    }
}

loc_8009CE7C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -28168));
    goto loc_8009CF10;
}

loc_8009CE84:
{
    SetCRFloatResident(cr, 0, f3.d, f30.d);
}

loc_8009CE88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CECC;
    }
}

loc_8009CE8C:
{
    SetCRFloatResident(cr, 0, f6.d, f30.d);
}

loc_8009CE90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CE9C;
    }
}

loc_8009CE94:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28216));
    goto loc_8009CF10;
}

loc_8009CE9C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28220));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f30.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -28168));
    f1.d = PpcFmulsInline(f6.d, f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r2 + -28156));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_8009CF10;
}

loc_8009CECC:
{
    SetCRFloatResident(cr, 0, f3.d, f7.d);
}

loc_8009CED0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CEDC;
    }
}

loc_8009CED4:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28220));
    goto loc_8009CF10;
}

loc_8009CEDC:
{
    SetCRFloatResident(cr, 0, f7.d, f2.d);
}

loc_8009CEE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CEEC;
    }
}

loc_8009CEE4:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -28164));
    goto loc_8009CF10;
}

loc_8009CEEC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28216));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f2.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28220));
    f0.d = PpcFmulsInline(f7.d, f0.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_8009CF10:
{
    f2.d = PpcFmulsInline(f2.d, f31.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28216));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32(r30, f1.d);
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[7] = f7;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00003FE gpr_write=0xE00003FB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8009CDD0 func_8009CDD0 preserves=false fpr_mask=0xC0000000
