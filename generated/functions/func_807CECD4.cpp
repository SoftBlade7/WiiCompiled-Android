#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CECD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
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
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
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
    uint32_t xer = ctx->xer;

    goto loc_807CECD4;

loc_807CECD4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -240), 0, 248u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 244u, (r1 + 244), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 112u, (r1 + 112), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 64u, (r1 + 64), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 48u, (r1 + 48), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 26416);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 36), r29);
    }
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 32), r28);
    r0 = MemoryInline::FlatRead8((r3 + 327));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CED64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF490;
    }
}

loc_807CED68:
{
    r4 = MemoryInline::FlatRead32((r3 + 740));
    r30 = MemoryInline::FlatRead32((r3 + 676));
    r0 = MemoryInline::FlatRead8((r4 + 120));
}

loc_807CED78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CEDE8;
    }
}

loc_807CED7C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 120), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 212), static_cast<uint8_t>(r0));
    r28 = MemoryInline::FlatRead32((r3 + 740));
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f1.d = MemoryInline::FlatReadFloat32((r28 + 36));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 52), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 68), f0.d);
    r3 = MemoryInline::FlatRead32((r29 + 740));
    r4 = MemoryInline::FlatRead32((r29 + 204));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 68));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    goto loc_807CEDF0;
}

loc_807CEDE8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 212), static_cast<uint8_t>(r0));
}

loc_807CEDF0:
{
    r3 = MemoryInline::FlatRead32((r29 + 740));
    r0 = MemoryInline::FlatRead8((r3 + 121));
}

loc_807CEDFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CEE70;
    }
}

loc_807CEE00:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 121), static_cast<uint8_t>(r0));
    r0 = 1;
    r3 = r29;
    MemoryInline::FlatWrite8((r29 + 213), static_cast<uint8_t>(r0));
    r28 = MemoryInline::FlatRead32((r29 + 740));
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f1.d = MemoryInline::FlatReadFloat32((r28 + 84));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 84), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 100), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 116), f0.d);
    r3 = MemoryInline::FlatRead32((r29 + 740));
    r4 = MemoryInline::FlatRead32((r29 + 208));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 84));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 116));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    goto loc_807CEE78;
}

loc_807CEE70:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 213), static_cast<uint8_t>(r0));
}

loc_807CEE78:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 776));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 784));
    r0 = MemoryInline::FlatRead32((r29 + 700));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 792));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 1204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CEE94:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 1208));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 1216));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 1212));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF2B8;
    }
}

loc_807CEEB4:
{
    r3 = MemoryInline::FlatRead16((r29 + 250));
    r0 = 0;
}

loc_807CEEC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807CEEDC;
    }
}

loc_807CEEC4:
{
}

loc_807CEEC8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(1))) {
        goto loc_807CEEE0;
    }
}

loc_807CEECC:
{
}

loc_807CEED0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(7))) {
        goto loc_807CEEE0;
    }
}

loc_807CEED4:
{
}

loc_807CEED8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(6))) {
        goto loc_807CEEE0;
    }
}

loc_807CEEDC:
{
    r0 = 1;
}

loc_807CEEE0:
{
}

loc_807CEEE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CEF08;
    }
}

loc_807CEEE8:
{
    r0 = MemoryInline::FlatRead32((r29 + 256));
}

loc_807CEEF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CEF34;
    }
}

loc_807CEEF4:
{
    r3 = (r3 + 65536);
    r0 = (r3 + -8);
    r0 = (r0 & 65535);
}

loc_807CEF04:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_807CEF34;
    }
}

loc_807CEF08:
{
    r0 = MemoryInline::FlatRead8((r29 + 212));
    r4 = 0;
}

loc_807CEF14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CEF38;
    }
}

loc_807CEF18:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1088);
}

loc_807CEF28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CEF38;
    }
}

loc_807CEF2C:
{
    r4 = 1;
    goto loc_807CEF38;
}

loc_807CEF34:
{
    r4 = 0;
}

loc_807CEF38:
{
}

loc_807CEF3C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807CF2B8;
    }
}

loc_807CEF40:
{
    r0 = MemoryInline::FlatRead8((r29 + 200));
    r3 = 1;
    f31.d = std::fabs(f25.d);
    MemoryInline::FlatWrite8((r29 + 692), static_cast<uint8_t>(r3));
}

