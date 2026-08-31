#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D0674(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
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
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
    uint32_t r1_psq_tmp_12 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
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
    PPC_FPR f19 = ctx->fpr[19];
    PPC_FPR f20 = ctx->fpr[20];
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805D0674;

loc_805D0674:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -320), 0, 328u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -320), r1);
    r1 = (r1 + -320);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 324u, (r1 + 324), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 304u, (r1 + 304), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 288u, (r1 + 288), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 272u, (r1 + 272), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 256u, (r1 + 256), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 240u, (r1 + 240), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 224u, (r1 + 224), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 208u, (r1 + 208), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 192u, (r1 + 192), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 176u, (r1 + 176), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 160u, (r1 + 160), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 144u, (r1 + 144), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 128u, (r1 + 128), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 112u, (r1 + 112), f19.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_12 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_12, PPC_PsFromScalarInline(f19.d));
    r11 = (r1 + 112);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
    r0 = MemoryInline::FlatRead8((r3 + 21036));
    r4 = 1127219200;
    r29 = 0x80890000u;
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 16), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D0704:
{
    r23 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    r29 = (r29 + 15984);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D0C10;
    }
}

loc_805D0714:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D0CD4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r23 + 21032));
    r3 = 0;
    r4 = MemoryInline::FlatRead32(r23);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r23 + 21032), r0);
    r0 = MemoryInline::FlatRead32((r23 + 4));
    MemoryInline::FlatWrite32((r4 + 20), r0);
    r4 = MemoryInline::FlatRead32(r23);
    r0 = MemoryInline::FlatRead32((r23 + 8));
    MemoryInline::FlatWrite32((r4 + 24), r0);
    r0 = MemoryInline::FlatRead32((r23 + 21024));
    MemoryInline::FlatWrite8((r23 + 21036), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D074C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D0C10;
    }
}

loc_805D0750:
{
    r3 = MemoryInline::FlatRead32(r23);
    r4 = r23;
    f0.d = MemoryInline::FlatReadFloat32((r23 + 88));
    r26 = MemoryInline::FlatRead32((r23 + 21032));
    f1.d = (-(f0.d));
    r27 = MemoryInline::FlatRead32(r3);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 420), 0, 44u, true, false);
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r29 + 420));
    ctr = r26;
}

loc_805D0774:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(0))) {
        goto loc_805D0790;
    }
}

loc_805D0778:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20588));
    SetCRFloatResident(cr, 0, f0.d, f25.d);
}

loc_805D0780:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D0788;
    }
}

loc_805D0784:
{
    f25.d = f0.d;
}

loc_805D0788:
{
    r4 = (r4 + 28);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805D0778;
    }
}

loc_805D0790:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r29 + 420));
    SetCRFloatResident(cr, 0, f25.d, f0.d);
}

loc_805D0798:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D0C10;
    }
}

loc_805D07A0:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805D07A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D07B0;
    }
}

loc_805D07AC:
{
    goto loc_805D0C10;
}

loc_805D07B0:
{
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r29 + 456));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 76));
    f23.d = f24.d;
    f3.d = MemoryInline::FlatReadFloat32((r27 + 80));
    SetCRFloatResident(cr, 0, f25.d, f2.d);
}

loc_805D07C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D07CC;
    }
}

loc_805D07C8:
{
    f24.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f25.d));
}

loc_805D07CC:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_805D07D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D07D8;
    }
}

loc_805D07D4:
{
    f23.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
}

loc_805D07D8:
{
    r3 = 1431633920;
    r4 = MemoryInline::FlatRead8((r27 + 186));
    r0 = (r3 + 21846);
    f22.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r29 + 420));
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r3 + r0);
    r0 = (r0 & 255);
}

loc_805D07FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805D080C;
    }
}

loc_805D0800:
{
}

loc_805D0804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805D081C;
    }
}

loc_805D0808:
{
    goto loc_805D0820;
}

