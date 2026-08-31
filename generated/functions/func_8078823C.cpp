#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078823C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_addr_4 = 0;
    uint32_t r12_addr_5 = 0;
    uint32_t r14_addr_0 = 0;
    uint32_t r14_addr_1 = 0;
    uint32_t r14_addr_2 = 0;
    uint32_t r14_addr_3 = 0;
    uint32_t r14_addr_4 = 0;
    uint32_t r15_rot_0 = 0;
    uint32_t r15_rot_1 = 0;
    uint32_t r15_rot_2 = 0;
    uint32_t r15_rot_3 = 0;
    uint32_t r15_rot_4 = 0;
    uint32_t r15_rot_5 = 0;
    uint32_t r15_rot_6 = 0;
    uint32_t r15_rot_7 = 0;
    uint32_t r15_rot_8 = 0;
    uint32_t r15_rot_9 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r21_rot_5 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_12 = 0;
    uint32_t r8_rot_13 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8078823C;

loc_8078823C:
{
    MemoryInline::FlatWriteRam32((r1 + -592), r1);
    r1 = (r1 + -592);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 596), r0);
    r11 = (r1 + 592);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r4 = 0x809C0000u;
    r14 = 0x808A0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r14 = (r14 + 18760);
    r15 = 0x808A0000u;
    r31 = r3;
    r15 = (r15 + 18464);
    r24 = (r4 + 6144);
    r16 = (r14 + 9);
    r3 = 76;
    ctx->lr = 0x8078827Cu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80788280:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80788290;
    }
}

loc_80788284:
{
    r4 = 6;
    r5 = 0;
    // inline leaf 0x8055B50C (19 guest instruction(s))
    r7 = 0x808B0000u;
    r6 = 0;
    r7 = (r7 + 18416);
    r0 = (r5 | 77594624);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r7);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 64), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 72), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r6);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    // end of inlined leaf 0x8055B50C
}

loc_80788290:
{
    MemoryInline::FlatWrite32((r31 + 32), r3);
    r5 = r16;
    r3 = (r31 + 16);
    r4 = 7;
    ctx->lr = 0x807882A4u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8055B618u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r4 = r14;
    r5 = (r31 + 16);
    r6 = 0;
    ctx->lr = 0x807882B8u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8055C0E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r15 + 208));
    r3 = (r1 + 72);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    // inline leaf 0x80230280 (17 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 28), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 44), f2.d);
    // end of inlined leaf 0x80230280
    r16 = MemoryInline::FlatRead32((r31 + 32));
    r14 = 0;
}

loc_807882DC:
{
    r3 = MemoryInline::FlatRead32((r16 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807882E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807882F8;
    }
}

loc_807882EC:
{
    r5 = (r1 + 72);
    r4 = 0;
    ctx->lr = 0x807882F8u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_807882F8:
{
    r14 = (r14 + 1);
    r16 = (r16 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r14), static_cast<int32_t>(2));
}

loc_80788304:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807882DC;
    }
}

loc_80788308:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r4 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80788320u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808A0000u;
    r3 = 76;
    r4 = (r4 + 18760);
    r14 = (r4 + 24);
    r16 = (r4 + 33);
    ctx->lr = 0x80788338u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8078833C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078834C;
    }
}

loc_80788340:
{
    r4 = 6;
    r5 = 0;
    // inline leaf 0x8055B50C (19 guest instruction(s))
    r7 = 0x808B0000u;
    r6 = 0;
    r7 = (r7 + 18416);
    r0 = (r5 | 77594624);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r7);
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 8), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r3 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r3 + 40), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r3 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r3 + 64), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r3 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r3 + 72), r6);
    }
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r6);
    }
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r3 + 32), r6);
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r0);
    // end of inlined leaf 0x8055B50C
}

loc_8078834C:
{
    MemoryInline::FlatWrite32((r31 + 36), r3);
    r5 = r16;
    r3 = (r31 + 20);
    r4 = 7;
    ctx->lr = 0x80788360u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8055B618u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r4 = r14;
    r5 = (r31 + 20);
    r6 = 0;
    ctx->lr = 0x80788374u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8055C0E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r15 + 208));
    r3 = (r1 + 120);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r4 = (r1 + 20);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    // inline leaf 0x80230280 (17 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, r3, f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r3 + 8), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r3 + 16), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r3 + 20), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r3 + 24), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r3 + 32), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r3 + 36), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 40u, (r3 + 40), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r3 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r3 + 28), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r3 + 44), f2.d);
    // end of inlined leaf 0x80230280
    r16 = MemoryInline::FlatRead32((r31 + 36));
    r14 = 0;
}

loc_80788398:
{
    r3 = MemoryInline::FlatRead32((r16 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807883A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807883B4;
    }
}

loc_807883A8:
{
    r5 = (r1 + 120);
    r4 = 0;
    ctx->lr = 0x807883B4u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_807883B4:
{
    r14 = (r14 + 1);
    r16 = (r16 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r14), static_cast<int32_t>(2));
}

loc_807883C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80788398;
    }
}

loc_807883C4:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r4 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807883DCu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808A0000u;
    r3 = 76;
    r4 = (r4 + 18760);
    r14 = (r4 + 48);
    r16 = (r4 + 57);
    ctx->lr = 0x807883F4u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807883F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80788408;
    }
}

loc_807883FC:
{
    r4 = 6;
    r5 = 0;
    // inline leaf 0x8055B50C (19 guest instruction(s))
    r7 = 0x808B0000u;
    r6 = 0;
    r7 = (r7 + 18416);
    r0 = (r5 | 77594624);
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, r3, r7);
    MemoryInline::WriteResolved16(guest_range_5, 8u, (r3 + 8), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r3 + 12), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r3 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r3 + 40), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 60u, (r3 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_5, 64u, (r3 + 64), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 68u, (r3 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_5, 72u, (r3 + 72), r6);
    }
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r3 + 20), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r3 + 24), r6);
    }
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r3 + 32), r6);
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r3 + 4), r0);
    // end of inlined leaf 0x8055B50C
}

