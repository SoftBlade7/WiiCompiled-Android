#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A0A68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807A0A68;

loc_807A0A68:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    r5 = (r5 + 12104);
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 20992);
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 40), r30);
    r30 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 36), r29);
    r29 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 160u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r3 + 92));
    r0 = (r0 * 116);
    r4 = (r5 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 108));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r3 + 100));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r3 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 12), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r3 + 124));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A0AD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A0B40;
    }
}

loc_807A0AD4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r3 + 120));
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r4 + 12088));
    r0 = (r0 & 32768);
}

loc_807A0AE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A0AF0;
    }
}

loc_807A0AE8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 104u, (r3 + 108));
    goto loc_807A0AF4;
}

loc_807A0AF0:
{
    r0 = 12;
}

loc_807A0AF4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r4 = 0;
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 1756));
}

loc_807A0B0C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807A0B28;
    }
}

loc_807A0B10:
{
}

loc_807A0B14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807A0B24;
    }
}

loc_807A0B18:
{
    r0 = MemoryInline::FlatRead32((r5 + 1760));
}

loc_807A0B20:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_807A0B28;
    }
}

loc_807A0B24:
{
    r4 = 1;
}

loc_807A0B28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807A0B2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A0B40;
    }
}

loc_807A0B30:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_807A0B40:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 156u, (r3 + 160));
    r4 = (r1 + 8);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x807A0B58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 4), 0, 152u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 116u, (r29 + 120));
    r0 = (r0 & 16384);
}

loc_807A0B60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A0B6C;
    }
}

loc_807A0B64:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r29 + 72));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
}

loc_807A0B6C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 120u, (r29 + 124));
    r4 = 0;
    r0 = (r0 & 64);
}

loc_807A0B78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A0BAC;
    }
}

loc_807A0B7C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 116u, (r29 + 120));
    r0 = (r0 & 4);
}

loc_807A0B84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A0BAC;
    }
}

loc_807A0B88:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 88));
}

loc_807A0BA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A0BAC;
    }
}

loc_807A0BA8:
{
    r4 = 1;
}

loc_807A0BAC:
{
}

loc_807A0BB0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807A0BF0;
    }
}

loc_807A0BB4:
{
    r3 = r30;
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f2.d);
    // end of inlined leaf 0x80199D04
    r0 = MemoryInline::ReadResolved32(guest_range_1, 120u, (r29 + 124));
    r0 = (r0 & 8);
}

loc_807A0BC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A0BD0;
    }
}

loc_807A0BC8:
{
    r5 = (r29 + 140);
    goto loc_807A0BD4;
}

loc_807A0BD0:
{
    r5 = MemoryInline::ReadResolved32(guest_range_1, 148u, (r29 + 152));
}

loc_807A0BD4:
{
    f1.d = MemoryInline::FlatReadFloat32(r5);
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r4 = r30;
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    // inline leaf 0x8019A414 (19 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 24);
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 40);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f4.d);
    PpcSetPairedFprInline(f5, PPC_PsSum1Inline(PPC_PsFromScalarInline(f1.d), f5.d, f5.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 16);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0, f5.d);
    PpcSetPairedFprInline(f7, PPC_PsSum1Inline(PPC_PsFromScalarInline(f2.d), f7.d, f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 32);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f6.d);
    PpcSetPairedFprInline(f8, PPC_PsSum1Inline(PPC_PsFromScalarInline(f3.d), f8.d, f8.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2, f7.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3, f9.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f8.d);
    // end of inlined leaf 0x8019A414
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f7.d = PPC_PsToScalarInline(f7.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    goto loc_807A0C84;
}

loc_807A0BF0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 116u, (r29 + 120));
    r0 = (r3 & 67108864);
}

loc_807A0BF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A0C84;
    }
}

loc_807A0BFC:
{
    r0 = (r3 & 8);
}

loc_807A0C00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A0C84;
    }
}

loc_807A0C04:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807A0C10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A0C84;
    }
}

loc_807A0C14:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807A0C30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A0C7C;
    }
}

loc_807A0C34:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f3.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f4.d);
    f0.d = (-(f4.d));
    MemoryInline::FlatWriteFloat32((r30 + 36), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f3.d);
    MemoryInline::FlatWriteFloat32(r30, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    goto loc_807A0C84;
}

loc_807A0C7C:
{
    r3 = r30;
    ctx->lr = 0x807A0C84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x807DD100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
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
}

loc_807A0C84:
{
    r31 = MemoryInline::FlatRead32((r29 + 160));
    r29 = 0;
}

loc_807A0C8C:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807A0C98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A0CA8;
    }
}

loc_807A0C9C:
{
    r5 = r30;
    r4 = 0;
    ctx->lr = 0x807A0CA8u;
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
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_807A0CA8:
{
    r29 = (r29 + 1);
    r31 = (r31 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(2));
}

loc_807A0CB4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807A0C8C;
    }
}

loc_807A0CB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A0A68 func_807A0A68 preserves=true fpr_mask=0x00000000
