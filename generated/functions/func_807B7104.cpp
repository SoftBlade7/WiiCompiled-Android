#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B7104(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B7104;

loc_807B7104:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    f27.d = f2.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_807B7148:
{
    r30 = 0x808A0000u;
    f28.d = f3.d;
    r31 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = (r30 + 25040);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B7188;
    }
}

loc_807B7168:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r3 = r27;
    f3.d = MemoryInline::FlatReadFloat32((r30 + 8));
    r5 = (r1 + 8);
    r4 = 1;
    ctx->lr = 0x807B7180u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80794E88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    f29.d = f1.d;
    goto loc_807B71DC;
}

loc_807B7188:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 160);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 116);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 156);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 112);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f2.d, f3.d, f4.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    f0.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807B71B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B71BC;
    }
}

loc_807B71B8:
{
    goto loc_807B71C0;
}

loc_807B71BC:
{
    f1.d = f0.d;
}

loc_807B71C0:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 20));
    r3 = r27;
    f3.d = MemoryInline::FlatReadFloat32((r30 + 8));
    r5 = (r1 + 8);
    r4 = 1;
    ctx->lr = 0x807B71D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80795030u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    f29.d = f1.d;
    f4.d = PPC_PsToScalarInline(f4.d);
}

loc_807B71DC:
{
    r0 = MemoryInline::FlatRead8((r31 + 108));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = (r0 * 584);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807B7200:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f31.d = MemoryInline::FlatReadFloat32((r27 + 168));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B7234;
    }
}

loc_807B7220:
{
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807B7224:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B7234;
    }
}

loc_807B7228:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
}

loc_807B7234:
{
    f30.d = MemoryInline::FlatReadFloat32((r27 + 148));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_807B7240:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B7284;
    }
}

loc_807B7244:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD718u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x805556A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    xer = ctx->xer;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD718u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x805556A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    xer = ctx->xer;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
}

loc_807B7284:
{
    r3 = (r1 + 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807B728C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f29.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f29.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B7304;
    }
}

loc_807B72A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r27 + 160));
    f2.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B72BC:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f2.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B72CC;
    }
}

loc_807B72C4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 48));
    goto loc_807B72D0;
}

loc_807B72CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
}

loc_807B72D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 160));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807B72E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B72E8;
    }
}

loc_807B72E4:
{
    goto loc_807B72FC;
}

loc_807B72E8:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 60));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807B72F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B72F8;
    }
}

loc_807B72F4:
{
    goto loc_807B72FC;
}

loc_807B72F8:
{
    f2.d = f0.d;
}

loc_807B72FC:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    goto loc_807B732C;
}

loc_807B7304:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 160));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B7310:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B731C;
    }
}

loc_807B7314:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 64));
    goto loc_807B7320;
}

loc_807B731C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
}

loc_807B7320:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
}

loc_807B732C:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 100));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807B7334:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 84), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 88), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B7394;
    }
}

loc_807B7370:
{
    r3 = r27;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    goto loc_807B741C;
}

loc_807B7394:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807B739C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B741C;
    }
}

loc_807B73A0:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 60));
    SetCRFloatResident(cr, 0, f30.d, f3.d);
}

loc_807B73A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B741C;
    }
}

loc_807B73AC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B73B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B741C;
    }
}

loc_807B73BC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_1 = (r27 + 100);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_1));
    r3 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_2 = (r27 + 112);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_2));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_3 = (r27 + 108);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_4 = (r27 + 120);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f1.d));
    f2.d = PpcFmulsInline(f0.d, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_2, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    MemoryInline::FlatWriteFloat32((r31 + 68), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 72), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
}

loc_807B741C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B7428:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B743C;
    }
}

loc_807B742C:
{
    MemoryInline::FlatWriteFloat32((r31 + 104), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 100), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 96), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 92), f0.d);
}

loc_807B743C:
{
    r3 = (r28 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r6 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat64((r30 + 80));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = MemoryInline::FlatRead32((r31 + 120));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r0 = (r0 & -14337);
    r3 = MemoryInline::FlatRead32((r31 + 164));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 416), f0.d);
    r6 = (r6 + 9936);
    r5 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r31 + 376), r4);
    MemoryInline::FlatWrite32((r31 + 372), r5);
    r4 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite32((r31 + 380), r4);
    MemoryInline::FlatWrite32((r31 + 120), r0);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF7F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807B7104 func_807B7104 preserves=false fpr_mask=0xF8000000