loc_807CEF54:
{
    f30.d = std::fabs(f24.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CEF64;
    }
}

loc_807CEF5C:
{
    f29.d = MemoryInline::FlatReadFloat32((r30 + 108));
    goto loc_807CEF68;
}

loc_807CEF64:
{
    f29.d = MemoryInline::FlatReadFloat32((r30 + 144));
}

loc_807CEF68:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 2492));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f23.d = PpcFmulsInline(f1.d, f29.d);
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_807CEF78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CEF84;
    }
}

loc_807CEF7C:
{
    f28.d = MemoryInline::FlatReadFloat32((r30 + 104));
    goto loc_807CEF88;
}

loc_807CEF84:
{
    f28.d = MemoryInline::FlatReadFloat32((r30 + 100));
}

loc_807CEF88:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2492));
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32((r29 + 740));
    r5 = (r29 + 680);
    f22.d = PpcFmulsInline(f0.d, f28.d);
    r4 = (r4 + 24);
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    InvokeDirectCpu<0x807DEB24u>(ctx);
    r1 = ctx->gpr[1];
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
    r6 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r1 + 20);
    r5 = MemoryInline::FlatRead32((r1 + 24));
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x807CEFC8u;
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
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
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
    InvokeDirectCpu<0x800853C0u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2744));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f21.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
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
    InvokeDirectCpu<0x800853C0u>(ctx);
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
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 276), 0, 416u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 404u, (r29 + 680));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r29 + 288));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 408u, (r29 + 684));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r29 + 304));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r29 + 284));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r29 + 276));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r29 + 300));
    f4.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = PpcFmulsInline(f3.d, f7.d);
    f7.d = MemoryInline::FlatReadFloat32((r31 + 2744));
    f3.d = PpcFmulsInline(f0.d, f5.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r29 + 292));
    f20.d = PpcFmulsInline(f7.d, f1.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r29 + 320));
    f0.d = PpcFmulsInline(f0.d, f6.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 412u, (r29 + 688));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r29 + 316));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r29 + 308));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    InvokeDirectCpu<0x800853C0u>(ctx);
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
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 2796u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2744u, (r31 + 2744));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2752u, (r31 + 2752));
    f4.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2528u, (r31 + 2528));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2756u, (r31 + 2756));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f25.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = std::fabs(f3.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF080:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF0AC;
    }
}

loc_807CF084:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2760u, (r31 + 2760));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CF090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF0AC;
    }
}

loc_807CF094:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_807CF09C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF0A4;
    }
}

loc_807CF0A0:
{
    goto loc_807CF0A8;
}

loc_807CF0A4:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2764u, (r31 + 2764));
}

loc_807CF0A8:
{
    f21.d = f2.d;
}

loc_807CF0AC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2768u, (r31 + 2768));
    SetCRFloatResident(cr, 0, f21.d, f0.d);
}

loc_807CF0B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF0BC;
    }
}

loc_807CF0B8:
{
    goto loc_807CF0D0;
}

loc_807CF0BC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2772u, (r31 + 2772));
    SetCRFloatResident(cr, 0, f21.d, f0.d);
}

loc_807CF0C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF0CC;
    }
}

loc_807CF0C8:
{
    goto loc_807CF0D0;
}

loc_807CF0CC:
{
    f0.d = f21.d;
}

loc_807CF0D0:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2768u, (r31 + 2768));
    f4.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f20.d, f5.d);
}

loc_807CF0DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF0E4;
    }
}

loc_807CF0E0:
{
    goto loc_807CF0F8;
}

loc_807CF0E4:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2772u, (r31 + 2772));
    SetCRFloatResident(cr, 0, f20.d, f5.d);
}

loc_807CF0EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF0F4;
    }
}

loc_807CF0F0:
{
    goto loc_807CF0F8;
}

loc_807CF0F4:
{
    f5.d = f20.d;
}

loc_807CF0F8:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2776u, (r31 + 2776));
    f1.d = PpcFmulsInline(f25.d, f0.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    SetCRFloatResident(cr, 0, f1.d, f6.d);
}

loc_807CF114:
{
    f3.d = f2.d;
    f1.d = PpcFmulsInline(f5.d, f4.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF164;
    }
}

loc_807CF120:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f23.d - f29.d));
    SetCRFloatResident(cr, 0, f6.d, f5.d);
}

