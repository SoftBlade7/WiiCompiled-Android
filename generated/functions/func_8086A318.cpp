#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086A318(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_10 = 0;
    uint32_t r5_addr_11 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_10 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;
    uint32_t r7_addr_8 = 0;
    uint32_t r7_addr_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8086A318;

loc_8086A318:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
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
    r4 = 0x809C0000u;
    r27 = 0x808B0000u;
    r25 = MemoryInline::FlatRead32((r4 + -10520));
    r31 = r3;
    r27 = (r27 + 8232);
    r4 = MemoryInline::FlatRead32((r25 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8086A368:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086A374;
    }
}

loc_8086A36C:
{
    r22 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_8086A378;
}

loc_8086A374:
{
    r22 = 0;
}

loc_8086A378:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r22));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(5));
    r4 = (r4_rot_0 & 2097120);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    r3 = (r4 + 16);
    ctx->lr = 0x8086A390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80870000u;
    r5 = 0x80870000u;
    r7 = r22;
    r6 = 32;
    r4 = (r4 + -22036);
    r5 = (r5 + -22032);
    ctx->lr = 0x8086A3ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80890000u;
    MemoryInline::FlatWrite32((r31 + 4), r3);
    f28.d = MemoryInline::FlatReadFloat32((r4 + -1504));
    r22 = 0;
    goto loc_8086A41C;
}

loc_8086A3C0:
{
    r3 = r25;
    r4 = (r22 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B7Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(5));
    r5 = (r5_rot_2 & 2097120);
    r0 = MemoryInline::FlatRead8((r3 + 20));
    r22 = (r22 + 1);
    r4_addr_2 = (r4 + r5);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    r4 = (r0 + r5);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = (r0 + r5);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_8086A41C:
{
    r0 = MemoryInline::FlatRead16(r31);
    r3 = (r22 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8086A428:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086A3C0;
    }
}

loc_8086A42C:
{
    r29 = 0;
    goto loc_8086A5F8;
}

loc_8086A434:
{
    r3 = r25;
    r4 = (r29 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B7Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(5));
    r26 = (r26_rot_2 & 2097120);
    r4 = MemoryInline::FlatRead8((r3 + 17));
    r28 = r3;
    r3 = (r0 + r26);
    MemoryInline::FlatWrite16((r3 + 20), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r0 + r26);
    r0 = MemoryInline::FlatRead16((r3 + 20));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    ctx->lr = 0x8086A46Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r0 + r26);
    MemoryInline::FlatWrite32((r4 + 24), r3);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r0 + r26);
    r0 = MemoryInline::FlatRead16((r3 + 20));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    ctx->lr = 0x8086A48Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r29 & 65535);
    r4 = 0;
    r5 = (r5 + r26);
    MemoryInline::FlatWrite32((r5 + 28), r3);
    goto loc_8086A5DC;
}

loc_8086A4A4:
{
    r7 = MemoryInline::FlatRead32((r28 + 12));
    r6 = (r4 & 65535);
    r5 = MemoryInline::FlatRead32((r8 + 24));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 131070);
    r7_addr_3 = (r7 + r6);
    r8 = MemoryInline::FlatRead8(r7_addr_3);
    r9 = 0;
    r6 = MemoryInline::FlatRead16(r31);
    r5_addr_3 = (r5 + r3);
    MemoryInline::FlatWrite16(r5_addr_3, static_cast<uint16_t>(r6));
    r6 = MemoryInline::FlatRead16(r31);
    goto loc_8086A4F4;
}

loc_8086A4CC:
{
    r7 = MemoryInline::FlatRead32((r31 + 4));
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(5));
    r5 = (r5_rot_6 & 2097120);
    r7_addr_5 = (r7 + r5);
    r5 = MemoryInline::FlatRead8(r7_addr_5);
}

loc_8086A4DC:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r5))) {
        goto loc_8086A4F0;
    }
}

