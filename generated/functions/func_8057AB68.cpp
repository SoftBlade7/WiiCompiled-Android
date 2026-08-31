#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057AB68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8057AB68;

loc_8057AB68:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r4 = 2;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808B0000u;
    r30 = (r30 + 22768);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_8057ABB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8057AC30;
    }
}

loc_8057ABB8:
{
    r3 = r29;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f31.d = MemoryInline::FlatReadFloat32((r3 + 380));
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r28 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_8057ABD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8057AC20;
    }
}

loc_8057ABD8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 1);
}

loc_8057ABE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057AC24;
    }
}

loc_8057ABEC:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r4 & 16384);
}

loc_8057ABF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057AC18;
    }
}

loc_8057ABF8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 164));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8057AC04:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8057AC18;
    }
}

loc_8057AC08:
{
    f1.d = std::fabs(f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 548));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057AC14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8057AC20;
    }
}

loc_8057AC18:
{
    r0 = (r4 & 8);
}

loc_8057AC1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057AC24;
    }
}

loc_8057AC20:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
}

loc_8057AC24:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
}

loc_8057AC30:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 104));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057AC3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057AC4C;
    }
}

loc_8057AC40:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
}

loc_8057AC4C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = 0;
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r7 + 16));
    r3 = (r3 & 512);
}

loc_8057AC60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8057ACD8;
    }
}

loc_8057AC64:
{
    r8 = MemoryInline::FlatRead32((r7 + 8));
    r5 = 1;
    r6 = 1;
    r3 = (r8 & 67108864);
}

loc_8057AC74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8057AC90;
    }
}

loc_8057AC78:
{
    r3 = 671154176;
    r4 = MemoryInline::FlatRead32((r7 + 12));
    r3 = (r3 + -32768);
    r3 = (r4 & r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8057AC90;
    }
}

loc_8057AC8C:
{
    r6 = 0;
}

loc_8057AC90:
{
}

loc_8057AC94:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8057ACA4;
    }
}

loc_8057AC98:
{
    r3 = (r8 & -2147483648);
}

loc_8057AC9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8057ACA4;
    }
}

loc_8057ACA0:
{
    r5 = 0;
}

loc_8057ACA4:
{
}

loc_8057ACA8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8057ACF8;
    }
}

loc_8057ACAC:
{
    r3 = MemoryInline::FlatRead32((r7 + 12));
    r3 = (r3 & 2097152);
}

loc_8057ACB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8057ACF8;
    }
}

loc_8057ACB8:
{
    r3 = MemoryInline::FlatRead32((r7 + 4));
    r3 = (r3 & 67108864);
}

loc_8057ACC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8057ACF8;
    }
}

loc_8057ACC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 108));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057ACD4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057ACF8;
    }
}

loc_8057ACD8:
{
    r3 = r29;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
}

loc_8057ACF8:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 48), f1.d);
    r5 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWriteFloat32((r29 + 52), f0.d);
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r7 = MemoryInline::FlatRead32((r6 + 8));
    r3 = (r7 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8057AD18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057AD30;
    }
}

loc_8057AD1C:
{
    r3 = r29;
    // inline leaf 0x80590764 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80590764
    r3 = MemoryInline::FlatRead32((r3 + 20));
    ctx->lr = 0x8057AD2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80567CE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    goto loc_8057B000;
}

loc_8057AD30:
{
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r9 = 0;
    r4 = 0;
    r8 = (r3 & 8);
}

loc_8057AD40:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8057AD54;
    }
}

loc_8057AD44:
{
    r3 = MemoryInline::FlatRead32((r6 + 4));
    r3 = (r3 & 262144);
}

loc_8057AD4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8057AD54;
    }
}

loc_8057AD50:
{
    r4 = 1;
}

loc_8057AD54:
{
}

loc_8057AD58:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8057AD6C;
    }
}

loc_8057AD5C:
{
    r3 = MemoryInline::FlatRead32((r6 + 4));
    r3 = (r3 & 2048);
}

loc_8057AD64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8057AD6C;
    }
}

loc_8057AD68:
{
    r9 = 1;
}

loc_8057AD6C:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r3 = (r4 & 4194304);
}

loc_8057AD74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8057AD7C;
    }
}

loc_8057AD78:
{
    r9 = 1;
}

loc_8057AD7C:
{
}

loc_8057AD80:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8057AF80;
    }
}

loc_8057AD84:
{
    r3 = (r4 & 262144);
}

loc_8057AD88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8057AF80;
    }
}

loc_8057AD8C:
{
    r3 = (r7 & 33554432);
}

loc_8057AD90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8057AF80;
    }
}

loc_8057AD94:
{
    r3 = (r4 & 1048576);
}

loc_8057AD98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8057ADC0;
    }
}

loc_8057AD9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057ADA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057ADB4;
    }
}

loc_8057ADA4:
{
    r3 = r29;
    ctx->lr = 0x8057ADACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8057B868u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r29 + 48), f1.d);
    goto loc_8057B000;
}

loc_8057ADB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 288));
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    goto loc_8057B000;
}