loc_805D080C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r29 + 460));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f0.d));
    goto loc_805D0820;
}

loc_805D081C:
{
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f3.d));
}

loc_805D0820:
{
    r3 = 1431633920;
    r5 = MemoryInline::FlatRead8((r27 + 256));
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r3 + r0);
    r0 = (r0 & 255);
}

loc_805D0840:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805D0850;
    }
}

loc_805D0844:
{
}

loc_805D0848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805D0868;
    }
}

loc_805D084C:
{
    goto loc_805D0874;
}

loc_805D0850:
{
    f1.d = PpcFmulsInline(f23.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r29 + 460));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f0.d));
    goto loc_805D0874;
}

loc_805D0868:
{
    f0.d = PpcFmulsInline(f23.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f0.d));
}

loc_805D0874:
{
    r3 = 1431633920;
    f21.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r29 + 420));
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 3);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
}

loc_805D089C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805D08AC;
    }
}

loc_805D08A0:
{
}

loc_805D08A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805D08BC;
    }
}

loc_805D08A8:
{
    goto loc_805D08C0;
}

loc_805D08AC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r29 + 460));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f21.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
    goto loc_805D08C0;
}

loc_805D08BC:
{
    f21.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f2.d));
}

loc_805D08C0:
{
    SetCRFloatResident(cr, 0, f25.d, f2.d);
}

loc_805D08C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805D0918;
    }
}

loc_805D08C8:
{
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 3);
    r0 = (r5 - r0);
    r0 = (r0 & 255);
}

loc_805D08EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805D08FC;
    }
}

loc_805D08F0:
{
}

loc_805D08F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805D0910;
    }
}

loc_805D08F8:
{
    goto loc_805D0918;
}

loc_805D08FC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f25.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r29 + 460));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f21.d = static_cast<double>(PpcForceSingleValueInline(f21.d + f0.d));
    goto loc_805D0918;
}

loc_805D0910:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f25.d));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f21.d + f0.d));
}

loc_805D0918:
{
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 4u, (r29 + 424));
    r28 = (r23 + 20576);
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r29 + 440));
    r25 = 0;
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r29 + 444));
    r21 = -1;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r29 + 448));
    r22 = 1;
    f26.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r29 + 460));
    r30 = 1431633920;
    goto loc_805D0C08;
}

loc_805D0944:
{
    r0 = MemoryInline::FlatRead8((r27 + 257));
    f20.d = f21.d;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_7 & 3);
}

loc_805D0950:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D0968;
    }
}

loc_805D0954:
{
}

loc_805D0958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805D09C8;
    }
}

loc_805D095C:
{
}

loc_805D0960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_805D09E0;
    }
}

loc_805D0964:
{
    goto loc_805D09F0;
}

loc_805D0968:
{
    r4 = MemoryInline::FlatRead8((r27 + 256));
    r0 = (r30 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 3);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
}

loc_805D098C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805D099C;
    }
}

loc_805D0990:
{
}

loc_805D0994:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805D09B4;
    }
}

loc_805D0998:
{
    goto loc_805D09F0;
}

loc_805D099C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f0.d));
    f0.d = PpcFmulsInline(f24.d, f0.d);
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f20.d = static_cast<double>(PpcForceSingleValueInline(f21.d + f0.d));
    goto loc_805D09F0;
}

loc_805D09B4:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f0.d));
    f0.d = PpcFmulsInline(f24.d, f0.d);
    f20.d = static_cast<double>(PpcForceSingleValueInline(f21.d + f0.d));
    goto loc_805D09F0;
}

loc_805D09C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f0.d));
    f0.d = PpcFmulsInline(f24.d, f0.d);
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f20.d = static_cast<double>(PpcForceSingleValueInline(f21.d + f0.d));
    goto loc_805D09F0;
}

loc_805D09E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f0.d));
    f0.d = PpcFmulsInline(f24.d, f0.d);
    f20.d = static_cast<double>(PpcForceSingleValueInline(f21.d + f0.d));
}