loc_80788408:
{
    MemoryInline::FlatWrite32((r31 + 40), r3);
    r5 = r16;
    r3 = (r31 + 24);
    r4 = 7;
    ctx->lr = 0x8078841Cu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8055B618u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 40));
    r4 = r14;
    r5 = (r31 + 24);
    r6 = 0;
    ctx->lr = 0x80788430u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8055C0E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r15 + 208));
    r3 = (r1 + 168);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    r4 = (r1 + 32);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    // inline leaf 0x80230280 (17 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    guest_range_6 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 0u, r3, f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_6, 8u, (r3 + 8), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 16u, (r3 + 16), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 20u, (r3 + 20), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_6, 24u, (r3 + 24), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 32u, (r3 + 32), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 36u, (r3 + 36), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_6, 40u, (r3 + 40), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 12u, (r3 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 28u, (r3 + 28), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 44u, (r3 + 44), f2.d);
    // end of inlined leaf 0x80230280
    r16 = MemoryInline::FlatRead32((r31 + 40));
    r14 = 0;
}

loc_80788454:
{
    r3 = MemoryInline::FlatRead32((r16 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80788460:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80788470;
    }
}

loc_80788464:
{
    r5 = (r1 + 168);
    r4 = 0;
    ctx->lr = 0x80788470u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_80788470:
{
    r14 = (r14 + 1);
    r16 = (r16 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r14), static_cast<int32_t>(2));
}

loc_8078847C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80788454;
    }
}

loc_80788480:
{
    r3 = MemoryInline::FlatRead32((r31 + 40));
    r4 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80788498u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808A0000u;
    r3 = 76;
    r4 = (r4 + 18760);
    r14 = (r4 + 72);
    r16 = (r4 + 81);
    ctx->lr = 0x807884B0u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807884B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807884C4;
    }
}

loc_807884B8:
{
    r4 = 6;
    r5 = 0;
    // inline leaf 0x8055B50C (19 guest instruction(s))
    r7 = 0x808B0000u;
    r6 = 0;
    r7 = (r7 + 18416);
    r0 = (r5 | 77594624);
    guest_range_7 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, r3, r7);
    MemoryInline::WriteResolved16(guest_range_7, 8u, (r3 + 8), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved32(guest_range_7, 12u, (r3 + 12), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_7, 36u, (r3 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_7, 40u, (r3 + 40), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_7, 60u, (r3 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_7, 64u, (r3 + 64), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_7, 68u, (r3 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_7, 72u, (r3 + 72), r6);
    }
    MemoryInline::WriteResolved32(guest_range_7, 20u, (r3 + 20), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_7, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_7, 24u, (r3 + 24), r6);
    }
    MemoryInline::WriteResolved32(guest_range_7, 32u, (r3 + 32), r6);
    MemoryInline::WriteResolved32(guest_range_7, 4u, (r3 + 4), r0);
    // end of inlined leaf 0x8055B50C
}

loc_807884C4:
{
    MemoryInline::FlatWrite32((r31 + 44), r3);
    r5 = r16;
    r3 = (r31 + 28);
    r4 = 7;
    ctx->lr = 0x807884D8u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8055B618u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 44));
    r4 = r14;
    r5 = (r31 + 28);
    r6 = 0;
    ctx->lr = 0x807884ECu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8055C0E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r15 + 208));
    r3 = (r1 + 216);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    r4 = (r1 + 44);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    // inline leaf 0x80230280 (17 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    guest_range_8 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_8, 0u, r3, f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_8, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_8, 8u, (r3 + 8), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_8, 16u, (r3 + 16), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_8, 20u, (r3 + 20), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_8, 24u, (r3 + 24), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_8, 32u, (r3 + 32), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_8, 36u, (r3 + 36), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_8, 40u, (r3 + 40), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_8, 12u, (r3 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_8, 28u, (r3 + 28), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_8, 44u, (r3 + 44), f2.d);
    // end of inlined leaf 0x80230280
    r16 = MemoryInline::FlatRead32((r31 + 44));
    r14 = 0;
}

loc_80788510:
{
    r3 = MemoryInline::FlatRead32((r16 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8078851C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078852C;
    }
}

loc_80788520:
{
    r5 = (r1 + 216);
    r4 = 0;
    ctx->lr = 0x8078852Cu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_8078852C:
{
    r14 = (r14 + 1);
    r16 = (r16 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r14), static_cast<int32_t>(2));
}

loc_80788538:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80788510;
    }
}

