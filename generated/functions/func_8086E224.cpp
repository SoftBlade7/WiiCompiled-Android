#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086E224(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8086E224;

loc_8086E224:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 112);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r6 = 0x808B0000u;
    r30 = 0x808E0000u;
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8756));
    r6 = 0x802A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    r8 = 0x808B0000u;
    r25 = r4;
    r7 = 0x802A0000u;
    r24 = r5;
    r4 = (r8 + 8792);
    r5 = (r7 + 16640);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    r27 = r3;
    r30 = (r30 + -15536);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    r6 = (r6 + 16712);
    r7 = (r1 + 68);
    r8 = 0;
    ctx->lr = 0x8086E294u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081F064u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808E0000u;
    MemoryInline::FlatWrite8((r27 + 176), static_cast<uint8_t>(r25));
    r3 = (r3 + -15288);
    r0 = 5;
    MemoryInline::FlatWrite32(r27, r3);
    r3 = (r0 * 28);
    MemoryInline::FlatWrite8((r27 + 177), static_cast<uint8_t>(r24));
    f30.d = MemoryInline::FlatReadFloat32((r30 + 116));
    MemoryInline::FlatWrite32((r27 + 360), r27);
    MemoryInline::FlatWrite32((r27 + 364), r0);
    ctx->lr = 0x8086E2C0u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = 0x80240000u;
    r4 = 0x808E0000u;
    MemoryInline::FlatWrite32((r27 + 368), r3);
    r6 = (r6 + 28832);
    r4 = (r4 + -15044);
    r7 = 0;
    r8 = 0;
    goto loc_8086E334;
}

loc_8086E2E0:
{
    r3 = MemoryInline::FlatRead32((r27 + 368));
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r5 = (r3 + r8);
    r3 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32(r5, r3);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r3 = MemoryInline::FlatRead32((r27 + 368));
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r5 = (r3 + r8);
    r3 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r5 + 12), r3);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite32((r5 + 20), r0);
    r0 = MemoryInline::FlatRead32((r27 + 368));
    r3 = (r0 + r8);
    r8 = (r8 + 28);
    MemoryInline::FlatWrite32((r3 + 24), r4);
}

loc_8086E334:
{
    r0 = MemoryInline::FlatRead32((r27 + 364));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_8086E33C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086E2E0;
    }
}

loc_8086E340:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    ctx->lr = 0x8086E348u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r27 + 392), r3);
    r26 = 0;
    r24 = 0;
    r25 = 0;
    goto loc_8086E394;
}

loc_8086E35C:
{
    ctx->lr = 0x8086E360u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r27 + 392));
    r5 = 0;
    r4_addr_2 = (r4 + r24);
    MemoryInline::FlatWrite32(r4_addr_2, r3);
    goto loc_8086E380;
}

loc_8086E370:
{
    r0 = MemoryInline::FlatRead32((r27 + 392));
    r24_addr_3 = (r24 + r0);
    r3 = MemoryInline::FlatRead32(r24_addr_3);
    r3_addr_3 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r25));
    r5 = (r5 + 1);
}

loc_8086E380:
{
    r0 = MemoryInline::FlatRead32((r27 + 364));
}

loc_8086E388:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_8086E370;
    }
}

loc_8086E38C:
{
    r24 = (r24 + 4);
    r26 = (r26 + 1);
}

loc_8086E394:
{
    r3 = MemoryInline::FlatRead32((r27 + 364));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r3));
}

loc_8086E39C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086E35C;
    }
}

loc_8086E3A0:
{
    r0 = 16;
    MemoryInline::FlatWrite32((r27 + 372), r0);
    r3 = 256;
    ctx->lr = 0x8086E3B0u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r27 + 376), r3);
    r7 = 0;
    r8 = 0;
    r6 = 0;
    r5 = -1;
    goto loc_8086E404;
}

loc_8086E3C8:
{
    r3 = MemoryInline::FlatRead32((r27 + 376));
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r27 + 364));
    r3_addr_5 = (r3 + r8);
    MemoryInline::FlatWrite32(r3_addr_5, r0);
    r0 = MemoryInline::FlatRead32((r27 + 376));
    r3 = (r0 + r8);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    r0 = MemoryInline::FlatRead32((r27 + 376));
    r3 = (r0 + r8);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r0 = MemoryInline::FlatRead32((r27 + 376));
    r4 = MemoryInline::FlatRead32((r27 + 372));
    r3 = (r0 + r8);
    r8 = (r8 + 16);
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_8086E404:
{
    r0 = MemoryInline::FlatRead32((r27 + 372));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_8086E40C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086E3C8;
    }
}

