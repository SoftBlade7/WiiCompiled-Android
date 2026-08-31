#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C5DE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806C5DE0;

loc_806C5DE0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 164u, (r1 + 164), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 112u, (r1 + 112), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 64u, (r1 + 64), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    r11 = (r1 + 64);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r22 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r26 = 0x808A0000u;
    r12 = MemoryInline::FlatRead32(r3);
    r26 = (r26 + -1656);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x806C5E44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_806C5E48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_806C5E88;
    }
}

loc_806C5E4C:
{
    r3 = MemoryInline::FlatRead32((r22 + 32));
    r0 = MemoryInline::FlatRead16((r3 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 14));
}

loc_806C5E68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_806C5E88;
    }
}

loc_806C5E6C:
{
    r3 = MemoryInline::FlatRead32((r22 + 176));
    r0 = MemoryInline::FlatRead16((r3 + 180));
    r0 = (r0 & 255);
}

loc_806C5E7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_806C5E88;
    }
}

loc_806C5E80:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 184), r0);
}

loc_806C5E88:
{
    r3 = MemoryInline::FlatRead32((r22 + 176));
    r0 = MemoryInline::FlatRead16((r3 + 180));
    r0 = (r0 & 255);
}

loc_806C5E98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_806C5EB0;
    }
}

loc_806C5E9C:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
}

loc_806C5EA4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(60))) {
        goto loc_806C5EB0;
    }
}

loc_806C5EA8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 184), r0);
}

loc_806C5EB0:
{
    r0 = MemoryInline::FlatRead8((r22 + 205));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806C5EB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806C6100;
    }
}

loc_806C5EBC:
{
    f30.d = MemoryInline::FlatReadFloat32((r26 + 68));
    r23 = 0;
    f29.d = MemoryInline::FlatReadFloat32((r26 + 60));
    r25 = 0;
    f26.d = MemoryInline::FlatReadFloat32((r26 + 8));
    r24 = 0;
    f27.d = MemoryInline::FlatReadFloat64((r26 + 40));
    r31 = 0x80000000u;
    f28.d = MemoryInline::FlatReadFloat32((r26 + 52));
    r27 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r26 + 72));
    r28 = 0;
    r29 = 0x808C0000u;
    r30 = 1127219200;
    goto loc_806C60F4;
}

loc_806C5EF8:
{
    r3 = MemoryInline::FlatRead32((r22 + 188));
    r3_addr_2 = (r3 + r25);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x806C5F14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r22 + 176));
    r0 = MemoryInline::FlatRead16((r3 + 180));
    r0 = (r0 & 255);
}

loc_806C5F24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_806C5F44;
    }
}

loc_806C5F28:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
}

loc_806C5F30:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(r0))) {
        goto loc_806C5F44;
    }
}

loc_806C5F34:
{
    r3 = MemoryInline::FlatRead32((r22 + 188));
    r3_addr_3 = (r3 + r25);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    MemoryInline::FlatWrite8((r3 + 200), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite32((r3 + 208), r28);
}

loc_806C5F44:
{
    r4 = MemoryInline::FlatRead32((r22 + 176));
    r3 = 0;
    r0 = MemoryInline::FlatRead16((r4 + 180));
    r0 = (r0 & 255);
}

loc_806C5F58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_806C5F6C;
    }
}

loc_806C5F5C:
{
    r0 = MemoryInline::FlatRead32((r4 + 188));
}

loc_806C5F64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806C5F6C;
    }
}

loc_806C5F68:
{
    r3 = 1;
}

loc_806C5F6C:
{
}

loc_806C5F70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806C5F80;
    }
}

loc_806C5F74:
{
    r3 = MemoryInline::FlatRead32((r22 + 188));
    r3_addr_5 = (r3 + r25);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    MemoryInline::FlatWrite8((r3 + 212), static_cast<uint8_t>(r27));
}

loc_806C5F80:
{
    r3 = MemoryInline::FlatRead32((r22 + 176));
    r0 = MemoryInline::FlatRead8((r3 + 1036));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806C5F8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806C5FE0;
    }
}