loc_8086A4E0:
{
    r5 = (r26 + r7);
    r5 = MemoryInline::FlatRead32((r5 + 24));
    r5_addr_4 = (r5 + r3);
    MemoryInline::FlatWrite16(r5_addr_4, static_cast<uint16_t>(r9));
    goto loc_8086A500;
}

loc_8086A4F0:
{
    r9 = (r9 + 1);
}

loc_8086A4F4:
{
    r5 = (r9 & 65535);
}

loc_8086A4FC:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r6))) {
        goto loc_8086A4CC;
    }
}

loc_8086A500:
{
    r12 = MemoryInline::FlatRead32((r31 + 4));
    r23 = 0;
    r5 = 0;
    r6 = (r26 + r12);
    r6 = MemoryInline::FlatRead32((r6 + 24));
    r6_addr_3 = (r6 + r3);
    r22 = MemoryInline::FlatRead16(r6_addr_3);
    goto loc_8086A5A0;
}

loc_8086A51C:
{
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r9 = (r9_rot_4 & 2097120);
    r8 = (r5 & 65535);
    r24 = 0;
    goto loc_8086A57C;
}

loc_8086A52C:
{
    r6 = MemoryInline::FlatRead32((r10 + 24));
    r11_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r11 = (r11_rot_5 & 131070);
}

loc_8086A538:
{
    r6_addr_6 = (r6 + r11);
    r7 = MemoryInline::FlatRead16(r6_addr_6);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r8))) {
        goto loc_8086A548;
    }
}

loc_8086A540:
{
}

loc_8086A544:
{
    if ((static_cast<uint32_t>(r22) == static_cast<uint32_t>(r7))) {
        goto loc_8086A560;
    }
}

loc_8086A548:
{
    r6 = (r29 & 65535);
}

loc_8086A550:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r7))) {
        goto loc_8086A578;
    }
}

loc_8086A554:
{
    r6 = (r5 & 65535);
}

loc_8086A55C:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(r6))) {
        goto loc_8086A578;
    }
}

loc_8086A560:
{
    r6 = (r26 + r12);
    r7 = MemoryInline::FlatRead32((r10 + 28));
    r6 = MemoryInline::FlatRead32((r6 + 28));
    r23 = 1;
    r7_addr_9 = (r7 + r11);
    r7 = MemoryInline::FlatRead16(r7_addr_9);
    r3_addr_5 = (r3 + r6);
    MemoryInline::FlatWrite16(r3_addr_5, static_cast<uint16_t>(r7));
}

loc_8086A578:
{
    r24 = (r24 + 1);
}

loc_8086A57C:
{
    r12 = MemoryInline::FlatRead32((r31 + 4));
    r7 = (r24 & 65535);
    r10 = (r9 + r12);
    r6 = MemoryInline::FlatRead16((r10 + 20));
}

loc_8086A590:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r6))) {
        goto loc_8086A59C;
    }
}

loc_8086A594:
{
}

loc_8086A598:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8086A52C;
    }
}

loc_8086A59C:
{
    r5 = (r5 + 1);
}

loc_8086A5A0:
{
    r6 = (r5 & 65535);
}

loc_8086A5A8:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_8086A5B4;
    }
}

loc_8086A5AC:
{
}

loc_8086A5B0:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8086A51C;
    }
}

loc_8086A5B4:
{
}

loc_8086A5B8:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8086A5D8;
    }
}

loc_8086A5BC:
{
    r5 = (r26 + r12);
    r6 = MemoryInline::FlatRead16((r31 + 8));
    r5 = MemoryInline::FlatRead32((r5 + 28));
    r5_addr_6 = (r5 + r3);
    MemoryInline::FlatWrite16(r5_addr_6, static_cast<uint16_t>(r6));
    r3 = MemoryInline::FlatRead16((r31 + 8));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r3));
}

loc_8086A5D8:
{
    r4 = (r4 + 1);
}

loc_8086A5DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r5 = (r4 & 65535);
    r8 = (r26 + r3);
    r3 = MemoryInline::FlatRead16((r8 + 20));
}