loc_8086E410:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r27 + 396), f30.d);
    r3 = (r0 * 100);
    MemoryInline::FlatWrite32((r27 + 468), r0);
    r3 = (r3 + 16);
    ctx->lr = 0x8086E428u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80870000u;
    r5 = 0x80870000u;
    r4 = (r4 + -13944);
    r6 = 100;
    r5 = (r5 + -13940);
    r7 = 1;
    ctx->lr = 0x8086E444u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020E34u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 0x808B0000u;
    r4 = 0x808B0000u;
    MemoryInline::FlatWrite32((r27 + 472), r3);
    r29 = 0;
    f30.d = MemoryInline::FlatReadFloat32((r5 + 8728));
    r28 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r4 + 8756));
    r31 = 0;
    goto loc_8086E4F0;
}

loc_8086E468:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r27 + 472), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r27 + 472));
    r3_addr_7 = (r3 + r28);
    MemoryInline::FlatWrite32(r3_addr_7, r31);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r27 + 472));
    r3 = (r0 + r28);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r27 + 472));
    r3 = (r0 + r28);
    MemoryInline::FlatWrite32((r3 + 8), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r27 + 472));
    r3 = (r0 + r28);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r27 + 472));
    r3 = (r0 + r28);
    MemoryInline::FlatWrite32((r3 + 16), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r27 + 472));
    r3 = (r0 + r28);
    MemoryInline::FlatWriteFloat32((r3 + 28), f30.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f30.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f30.d);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r27 + 472));
    r3 = (r0 + r28);
    MemoryInline::FlatWriteFloat32((r3 + 32), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f31.d);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r27 + 472));
    r3 = (r0 + r28);
    r3 = (r3 + 44);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_6 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_6, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r0 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r27 + 472));
    r29 = (r29 + 1);
    r3 = (r0 + r28);
    r28 = (r28 + 100);
    MemoryInline::FlatWriteFloat32((r3 + 92), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 96), f31.d);
}

loc_8086E4F0:
{
    r0 = MemoryInline::FlatRead32((r27 + 468));
}

loc_8086E4F8:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_8086E468;
    }
}

