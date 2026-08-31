#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008FE10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
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
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8008FE10;

loc_8008FE10:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -304), 0, 312u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 308u, (r1 + 308), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 288u, (r1 + 288), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 272u, (r1 + 272), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 256u, (r1 + 256), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 240u, (r1 + 240), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 224u, (r1 + 224), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 208u, (r1 + 208), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 192u, (r1 + 192), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    r5 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r1 + 108), r31);
    r31 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r30);
    r30 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r29);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r28);
    }
    r0 = MemoryInline::FlatRead8((r3 + 54));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008FEA4:
{
    MemoryInline::FlatWriteRam32((r1 + 80), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009052C;
    }
}

loc_8008FEAC:
{
    r0 = MemoryInline::FlatRead8((r3 + 53));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008FEB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008FEBC;
    }
}

loc_8008FEB8:
{
    r31 = 0;
}

loc_8008FEBC:
{
    r3 = (r3 + 28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80095C30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r30 + 192));
    f31.d = f1.d;
    r0 = MemoryInline::FlatRead16((r30 + 190));
}

loc_8008FED4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8008FEE0;
    }
}

loc_8008FED8:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 192), static_cast<uint16_t>(r0));
}

loc_8008FEE0:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -28692));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 172));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f30.d = PpcFmulsInline(f30.d, f1.d);
    r4 = MemoryInline::FlatRead16((r30 + 190));
    r3 = MemoryInline::FlatRead16((r30 + 192));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_8008FEFC:
{
    f30.d = PpcFmulsInline(f30.d, f0.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008FF0C;
    }
}

loc_8008FF04:
{
    r0 = MemoryInline::FlatRead8((r30 + 189));
    goto loc_8008FF28;
}

loc_8008FF0C:
{
    r5 = MemoryInline::FlatRead8((r30 + 188));
    r0 = MemoryInline::FlatRead8((r30 + 189));
    r0 = (r0 - r5);
    r0 = (r3 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r5 + r0);
    r0 = (r0 & 255);
}

loc_8008FF28:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28672));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28688));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f29.d = MemoryInline::FlatReadFloat32((r2 + -28692));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f30.d = PpcFmulsInline(f30.d, f0.d);
    // inline leaf 0x80091770 (11 guest instruction(s))
}

loc_inl0_0x80091770:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80091778:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x8009178C;
    }
}

loc_inl0_0x8009177C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28644));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl0_0x80091788:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8009178C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28648));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_inl0_cont_80091770;
}

loc_inl0_return:
{
}

loc_inl0_cont_80091770:
{
    // end of inlined leaf 0x80091770
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800ACDA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r30 + 52));
    f29.d = PpcFmulsInline(f29.d, f1.d);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8008FF60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008FF74;
    }
}

loc_8008FF64:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28684));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800ACDA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f29.d = PpcFmulsInline(f29.d, f1.d);
}

loc_8008FF74:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_8008FF7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_800901A0;
    }
}

loc_8008FF80:
{
    r0 = MemoryInline::FlatRead32((r30 + 220));
}

loc_8008FF88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80090094;
    }
}

loc_8008FF8C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28696));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_8008FF94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800901A0;
    }
}

loc_8008FF98:
{
    r3 = MemoryInline::FlatRead32((r30 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008FFA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009052C;
    }
}

loc_8008FFA4:
{
    ctx->lr = 0x8008FFA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AA750u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    ctx->lr = 0x8008FFB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AA3E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
    r12 = MemoryInline::FlatRead32((r30 + 220));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 236), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8008FFC0:
{
    MemoryInline::FlatWrite8((r30 + 53), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 54), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008FFE0;
    }
}

loc_8008FFCC:
{
    r3 = r30;
    r5 = MemoryInline::FlatRead32((r30 + 224));
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x8008FFE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
}

loc_8008FFE0:
{
    r3 = MemoryInline::FlatRead32((r30 + 228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008FFE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80090000;
    }
}

loc_8008FFEC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r30 + 232));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80090000u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
}

loc_80090000:
{
    r0 = MemoryInline::FlatRead8((r30 + 55));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80090008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009052C;
    }
}

loc_8009000C:
{
    r7 = 0;
    MemoryInline::FlatWrite8((r30 + 55), static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead8((r13 + -27200));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80090068;
    }
}

loc_80090020:
{
    r6 = 0x802D0000u;
    r4 = 0x80090000u;
    r3 = (r6 + 22648);
    r5 = 0x802D0000u;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r7);
    r8 = (r3 + 8);
    r4 = (r4 + -1552);
    r5 = (r5 + 22632);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r6 + 22648), r7);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r8);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r8);
    }
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r3 + 16), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r7);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27200), static_cast<uint8_t>(r0));
}