loc_8086A5F0:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r3))) {
        goto loc_8086A4A4;
    }
}

loc_8086A5F4:
{
    r29 = (r29 + 1);
}

loc_8086A5F8:
{
    r0 = MemoryInline::FlatRead16(r31);
    r3 = (r29 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8086A604:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086A434;
    }
}

loc_8086A608:
{
    r22 = MemoryInline::FlatRead16((r31 + 8));
    r3 = (r22 * 36);
    r3 = (r3 + 16);
    ctx->lr = 0x8086A618u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80870000u;
    r5 = 0x80870000u;
    r7 = r22;
    r6 = 36;
    r4 = (r4 + -21968);
    r5 = (r5 + -21964);
    ctx->lr = 0x8086A634u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = 0x802A0000u;
    MemoryInline::FlatWrite32((r31 + 12), r3);
    f29.d = MemoryInline::FlatReadFloat32((r27 + 4));
    r29 = (r28 + 16640);
    f28.d = MemoryInline::FlatReadFloat32((r27 + 32));
    r24 = 0;
    f30.d = MemoryInline::FlatReadFloat32(r27);
    r23 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r27 + 28));
    r30 = 0;
    r27 = 1;
    goto loc_8086A9A0;
}

loc_8086A664:
{
    r26_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(5));
    r26 = (r26_rot_4 & 2097120);
    r22 = 0;
    goto loc_8086A984;
}

loc_8086A670:
{
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & 131070);
    r4 = (r24 & 65535);
    r3_addr_9 = (r3 + r7);
    r0 = MemoryInline::FlatRead16(r3_addr_9);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8086A684:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086A980;
    }
}

loc_8086A688:
{
    r25 = (r4 * 36);
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r3 = (r1 + 8);
    r4_addr_5 = (r4 + r25);
    MemoryInline::FlatWrite16(r4_addr_5, static_cast<uint16_t>(r23));
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r4 = (r26 + r4);
    r5 = MemoryInline::FlatRead32((r4 + 24));
    r4 = (r0 + r25);
    r5_addr_10 = (r5 + r7);
    r0 = MemoryInline::FlatRead16(r5_addr_10);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r6 = MemoryInline::FlatRead32((r31 + 4));
    r5 = (r6 + r26);
    r4 = MemoryInline::FlatRead32((r5 + 24));
    r5 = (r5 + 4);
    r4_addr_6 = (r4 + r7);
    r0 = MemoryInline::FlatRead16(r4_addr_6);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    r4 = (r6 + r0);
    r4 = (r4 + 4);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_8086A6FC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086A708:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086A754;
    }
}

loc_8086A70C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r3 = (r0 + r25);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r27));
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r3 = (r0 + r25);
    MemoryInline::FlatWriteFloat32((r3 + 20), f30.d);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r3 = (r0 + r25);
    MemoryInline::FlatWriteFloat32((r3 + 24), f31.d);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 16640));
    r3 = (r0 + r25);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    goto loc_8086A7D4;
}

loc_8086A754:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r3 = (r0 + r25);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r30));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8086A784u;
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
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r3 = (r0 + r25);
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r3 = (r0 + r25);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f28.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r0 + r25);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r3 = (r0 + r25);
    r3 = (r3 + 8);
    ctx->lr = 0x8086A7D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8086A7D4:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r6 = (r24 & 65535);
    r3 = 0;
    r4 = (r0 + r25);
    MemoryInline::FlatWrite16((r4 + 28), static_cast<uint16_t>(r30));
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r4_addr_7 = (r4 + r25);
    r0 = MemoryInline::FlatRead16(r4_addr_7);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r7 = (r7_rot_4 & -32);
    goto loc_8086A824;
}

loc_8086A7F8:
{
    r4 = MemoryInline::FlatRead32((r5 + 28));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 131070);
    r4_addr_9 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_9);
}

loc_8086A808:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_8086A820;
    }
}