loc_807CF128:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CF130;
    }
}

loc_807CF12C:
{
    goto loc_807CF140;
}

loc_807CF130:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f29.d));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f5.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f2.d));
}

loc_807CF140:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f6.d, f2.d);
}

loc_807CF148:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF150;
    }
}

loc_807CF14C:
{
    goto loc_807CF164;
}

loc_807CF150:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    SetCRFloatResident(cr, 0, f6.d, f2.d);
}

loc_807CF158:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF160;
    }
}

loc_807CF15C:
{
    goto loc_807CF164;
}

loc_807CF160:
{
    f2.d = f6.d;
}

loc_807CF164:
{
    f4.d = PpcFmulsInline(f24.d, f1.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f4.d, f6.d);
}

loc_807CF170:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF1CC;
    }
}

loc_807CF174:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f28.d));
    SetCRFloatResident(cr, 0, f6.d, f5.d);
}

loc_807CF17C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CF184;
    }
}

loc_807CF180:
{
    goto loc_807CF198;
}

loc_807CF184:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f28.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f5.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
}

loc_807CF198:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f6.d, f3.d);
}

loc_807CF1A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF1A8;
    }
}

loc_807CF1A4:
{
    goto loc_807CF1BC;
}

loc_807CF1A8:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    SetCRFloatResident(cr, 0, f6.d, f3.d);
}

loc_807CF1B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF1B8;
    }
}

loc_807CF1B4:
{
    goto loc_807CF1BC;
}

loc_807CF1B8:
{
    f3.d = f6.d;
}

loc_807CF1BC:
{
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_807CF1C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF1C8;
    }
}

loc_807CF1C4:
{
    goto loc_807CF1CC;
}

loc_807CF1C8:
{
    f3.d = f2.d;
}

loc_807CF1CC:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2780u, (r31 + 2780));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_807CF1D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF244;
    }
}

loc_807CF1D8:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807CF1E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF214;
    }
}

loc_807CF1E4:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2640u, (r31 + 2640));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807CF1EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF1FC;
    }
}

loc_807CF1F0:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r29 + 704), r0);
    goto loc_807CF280;
}

loc_807CF1FC:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2716u, (r31 + 2716));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807CF204:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF280;
    }
}

loc_807CF208:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r29 + 704), r0);
    goto loc_807CF280;
}

loc_807CF214:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2784u, (r31 + 2784));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807CF21C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF22C;
    }
}

loc_807CF220:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r29 + 704), r0);
    goto loc_807CF280;
}

loc_807CF22C:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2788u, (r31 + 2788));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807CF234:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF280;
    }
}

loc_807CF238:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r29 + 704), r0);
    goto loc_807CF280;
}

loc_807CF244:
{
    f5.d = MemoryInline::FlatReadFloat32((r29 + 1228));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2712u, (r31 + 2712));
    SetCRFloatResident(cr, 0, f5.d, f4.d);
}

loc_807CF250:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF260;
    }
}

loc_807CF254:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r29 + 704), r0);
    goto loc_807CF280;
}

loc_807CF260:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2792u, (r31 + 2792));
    SetCRFloatResident(cr, 0, f5.d, f4.d);
}

loc_807CF268:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF278;
    }
}

loc_807CF26C:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r29 + 704), r0);
    goto loc_807CF280;
}

loc_807CF278:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r29 + 704), r0);
}

loc_807CF280:
{
    r0 = MemoryInline::FlatRead8((r29 + 200));
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
}

loc_807CF290:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CF2AC;
    }
}

loc_807CF294:
{
    f4.d = MemoryInline::FlatReadFloat32((r30 + 124));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 112));
    f27.d = PpcFmulsInline(f2.d, f4.d);
    f26.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_807CF2AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 116));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_807CF378;
}

loc_807CF2B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 1204));
    r3 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 2716), 0, 76u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r31 + 2788));
    r0 = 12;
    MemoryInline::FlatWrite8((r29 + 692), static_cast<uint8_t>(r3));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF2D0:
{
    MemoryInline::FlatWrite32((r29 + 704), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF2DC;
    }
}

loc_807CF2D8:
{
    goto loc_807CF2F0;
}

loc_807CF2DC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 2716));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF2E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF2EC;
    }
}

loc_807CF2E8:
{
    goto loc_807CF2F0;
}