loc_80090068:
{
    r31 = 0x802D0000u;
    r4 = (r30 + 244);
    r31 = (r31 + 22648);
    r3 = (r31 + 4);
    // inline leaf 0x800AF370 (12 guest instruction(s))
    r6 = MemoryInline::FlatRead32(r4);
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r6 + 4), r5);
    MemoryInline::FlatWrite32(r5, r6);
    r5 = MemoryInline::FlatRead32(r3);
    r5 = (r5 + -1);
    MemoryInline::FlatWriteRam32(r3, r5);
    r3 = r6;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    // end of inlined leaf 0x800AF370
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80090080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009052C;
    }
}

loc_80090084:
{
    r3 = r31;
    r4 = r30;
    ctx->lr = 0x80090090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80095AF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8009052C;
}

loc_80090094:
{
    f0.d = PpcFmulsInline(f30.d, f29.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28696));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800900A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800901A0;
    }
}

loc_800900A4:
{
    r3 = MemoryInline::FlatRead32((r30 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800900AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009052C;
    }
}

loc_800900B0:
{
    ctx->lr = 0x800900B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AA750u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    ctx->lr = 0x800900BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AA3E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
    r12 = MemoryInline::FlatRead32((r30 + 220));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 236), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_800900CC:
{
    MemoryInline::FlatWrite8((r30 + 53), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 54), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800900EC;
    }
}

loc_800900D8:
{
    r3 = r30;
    r5 = MemoryInline::FlatRead32((r30 + 224));
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x800900ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
}

loc_800900EC:
{
    r3 = MemoryInline::FlatRead32((r30 + 228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800900F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009010C;
    }
}

loc_800900F8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r30 + 232));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8009010Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
}

loc_8009010C:
{
    r0 = MemoryInline::FlatRead8((r30 + 55));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80090114:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009052C;
    }
}

loc_80090118:
{
    r7 = 0;
    MemoryInline::FlatWrite8((r30 + 55), static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead8((r13 + -27200));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80090174;
    }
}

loc_8009012C:
{
    r6 = 0x802D0000u;
    r4 = 0x80090000u;
    r3 = (r6 + 22648);
    r5 = 0x802D0000u;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r7);
    r8 = (r3 + 8);
    r4 = (r4 + -1552);
    r5 = (r5 + 22632);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r6 + 22648), r7);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r8);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r8);
    }
    MemoryInline::WriteResolved8(guest_range_2, 16u, (r3 + 16), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r7);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27200), static_cast<uint8_t>(r0));
}

loc_80090174:
{
    r31 = 0x802D0000u;
    r4 = (r30 + 244);
    r31 = (r31 + 22648);
    r3 = (r31 + 4);
    // inline leaf 0x800AF370 (12 guest instruction(s))
    r6 = MemoryInline::FlatRead32(r4);
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r6 + 4), r5);
    MemoryInline::FlatWrite32(r5, r6);
    r5 = MemoryInline::FlatRead32(r3);
    r5 = (r5 + -1);
    MemoryInline::FlatWriteRam32(r3, r5);
    r3 = r6;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    // end of inlined leaf 0x800AF370
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8009018C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009052C;
    }
}

loc_80090190:
{
    r3 = r31;
    r4 = r30;
    ctx->lr = 0x8009019Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80095AF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8009052C;
}

loc_800901A0:
{
    r3 = MemoryInline::FlatRead32((r30 + 200));
    r0 = MemoryInline::FlatRead32((r30 + 196));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -28664));
    r0 = (r0 - r3);
    f4.d = MemoryInline::FlatReadFloat32((r2 + -28696));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28696));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800901D0:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800901DC;
    }
}

loc_800901D8:
{
    goto loc_8009021C;
}

loc_800901DC:
{
    r0 = MemoryInline::FlatRead32((r30 + 164));
    r4 = MemoryInline::FlatRead32((r30 + 168));
}

loc_800901E8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_800901F0;
    }
}

loc_800901EC:
{
    goto loc_8009021C;
}

loc_800901F0:
{
    r3 = (r4 - r0);
    r0 = (r4 ^ -2147483648);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_8009021C:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 156));
    r0 = MemoryInline::FlatRead8((r30 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8009022C:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80090238;
    }
}

loc_80090234:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f31.d));
}