loc_8078853C:
{
    r3 = MemoryInline::FlatRead32((r31 + 44));
    r4 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80788554u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r4 = r24;
    r5 = (r1 + 456);
    ctx->lr = 0x80788564u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80789340u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r8 = (r15 + 160);
    r9 = (r15 + 112);
    guest_range_9 = MemoryInline::ResolveRangeHost((r8 + 4), 0, 32u, true, false);
    r23 = MemoryInline::ReadResolved32(guest_range_9, 20u, (r8 + 24));
    r19 = 42;
    guest_range_14 = MemoryInline::ResolveRangeHost(r9, 0, 52u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_14, 12u, (r9 + 12));
    r18 = (r1 + 456);
    MemoryInline::FlatWriteRam32((r1 + 420), r6);
    r30 = (r1 + 408);
    r5 = MemoryInline::ReadResolved32(guest_range_14, 16u, (r9 + 16));
    r12 = (r1 + 312);
    MemoryInline::FlatWriteRam32((r1 + 424), r5);
    r14 = (r1 + 56);
    r4 = MemoryInline::ReadResolved32(guest_range_14, 20u, (r9 + 20));
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 428), r4);
    r6 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_14, 24u, (r9 + 24));
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 432), r3);
    r11 = 0;
    r0 = MemoryInline::ReadResolved32(guest_range_14, 28u, (r9 + 28));
    r10 = 0;
    MemoryInline::FlatWriteRam32((r1 + 436), r0);
    r16 = 0;
    r0 = MemoryInline::ReadResolved32(guest_range_9, 12u, (r8 + 16));
    r29 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 508), r23);
    r26 = 1;
    r23 = MemoryInline::ReadResolved32(guest_range_9, 24u, (r8 + 28));
    r28 = 3;
    r22 = MemoryInline::ReadResolved32(guest_range_14, 0u, (r15 + 112));
    r27 = 0x809C0000u;
    r17 = MemoryInline::ReadResolved32(guest_range_14, 48u, (r15 + 160));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_14, 4u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_14, 4u, (r9 + 4));
            r20 = MemoryInline::ReadResolved32(guest_range_14, 8u, (r9 + 8));
        }
    }
    r9 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 0u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r8 + 4));
            r4 = MemoryInline::ReadResolved32(guest_range_9, 4u, (r8 + 8));
        }
    }
    r3 = MemoryInline::ReadResolved32(guest_range_9, 8u, (r8 + 12));
    r25 = MemoryInline::ReadResolved32(guest_range_9, 16u, (r8 + 20));
    r8 = MemoryInline::ReadResolved32(guest_range_9, 28u, (r8 + 32));
    MemoryInline::FlatWriteRam32((r1 + 376), r0);
    r0 = MemoryInline::FlatRead32((r1 + 508));
    MemoryInline::FlatWriteRam32((r1 + 384), r0);
    r0 = r23;
    MemoryInline::FlatWriteRam32((r1 + 408), r22);
    MemoryInline::FlatWriteRam32((r1 + 412), r21);
    MemoryInline::FlatWriteRam32((r1 + 416), r20);
    MemoryInline::FlatWriteRam32((r1 + 420), r19);
    MemoryInline::FlatWriteRam32((r1 + 424), r19);
    MemoryInline::FlatWriteRam32((r1 + 428), r19);
    MemoryInline::FlatWriteRam32((r1 + 432), r19);
    MemoryInline::FlatWriteRam32((r1 + 436), r19);
    MemoryInline::FlatWriteRam32((r1 + 440), r19);
    MemoryInline::FlatWriteRam32((r1 + 444), r19);
    MemoryInline::FlatWriteRam32((r1 + 448), r19);
    MemoryInline::FlatWriteRam32((r1 + 452), r19);
    MemoryInline::FlatWriteRam32((r1 + 360), r17);
    MemoryInline::FlatWriteRam32((r1 + 364), r15);
    MemoryInline::FlatWriteRam32((r1 + 368), r4);
    MemoryInline::FlatWriteRam32((r1 + 372), r3);
    MemoryInline::FlatWriteRam32((r1 + 380), r25);
    MemoryInline::FlatWriteRam32((r1 + 388), r0);
    MemoryInline::FlatWriteRam32((r1 + 392), r8);
    MemoryInline::FlatWriteRam32((r1 + 396), r19);
    MemoryInline::FlatWriteRam32((r1 + 400), r19);
    MemoryInline::FlatWriteRam32((r1 + 404), r19);
    r0 = MemoryInline::FlatRead32((r24 + 2928));
    MemoryInline::FlatWriteRam32((r1 + 504), r23);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r4 = (r4_rot_0 & 1);
}

loc_8078867C:
{
    r0 = (r16 & 255);
    r0 = (r0 * 240);
    r25 = (r24 + r0);
    guest_range_10 = MemoryInline::ResolveRangeHost((r25 + 16), 0, 217u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_10, 8u, (r25 + 24));
}

loc_80788690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8078869C;
    }
}

loc_80788694:
{
}

loc_80788698:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_807886AC;
    }
}

loc_8078869C:
{
    r15 = 1;
    r5 = (r5 + 1);
    r6 = (r6 + 1);
    goto loc_807886BC;
}

loc_807886AC:
{
}

loc_807886B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80788DD4;
    }
}

loc_807886B4:
{
    r15 = 0;
    r5 = (r5 + 1);
}

loc_807886BC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r25 + 16));
}

loc_807886C4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(18))) {
        goto loc_807886E8;
    }
}

loc_807886C8:
{
    r3 = MemoryInline::FlatRead32(r18);
    r0 = (r3 + -15);
}

loc_807886D4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_807886E0;
    }
}

loc_807886D8:
{
}

loc_807886DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(23))) {
        goto loc_807886E8;
    }
}

loc_807886E0:
{
    r3 = (r31 + r3);
    MemoryInline::FlatWrite8((r3 + 1140), static_cast<uint8_t>(r26));
}

loc_807886E8:
{
}

loc_807886EC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80788710;
    }
}

loc_807886F0:
{
    r3 = MemoryInline::FlatRead32((r27 + 7736));
    r0 = MemoryInline::ReadResolved32(guest_range_10, 196u, (r25 + 212));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    goto loc_80788728;
}

loc_80788710:
{
    r3 = MemoryInline::ReadResolved8(guest_range_10, 216u, (r25 + 232));
    r0 = (3 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(3) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r3 = (r28 | ~r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r3 - r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_80788728:
{
}

loc_8078872C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80788BD0;
    }
}

loc_80788730:
{
}

loc_80788734:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807889D0;
    }
}