loc_807CF2EC:
{
    f1.d = f0.d;
}

loc_807CF2F0:
{
    f27.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 1208));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r31 + 2788));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF300:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF308;
    }
}

loc_807CF304:
{
    goto loc_807CF31C;
}

loc_807CF308:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 2716));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF310:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF318;
    }
}

loc_807CF314:
{
    goto loc_807CF31C;
}

loc_807CF318:
{
    f1.d = f0.d;
}

loc_807CF31C:
{
    f26.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 1212));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r31 + 2788));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF32C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF334;
    }
}

loc_807CF330:
{
    goto loc_807CF348;
}

loc_807CF334:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 2716));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF33C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF344;
    }
}

loc_807CF340:
{
    goto loc_807CF348;
}

loc_807CF344:
{
    f1.d = f0.d;
}

loc_807CF348:
{
    f2.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 1216));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r31 + 2788));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF358:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF360;
    }
}

loc_807CF35C:
{
    goto loc_807CF374;
}

loc_807CF360:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 2716));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF368:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF370;
    }
}

loc_807CF36C:
{
    goto loc_807CF374;
}

loc_807CF370:
{
    f1.d = f0.d;
}

loc_807CF374:
{
    f3.d = (-(f1.d));
}

loc_807CF378:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 696));
    f9.d = MemoryInline::FlatReadFloat32((r30 + 92));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF388:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF390;
    }
}

loc_807CF38C:
{
    goto loc_807CF394;
}

loc_807CF390:
{
    f1.d = f0.d;
}

loc_807CF394:
{
    SetCRFloatResident(cr, 0, f1.d, f9.d);
}

loc_807CF398:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF3A0;
    }
}

loc_807CF39C:
{
    goto loc_807CF3A4;
}

loc_807CF3A0:
{
    f9.d = f1.d;
}

loc_807CF3A4:
{
    f4.d = MemoryInline::FlatReadFloat32((r31 + 2800));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 2804));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2812));
    f8.d = PpcFmulsInline(f9.d, f4.d);
    f6.d = PpcFmulsInline(f9.d, f1.d);
    f7.d = MemoryInline::FlatReadFloat32((r31 + 2796));
    r0 = MemoryInline::FlatRead8((r29 + 200));
    f4.d = PpcFmulsInline(f9.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r31 + 2648));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 2808));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f8.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CF3D4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF438;
    }
}

loc_807CF3E0:
{
    f11.d = MemoryInline::FlatReadFloat32((r29 + 1220));
    f12.d = PpcFmulsInline(f27.d, f13.d);
    f7.d = MemoryInline::FlatReadFloat32((r29 + 1224));
    f6.d = PpcFmulsInline(f26.d, f13.d);
    f10.d = PpcFmulsInline(f11.d, f0.d);
    f9.d = MemoryInline::FlatReadFloat32((r29 + 1204));
    f4.d = PpcFmulsInline(f7.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 1208));
    f8.d = PpcFmulsInline(f9.d, f1.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f10.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f4.d = PpcFmulsInline(f5.d, f1.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f8.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f8.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f4.d));
    MemoryInline::FlatWriteFloat32((r29 + 1220), f6.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f6.d));
    MemoryInline::FlatWriteFloat32((r29 + 1224), f4.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    MemoryInline::FlatWriteFloat32((r29 + 1204), f6.d);
    MemoryInline::FlatWriteFloat32((r29 + 1208), f4.d);
}

loc_807CF438:
{
    f8.d = MemoryInline::FlatReadFloat32((r29 + 1228));
    f9.d = PpcFmulsInline(f2.d, f13.d);
    f4.d = MemoryInline::FlatReadFloat32((r29 + 1232));
    f3.d = PpcFmulsInline(f3.d, f13.d);
    f7.d = PpcFmulsInline(f8.d, f0.d);
    f6.d = MemoryInline::FlatReadFloat32((r29 + 1212));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 1216));
    f5.d = PpcFmulsInline(f6.d, f1.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f7.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 1228), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 1232), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 1212), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 1216), f0.d);
}

loc_807CF490:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 216u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 192u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 176u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 160u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 48));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r1 + 40));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r1 + 36));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 212u, (r1 + 244));
    r28 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007F gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0xFFF03FFF fpr_write=0xFFF03FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807CECD4 func_807CECD4 preserves=false fpr_mask=0xFFF00000