loc_806C5F90:
{
    r3 = MemoryInline::FlatRead32((r22 + 188));
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r3_addr_7 = (r3 + r25);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    MemoryInline::FlatWrite32((r3 + 216), r28);
    MemoryInline::FlatWrite8((r3 + 200), static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead8((r22 + 196));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16004));
    r3 = (r0 - r23);
    r0 = (r3 + -1);
    f0.d = PpcFmulsInline(f26.d, f0.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r22 + 188));
    r4_addr_2 = (r4 + r25);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    MemoryInline::FlatWrite32((r4 + 204), r3);
}

loc_806C5FE0:
{
    r5 = MemoryInline::FlatRead32((r22 + 176));
    r0 = MemoryInline::FlatRead16((r5 + 180));
    r0 = (r0 & 255);
}

loc_806C5FF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_806C60DC;
    }
}

loc_806C5FF4:
{
    r4 = MemoryInline::FlatRead32((r22 + 188));
    r3 = (r23 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 52));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806C6004:
{
    r4_addr_4 = (r4 + r25);
    r4 = MemoryInline::FlatRead32(r4_addr_4);
    r6 = 0;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f2.d = MemoryInline::FlatReadFloat32((r26 + 64));
    r4 = MemoryInline::FlatRead32((r4 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_806C60AC;
    }
}

loc_806C6024:
{
}

loc_806C6028:
{
    r4 = (r23 + -7);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_806C608C;
    }
}

loc_806C6030:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_806C6048;
    }
}

loc_806C6038:
{
    r0 = (r31 + -2);
}

loc_806C6040:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_806C6048;
    }
}

loc_806C6044:
{
    r5 = 1;
}

loc_806C6048:
{
}

loc_806C604C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806C608C;
    }
}

loc_806C6050:
{
    r0 = (r4 + 7);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    ctr = r0;
}

loc_806C6060:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_806C608C;
    }
}

loc_806C6064:
{
    f2.d = PpcFmulsInline(f2.d, f30.d);
    r6 = (r6 + 8);
    f2.d = PpcFmulsInline(f2.d, f30.d);
    f2.d = PpcFmulsInline(f2.d, f30.d);
    f2.d = PpcFmulsInline(f2.d, f30.d);
    f2.d = PpcFmulsInline(f2.d, f30.d);
    f2.d = PpcFmulsInline(f2.d, f30.d);
    f2.d = PpcFmulsInline(f2.d, f30.d);
    f2.d = PpcFmulsInline(f2.d, f30.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806C6064;
    }
}

loc_806C608C:
{
    r3 = (r23 + 1);
    r0 = (r3 - r6);
    ctr = r0;
}

loc_806C609C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r3))) {
        goto loc_806C60AC;
    }
}

loc_806C60A0:
{
    f2.d = PpcFmulsInline(f2.d, f30.d);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806C60A0;
    }
}

loc_806C60AC:
{
    r3 = MemoryInline::FlatRead32((r22 + 188));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    r3_addr_9 = (r3 + r25);
    r4 = MemoryInline::FlatRead32(r3_addr_9);
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = MemoryInline::FlatRead16((r4 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    r0 = (r0 | 1);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWrite16((r4 + 44), static_cast<uint16_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 52), f0.d);
    goto loc_806C60E8;
}

loc_806C60DC:
{
    r3 = MemoryInline::FlatRead32((r22 + 188));
    r3_addr_10 = (r3 + r25);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    MemoryInline::FlatWrite8((r3 + 212), static_cast<uint8_t>(r28));
}

loc_806C60E8:
{
    r25 = (r25 + 4);
    r24 = (r24 + 10);
    r23 = (r23 + 1);
}

loc_806C60F4:
{
    r0 = MemoryInline::FlatRead8((r22 + 196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(r0));
}

loc_806C60FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806C5EF8;
    }
}

loc_806C6100:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f26.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x806C5DE0 func_806C5DE0 preserves=false fpr_mask=0xFC000000