loc_80788738:
{
    r8 = (r1 + 56);
    r17 = (r1 + 312);
    r3 = 0;
    ctr = r7;
}

loc_8078874C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_807887A4;
    }
}

loc_80788750:
{
}

loc_80788754:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(0))) {
        goto loc_80788778;
    }
}

loc_80788758:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_80788760:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807887A4;
    }
}

loc_80788764:
{
    r19 = MemoryInline::ReadResolved8(guest_range_10, 216u, (r25 + 232));
    r0 = MemoryInline::FlatRead32(r17);
}

loc_80788770:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(r0))) {
        goto loc_80788794;
    }
}

loc_80788774:
{
    goto loc_807887A4;
}

loc_80788778:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_80788780:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80788794;
    }
}

loc_80788784:
{
    r19 = MemoryInline::ReadResolved8(guest_range_10, 216u, (r25 + 232));
    r0 = MemoryInline::FlatRead32(r17);
}

loc_80788790:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_807887A4;
    }
}

loc_80788794:
{
    r8 = (r8 + 1);
    r17 = (r17 + 4);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788750;
    }
}

loc_807887A4:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(r3));
}

loc_807887A8:
{
    r8 = r7;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_807889B4;
    }
}

loc_807887B0:
{
    r17 = (r7 - r3);
    r23 = (r3 + 8);
}

loc_807887BC:
{
    if ((static_cast<int32_t>(r17) <= static_cast<int32_t>(8))) {
        goto loc_8078895C;
    }
}

loc_807887C0:
{
    r22 = 0;
    r21 = 0;
    r20 = 0;
    r19 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_807887E4;
    }
}

loc_807887D4:
{
    r0 = (r29 + 1);
}

loc_807887DC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_807887E4;
    }
}

loc_807887E0:
{
    r19 = 1;
}

loc_807887E4:
{
}

loc_807887E8:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_807887FC;
    }
}

loc_807887EC:
{
    r0 = (r29 + 1);
}

loc_807887F4:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_807887FC;
    }
}

loc_807887F8:
{
    r20 = 1;
}

loc_807887FC:
{
}

loc_80788800:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80788814;
    }
}

loc_80788804:
{
    r0 = (r3 + -2147483648);
}

loc_8078880C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80788814;
    }
}

loc_80788810:
{
    r21 = 1;
}

loc_80788814:
{
}

loc_80788818:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80788850;
    }
}

loc_8078881C:
{
    r0 = (0 - r3);
    r19 = (r7 & -2147483648);
    r20 = (r0 & -2147483648);
}

loc_8078882C:
{
    r0 = 1;
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(r20))) {
        goto loc_80788844;
    }
}

loc_80788834:
{
    r17 = (r17 & -2147483648);
}

loc_8078883C:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(r17))) {
        goto loc_80788844;
    }
}

loc_80788840:
{
    r0 = 0;
}

loc_80788844:
{
}

loc_80788848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80788850;
    }
}

loc_8078884C:
{
    r22 = 1;
}

loc_80788850:
{
}

loc_80788854:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8078895C;
    }
}

loc_80788858:
{
    r0 = (r7 + 7);
    r17 = (r1 + 408);
    r0 = (r0 - r23);
    r19 = (r1 + 312);
    r20 = (r1 + 56);
    r17 = (r17 + r11);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_6 & 536870911);
    r19 = (r19 + r11);
    r20 = (r20 + r7);
    ctr = r0;
}

loc_80788884:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r23))) {
        goto loc_8078895C;
    }
}

loc_80788888:
{
    r22 = MemoryInline::FlatRead32((r17 + -4));
    r8 = (r8 + -8);
    r21 = MemoryInline::FlatRead32((r19 + -4));
    r0 = MemoryInline::FlatRead8((r20 + -1));
    MemoryInline::FlatWrite32(r17, r22);
    MemoryInline::FlatWrite32(r19, r21);
    r22 = MemoryInline::FlatRead32((r17 + -8));
    MemoryInline::FlatWrite8(r20, static_cast<uint8_t>(r0));
    r21 = MemoryInline::FlatRead32((r19 + -8));
    r0 = MemoryInline::FlatRead8((r20 + -2));
    MemoryInline::FlatWrite32((r17 + -4), r22);
    MemoryInline::FlatWrite32((r19 + -4), r21);
    r22 = MemoryInline::FlatRead32((r17 + -12));
    MemoryInline::FlatWrite8((r20 + -1), static_cast<uint8_t>(r0));
    r21 = MemoryInline::FlatRead32((r19 + -12));
    r0 = MemoryInline::FlatRead8((r20 + -3));
    MemoryInline::FlatWrite32((r17 + -8), r22);
    MemoryInline::FlatWrite32((r19 + -8), r21);
    r22 = MemoryInline::FlatRead32((r17 + -16));
    MemoryInline::FlatWrite8((r20 + -2), static_cast<uint8_t>(r0));
    r21 = MemoryInline::FlatRead32((r19 + -16));
    r0 = MemoryInline::FlatRead8((r20 + -4));
    MemoryInline::FlatWrite32((r17 + -12), r22);
    MemoryInline::FlatWrite32((r19 + -12), r21);
    r22 = MemoryInline::FlatRead32((r17 + -20));
    MemoryInline::FlatWrite8((r20 + -3), static_cast<uint8_t>(r0));
    r21 = MemoryInline::FlatRead32((r19 + -20));
    r0 = MemoryInline::FlatRead8((r20 + -5));
    MemoryInline::FlatWrite32((r17 + -16), r22);
    MemoryInline::FlatWrite32((r19 + -16), r21);
    r22 = MemoryInline::FlatRead32((r17 + -24));
    MemoryInline::FlatWrite8((r20 + -4), static_cast<uint8_t>(r0));
    r21 = MemoryInline::FlatRead32((r19 + -24));
    r0 = MemoryInline::FlatRead8((r20 + -6));
    MemoryInline::FlatWrite32((r17 + -20), r22);
    MemoryInline::FlatWrite32((r19 + -20), r21);
    r22 = MemoryInline::FlatRead32((r17 + -28));
    MemoryInline::FlatWrite8((r20 + -5), static_cast<uint8_t>(r0));
    r21 = MemoryInline::FlatRead32((r19 + -28));
    r0 = MemoryInline::FlatRead8((r20 + -7));
    MemoryInline::FlatWrite32((r17 + -24), r22);
    MemoryInline::FlatWrite32((r19 + -24), r21);
    r22 = MemoryInline::FlatRead32((r17 + -32));
    MemoryInline::FlatWrite8((r20 + -6), static_cast<uint8_t>(r0));
    r21 = MemoryInline::FlatRead32((r19 + -32));
    r0 = MemoryInline::FlatRead8((r20 + -8));
    MemoryInline::FlatWrite32((r17 + -28), r22);
    r17 = (r17 + -32);
    MemoryInline::FlatWrite32((r19 + -28), r21);
    r19 = (r19 + -32);
    MemoryInline::FlatWrite8((r20 + -7), static_cast<uint8_t>(r0));
    r20 = (r20 + -8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788888;
    }
}

