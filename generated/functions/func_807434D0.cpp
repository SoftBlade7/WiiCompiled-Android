#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8073F4D4_statefree(uint32_t);

extern "C" void func_807434D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_807435C4_loc_0 = 0;
    uint32_t addr_lfsx_807435C8_loc_0 = 0;
    uint32_t addr_lfsx_80743618_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807434D0;

loc_807434D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r30 = 0x809C0000u;
    r28 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    r29 = 0x808D0000u;
    f31.d = f1.d;
    r28 = (r28 + 10520);
    r27 = MemoryInline::FlatRead32((r3 + 132));
    r29 = (r29 + -19576);
    r26 = MemoryInline::FlatRead32((r27 + 332));
    r31 = MemoryInline::FlatRead32((r27 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80743538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807436EC;
    }
}

loc_8074353C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80743540:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807436EC;
    }
}

loc_80743544:
{
    r3 = r26;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8073F4D4u) && KnownTranslatedCpuCall<0x8073F4D4u>::kAvailable && !KnownTranslatedCpuCall<0x8073F4D4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8073F4D4u>()) {
        const auto state_free_result_8073F4D4_152A = func_8073F4D4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8073F4D4_152A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
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
        ctx->fpr[5] = f5;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8073F4D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r26 = ctx->gpr[26];
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
        f5 = ctx->fpr[5];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = 0x809C0000u;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & 1020);
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r0 = MemoryInline::FlatRead16((r29 + 124));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_1 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    r3 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8074356C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807436EC;
    }
}

loc_80743570:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 136));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r26 + 32));
    f0.d = (-(f0.d));
    f28.d = MemoryInline::FlatReadFloat32((r28 + 540));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f27.d = f28.d;
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_80743590:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807436EC;
    }
}

loc_80743594:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80743598:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80743610;
    }
}

loc_8074359C:
{
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    // inline leaf 0x80739540 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80739540
    f1.d = MemoryInline::FlatReadFloat32((r29 + 128));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 132));
    r4 = (r29 + 80);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f1.d));
    r3 = (r29 + 92);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    addr_lfsx_807435C4_loc_0 = (r4 + r0);
    f4.d = MemoryInline::FlatReadFloat32(addr_lfsx_807435C4_loc_0);
    addr_lfsx_807435C8_loc_0 = (r3 + r0);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_807435C8_loc_0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_807435D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807435E0;
    }
}

loc_807435D8:
{
    f3.d = f0.d;
    goto loc_807435F0;
}

loc_807435E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_807435E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807435F0;
    }
}

loc_807435EC:
{
    f3.d = f0.d;
}

loc_807435F0:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 544));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 548));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f28.d = PpcFmulsInline(f1.d, f29.d);
    f27.d = PpcFmulsInline(f0.d, f29.d);
    goto loc_8074361C;
}

loc_80743610:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r29 + 104);
    addr_lfsx_80743618_loc_0 = (r3 + r0);
    f29.d = MemoryInline::FlatReadFloat32(addr_lfsx_80743618_loc_0);
}

loc_8074361C:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x805910B0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    // end of inlined leaf 0x805910B0
    r26 = MemoryInline::FlatRead32((r31 + 12));
    f30.d = f1.d;
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80743644u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    ctx->fpr[5] = f5;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
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
    f5 = ctx->fpr[5];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 12), f0.d);
    r3 = MemoryInline::FlatRead32((r27 + 244));
}

loc_80743664:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807436A4;
    }
}

loc_80743668:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80743670:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807436A4;
    }
}

loc_80743674:
{
    r26 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8074368Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    ctx->fpr[5] = f5;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
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
    f5 = ctx->fpr[5];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f28.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 12), f0.d);
}

loc_807436A4:
{
    r3 = MemoryInline::FlatRead32((r27 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807436AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807436EC;
    }
}

loc_807436B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    SetCRFloatResident(cr, 0, f27.d, f0.d);
}

loc_807436B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807436EC;
    }
}

loc_807436BC:
{
    r26 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x807436D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    ctx->fpr[5] = f5;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
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
    f5 = ctx->fpr[5];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f27.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 12), f0.d);
}

loc_807436EC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 112u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 32);
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 32));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_1, 108u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    ctx->fpr[5] = f5;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807434D0 func_807434D0 preserves=false fpr_mask=0xF8000000
