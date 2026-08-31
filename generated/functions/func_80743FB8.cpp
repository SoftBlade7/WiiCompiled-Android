#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8073F4D4_statefree(uint32_t);

extern "C" void func_80743FB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80743F4C_loc_0 = 0;
    uint32_t addr_lfsx_80743F50_loc_0 = 0;
    uint32_t addr_lfsx_80743F54_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80743FB8;

loc_80743FB8:
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
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = MemoryInline::FlatRead32((r3 + 20));
    r29 = 0x808D0000u;
    r30 = 0x808A0000u;
    r31 = r3;
    r3 = r27;
    r29 = (r29 + -19208);
    r30 = (r30 + 11072);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8073F4D4u) && KnownTranslatedCpuCall<0x8073F4D4u>::kAvailable && !KnownTranslatedCpuCall<0x8073F4D4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8073F4D4u>()) {
        const auto state_free_result_8073F4D4_EB2 = func_8073F4D4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8073F4D4_EB2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8073F4D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = 0x809C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80744020:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80744044;
    }
}

loc_80744024:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 36), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8074403C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80744044;
    }
}

loc_80744040:
{
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
}

loc_80744044:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r3 = r31;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f4.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 88));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 40), f2.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    r28 = MemoryInline::FlatRead32((r27 + 20));
    f31.d = MemoryInline::FlatReadFloat32((r27 + 36));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f29.d));
    r4 = MemoryInline::FlatRead32((r27 + 24));
    // inline leaf 0x80743F1C (39 guest instruction(s))
}

loc_inl1_0x80743F1C:
{
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r5 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 11072));
    r0 = (r4 + 1);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 28));
    r6 = 0x808D0000u;
    r7 = (r4 + -1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r6 = (r6 + -19176);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_inl1_0x80743F4C:
{
    addr_lfsx_80743F4C_loc_0 = (r6 + r5);
    f4.d = MemoryInline::FlatReadFloat32(addr_lfsx_80743F4C_loc_0);
    addr_lfsx_80743F50_loc_0 = (r6 + r4);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80743F50_loc_0);
    addr_lfsx_80743F54_loc_0 = (r6 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80743F54_loc_0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl1_0x80743F90;
    }
}

loc_inl1_0x80743F5C:
{
    r4 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 11128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    r3 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + -19196));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    goto loc_inl1_cont_80743F1C;
}

loc_inl1_0x80743F90:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + -19196));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl1_cont_80743F1C:
{
    // end of inlined leaf 0x80743F1C
}

loc_80744090:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(1))) {
        goto loc_80744098;
    }
}

loc_80744094:
{
    goto loc_80744130;
}

loc_80744098:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f3.d = MemoryInline::FlatReadFloat32(r30);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_807440A8:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807440F0;
    }
}

loc_807440B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_807440C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807440CC;
    }
}

loc_807440C4:
{
    f4.d = f0.d;
    goto loc_807440D8;
}

loc_807440CC:
{
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_807440D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807440D8;
    }
}

loc_807440D4:
{
    f4.d = f3.d;
}

loc_807440D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f30.d));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    goto loc_80744130;
}

loc_807440F0:
{
    f2.d = (-(f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80744104:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80744110;
    }
}

loc_80744108:
{
    f1.d = f0.d;
    goto loc_8074411C;
}

loc_80744110:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_80744114:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074411C;
    }
}

loc_80744118:
{
    f1.d = f3.d;
}

loc_8074411C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
}

loc_80744130:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 268435456);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80744148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80744154;
    }
}

loc_8074414C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f29.d = PpcFmulsInline(f29.d, f0.d);
}

loc_80744154:
{
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    MemoryInline::FlatWriteFloat32((r3 + 28), f29.d);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 76u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 52u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 32));
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800000A gpr_write=0xF80008FB gpr_return=0x00000018 fpr_read=0xE000001F fpr_write=0xE000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80743FB8 func_80743FB8 preserves=false fpr_mask=0xE0000000