loc_80090238:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28680));
    f20.d = MemoryInline::FlatReadFloat32((r2 + -28692));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 184));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 64));
    f20.d = PpcFmulsInline(f20.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 88), f0.d);
    f20.d = PpcFmulsInline(f20.d, f1.d);
    r3 = fctiwzword0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800ACBF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f27.d = MemoryInline::FlatReadFloat32((r2 + -28696));
    f28.d = PpcFmulsInline(f1.d, f20.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 176));
    r0 = MemoryInline::FlatRead8((r30 + 52));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80090280:
{
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009028C;
    }
}

loc_80090288:
{
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f31.d));
}

loc_8009028C:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -28696));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80090294:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 72), 0, 112u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 108u, (r30 + 180));
    f8.d = f31.d;
    f4.d = MemoryInline::FlatReadFloat32((r2 + -28692));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r30 + 96));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r30 + 100));
        }
    }
    f26.d = f4.d;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r30 + 104));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f2.d));
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 56u, (r30 + 128));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f1.d));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 72u, (r30 + 144));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f10.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f9.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r30 + 108));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 52u, (r30 + 124));
    f25.d = f4.d;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 68u, (r30 + 140));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f23.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r30 + 112));
            f23.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r30 + 116));
        }
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f2.d));
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 60u, (r30 + 132));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f1.d));
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 76u, (r30 + 148));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 48u, (r30 + 120));
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 64u, (r30 + 136));
    f23.d = PpcFmulsInline(f4.d, f23.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 80u, (r30 + 152));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f13.d));
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r30 + 76));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f12.d));
    f20.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r30 + 72));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 60u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 48u, (r1 + 56), f8.d);
    f11.d = PpcFmulsInline(f4.d, f11.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f10.d));
    r29 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r30 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 52u, (r1 + 60), f8.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f9.d));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f24.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 56u, (r1 + 64), f8.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r30 + 88));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r1 + 40), f4.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f20.d));
    f24.d = MemoryInline::FlatReadFloat32((r2 + -28696));
    f25.d = PpcFmulsInline(f25.d, f8.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r30 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 48u, (r1 + 56), f7.d);
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f4.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 52u, (r1 + 60), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 56u, (r1 + 64), f5.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r1 + 40), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r1 + 24), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 8), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r1 + 44), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r1 + 28), f21.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 12), f22.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 40u, (r1 + 48), f23.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r1 + 32), f13.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 16), f12.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r1 + 52), f11.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r1 + 36), f10.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 20), f9.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800903DC;
    }
}

loc_8009039C:
{
    r0 = MemoryInline::FlatRead8((r30 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800903A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800903C4;
    }
}

loc_800903A8:
{
    r3 = MemoryInline::FlatRead32((r30 + 164));
    r4 = MemoryInline::FlatRead32((r30 + 168));
    r0 = (r3 + 3);
    MemoryInline::FlatWrite32((r30 + 164), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_800903BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800903C4;
    }
}

loc_800903C0:
{
    MemoryInline::FlatWrite32((r30 + 164), r4);
}

loc_800903C4:
{
    r3 = (r30 + 28);
    r4 = 3;
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80095B90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = r30;
    r4 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800917A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800903DC:
{
    r3 = (r30 + 28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80095C30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    f23.d = f1.d;
    f20.d = MemoryInline::FlatReadFloat32((r2 + -28692));
    r3 = r30;
    // inline leaf 0x80091770 (11 guest instruction(s))
}

loc_inl5_0x80091770:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl5_0x80091778:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_0x8009178C;
    }
}

loc_inl5_0x8009177C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28644));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl5_0x80091788:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8009178C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28648));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_inl5_cont_80091770;
}

loc_inl5_return:
{
}

loc_inl5_cont_80091770:
{
    // end of inlined leaf 0x80091770
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800ACDA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r30 + 52));
    f20.d = PpcFmulsInline(f20.d, f1.d);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80090404:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80090418;
    }
}

loc_80090408:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28684));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800ACDA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f20.d = PpcFmulsInline(f20.d, f1.d);
}

loc_80090418:
{
    r3 = MemoryInline::FlatRead32((r30 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80090420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009052C;
    }
}

loc_80090424:
{
    r4 = MemoryInline::FlatRead32((r30 + 208));
    // inline leaf 0x800AA980 (8 guest instruction(s))
}

loc_inl6_0x800AA980:
{
    r0 = MemoryInline::FlatRead32((r3 + 268));
}

loc_inl6_0x800AA988:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x800AA98C:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWrite32((r3 + 268), r4);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl6_cont_800AA980;
}

loc_inl6_return:
{
}

loc_inl6_cont_800AA980:
{
    // end of inlined leaf 0x800AA980
    r3 = MemoryInline::FlatRead32((r30 + 236));
    r4 = MemoryInline::FlatRead32((r30 + 212));
    // inline leaf 0x800AA9A0 (8 guest instruction(s))
}

