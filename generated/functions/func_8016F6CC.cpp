#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016F6CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016F6CC;

loc_8016F6CC:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r0 = 1127219200;
    f3.d = MemoryInline::FlatReadFloat64((r2 + -26792));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26800));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    r30 = r29;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f28.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r0 = (r28 + -1);
    r4 = (r3 & 511);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r31 = (r31_rot_0 & -256);
    r3 = PPC_Divwu(static_cast<uint32_t>(r31), static_cast<uint32_t>(r4));
}

loc_8016F760:
{
    r3 = (r3 + 1);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(128))) {
        goto loc_8016F794;
    }
}

loc_8016F768:
{
}

loc_8016F76C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(256))) {
        goto loc_8016F794;
    }
}

loc_8016F770:
{
    goto loc_8016F778;
}

loc_8016F774:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_2 & 2147483647);
}

loc_8016F778:
{
    r0 = (r4 & 1);
}

loc_8016F77C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016F774;
    }
}

loc_8016F780:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r28), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r28 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8016F794;
    }
}

loc_8016F790:
{
    r3 = (r3 + 1);
}

loc_8016F794:
{
}

loc_8016F798:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1024))) {
        goto loc_8016F7A0;
    }
}

loc_8016F79C:
{
    r3 = 1024;
}

loc_8016F7A0:
{
    f31.d = MemoryInline::FlatReadFloat64((r2 + -26792));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -26800));
    goto loc_8016F820;
}

loc_8016F7AC:
{
    r30 = (r30 + -1);
    MemoryInline::FlatWriteRam32((r1 + 20), r28);
    MemoryInline::FlatWriteRam32((r1 + 12), r30);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f28.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r4 = (r3 & 511);
    r3 = PPC_Divwu(static_cast<uint32_t>(r31), static_cast<uint32_t>(r4));
}

loc_8016F7E0:
{
    r3 = (r3 + 1);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(128))) {
        goto loc_8016F814;
    }
}

loc_8016F7E8:
{
}

loc_8016F7EC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(256))) {
        goto loc_8016F814;
    }
}

loc_8016F7F0:
{
    goto loc_8016F7F8;
}

loc_8016F7F4:
{
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_6 & 2147483647);
}

loc_8016F7F8:
{
    r0 = (r4 & 1);
}

loc_8016F7FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016F7F4;
    }
}

loc_8016F800:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r28), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r28 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8016F814;
    }
}

loc_8016F810:
{
    r3 = (r3 + 1);
}

loc_8016F814:
{
}

loc_8016F818:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1024))) {
        goto loc_8016F820;
    }
}

loc_8016F81C:
{
    r3 = 1024;
}

loc_8016F820:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r29));
}

loc_8016F824:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8016F7AC;
    }
}

loc_8016F828:
{
    f29.d = f28.d;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -26792));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -26800));
    goto loc_8016F8B0;
}

loc_8016F838:
{
    r30 = (r30 + 1);
    MemoryInline::FlatWriteRam32((r1 + 20), r28);
    f29.d = f28.d;
    MemoryInline::FlatWriteRam32((r1 + 12), r30);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f30.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f28.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r4 = (r3 & 511);
    r3 = PPC_Divwu(static_cast<uint32_t>(r31), static_cast<uint32_t>(r4));
}

loc_8016F870:
{
    r3 = (r3 + 1);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(128))) {
        goto loc_8016F8A4;
    }
}

loc_8016F878:
{
}

loc_8016F87C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(256))) {
        goto loc_8016F8A4;
    }
}

loc_8016F880:
{
    goto loc_8016F888;
}

loc_8016F884:
{
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_10 & 2147483647);
}

loc_8016F888:
{
    r0 = (r4 & 1);
}

loc_8016F88C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016F884;
    }
}

loc_8016F890:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r28), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r28 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8016F8A4;
    }
}

loc_8016F8A0:
{
    r3 = (r3 + 1);
}

loc_8016F8A4:
{
}

loc_8016F8A8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1024))) {
        goto loc_8016F8B0;
    }
}

loc_8016F8AC:
{
    r3 = 1024;
}

loc_8016F8B0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r29));
}

loc_8016F8B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8016F838;
    }
}

loc_8016F8B8:
{
    f1.d = f29.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 88u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r1 + 48));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 36));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 32));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000001F gpr_write=0xF000001B gpr_return=0x00000018 fpr_read=0xF000001F fpr_write=0xF000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016F6CC func_8016F6CC preserves=false fpr_mask=0xF0000000
