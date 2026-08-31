#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80037630(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r8_psq_tmp_0 = 0;
    uint32_t r8_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_2 = 0;
    uint32_t r9_psq_tmp_0 = 0;
    uint32_t r9_psq_tmp_1 = 0;
    uint32_t r9_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80037630;

loc_80037630:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r1 + 276), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 256u, (r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 240u, (r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r0 = 1127219200;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30752));
    MemoryInline::WriteResolved32(guest_range_0, 236u, (r1 + 236), r31);
    r31 = r7;
    MemoryInline::WriteResolved32(guest_range_0, 232u, (r1 + 232), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r1 + 228), r29);
    r29 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 104));
    MemoryInline::WriteResolved32(guest_range_0, 200u, (r1 + 200), r0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80037678:
{
    MemoryInline::FlatWriteRam32((r1 + 208), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003769C;
    }
}

loc_80037680:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_0 = (r8 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0, f1.d);
    goto loc_800376A8;
}

loc_8003769C:
{
    MemoryInline::FlatWriteFloat32(r4, f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f1.d);
}

loc_800376A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30752));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 108));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800376B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800376F0;
    }
}

loc_800376B8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r9));
    r3 = (r1 + 44);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r9_psq_tmp_1 = (r9 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r9_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f1.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f3.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f3.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f0.d);
}

loc_800376F0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30752));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 112));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800376FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003785C;
    }
}

loc_80037700:
{
    r3 = 196608;
    r0 = MemoryInline::FlatRead32((r5 + 236));
    r7 = (r3 + 17405);
    f6.d = MemoryInline::FlatReadFloat64((r2 + -30728));
    r6 = (r0 * r7);
    f5.d = MemoryInline::FlatReadFloat32((r2 + -30748));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -30740));
    r3 = (r1 + 28);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30744));
    r4 = (r1 + 24);
    r6 = (r6 + 2555904);
    r0 = (r6 + -24893);
    MemoryInline::FlatWrite32((r5 + 236), r0);
    r6 = (r0 * r7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    r6 = (r6 + 2555904);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    r0 = (r6 + -24893);
    MemoryInline::FlatWrite32((r5 + 236), r0);
    r6 = (r0 * r7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f5.d));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r6 = (r6 + 2555904);
    r0 = (r6 + -24893);
    MemoryInline::FlatWrite32((r5 + 236), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f1.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = PpcFmulsInline(f4.d, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f5.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f31.d = PpcFmulsInline(f3.d, f2.d);
    f30.d = PpcFmulsInline(f3.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = f31.d;
    r3 = (r1 + 20);
    r4 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = f30.d;
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 24u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 24));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 20));
        }
    }
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 8));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 112));
    f5.d = PpcFmulsInline(f2.d, f4.d);
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32(r29, f2.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 24));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 20));
        }
    }
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 12));
    f6.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 28));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 112));
    f5.d = PpcFmulsInline(f5.d, f6.d);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 112));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 24));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 16));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
}

loc_8003785C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30752));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 116));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80037868:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800378B0;
    }
}

loc_8003786C:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f3.d = PpcFmulsInline(f1.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32(r29, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 116));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 116));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
}

loc_800378B0:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30752));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 124));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_800378BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80037A34;
    }
}

loc_800378C0:
{
    f6.d = MemoryInline::FlatReadFloat32((r30 + 128));
    SetCRFloatResident(cr, 0, f3.d, f6.d);
}

loc_800378C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80037950;
    }
}

loc_800378CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 132));
    r3 = (r1 + 152);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 140));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800371C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30752));
    r4 = (r1 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30736));
    r5 = r4;
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    r3 = (r1 + 152);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_6));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_3));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_4));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_5));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_6));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_7));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_1, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_2, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = MemoryInline::FlatReadFloat32((r30 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f3.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32(r29, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 124));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 124));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    goto loc_80037A34;
}

loc_80037950:
{
    r3 = 196608;
    r0 = MemoryInline::FlatRead32((r30 + 236));
    r5 = (r3 + 17405);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -30728));
    r4 = (r0 * r5);
    f5.d = MemoryInline::FlatReadFloat32((r2 + -30748));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30740));
    r3 = (r1 + 104);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30744));
    r4 = (r4 + 2555904);
    r0 = (r4 + -24893);
    MemoryInline::FlatWrite32((r30 + 236), r0);
    r4 = (r0 * r5);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    r4 = (r4 + 2555904);
    r0 = (r4 + -24893);
    MemoryInline::FlatWrite32((r30 + 236), r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & 65535);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f5.d));
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f5.d));
    f1.d = PpcFmulsInline(f6.d, f1.d);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800371C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 132));
    r3 = (r1 + 56);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 140));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800371C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    r4 = (r1 + 104);
    r3 = (r1 + 56);
    r5 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 124));
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f3.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32(r29, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 124));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 124));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
}

loc_80037A34:
{
    r0 = MemoryInline::FlatRead8((r30 + 102));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80037AD0;
    }
}

loc_80037A40:
{
    r3 = 196608;
    r4 = MemoryInline::FlatRead32((r30 + 236));
    r3 = (r3 + 17405);
    r0 = (r0 ^ -2147483648);
    r3 = (r4 * r3);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f7.d = MemoryInline::FlatReadFloat64((r2 + -30728));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -30748));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30720));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    r3 = (r3 + 2555904);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r30 + 236), r0);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & 65535);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30732));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f5.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30744));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -30736));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f7.d));
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d / f6.d));
    f3.d = PpcFmulsInline(f3.d, f6.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f3.d = PpcFmulsInline(f5.d, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32(r29, f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
}

loc_80037AD0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 240));
    r31 = MemoryInline::FlatRead32((r1 + 236));
    r30 = MemoryInline::FlatRead32((r1 + 232));
    r0 = MemoryInline::FlatRead32((r1 + 276));
    r29 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xE00003FF gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0xC000DFFF fpr_write=0xC000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80037630 func_80037630 preserves=false fpr_mask=0xC0000000