loc_8078895C:
{
    r20 = (r1 + 56);
    r21_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r21 = (r21_rot_2 & -4);
    r17 = (r1 + 408);
    r19 = (r1 + 312);
    r0 = (r8 - r3);
    r20 = (r20 + r8);
    r17 = (r17 + r21);
    r19 = (r19 + r21);
    ctr = r0;
}

loc_80788984:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(r3))) {
        goto loc_807889B4;
    }
}

loc_80788988:
{
    r22 = MemoryInline::FlatRead32((r17 + -4));
    r8 = (r8 + -1);
    r21 = MemoryInline::FlatRead32((r19 + -4));
    r0 = MemoryInline::FlatRead8((r20 + -1));
    MemoryInline::FlatWrite32(r17, r22);
    r17 = (r17 + -4);
    MemoryInline::FlatWrite32(r19, r21);
    r19 = (r19 + -4);
    MemoryInline::FlatWrite8(r20, static_cast<uint8_t>(r0));
    r20 = (r20 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788988;
    }
}

loc_807889B4:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & -4);
    r0 = MemoryInline::FlatRead32(r18);
    r30_addr_2 = (r30 + r8);
    MemoryInline::FlatWrite32(r30_addr_2, r0);
    r0 = MemoryInline::ReadResolved8(guest_range_10, 216u, (r25 + 232));
    r12_addr_2 = (r12 + r8);
    MemoryInline::FlatWrite32(r12_addr_2, r0);
    r14_addr_2 = (r14 + r3);
    MemoryInline::FlatWrite8(r14_addr_2, static_cast<uint8_t>(r15));
    goto loc_80788BC4;
}

loc_807889D0:
{
    r8 = (r1 + 312);
    r17 = 0;
    ctr = r7;
}

loc_807889E0:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_80788A00;
    }
}

loc_807889E4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_10, 216u, (r25 + 232));
    r0 = MemoryInline::FlatRead32(r8);
}

loc_807889F0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80788A00;
    }
}

loc_807889F4:
{
    r8 = (r8 + 4);
    r17 = (r17 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807889E4;
    }
}

loc_80788A00:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(r17));
}

loc_80788A04:
{
    r19 = r7;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80788BB0;
    }
}

loc_80788A0C:
{
    r8 = (r7 - r17);
    r0 = (r17 + 8);
}

loc_80788A18:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(8))) {
        goto loc_80788B6C;
    }
}

loc_80788A1C:
{
    r3 = 0;
    r20 = 0;
    r21 = 0;
    r22 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80788A40;
    }
}

loc_80788A30:
{
    r15 = (r29 + 1);
}

loc_80788A38:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(r15))) {
        goto loc_80788A40;
    }
}

loc_80788A3C:
{
    r22 = 1;
}

loc_80788A40:
{
}

loc_80788A44:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80788A58;
    }
}

loc_80788A48:
{
    r15 = (r29 + 1);
}

loc_80788A50:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r15))) {
        goto loc_80788A58;
    }
}

loc_80788A54:
{
    r21 = 1;
}

loc_80788A58:
{
}

loc_80788A5C:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80788A70;
    }
}

loc_80788A60:
{
    r15 = (r17 + -2147483648);
}

loc_80788A68:
{
    if ((static_cast<uint32_t>(r15) == static_cast<uint32_t>(0))) {
        goto loc_80788A70;
    }
}

loc_80788A6C:
{
    r20 = 1;
}

loc_80788A70:
{
}

loc_80788A74:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80788AAC;
    }
}

loc_80788A78:
{
    r20 = (0 - r17);
    r15 = (r7 & -2147483648);
    r20 = (r20 & -2147483648);
    r21 = 1;
}

loc_80788A8C:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(r20))) {
        goto loc_80788AA0;
    }
}

loc_80788A90:
{
    r8 = (r8 & -2147483648);
}

loc_80788A98:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(r8))) {
        goto loc_80788AA0;
    }
}

loc_80788A9C:
{
    r21 = 0;
}

loc_80788AA0:
{
}

loc_80788AA4:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80788AAC;
    }
}

loc_80788AA8:
{
    r3 = 1;
}

loc_80788AAC:
{
}

loc_80788AB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80788B6C;
    }
}

