#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B45B0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r29_psq_tmp_7 = 0;
    uint32_t r29_psq_tmp_8 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B45B0;

loc_807B45B0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r5 = 0x809C0000u;
    r29 = r3;
    r28 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32((r5 + 6392));
    r30 = r4;
    r28 = (r28 + 24736);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80590100
    // inline leaf 0x80591344 (13 guest instruction(s))
}

loc_inl2_0x80591344:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 1;
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 & 258);
}

loc_inl2_0x80591358:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8059135C:
{
    r4 = 34340864;
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r4 + 24576);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80591370:
{
    r3 = 0;
    goto loc_inl2_cont_80591344;
}

loc_inl2_return:
{
}

loc_inl2_cont_80591344:
{
    // end of inlined leaf 0x80591344
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807B45E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B45F4;
    }
}

loc_807B45EC:
{
    r3 = 0;
    goto loc_807B47F8;
}

loc_807B45F4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = (r30 * 584);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r26 = (r3 + r0);
    r3 = r26;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r4 = (r1 + 20);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 68);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r29 + 682));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_2 = (r29 + 76);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_807B4634:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_1, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B4660;
    }
}

loc_807B4644:
{
    r3 = MemoryInline::FlatRead8((r26 + 68));
    r4 = 12;
    r0 = MemoryInline::FlatRead8((r29 + 476));
}

loc_807B4654:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_807B465C;
    }
}

loc_807B4658:
{
    r4 = r30;
}

loc_807B465C:
{
    MemoryInline::FlatWrite8((r29 + 682), static_cast<uint8_t>(r4));
}

loc_807B4660:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r29 + 682));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 44));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
}

loc_807B4678:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807B4680;
    }
}

loc_807B467C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 48));
}

loc_807B4680:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B469C:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_807B46A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807B46B8;
    }
}

loc_807B46A8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r30));
}

loc_807B46AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B46B8;
    }
}

loc_807B46B0:
{
    r3 = 0;
    goto loc_807B47F8;
}

loc_807B46B8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B46C4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807B46D4;
    }
}

loc_807B46C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 56));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B46D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B46E4;
    }
}

loc_807B46D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r30));
}

loc_807B46D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B46E4;
    }
}

loc_807B46DC:
{
    r3 = 0;
    goto loc_807B47F8;
}

loc_807B46E4:
{
    r30 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 52));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f1.d));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(PPC_PsFromScalarInline(f2.d), PPC_PsFromScalarInline(f2.d), f1.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f1.d, f1.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f2.d), f0.d);
}

loc_807B4708:
{
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B4710:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B4718;
    }
}

loc_807B4714:
{
    goto loc_807B47D0;
}

loc_807B4718:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_3 = (r29 + 480);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_3));
    r27 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_4 = (r29 + 68);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_4));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 60));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_5 = (r29 + 488);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_6 = (r29 + 76);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r27, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f3.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_1 = (r27 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r27_psq_tmp_1, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085110u>(ctx);
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
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_2 = (r27 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r27_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r30));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r27));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f4.d, f3.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f3.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f2.d), f0.d);
}

loc_807B4768:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1);
}

loc_807B4770:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B47C0;
    }
}

loc_807B4774:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    f2.d = PpcFmulsInline(PPC_PsToScalarInline(f2.d), PPC_PsToScalarInline(f2.d));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 16));
    PpcSetPairedFprInline(f6, PPC_PsMaddInline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f0.d), f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(PPC_PsFromScalarInline(f4.d), PPC_PsFromScalarInline(f4.d), f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f6.d, f5.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f3.d, f3.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f6.d), PPC_PsToScalarInline(f4.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807B47B8:
{
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1);
}

loc_807B47C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B47C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B47D0;
    }
}

loc_807B47C8:
{
    r3 = 0;
    goto loc_807B47F8;
}

loc_807B47D0:
{
    MemoryInline::FlatWrite32((r29 + 640), r26);
    r0 = 1;
    r3 = 1;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r29 + 668), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 672), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 676), f0.d);
    MemoryInline::FlatWrite8((r29 + 680), static_cast<uint8_t>(r0));
}

loc_807B47F8:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC00001F gpr_write=0xFC00083B gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B45B0 func_807B45B0 preserves=true fpr_mask=0x00000000