loc_805D09F0:
{
    r24 = 0;
    goto loc_805D0BF4;
}

loc_805D09F8:
{
    r0 = MemoryInline::FlatRead32(r28);
    r0 = (r0 + r24);
    r0 = (r0 * 40);
    r31 = (r23 + r0);
    r20 = MemoryInline::FlatRead32((r31 + 116));
    r12 = MemoryInline::FlatRead32(r20);
    r3 = r20;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x805D0A20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
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
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r12 = MemoryInline::FlatRead32(r20);
    r3 = r20;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 124));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    r12 = MemoryInline::FlatRead32((r12 + 32));
    f19.d = PpcFmulsInline(f0.d, f1.d);
    ctr = r12;
    ctx->lr = 0x805D0A4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
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
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r12 = MemoryInline::FlatRead32(r20);
    r3 = r20;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 28));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    ctr = r12;
    ctx->lr = 0x805D0A70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
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
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 104));
    r3 = r20;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r12 = MemoryInline::FlatRead32(r20);
    f0.d = PpcFmulsInline(f19.d, f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 124));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r12 = MemoryInline::FlatRead32((r12 + 76));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f28.d));
    r4 = MemoryInline::FlatRead16((r31 + 108));
    f0.d = PpcFmulsInline(f23.d, f0.d);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f0.d));
    f0.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PpcFmulsInline(f23.d, f0.d);
    f19.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f0.d));
    ctr = r12;
    ctx->lr = 0x805D0ACCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
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
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 420));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_11 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_12 & 255);
    f3.d = f2.d;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_13 & 255);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_805D0B54;
    }
}

loc_805D0AF4:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r1 + 9));
    r4 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = (r5 + r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 100));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_805D0B54:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    SetCRFloatResident(cr, 0, f28.d, f29.d);
}

loc_805D0B5C:
{
    r4 = MemoryInline::FlatRead32((r31 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f1.d = PpcFmulsInline(f24.d, f1.d);
    f0.d = PpcFmulsInline(f24.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f20.d + f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f20.d + f0.d));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805D0B94;
    }
}

loc_805D0B7C:
{
    SetCRFloatResident(cr, 0, f19.d, f30.d);
}

loc_805D0B80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D0B94;
    }
}

loc_805D0B84:
{
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_805D0B88:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D0B94;
    }
}

loc_805D0B8C:
{
    SetCRFloatResident(cr, 0, f4.d, f29.d);
}

loc_805D0B90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D0BA0;
    }
}

loc_805D0B94:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r21));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r22));
    goto loc_805D0BF0;
}

loc_805D0BA0:
{
    f2.d = PpcFmulsInline(f31.d, f28.d);
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = PpcFmulsInline(f31.d, f19.d);
    f3.d = PPC_Fctiwz(f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    f2.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f3.d);
    f0.d = PpcFmulsInline(f31.d, f4.d);
    fctiwzword1 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f2.d);
    r0 = fctiwzword0;
    f0.d = PPC_Fctiwz(f0.d);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = fctiwzword1;
    fctiwzword2 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r3));
    r0 = fctiwzword2;
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f0.d);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = fctiwzword3;
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
}

loc_805D0BF0:
{
    r24 = (r24 + 1);
}

loc_805D0BF4:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r0));
}

loc_805D0BFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D09F8;
    }
}

loc_805D0C00:
{
    r28 = (r28 + 28);
    r25 = (r25 + 1);
}

loc_805D0C08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(r26));
}

loc_805D0C0C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D0944;
    }
}

loc_805D0C10:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 112), 0, 216u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 192u, (r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 176u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 160u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 112));
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::ReadResolved32(guest_range_4, 212u, (r1 + 324));
    ctx->lr = r0;
    r1 = (r1 + 320);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
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
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
// RECOMP_REGISTRATION base 0x805D0674 func_805D0674 preserves=false fpr_mask=0xFFF80000