loc_8086E4FC:
{
    r4 = 0x809C0000u;
    r3 = 0x808B0000u;
    r4 = MemoryInline::FlatRead32((r4 + 6392));
    r3 = (r3 + 8792);
    r0 = 0;
    r5 = (r30 + 128);
    r4 = MemoryInline::FlatRead8((r4 + 36));
    r11 = (r30 + 140);
    MemoryInline::FlatWrite8((r27 + 178), static_cast<uint8_t>(r4));
    r24 = (r3 + 9);
    guest_range_7 = MemoryInline::ResolveRangeHost((r27 + 177), 0, 219u, true, false);
    r26 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    r10 = (r30 + 152);
    MemoryInline::FlatWrite8((r27 + 480), static_cast<uint8_t>(r0));
    r9 = (r30 + 164);
    r0 = (r3 + 17);
    r8 = (r30 + 176);
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 128), 0, 112u, true, false);
    r31 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 128));
    r7 = (r30 + 188);
    guest_range_8 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 116u, true, false);
    r28 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r5 + 4));
    r4 = (r3 + 24);
    r29 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r5 + 8));
    r6 = (r30 + 200);
    r12 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r11 + 4));
    r5 = (r3 + 31);
    r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r30 + 140));
    MemoryInline::FlatWrite32(r26, r25);
    MemoryInline::FlatWrite32((r26 + 4), r12);
    r11 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r11 + 8));
    MemoryInline::FlatWrite32((r26 + 8), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_9, 52u, (r1 + 60), r28);
    MemoryInline::FlatWrite32((r11 + 12), r31);
    MemoryInline::FlatWrite32((r11 + 16), r28);
    MemoryInline::FlatWrite32((r11 + 20), r29);
    r11 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    MemoryInline::WriteResolved32(guest_range_9, 48u, (r1 + 56), r31);
    MemoryInline::FlatWrite32((r11 + 24), r24);
    r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r30 + 152));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r10 + 4));
            r26 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r10 + 8));
        }
    }
    r12 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    r10 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r9 + 4));
    r11 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r30 + 164));
    MemoryInline::FlatWrite32((r12 + 28), r11);
    MemoryInline::FlatWrite32((r12 + 32), r10);
    r9 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r9 + 8));
    MemoryInline::FlatWrite32((r12 + 36), r9);
    r9 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    MemoryInline::WriteResolved32(guest_range_9, 56u, (r1 + 64), r29);
    MemoryInline::FlatWrite32((r9 + 40), r28);
    MemoryInline::FlatWrite32((r9 + 44), r25);
    MemoryInline::FlatWrite32((r9 + 48), r26);
    r9 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    MemoryInline::WriteResolved32(guest_range_9, 36u, (r1 + 44), r28);
    MemoryInline::FlatWrite32((r9 + 52), r0);
    r31 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r30 + 176));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_8, 48u, (r8 + 4));
            r28 = MemoryInline::ReadResolved32(guest_range_8, 52u, (r8 + 8));
        }
    }
    r9 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    r0 = MemoryInline::ReadResolved32(guest_range_8, 60u, (r7 + 4));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r30 + 188));
    MemoryInline::FlatWrite32((r9 + 84), r8);
    MemoryInline::FlatWrite32((r9 + 88), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_8, 64u, (r7 + 8));
    MemoryInline::FlatWrite32((r9 + 92), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    MemoryInline::WriteResolved32(guest_range_9, 40u, (r1 + 48), r25);
    MemoryInline::FlatWrite32((r7 + 96), r31);
    MemoryInline::FlatWrite32((r7 + 100), r29);
    MemoryInline::FlatWrite32((r7 + 104), r28);
    r7 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    MemoryInline::WriteResolved32(guest_range_9, 44u, (r1 + 52), r26);
    MemoryInline::FlatWrite32((r7 + 108), r4);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r30 + 200));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 72u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_8, 72u, (r6 + 4));
            r10 = MemoryInline::ReadResolved32(guest_range_8, 76u, (r6 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_9, 24u, (r1 + 32), r31);
        MemoryInline::WriteResolved32(guest_range_9, 28u, (r1 + 36), r29);
    }
    MemoryInline::WriteResolved32(guest_range_9, 32u, (r1 + 40), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_9, 12u, (r1 + 20), r12);
        MemoryInline::WriteResolved32(guest_range_9, 16u, (r1 + 24), r11);
    }
    MemoryInline::WriteResolved32(guest_range_9, 20u, (r1 + 28), r10);
    r7 = (r30 + 212);
    r9 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    r8 = MemoryInline::ReadResolved32(guest_range_8, 84u, (r7 + 4));
    r6 = (r30 + 224);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r30 + 212));
    r4 = (r30 + 236);
    MemoryInline::FlatWrite32((r9 + 56), r0);
    r24 = (r3 + 36);
    r0 = 1;
    MemoryInline::FlatWrite32((r9 + 60), r8);
    r7 = MemoryInline::ReadResolved32(guest_range_8, 88u, (r7 + 8));
    MemoryInline::FlatWrite32((r9 + 64), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    MemoryInline::FlatWrite32((r7 + 68), r12);
    MemoryInline::FlatWrite32((r7 + 72), r11);
    MemoryInline::FlatWrite32((r7 + 76), r10);
    r7 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    MemoryInline::FlatWrite32((r7 + 80), r5);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r30 + 224));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 96u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_8, 96u, (r6 + 4));
            r8 = MemoryInline::ReadResolved32(guest_range_8, 100u, (r6 + 8));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    r5 = MemoryInline::ReadResolved32(guest_range_8, 108u, (r4 + 4));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 108u, (r30 + 236));
    MemoryInline::FlatWrite32((r7 + 112), r6);
    MemoryInline::FlatWrite32((r7 + 116), r5);
    r4 = MemoryInline::ReadResolved32(guest_range_8, 112u, (r4 + 8));
    MemoryInline::FlatWrite32((r7 + 120), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    MemoryInline::WriteResolved32(guest_range_9, 0u, (r1 + 8), r10);
    MemoryInline::FlatWrite32((r4 + 124), r10);
    MemoryInline::FlatWrite32((r4 + 128), r9);
    MemoryInline::FlatWrite32((r4 + 132), r8);
    r4 = MemoryInline::ReadResolved32(guest_range_7, 191u, (r27 + 368));
    MemoryInline::WriteResolved32(guest_range_9, 4u, (r1 + 12), r9);
    MemoryInline::FlatWrite32((r4 + 136), r24);
    r4 = MemoryInline::ReadResolved32(guest_range_7, 215u, (r27 + 392));
    MemoryInline::WriteResolved32(guest_range_9, 8u, (r1 + 16), r8);
    r4 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_7, 215u, (r27 + 392));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_7, 215u, (r27 + 392));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_7, 215u, (r27 + 392));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_7, 215u, (r27 + 392));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_7, 215u, (r27 + 392));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_7, 215u, (r27 + 392));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_7, 215u, (r27 + 392));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 0u, (r27 + 177));
}