loc_8057ADC0:
{
    r3 = (r4 & -1073741824);
}

loc_8057ADC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8057ADEC;
    }
}

loc_8057ADC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057ADCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057ADE0;
    }
}

loc_8057ADD0:
{
    r3 = r29;
    ctx->lr = 0x8057ADD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8057B868u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r29 + 48), f1.d);
    goto loc_8057B000;
}

loc_8057ADE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 224));
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    goto loc_8057B000;
}

loc_8057ADEC:
{
    r3 = (r4 & 1);
}

loc_8057ADF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8057AE68;
    }
}

loc_8057ADF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057ADF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057AE0C;
    }
}

loc_8057ADFC:
{
    r3 = r29;
    ctx->lr = 0x8057AE04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8057B868u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r29 + 48), f1.d);
    goto loc_8057AF08;
}

loc_8057AE0C:
{
    r0 = (r7 & -2147483648);
}

loc_8057AE10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057AE24;
    }
}

loc_8057AE14:
{
    r3 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r3 & 536870912);
    r0_mrot_1 = (r3 & 32768);
    r0_mdest_1 = (r0 & -32769);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_8057AE20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057AE30;
    }
}

loc_8057AE24:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 236));
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    goto loc_8057AF08;
}

loc_8057AE30:
{
    r0 = (r3 & 2);
}

loc_8057AE34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057AE44;
    }
}

loc_8057AE38:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 676));
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    goto loc_8057AF08;
}

loc_8057AE44:
{
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057AE48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057AE58;
    }
}

loc_8057AE4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 592));
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    goto loc_8057AF08;
}

loc_8057AE58:
{
    r3 = r29;
    ctx->lr = 0x8057AE60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8057B868u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r29 + 48), f1.d);
    goto loc_8057AF08;
}

loc_8057AE68:
{
    r0 = (r4 & 2);
}

loc_8057AE6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057AEE0;
    }
}

loc_8057AE70:
{
    r0 = (r7 & 65536);
}

loc_8057AE74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057AEE0;
    }
}

loc_8057AE78:
{
}

loc_8057AE7C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8057AEE0;
    }
}

loc_8057AE80:
{
    r0 = MemoryInline::FlatRead32((r29 + 584));
}

loc_8057AE88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8057AE98;
    }
}

loc_8057AE8C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 112));
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    goto loc_8057AF08;
}

loc_8057AE98:
{
}

loc_8057AE9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8057AEC8;
    }
}

loc_8057AEA0:
{
    r3 = MemoryInline::FlatRead16((r29 + 588));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 588), static_cast<uint16_t>(r0));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r30 + 108));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8057AEB8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8057AEC8;
    }
}

loc_8057AEBC:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r29 + 584), r0);
    goto loc_8057AF08;
}

loc_8057AEC8:
{
    r0 = MemoryInline::FlatRead32((r29 + 584));
}

loc_8057AED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8057AF08;
    }
}

loc_8057AED4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 116));
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    goto loc_8057AF08;
}

loc_8057AEE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057AEEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057AEF8;
    }
}

loc_8057AEF0:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 560));
    goto loc_8057AEFC;
}

loc_8057AEF8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 564));
}

loc_8057AEFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
}

loc_8057AF08:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 1048576);
    r0_mrot_4 = (r3 & 8);
    r0_mdest_4 = (r0 & -9);
    r0 = (r0_mdest_4 | r0_mrot_4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057AF1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057B000;
    }
}

loc_8057AF20:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057AF28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057B000;
    }
}

loc_8057AF2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 348));
    r3 = r29;
    f31.d = std::fabs(f0.d);
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = r29;
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    r3 = r29;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f31.d = PpcFmulsInline(f0.d, f31.d);
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f31.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
    goto loc_8057B000;
}

loc_8057AF80:
{
    r0 = (r4 & -2147483648);
}

loc_8057AF84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057AFA8;
    }
}

loc_8057AF88:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead16((r30 + 228));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8057AF98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057AFA8;
    }
}

loc_8057AF9C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 224));
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    goto loc_8057B000;
}

loc_8057AFA8:
{
    r0 = (r4 & 1073741824);
}

loc_8057AFAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057AFC4;
    }
}

loc_8057AFB0:
{
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057AFB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057AFC4;
    }
}

loc_8057AFB8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    MemoryInline::FlatWriteFloat32((r29 + 52), f0.d);
    goto loc_8057AFF0;
}

loc_8057AFC4:
{
    r0 = (r7 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057AFC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057AFD8;
    }
}

loc_8057AFCC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    MemoryInline::FlatWriteFloat32((r29 + 52), f0.d);
    goto loc_8057AFF0;
}

loc_8057AFD8:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8057AFE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057AFF0;
    }
}

loc_8057AFE8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    MemoryInline::FlatWriteFloat32((r29 + 52), f0.d);
}

loc_8057AFF0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
}

loc_8057B000:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00003FB gpr_write=0xF00003FB gpr_return=0x00000018 fpr_read=0x8000003F fpr_write=0x8000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8057AB68 func_8057AB68 preserves=false fpr_mask=0x80000000
