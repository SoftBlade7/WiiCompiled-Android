#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088D914(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
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
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r22_rot_4 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r31_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_15 = 0;
    uint32_t r4_addr_16 = 0;
    uint32_t r4_addr_17 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8088D914;

loc_8088D914:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 96);
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
    r29 = (r4 * 24);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r23 = r3;
    r24 = r4;
    r3 = (r0 + r29);
    r25 = r5;
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r26 = r6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8088D96C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088D9C8;
    }
}

loc_8088D970:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8088D9ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = 0x808E0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11316));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8088D9B8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088D9C8;
    }
}

loc_8088D9C0:
{
    r3 = 1;
    goto loc_8088DDC4;
}

loc_8088D9C8:
{
    r3 = r23;
    r4 = r24;
    ctx->lr = 0x8088D9D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8088E3E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = 0x808B0000u;
    r4 = 0x808B0000u;
    r28 = MemoryInline::FlatRead16((r23 + 16));
    r27 = 0;
    f29.d = MemoryInline::FlatReadFloat32((r3 + 11204));
    f31.d = MemoryInline::FlatReadFloat32((r4 + 11176));
    goto loc_8088DBE0;
}

loc_8088D9F0:
{
    r0 = (r27 & 65535);
    r3 = MemoryInline::FlatRead32((r23 + 20));
    r30 = (r0 * 36);
    r6 = (r3 + r30);
    r0 = MemoryInline::FlatRead8((r6 + 4));
}

loc_8088DA08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8088DBDC;
    }
}

loc_8088DA0C:
{
    r5 = MemoryInline::FlatRead16(r6);
    r4 = r25;
    r0 = MemoryInline::FlatRead32((r23 + 12));
    r3 = (r1 + 44);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r31 = (r31_rot_2 & -32);
    r22 = MemoryInline::FlatRead16((r6 + 2));
    r5 = (r0 + r31);
    r5 = (r5 + 4);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r0 = MemoryInline::FlatRead32((r23 + 12));
    r22_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(5));
    r22 = (r22_rot_2 & 2097120);
    r4 = r25;
    r3 = (r1 + 32);
    r5 = (r0 + r22);
    r5 = (r5 + 4);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r0 = MemoryInline::FlatRead32((r23 + 20));
    r3 = (r1 + 20);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r5 = (r0 + r30);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r4 = (r5 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // inline leaf 0x805147D4 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x805147D4
    f3.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRFloatResident(cr, 0, f28.d, f31.d);
}

loc_8088DA94:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088DBDC;
    }
}

loc_8088DAC0:
{
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8088DAC4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088DBDC;
    }
}

loc_8088DAC8:
{
    r4 = MemoryInline::FlatRead32((r23 + 20));
    r3 = (r4 + r30);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f5.d = PpcFmulsInline(f28.d, f0.d);
    SetCRFloatResident(cr, 0, f5.d, f29.d);
}

loc_8088DADC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8088DAE8;
    }
}

loc_8088DAE0:
{
    f5.d = f29.d;
    goto loc_8088DAF4;
}

loc_8088DAE8:
{
    SetCRFloatResident(cr, 0, f5.d, f31.d);
}

loc_8088DAEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088DAF4;
    }
}

loc_8088DAF0:
{
    f5.d = f31.d;
}

loc_8088DAF4:
{
    r0 = MemoryInline::FlatRead32((r23 + 12));
    r4 = (r4 + r30);
    f3.d = MemoryInline::FlatReadFloat32((r23 + 64));
    f1.d = f28.d;
    r3 = (r0 + r22);
    r5 = (r0 + r31);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 16));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f4.d = PpcFmulsInline(f3.d, f2.d);
    r4 = (r4 + 8);
    f2.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f3.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8088DB70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    SetCRFloatResident(cr, 0, f28.d, f1.d);
}

loc_8088DB74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088DBDC;
    }
}

loc_8088DB78:
{
    r3 = MemoryInline::FlatRead16((r23 + 16));
    r0 = (r28 & 65535);
}

loc_8088DB84:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_8088DB98;
    }
}

loc_8088DB88:
{
}

loc_8088DB8C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_8088DBA0;
    }
}

loc_8088DB90:
{
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_8088DB94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088DBA0;
    }
}

loc_8088DB98:
{
    r28 = r27;
    f30.d = f1.d;
}

loc_8088DBA0:
{
    r3 = MemoryInline::FlatRead32((r23 + 52));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & 131070);
    r0 = MemoryInline::FlatRead16((r23 + 56));
    r3_addr_2 = (r3 + r6);
    r5 = MemoryInline::FlatRead16(r3_addr_2);
}

loc_8088DBB4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_8088DBDC;
    }
}

loc_8088DBB8:
{
    r4 = MemoryInline::FlatRead32((r23 + 60));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 262140);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 131070);
    r4_addr_2 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_3, static_cast<uint16_t>(r24));
    r4 = MemoryInline::FlatRead32((r23 + 52));
    r4_addr_3 = (r4 + r6);
    r3 = MemoryInline::FlatRead16(r4_addr_3);
    r0 = (r3 + 1);
    r4_addr_4 = (r4 + r6);
    MemoryInline::FlatWrite16(r4_addr_4, static_cast<uint16_t>(r0));
}

