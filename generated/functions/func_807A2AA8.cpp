#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A2AA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_10 = 0;
    uint32_t r31_psq_tmp_11 = 0;
    uint32_t r31_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_4 = 0;
    uint32_t r31_psq_tmp_5 = 0;
    uint32_t r31_psq_tmp_6 = 0;
    uint32_t r31_psq_tmp_7 = 0;
    uint32_t r31_psq_tmp_8 = 0;
    uint32_t r31_psq_tmp_9 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r7_psq_tmp_0 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807A2AA8;

loc_807A2AA8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r30 = 0x808A0000u;
    r31 = r3;
    r28 = r4;
    r30 = (r30 + 20992);
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r27 = (r27_rot_0 & 1);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 1);
    // inline leaf 0x807D2DDC (2 guest instruction(s))
    r3 = 4;
    // end of inlined leaf 0x807D2DDC
    r0 = MemoryInline::FlatRead32((r31 + 352));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807A2AE4:
{
    r3 = (r0 - r3);
    r26 = (r3 + 2);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A2AF4;
    }
}

loc_807A2AF0:
{
    goto loc_807A2AF8;
}

loc_807A2AF4:
{
    r28 = (r31 + 188);
}

loc_807A2AF8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_0 = (r31 + 68);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_0));
    r29 = (r1 + 56);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    r5 = r29;
    r3 = (r31 + 80);
    r4 = (r31 + 200);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f0.d);
    PpcSetPairedFprInline(f3, f0.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_1 = (r31 + 76);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_0 = (r28 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_0 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_0, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_2 = (r31 + 140);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_3 = (r31 + 148);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_4 = (r31 + 140);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_4, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r29_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_5 = (r31 + 148);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_5, f0.d);
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
    InvokeDirectCpu<0x807DE858u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r6 = MemoryInline::FlatRead32((r1 + 56));
    r3 = r29;
    r5 = MemoryInline::FlatRead32((r1 + 60));
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x807A2B70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r7 = MemoryInline::FlatRead32((r31 + 152));
    r28 = (r1 + 20);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_6 = (r31 + 140);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_6));
    r3 = r28;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r6 = r28;
    r4 = (r31 + 200);
    r5 = (r1 + 44);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r28, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_0 = (r7 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_7 = (r31 + 148);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_7));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_1 = (r28 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r28_psq_tmp_1, f0.d);
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
    InvokeDirectCpu<0x807DE8B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = r28;
    r4 = r29;
    r6 = r28;
    r5 = (r1 + 32);
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
    InvokeDirectCpu<0x807DE8B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r1 + 32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_8 = (r31 + 140);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 160u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r30 + 140));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_9 = (r31 + 148);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_10 = (r31 + 140);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_10, f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_0));
    SetCRFloatResident(cr, 0, f4.d, f5.d);
}

loc_807A2BEC:
{
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_11 = (r31 + 148);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_11, f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A2C00;
    }
}

loc_807A2BF8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r30 + 56));
    f0.d = PPC_PsToScalarInline(f0.d);
    goto loc_807A2C34;
}

loc_807A2C00:
{
    r3 = (r26 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 152u, (r30 + 152));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 8));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r30 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_807A2C34:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r30 + 56));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807A2C3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A2C44;
    }
}

loc_807A2C40:
{
    goto loc_807A2C58;
}

loc_807A2C44:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 4));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807A2C4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A2C54;
    }
}

loc_807A2C50:
{
    goto loc_807A2C58;
}

loc_807A2C54:
{
    f4.d = f0.d;
}

loc_807A2C58:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_807A2C60:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 140));
    f3.d = PpcFmulsInline(f0.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 148));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r31 + 140), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 144), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 148), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A2CA4;
    }
}

loc_807A2C9C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r30 + 144));
    goto loc_807A2CA8;
}

loc_807A2CA4:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r30 + 148));
}

loc_807A2CA8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_807A2CB0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 140));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 140), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A2CCC;
    }
}

loc_807A2CC4:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r30 + 144));
    goto loc_807A2CD0;
}

loc_807A2CCC:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r30 + 148));
}

loc_807A2CD0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_807A2CD8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 144));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 144), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A2CF4;
    }
}

loc_807A2CEC:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r30 + 144));
    goto loc_807A2CF8;
}

loc_807A2CF4:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r30 + 148));
}

loc_807A2CF8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(44));
}

loc_807A2D00:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 148));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 148), f0.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807A2DD0;
    }
}

loc_807A2D14:
{
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r28 = 0;
    r26 = 0;
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r31 + 124), r0);
}

loc_807A2D28:
{
    r0 = MemoryInline::FlatRead32((r31 + 156));
}

loc_807A2D30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A2D74;
    }
}

loc_807A2D34:
{
    r3 = (r0 + r26);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_807A2D48:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807A2D58;
    }
}

loc_807A2D4C:
{
}

loc_807A2D50:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_807A2D58;
    }
}

loc_807A2D54:
{
    r0 = 0;
}

loc_807A2D58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A2D5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A2D68;
    }
}

loc_807A2D60:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_807A2D6C;
}

loc_807A2D68:
{
    r3 = 0;
}

loc_807A2D6C:
{
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072930u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_807A2D74:
{
    r0 = MemoryInline::FlatRead32((r31 + 168));
}

loc_807A2D7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A2DC0;
    }
}

loc_807A2D80:
{
    r3 = (r0 + r26);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_807A2D94:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807A2DA4;
    }
}

loc_807A2D98:
{
}

loc_807A2D9C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_807A2DA4;
    }
}

loc_807A2DA0:
{
    r0 = 0;
}

loc_807A2DA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A2DA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A2DB4;
    }
}

loc_807A2DAC:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_807A2DB8;
}

loc_807A2DB4:
{
    r3 = 0;
}

loc_807A2DB8:
{
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072930u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_807A2DC0:
{
    r28 = (r28 + 1);
    r26 = (r26 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_807A2DCC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807A2D28;
    }
}

loc_807A2DD0:
{
    r11 = (r1 + 112);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A2AA8 func_807A2AA8 preserves=true fpr_mask=0x00000000