loc_inl7_0x800AA9A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 272));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl7_0x800AA9A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x800AA9AC:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWrite32((r3 + 272), r4);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl7_cont_800AA9A0;
}

loc_inl7_return:
{
}

loc_inl7_cont_800AA9A0:
{
    // end of inlined leaf 0x800AA9A0
    f1.d = f30.d;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AA860u>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = f20.d;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    f2.d = f29.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AA8B0u>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f1.d = f28.d;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    // inline leaf 0x800AA960 (8 guest instruction(s))
}

loc_inl8_0x800AA960:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 252));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl8_0x800AA968:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x800AA96C:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWriteFloat32((r3 + 252), f1.d);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl8_cont_800AA960;
}

loc_inl8_return:
{
}

loc_inl8_cont_800AA960:
{
    // end of inlined leaf 0x800AA960
    f1.d = f27.d;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    // inline leaf 0x800AA9C0 (8 guest instruction(s))
}

loc_inl9_0x800AA9C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 168));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl9_0x800AA9C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x800AA9CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl9_cont_800AA9C0;
}

loc_inl9_return:
{
}

loc_inl9_cont_800AA9C0:
{
    // end of inlined leaf 0x800AA9C0
    f1.d = f31.d;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    // inline leaf 0x800AA9E0 (8 guest instruction(s))
}

loc_inl10_0x800AA9E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 172));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl10_0x800AA9E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl10_return;
    }
}

loc_inl10_0x800AA9EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWriteFloat32((r3 + 172), f1.d);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl10_cont_800AA9E0;
}

loc_inl10_return:
{
}

loc_inl10_cont_800AA9E0:
{
    // end of inlined leaf 0x800AA9E0
    f1.d = f26.d;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AAA00u>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    r4 = r29;
    // inline leaf 0x800AAA50 (14 guest instruction(s))
}

loc_inl11_0x800AAA50:
{
}

loc_inl11_0x800AAA54:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(127))) {
        goto loc_inl11_0x800AAA60;
    }
}

loc_inl11_0x800AAA58:
{
    r4 = 127;
    goto loc_inl11_0x800AAA68;
}

loc_inl11_0x800AAA60:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 31);
    r4 = (r4 & ~r0);
}

loc_inl11_0x800AAA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 163));
}

loc_inl11_0x800AAA70:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_inl11_return;
    }
}

loc_inl11_0x800AAA74:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWrite8((r3 + 163), static_cast<uint8_t>(r4));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl11_cont_800AAA50;
}

loc_inl11_return:
{
}

loc_inl11_cont_800AAA50:
{
    // end of inlined leaf 0x800AAA50
    r3 = MemoryInline::FlatRead32((r30 + 236));
    r4 = MemoryInline::FlatRead32((r30 + 84));
    // inline leaf 0x800AAA90 (8 guest instruction(s))
}

loc_inl12_0x800AAA90:
{
    r0 = MemoryInline::FlatRead32((r3 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl12_0x800AAA98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl12_return;
    }
}

loc_inl12_0x800AAA9C:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWrite32((r3 + 180), r4);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl12_cont_800AAA90;
}

loc_inl12_return:
{
}

loc_inl12_cont_800AAA90:
{
    // end of inlined leaf 0x800AAA90
    f1.d = f25.d;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AAAB0u>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = f24.d;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AAB00u>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r29 = (r1 + 56);
    r31 = 0;
}

loc_800904BC:
{
    r3 = MemoryInline::FlatRead32((r30 + 236));
    r4 = r31;
    f1.d = MemoryInline::FlatReadFloat32(r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AAB50u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r31 = (r31 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_800904D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800904BC;
    }
}

loc_800904DC:
{
    r31 = (r1 + 40);
    r29 = (r1 + 24);
    r28 = 0;
}

loc_800904E8:
{
    r3 = MemoryInline::FlatRead32((r30 + 236));
    r4 = r28;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AABA0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    r4 = r28;
    f1.d = MemoryInline::FlatReadFloat32(r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AABF0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 236));
    r4 = r28;
    f1.d = MemoryInline::FlatReadFloat32(r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AAC40u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r28 = (r28 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_80090524:
{
    r31 = (r31 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800904E8;
    }
}

loc_8009052C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 96), 0, 216u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 192u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 176u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 160u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 144u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 128u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 112u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 96u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 80u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 64u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 48u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 32u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 16u, (r1 + 112));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 108));
            r30 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 104));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 100));
    r0 = MemoryInline::ReadResolved32(guest_range_5, 212u, (r1 + 308));
    r28 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 96));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8008FE10 func_8008FE10 preserves=false fpr_mask=0xFFF00000