loc_8086E740:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8086E750;
    }
}

loc_8086E744:
{
    r0 = (r3 + 46);
    MemoryInline::FlatWrite32((r27 + 476), r0);
    goto loc_8086E760;
}

loc_8086E750:
{
}

loc_8086E754:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8086E760;
    }
}

loc_8086E758:
{
    r0 = (r3 + 53);
    MemoryInline::FlatWrite32((r27 + 476), r0);
}

loc_8086E760:
{
    r0 = MemoryInline::FlatRead8((r27 + 177));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086E768:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086E814;
    }
}

loc_8086E76C:
{
    r4 = 0x808B0000u;
    r3 = 124;
    r4 = (r4 + 8792);
    r24 = (r4 + 62);
    ctx->lr = 0x8086E780u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8086E784:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086E794;
    }
}

loc_8086E788:
{
    r4 = r24;
    r5 = 0;
    ctx->lr = 0x8086E794u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80222CCCu>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8086E794:
{
    guest_range_10 = MemoryInline::ResolveRangeHost((r27 + 472), 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r27 + 472));
    r4 = 0x808B0000u;
    r28 = 0x808B0000u;
    r5 = 0;
    MemoryInline::FlatWrite32(r6, r3);
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8728));
    r3 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r27 + 472));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8756));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r27 + 472));
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r27 + 472));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r27 + 472));
    MemoryInline::FlatWrite32((r3 + 16), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r27 + 472));
    MemoryInline::FlatWriteFloat32((r3 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    r3 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r27 + 472));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r27 + 472));
    r3 = (r3 + 44);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r3 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r27 + 472));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8756));
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    goto loc_8086E8C0;
}

loc_8086E814:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8086E818:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086E8C0;
    }
}

loc_8086E81C:
{
    r4 = 0x808B0000u;
    r3 = 124;
    r4 = (r4 + 8792);
    r24 = (r4 + 73);
    ctx->lr = 0x8086E830u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8086E834:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086E844;
    }
}

loc_8086E838:
{
    r4 = r24;
    r5 = 0;
    ctx->lr = 0x8086E844u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80222CCCu>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8086E844:
{
    guest_range_11 = MemoryInline::ResolveRangeHost((r27 + 472), 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_11, 0u, (r27 + 472));
    r4 = 0x808B0000u;
    r28 = 0x808B0000u;
    r5 = 0;
    MemoryInline::FlatWrite32(r6, r3);
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8728));
    r3 = MemoryInline::ReadResolved32(guest_range_11, 0u, (r27 + 472));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8756));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_11, 0u, (r27 + 472));
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_11, 0u, (r27 + 472));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_11, 0u, (r27 + 472));
    MemoryInline::FlatWrite32((r3 + 16), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_11, 0u, (r27 + 472));
    MemoryInline::FlatWriteFloat32((r3 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    r3 = MemoryInline::ReadResolved32(guest_range_11, 0u, (r27 + 472));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_11, 0u, (r27 + 472));
    r3 = (r3 + 44);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r3 = MemoryInline::ReadResolved32(guest_range_11, 0u, (r27 + 472));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8756));
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
}

loc_8086E8C0:
{
    r3 = 184;
    ctx->lr = 0x8086E8C8u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8086E8CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086E8D4;
    }
}

loc_8086E8D0:
{
    ctx->lr = 0x8086E8D4u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8070CA8Cu>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8086E8D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8086E8D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086E8E0;
    }
}

loc_8086E8DC:
{
    r3 = (r3 + 148);
}

loc_8086E8E0:
{
    MemoryInline::FlatWrite32((r27 + 24), r3);
    r3 = r27;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8086E224 func_8086E224 preserves=false fpr_mask=0xC0000000