loc_80788AB4:
{
    r15 = (r7 + 7);
    r3 = (r1 + 408);
    r15 = (r15 - r0);
    r8 = (r1 + 312);
    r15_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(29));
    r15 = (r15_rot_2 & 536870911);
    r3 = (r3 + r11);
    r8 = (r8 + r11);
    ctr = r15;
}

loc_80788AD8:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r0))) {
        goto loc_80788B6C;
    }
}

loc_80788ADC:
{
    r15 = MemoryInline::FlatRead32((r3 + -4));
    r19 = (r19 + -8);
    r0 = MemoryInline::FlatRead32((r8 + -4));
    MemoryInline::FlatWrite32(r3, r15);
    MemoryInline::FlatWrite32(r8, r0);
    r15 = MemoryInline::FlatRead32((r3 + -8));
    r0 = MemoryInline::FlatRead32((r8 + -8));
    MemoryInline::FlatWrite32((r3 + -4), r15);
    MemoryInline::FlatWrite32((r8 + -4), r0);
    r15 = MemoryInline::FlatRead32((r3 + -12));
    r0 = MemoryInline::FlatRead32((r8 + -12));
    MemoryInline::FlatWrite32((r3 + -8), r15);
    MemoryInline::FlatWrite32((r8 + -8), r0);
    r15 = MemoryInline::FlatRead32((r3 + -16));
    r0 = MemoryInline::FlatRead32((r8 + -16));
    MemoryInline::FlatWrite32((r3 + -12), r15);
    MemoryInline::FlatWrite32((r8 + -12), r0);
    r15 = MemoryInline::FlatRead32((r3 + -20));
    r0 = MemoryInline::FlatRead32((r8 + -20));
    MemoryInline::FlatWrite32((r3 + -16), r15);
    MemoryInline::FlatWrite32((r8 + -16), r0);
    r15 = MemoryInline::FlatRead32((r3 + -24));
    r0 = MemoryInline::FlatRead32((r8 + -24));
    MemoryInline::FlatWrite32((r3 + -20), r15);
    MemoryInline::FlatWrite32((r8 + -20), r0);
    r15 = MemoryInline::FlatRead32((r3 + -28));
    r0 = MemoryInline::FlatRead32((r8 + -28));
    MemoryInline::FlatWrite32((r3 + -24), r15);
    MemoryInline::FlatWrite32((r8 + -24), r0);
    r15 = MemoryInline::FlatRead32((r3 + -32));
    r0 = MemoryInline::FlatRead32((r8 + -32));
    MemoryInline::FlatWrite32((r3 + -28), r15);
    r3 = (r3 + -32);
    MemoryInline::FlatWrite32((r8 + -28), r0);
    r8 = (r8 + -32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788ADC;
    }
}

loc_80788B6C:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r8 = (r1 + 408);
    r15 = (r1 + 312);
    r0 = (r19 - r17);
    r8 = (r8 + r3);
    r15 = (r15 + r3);
    ctr = r0;
}

loc_80788B8C:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(r17))) {
        goto loc_80788BB0;
    }
}

loc_80788B90:
{
    r3 = MemoryInline::FlatRead32((r8 + -4));
    r19 = (r19 + -1);
    r0 = MemoryInline::FlatRead32((r15 + -4));
    MemoryInline::FlatWrite32(r8, r3);
    r8 = (r8 + -4);
    MemoryInline::FlatWrite32(r15, r0);
    r15 = (r15 + -4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788B90;
    }
}

loc_80788BB0:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r0 = MemoryInline::FlatRead32(r18);
    r30_addr_3 = (r30 + r3);
    MemoryInline::FlatWrite32(r30_addr_3, r0);
    r0 = MemoryInline::ReadResolved8(guest_range_10, 216u, (r25 + 232));
    r12_addr_3 = (r12 + r3);
    MemoryInline::FlatWrite32(r12_addr_3, r0);
}

loc_80788BC4:
{
    r7 = (r7 + 1);
    r11 = (r11 + 4);
    goto loc_80788DD4;
}

loc_80788BD0:
{
    r8 = (r1 + 264);
    r17 = 0;
    ctr = r9;
}

loc_80788BE0:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(0))) {
        goto loc_80788C00;
    }
}

loc_80788BE4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_10, 216u, (r25 + 232));
    r0 = MemoryInline::FlatRead32(r8);
}

loc_80788BF0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80788C00;
    }
}

loc_80788BF4:
{
    r8 = (r8 + 4);
    r17 = (r17 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788BE4;
    }
}

loc_80788C00:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r9), static_cast<int32_t>(r17));
}

loc_80788C04:
{
    r19 = r9;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80788DB0;
    }
}

loc_80788C0C:
{
    r8 = (r9 - r17);
    r0 = (r17 + 8);
}

loc_80788C18:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(8))) {
        goto loc_80788D6C;
    }
}

loc_80788C1C:
{
    r3 = 0;
    r20 = 0;
    r21 = 0;
    r22 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80788C40;
    }
}

loc_80788C30:
{
    r15 = (r29 + 1);
}

loc_80788C38:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(r15))) {
        goto loc_80788C40;
    }
}

loc_80788C3C:
{
    r22 = 1;
}

loc_80788C40:
{
}

loc_80788C44:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80788C58;
    }
}

loc_80788C48:
{
    r15 = (r29 + 1);
}

loc_80788C50:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r15))) {
        goto loc_80788C58;
    }
}

loc_80788C54:
{
    r21 = 1;
}

loc_80788C58:
{
}

loc_80788C5C:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80788C70;
    }
}

loc_80788C60:
{
    r15 = (r17 + -2147483648);
}

loc_80788C68:
{
    if ((static_cast<uint32_t>(r15) == static_cast<uint32_t>(0))) {
        goto loc_80788C70;
    }
}