loc_8088DBDC:
{
    r27 = (r27 + 1);
}

loc_8088DBE0:
{
    r0 = MemoryInline::FlatRead16((r23 + 16));
    r3 = (r27 & 65535);
}

loc_8088DBEC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8088D9F0;
    }
}

loc_8088DBF0:
{
    r27 = 0;
    goto loc_8088DD48;
}

loc_8088DBF8:
{
    r0 = MemoryInline::FlatRead32((r23 + 12));
    r31_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(5));
    r31 = (r31_rot_5 & 2097120);
    f3.d = MemoryInline::FlatReadFloat32(r25);
    r3 = (r0 + r31);
    f2.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8088DC40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    guest_range_1 = MemoryInline::ResolveRangeHost((r23 + 12), 0, 56u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r23 + 12));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r23 + 64));
    r3 = (r0 + r31);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8088DC58:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088DD44;
    }
}

loc_8088DC5C:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_8088DC64:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8088DC94;
    }
}

loc_8088DC68:
{
    r4 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r23 + 16));
    r0 = (r28 & 65535);
}

loc_8088DC74:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_8088DC88;
    }
}

loc_8088DC78:
{
}

loc_8088DC7C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_8088DC94;
    }
}

loc_8088DC80:
{
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_8088DC84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088DC94;
    }
}

loc_8088DC88:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    f30.d = f1.d;
    r28 = MemoryInline::FlatRead16(r3);
}

loc_8088DC94:
{
    r3 = 0;
    goto loc_8088DD2C;
}

loc_8088DC9C:
{
    r4 = MemoryInline::FlatRead32((r5 + 28));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 131070);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r23 + 52));
    r8 = 0;
    r4_addr_8 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_8);
    r9 = 0;
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & -2);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_6 & -4);
    r5_addr_3 = (r5 + r7);
    r5 = MemoryInline::FlatRead16(r5_addr_3);
    goto loc_8088DCE8;
}

loc_8088DCC4:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r23 + 60));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 131070);
    r4_addr_10 = (r4 + r6);
    r4 = MemoryInline::FlatRead32(r4_addr_10);
    r4_addr_11 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_11);
}

loc_8088DCD8:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(r0))) {
        goto loc_8088DCE4;
    }
}

loc_8088DCDC:
{
    r8 = 1;
    goto loc_8088DCF4;
}

loc_8088DCE4:
{
    r9 = (r9 + 1);
}

loc_8088DCE8:
{
    r0 = (r9 & 65535);
}

loc_8088DCF0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_8088DCC4;
    }
}

loc_8088DCF4:
{
}

loc_8088DCF8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8088DD28;
    }
}

loc_8088DCFC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 44u, (r23 + 56));
}

loc_8088DD04:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_8088DD28;
    }
}

loc_8088DD08:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r23 + 60));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 131070);
    r4_addr_13 = (r4 + r6);
    r4 = MemoryInline::FlatRead32(r4_addr_13);
    r4_addr_14 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_14, static_cast<uint16_t>(r24));
    r5 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r23 + 52));
    r5_addr_4 = (r5 + r7);
    r4 = MemoryInline::FlatRead16(r5_addr_4);
    r0 = (r4 + 1);
    r5_addr_5 = (r5 + r7);
    MemoryInline::FlatWrite16(r5_addr_5, static_cast<uint16_t>(r0));
}

loc_8088DD28:
{
    r3 = (r3 + 1);
}

loc_8088DD2C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r23 + 12));
    r4 = (r3 & 65535);
    r5 = (r31 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 20));
}

loc_8088DD40:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8088DC9C;
    }
}

loc_8088DD44:
{
    r27 = (r27 + 1);
}

loc_8088DD48:
{
    r0 = MemoryInline::FlatRead16((r23 + 8));
    r3 = (r27 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8088DD54:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088DBF8;
    }
}

loc_8088DD58:
{
    r0 = MemoryInline::FlatRead16((r23 + 16));
    r4 = (r28 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8088DD64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088DDC0;
    }
}

loc_8088DD68:
{
    r5 = MemoryInline::FlatRead32((r23 + 28));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32(r25);
    r3 = r23;
    r6 = (r5 + r29);
    r5 = r26;
    MemoryInline::FlatWriteFloat32((r6 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    MemoryInline::FlatWriteFloat32((r6 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 8));
    MemoryInline::FlatWriteFloat32((r6 + 12), f0.d);
    r6 = MemoryInline::FlatRead32((r23 + 28));
    r6 = (r6 + r29);
    MemoryInline::FlatWrite32((r6 + 16), r26);
    r6 = MemoryInline::FlatRead32((r23 + 28));
    r6 = (r6 + r29);
    MemoryInline::FlatWrite16((r6 + 20), static_cast<uint16_t>(r28));
    r6 = MemoryInline::FlatRead32((r23 + 28));
    r6_addr_1 = (r6 + r29);
    MemoryInline::FlatWrite8(r6_addr_1, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8088EA18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = 1;
    goto loc_8088DDC4;
}

loc_8088DDC0:
{
    r3 = 0;
}

loc_8088DDC4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f28.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -4));
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->fpr[5] = f5;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC01FFF gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0xF000003F fpr_write=0xF000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8088D914 func_8088D914 preserves=false fpr_mask=0xF0000000
