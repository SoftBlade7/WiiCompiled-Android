#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F661C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F661C;

loc_806F661C:
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
    f30.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F6640:
{
    f31.d = f2.d;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 2976);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F6680;
    }
}

loc_806F6664:
{
    r5 = 0x808A0000u;
    r4 = 324;
    r5 = (r5 + 3148);
    r3 = (r5 + 161);
    r5 = (r5 + 175);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x806F6680u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806F6680:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_806F6684:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F66A4;
    }
}

loc_806F6688:
{
    r5 = 0x808A0000u;
    r4 = 325;
    r5 = (r5 + 3148);
    r3 = (r5 + 213);
    r5 = (r5 + 227);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x806F66A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806F66A4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 20));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F66AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F66D0;
    }
}

loc_806F66B0:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f1.d = PpcFmulsInline(f30.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_806F67D0;
}

loc_806F66D0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F66D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F6700;
    }
}

loc_806F66DC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 44));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_806F67D0;
}

loc_806F6700:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    SetCRFloatResident(cr, 0, f30.d, f3.d);
}

loc_806F6708:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F6730;
    }
}

loc_806F670C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 44));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_806F67D0;
}

loc_806F6730:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F6738:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F6760;
    }
}

loc_806F673C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_806F67D0;
}

loc_806F6760:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 44));
    SetCRFloatResident(cr, 0, f30.d, f2.d);
}

loc_806F6768:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F678C;
    }
}

loc_806F676C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_806F67D0;
}

loc_806F678C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F6794:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F67B4;
    }
}

loc_806F6798:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f1.d = PpcFmulsInline(f30.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_806F67D0;
}

loc_806F67B4:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f1.d = PpcFmulsInline(f30.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_806F67D0:
{
    r3 = 0x809C0000u;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8928));
    r3 = 0x809C0000u;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f31.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8980));
    f5.d = PpcFmulsInline(f5.d, f3.d);
    f4.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f31.d);
    f3.d = PpcFmulsInline(f4.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r29, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F661C func_806F661C preserves=false fpr_mask=0xC0000000