loc_80788C6C:
{
    r20 = 1;
}

loc_80788C70:
{
}

loc_80788C74:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80788CAC;
    }
}

loc_80788C78:
{
    r20 = (0 - r17);
    r15 = (r9 & -2147483648);
    r20 = (r20 & -2147483648);
    r21 = 1;
}

loc_80788C8C:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(r20))) {
        goto loc_80788CA0;
    }
}

loc_80788C90:
{
    r8 = (r8 & -2147483648);
}

loc_80788C98:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(r8))) {
        goto loc_80788CA0;
    }
}

loc_80788C9C:
{
    r21 = 0;
}

loc_80788CA0:
{
}

loc_80788CA4:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80788CAC;
    }
}

loc_80788CA8:
{
    r3 = 1;
}

loc_80788CAC:
{
}

loc_80788CB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80788D6C;
    }
}

loc_80788CB4:
{
    r15 = (r9 + 7);
    r3 = (r1 + 360);
    r15 = (r15 - r0);
    r8 = (r1 + 264);
    r15_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(29));
    r15 = (r15_rot_6 & 536870911);
    r3 = (r3 + r10);
    r8 = (r8 + r10);
    ctr = r15;
}

loc_80788CD8:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(r0))) {
        goto loc_80788D6C;
    }
}

loc_80788CDC:
{
    r15 = MemoryInline::FlatRead32((r3 + -4));
    r19 = (r19 + -8);
    r0 = MemoryInline::FlatRead32((r8 + -4));
    MemoryInline::FlatWrite32(r3, r15);
    MemoryInline::FlatWrite32(r8, r0);
    r15 = MemoryInline::FlatRead32((r3 + -8));
    r0 = MemoryInline::FlatRead32((r8 + -8));
    MemoryInline::FlatWrite32((r3 + -4), r15);
    MemoryInline::FlatWrite32((r8 + -4), r0);
    r15 = MemoryInline::FlatRead32((r3 + -12));
    r0 = MemoryInline::FlatRead32((r8 + -12));
    MemoryInline::FlatWrite32((r3 + -8), r15);
    MemoryInline::FlatWrite32((r8 + -8), r0);
    r15 = MemoryInline::FlatRead32((r3 + -16));
    r0 = MemoryInline::FlatRead32((r8 + -16));
    MemoryInline::FlatWrite32((r3 + -12), r15);
    MemoryInline::FlatWrite32((r8 + -12), r0);
    r15 = MemoryInline::FlatRead32((r3 + -20));
    r0 = MemoryInline::FlatRead32((r8 + -20));
    MemoryInline::FlatWrite32((r3 + -16), r15);
    MemoryInline::FlatWrite32((r8 + -16), r0);
    r15 = MemoryInline::FlatRead32((r3 + -24));
    r0 = MemoryInline::FlatRead32((r8 + -24));
    MemoryInline::FlatWrite32((r3 + -20), r15);
    MemoryInline::FlatWrite32((r8 + -20), r0);
    r15 = MemoryInline::FlatRead32((r3 + -28));
    r0 = MemoryInline::FlatRead32((r8 + -28));
    MemoryInline::FlatWrite32((r3 + -24), r15);
    MemoryInline::FlatWrite32((r8 + -24), r0);
    r15 = MemoryInline::FlatRead32((r3 + -32));
    r0 = MemoryInline::FlatRead32((r8 + -32));
    MemoryInline::FlatWrite32((r3 + -28), r15);
    r3 = (r3 + -32);
    MemoryInline::FlatWrite32((r8 + -28), r0);
    r8 = (r8 + -32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788CDC;
    }
}

loc_80788D6C:
{
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(2));
    r3 = (r3_rot_6 & -4);
    r8 = (r1 + 360);
    r15 = (r1 + 264);
    r0 = (r19 - r17);
    r8 = (r8 + r3);
    r15 = (r15 + r3);
    ctr = r0;
}

loc_80788D8C:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(r17))) {
        goto loc_80788DB0;
    }
}

loc_80788D90:
{
    r3 = MemoryInline::FlatRead32((r8 + -4));
    r19 = (r19 + -1);
    r0 = MemoryInline::FlatRead32((r15 + -4));
    MemoryInline::FlatWrite32(r8, r3);
    r8 = (r8 + -4);
    MemoryInline::FlatWrite32(r15, r0);
    r15 = (r15 + -4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788D90;
    }
}

loc_80788DB0:
{
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r8 = (r8_rot_4 & -4);
    r0 = MemoryInline::FlatRead32(r18);
    r3 = (r1 + 360);
    r9 = (r9 + 1);
    r3_addr_2 = (r3 + r8);
    MemoryInline::FlatWrite32(r3_addr_2, r0);
    r3 = (r1 + 264);
    r10 = (r10 + 4);
    r0 = MemoryInline::ReadResolved8(guest_range_10, 216u, (r25 + 232));
    r3_addr_3 = (r3 + r8);
    MemoryInline::FlatWrite32(r3_addr_3, r0);
}

loc_80788DD4:
{
    r16 = (r16 + 1);
    r18 = (r18 + 4);
}

loc_80788DE0:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(12))) {
        goto loc_8078867C;
    }
}

loc_80788DE4:
{
}

loc_80788DE8:
{
    r11 = r7;
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(12))) {
        goto loc_80788EE0;
    }
}

loc_80788DF0:
{
    r10 = (12 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
}

loc_80788DF8:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(8))) {
        goto loc_80788EB4;
    }
}

loc_80788DFC:
{
}

loc_80788E00:
{
    r3 = 0;
    r8 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(13))) {
        goto loc_80788E14;
    }
}

loc_80788E10:
{
    r0 = 1;
}