loc_8086A80C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r5 = (r25 + r0);
    r4 = MemoryInline::FlatRead16((r5 + 28));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r5 + 28), static_cast<uint16_t>(r0));
}

loc_8086A820:
{
    r3 = (r3 + 1);
}

loc_8086A824:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r3 & 65535);
    r5 = (r7 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 20));
}

loc_8086A838:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8086A7F8;
    }
}

loc_8086A83C:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r25 + 2);
    r3 = 0;
    r4_addr_10 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_10);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r7 = (r7_rot_5 & -32);
    goto loc_8086A880;
}

loc_8086A854:
{
    r4 = MemoryInline::FlatRead32((r5 + 28));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 131070);
    r4_addr_12 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_12);
}

loc_8086A864:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_8086A87C;
    }
}

loc_8086A868:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r5 = (r25 + r0);
    r4 = MemoryInline::FlatRead16((r5 + 28));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r5 + 28), static_cast<uint16_t>(r0));
}

loc_8086A87C:
{
    r3 = (r3 + 1);
}

loc_8086A880:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r3 & 65535);
    r5 = (r7 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8086A894:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086A854;
    }
}

loc_8086A898:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r3 = (r0 + r25);
    r0 = MemoryInline::FlatRead16((r3 + 28));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & -2);
    ctx->lr = 0x8086A8ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r6 = (r24 & 65535);
    r4 = 0;
    r5 = 0;
    r7 = (r0 + r25);
    MemoryInline::FlatWrite32((r7 + 32), r3);
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r3_addr_10 = (r3 + r25);
    r0 = MemoryInline::FlatRead16(r3_addr_10);
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r7 = (r7_rot_6 & -32);
    goto loc_8086A904;
}

loc_8086A8D4:
{
    r3 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 131070);
    r3_addr_12 = (r3 + r0);
    r8 = MemoryInline::FlatRead16(r3_addr_12);
}

loc_8086A8E4:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r8))) {
        goto loc_8086A900;
    }
}

loc_8086A8E8:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & 131070);
    r4 = (r4 + 1);
    r3 = (r25 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3_addr_13 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_13, static_cast<uint16_t>(r8));
}

loc_8086A900:
{
    r5 = (r5 + 1);
}

loc_8086A904:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r5 & 65535);
    r8 = (r7 + r0);
    r0 = MemoryInline::FlatRead16((r8 + 20));
}

loc_8086A918:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8086A8D4;
    }
}

loc_8086A91C:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r25 + 2);
    r5 = 0;
    r3_addr_15 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_15);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r7 = (r7_rot_7 & -32);
    goto loc_8086A964;
}

loc_8086A934:
{
    r3 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & 131070);
    r3_addr_17 = (r3 + r0);
    r8 = MemoryInline::FlatRead16(r3_addr_17);
}

loc_8086A944:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r8))) {
        goto loc_8086A960;
    }
}

loc_8086A948:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & 131070);
    r4 = (r4 + 1);
    r3 = (r25 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3_addr_18 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_18, static_cast<uint16_t>(r8));
}

loc_8086A960:
{
    r5 = (r5 + 1);
}

loc_8086A964:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r5 & 65535);
    r8 = (r7 + r0);
    r0 = MemoryInline::FlatRead16((r8 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8086A978:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086A934;
    }
}

loc_8086A97C:
{
    r24 = (r24 + 1);
}

loc_8086A980:
{
    r22 = (r22 + 1);
}

loc_8086A984:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r22 & 65535);
    r4 = (r26 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8086A998:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086A670;
    }
}

loc_8086A99C:
{
    r23 = (r23 + 1);
}

loc_8086A9A0:
{
    r0 = MemoryInline::FlatRead16(r31);
    r3 = (r23 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8086A9AC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086A664;
    }
}

loc_8086A9B0:
{
    r3 = r31;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
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
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8086A318 func_8086A318 preserves=false fpr_mask=0xF0000000