loc_80788E14:
{
}

loc_80788E18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80788E2C;
    }
}

loc_80788E1C:
{
    r0 = (r7 + -2147483648);
}

loc_80788E24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80788E2C;
    }
}

loc_80788E28:
{
    r8 = 1;
}

loc_80788E2C:
{
}

loc_80788E30:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80788E5C;
    }
}

loc_80788E34:
{
    r0 = (0 - r7);
    r8 = 1;
    r0 = (r0 & -2147483648);
}

loc_80788E40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80788E50;
    }
}

loc_80788E44:
{
    r0 = (r10 & -2147483648);
}

loc_80788E48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80788E50;
    }
}

loc_80788E4C:
{
    r8 = 0;
}

loc_80788E50:
{
}

loc_80788E54:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80788E5C;
    }
}

loc_80788E58:
{
    r3 = 1;
}

loc_80788E5C:
{
}

loc_80788E60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80788EB4;
    }
}

loc_80788E64:
{
    r0 = (11 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(11) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r8 = (r8_rot_6 & -4);
    r10 = (r1 + 408);
    r3 = 42;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_11 & 536870911);
    r10 = (r10 + r8);
    ctr = r0;
}

loc_80788E84:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(4))) {
        goto loc_80788EB4;
    }
}

loc_80788E88:
{
    guest_range_11 = MemoryInline::ResolveRangeHost(r10, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_11, 0u, r10, r3);
    r11 = (r11 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_11, 4u, (r10 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_11, 8u, (r10 + 8), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_11, 12u, (r10 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_11, 16u, (r10 + 16), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_11, 20u, (r10 + 20), r3);
        MemoryInline::WriteResolved32(guest_range_11, 24u, (r10 + 24), r3);
    }
    MemoryInline::WriteResolved32(guest_range_11, 28u, (r10 + 28), r3);
    r10 = (r10 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788E88;
    }
}

loc_80788EB4:
{
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r8 = (r8_rot_8 & -4);
    r10 = (r1 + 408);
    r0 = (12 - r11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r11) ? 1u : 0u) << 29);
    r3 = 42;
    r10 = (r10 + r8);
    ctr = r0;
}

loc_80788ED0:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(12))) {
        goto loc_80788EE0;
    }
}

loc_80788ED4:
{
    MemoryInline::FlatWrite32(r10, r3);
    r10 = (r10 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788ED4;
    }
}

loc_80788EE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(12));
}

loc_80788EE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80788FD8;
    }
}

loc_80788EE8:
{
    r10 = (12 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
}

loc_80788EF0:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(8))) {
        goto loc_80788FAC;
    }
}

loc_80788EF4:
{
}

loc_80788EF8:
{
    r3 = 0;
    r8 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(13))) {
        goto loc_80788F0C;
    }
}

loc_80788F08:
{
    r0 = 1;
}

loc_80788F0C:
{
}

loc_80788F10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80788F24;
    }
}

loc_80788F14:
{
    r0 = (r9 + -2147483648);
}

loc_80788F1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80788F24;
    }
}

loc_80788F20:
{
    r8 = 1;
}

loc_80788F24:
{
}

loc_80788F28:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80788F54;
    }
}

loc_80788F2C:
{
    r0 = (0 - r9);
    r8 = 1;
    r0 = (r0 & -2147483648);
}

loc_80788F38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80788F48;
    }
}

loc_80788F3C:
{
    r0 = (r10 & -2147483648);
}

loc_80788F40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80788F48;
    }
}

loc_80788F44:
{
    r8 = 0;
}

loc_80788F48:
{
}

loc_80788F4C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80788F54;
    }
}

loc_80788F50:
{
    r3 = 1;
}

loc_80788F54:
{
}

loc_80788F58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80788FAC;
    }
}

loc_80788F5C:
{
    r0 = (11 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(11) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r8_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r8 = (r8_rot_10 & -4);
    r10 = (r1 + 360);
    r3 = 42;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_14 & 536870911);
    r10 = (r10 + r8);
    ctr = r0;
}

loc_80788F7C:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(4))) {
        goto loc_80788FAC;
    }
}

loc_80788F80:
{
    guest_range_12 = MemoryInline::ResolveRangeHost(r10, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_12, 0u, r10, r3);
    r9 = (r9 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_12, 4u, (r10 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_12, 8u, (r10 + 8), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_12, 12u, (r10 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_12, 16u, (r10 + 16), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_12, 20u, (r10 + 20), r3);
        MemoryInline::WriteResolved32(guest_range_12, 24u, (r10 + 24), r3);
    }
    MemoryInline::WriteResolved32(guest_range_12, 28u, (r10 + 28), r3);
    r10 = (r10 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788F80;
    }
}

loc_80788FAC:
{
    r8_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r8 = (r8_rot_12 & -4);
    r10 = (r1 + 360);
    r0 = (12 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r3 = 42;
    r10 = (r10 + r8);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(12));
}

loc_80788FC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80788FD8;
    }
}

loc_80788FCC:
{
    MemoryInline::FlatWrite32(r10, r3);
    r10 = (r10 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80788FCC;
    }
}

loc_80788FD8:
{
    r3 = r31;
    ctx->lr = 0x80788FE0u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8078A1D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r1 + 408);
    r5 = (r1 + 360);
    ctx->lr = 0x80788FF0u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8078A2BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r11 = (r1 + 592);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_13 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_13, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_13, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_13, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_13, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_13, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_13, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_13, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_13, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_13, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_13, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_13, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_13, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_13, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_13, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_13, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_13, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_13, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_13, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 596));
    ctx->lr = r0;
    r1 = (r1 + 592);
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8078823C func_8078823C preserves=true fpr_mask=0x00000000
