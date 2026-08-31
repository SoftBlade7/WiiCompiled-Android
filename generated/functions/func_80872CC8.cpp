#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_808739C8_statefree(uint32_t);
extern "C" uint64_t func_80873A20_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80873A20_statefree_v0(uint32_t, uint32_t);

extern "C" void func_80872CC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_808739DC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;
    uint8_t mkw_fifo_burst_0[12];
    uint8_t mkw_fifo_burst_1[12];
    uint8_t mkw_fifo_burst_2[12];
    uint8_t mkw_fifo_burst_3[12];

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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80872CC8;

loc_80872CC8:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -512), 0, 520u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -512), r1);
    r1 = (r1 + -512);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 516u, (r1 + 516), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 496u, (r1 + 496), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 480u, (r1 + 480), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 464u, (r1 + 464), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 464);
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
    r31 = 0x808B0000u;
    r29 = 0x808E0000u;
    r31 = (r31 + 8896);
    r30 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    r28 = r3;
    r24 = r4;
    r29 = (r29 + -14920);
    f2.d = f1.d;
    r30 = (r30 + 18368);
    f3.d = f1.d;
    r3 = (r1 + 284);
    // inline leaf 0x80872CA4 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 284u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 284u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 288u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 292u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80872CA4
    r4 = 0x808B0000u;
    r5 = 0x802A0000u;
    r4 = (r4 + 9376);
    r6 = 0x802A0000u;
    r3 = r28;
    r5 = (r5 + 16640);
    r6 = (r6 + 16712);
    r7 = (r1 + 284);
    r8 = (r4 + 5);
    ctx->lr = 0x80872D50u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 284);
    r4 = -1;
    ctx->lr = 0x80872D5Cu;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80513600u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808E0000u;
    guest_range_5 = MemoryInline::ResolveRangeHost(r28, 0, 328u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 176u, (r28 + 176), static_cast<uint8_t>(r24));
    r4 = (r4 + -14476);
    r3 = (r28 + 180);
    MemoryInline::WriteResolved32(guest_range_5, 0u, r28, r4);
    // inline leaf 0x805A1FB0 (1 guest instruction(s))
    // end of inlined leaf 0x805A1FB0
    r3 = (r28 + 192);
    // inline leaf 0x805A1FB0 (1 guest instruction(s))
    // end of inlined leaf 0x805A1FB0
    r3 = (r28 + 204);
    // inline leaf 0x805A1FB0 (1 guest instruction(s))
    // end of inlined leaf 0x805A1FB0
    r3 = (r28 + 216);
    // inline leaf 0x805A1FB0 (1 guest instruction(s))
    // end of inlined leaf 0x805A1FB0
    r3 = (r28 + 232);
    // inline leaf 0x80873824 (11 guest instruction(s))
    r4 = 0x808B0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8896));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 232u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 232u, r3, f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 236u, (r3 + 4), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 240u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 240u, (r3 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 244u, (r3 + 12), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 248u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 248u, (r3 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 252u, (r3 + 20), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_5, 320u, (r3 + 88), r0);
    // end of inlined leaf 0x80873824
    r3 = (r28 + 324);
    // inline leaf 0x80873850 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_5, 324u, r3, r0);
    // end of inlined leaf 0x80873850
    f1.d = MemoryInline::FlatReadFloat32((r29 + 64));
    r4 = r28;
    r3 = (r28 + 336);
    r5 = 10;
    r6 = 16;
    ctx->lr = 0x80872DB4u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80873B48u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r28 + 784);
    r4 = 6;
    ctx->lr = 0x80872DC0u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8087385Cu>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(36));
}

loc_80872DCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80872DE8;
    }
}

loc_80872DD0:
{
    r3 = (r28 + 232);
    ctx->lr = 0x80872DD8u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807C2660u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r28 + 232);
    // inline leaf 0x808739B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 88));
    // end of inlined leaf 0x808739B0
    MemoryInline::FlatWrite32((r28 + 328), r3);
    goto loc_80872DF0;
}

loc_80872DE8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 328), r0);
}

loc_80872DF0:
{
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
}

loc_80872DFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(34))) {
        goto loc_80872E0C;
    }
}

loc_80872E00:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    MemoryInline::FlatWriteFloat32((r28 + 228), f0.d);
    goto loc_80872E14;
}

loc_80872E0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 244));
    MemoryInline::FlatWriteFloat32((r28 + 228), f0.d);
}

loc_80872E14:
{
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    // inline leaf 0x807F82F4 (11 guest instruction(s))
}

loc_inl14_0x807F82F4:
{
    r4 = MemoryInline::FlatRead32((r3 + 2928));
    r3 = 0;
    r4 = (r4 + -3);
}

loc_inl14_0x807F8304:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_inl14_return;
    }
}

loc_inl14_0x807F8308:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r0 & 193);
}

loc_inl14_0x807F8314:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl14_return;
    }
}

loc_inl14_0x807F8318:
{
    r3 = 1;
    goto loc_inl14_cont_807F82F4;
}

loc_inl14_return:
{
}

loc_inl14_cont_807F82F4:
{
    // end of inlined leaf 0x807F82F4
}

loc_80872E20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80872E34;
    }
}

loc_80872E24:
{
    r3 = (r28 + 180);
    r4 = (r30 + 160);
    // inline leaf 0x805A1CF4 (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x805A1CF4
    goto loc_80872E60;
}

loc_80872E34:
{
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    // inline leaf 0x808739B8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2928));
    // end of inlined leaf 0x808739B8
}

loc_80872E40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80872E54;
    }
}

loc_80872E44:
{
    r3 = (r28 + 180);
    r4 = (r30 + 184);
    // inline leaf 0x805A1CF4 (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x805A1CF4
    goto loc_80872E60;
}

loc_80872E54:
{
    r3 = (r28 + 180);
    r4 = (r30 + 160);
    // inline leaf 0x805A1CF4 (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x805A1CF4
}

loc_80872E60:
{
    r0 = MemoryInline::FlatRead8((r28 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80872E68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80872F94;
    }
}

loc_80872E6C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 416));
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // inline leaf 0x808739C0 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x808739C0
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = (r3 * 48);
    MemoryInline::FlatWriteRam32((r30 + 248), r3);
    r25 = r3;
    r3 = (r4 + 16);
    ctx->lr = 0x80872E94u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x805A0000u;
    r7 = r25;
    r4 = (r4 + 8108);
    r5 = 0;
    r6 = 48;
    ctx->lr = 0x80872EACu;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r30 + 252), r3);
    r24 = 0;
    f29.d = MemoryInline::FlatReadFloat64((r31 + 432));
    r27 = 0;
    f30.d = MemoryInline::FlatReadFloat32((r31 + 424));
    r25 = 0x802A0000u;
    f31.d = MemoryInline::FlatReadFloat32((r31 + 420));
    r26 = 1127219200;
    goto loc_80872F88;
}

loc_80872ED0:
{
    r0 = MemoryInline::FlatRead32((r30 + 252));
    r3 = (r0 + r27);
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
    r3 = (r1 + 360);
    // inline leaf 0x805A1FAC (1 guest instruction(s))
    // end of inlined leaf 0x805A1FAC
    r3 = (r1 + 360);
    r4 = (r28 + 180);
    r5 = (r25 + 16640);
    // inline leaf 0x802300C8 (20 guest instruction(s))
    f5.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f6.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    guest_range_7 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 0u, r3, f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 16u, (r3 + 16), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 32u, (r3 + 32), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 4u, (r3 + 4), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 20u, (r3 + 20), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 36u, (r3 + 36), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 8u, (r3 + 8), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 24u, (r3 + 24), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 40u, (r3 + 40), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 12u, (r3 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 28u, (r3 + 28), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 44u, (r3 + 44), f0.d);
    // end of inlined leaf 0x802300C8
    r0 = MemoryInline::FlatRead32((r30 + 252));
    r3 = (r1 + 360);
    r4 = (r0 + r27);
    r5 = r4;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    MemoryInline::FlatWriteRam32((r1 + 412), r24);
    r3 = (r1 + 296);
    r0 = MemoryInline::FlatRead32((r30 + 248));
    MemoryInline::FlatWriteRam32((r1 + 408), r26);
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 408));
    MemoryInline::FlatWriteRam32((r1 + 420), r0);
    f3.d = f1.d;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    MemoryInline::FlatWriteRam32((r1 + 416), r26);
    f2.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 416));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f2.d = PpcFmulsInline(f31.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    // inline leaf 0x80872CA4 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80872CA4
    r3 = (r1 + 312);
    // inline leaf 0x805A1FAC (1 guest instruction(s))
    // end of inlined leaf 0x805A1FAC
    r3 = (r1 + 312);
    r4 = (r1 + 296);
    r5 = (r25 + 16640);
    ctx->lr = 0x80872F60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 252));
    r3 = (r1 + 312);
    r4 = (r0 + r27);
    r5 = r4;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    r3 = (r1 + 296);
    r4 = -1;
    ctx->lr = 0x80872F80u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80513600u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r24 = (r24 + 1);
    r27 = (r27 + 48);
}

loc_80872F88:
{
    r0 = MemoryInline::FlatRead32((r30 + 248));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(r0));
}

loc_80872F90:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80872ED0;
    }
}

loc_80872F94:
{
    r0 = MemoryInline::FlatRead8((r28 + 176));
    r3 = 0;
    MemoryInline::FlatWrite8((r28 + 796), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80872FA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80873228;
    }
}

loc_80872FA8:
{
    r3 = (r30 + 0);
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
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    r3 = (r1 + 272);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 428));
    f3.d = MemoryInline::FlatReadFloat32(r31);
    // inline leaf 0x80872CA4 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80872CA4
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    r3 = (r1 + 260);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f2.d = f1.d;
    // inline leaf 0x80872CA4 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80872CA4
    r3 = (r30 + 48);
    r4 = (r1 + 272);
    r5 = (r1 + 260);
    // inline leaf 0x802300C8 (20 guest instruction(s))
    f5.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f6.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 16), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 32), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 20), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 36), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 24), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r3 + 40), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 28), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r3 + 44), f0.d);
    // end of inlined leaf 0x802300C8
    r3 = (r1 + 260);
    r4 = -1;
    ctx->lr = 0x80872FF4u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80513600u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 272);
    r4 = -1;
    ctx->lr = 0x80873000u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80513600u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = (r1 + 248);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 420));
    f3.d = f1.d;
    // inline leaf 0x80872CA4 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80872CA4
    r3 = (r30 + 96);
    r4 = (r1 + 248);
    ctx->lr = 0x80873020u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 248);
    r4 = -1;
    ctx->lr = 0x8087302Cu;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80513600u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    // inline leaf 0x808739C8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x808739C8
    r0 = (r3 & 255);
}

loc_8087303C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80873048;
    }
}

loc_80873040:
{
    r0 = 1;
    goto loc_8087304C;
}

loc_80873048:
{
    r0 = 0;
}

loc_8087304C:
{
    MemoryInline::FlatWriteRam8((r29 + 165), static_cast<uint8_t>(r0));
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    // inline leaf 0x808739C8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x808739C8
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80873060:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8087306C;
    }
}

loc_80873064:
{
    r0 = 1;
    goto loc_80873070;
}

loc_8087306C:
{
    r0 = 0;
}

loc_80873070:
{
    MemoryInline::FlatWriteRam8((r29 + 166), static_cast<uint8_t>(r0));
    r3 = r28;
    r12 = MemoryInline::FlatRead32(r28);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80873088u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = (r3 & 65535);
    // inline leaf 0x808739F4 (4 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x808739F4
    r4 = r27;
    // inline leaf 0x808739D0 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    addr_lhax_808739DC_loc_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_808739DC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 10);
    // end of inlined leaf 0x808739D0
    r3 = (r3 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 420), r3);
    r3 = (r30 + 288);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 440));
    r4 = 128;
    MemoryInline::FlatWriteRam32((r1 + 416), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 416));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r29 + 168), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80172E00u>(ctx);
    r3 = 152;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r3 = 15;
    r4 = 3;
    r5 = 5;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_0[1] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_0[2] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 12;
    r4 = 3;
    r5 = 4;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_0[3] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_0[4] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_0[5] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 14;
    r4 = 3;
    r5 = 6;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_0[6] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_0[7] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_0[8] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 13;
    r4 = 3;
    r5 = 7;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_0[9] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_0[10] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_0[11] = static_cast<uint8_t>(r5);
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 12u);
    // end of inlined leaf 0x80872CB4
    // inline leaf 0x80873A04 (1 guest instruction(s))
    // end of inlined leaf 0x80873A04
    r3 = 152;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r3 = 11;
    r4 = 2;
    r5 = 7;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_1[0] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_1[1] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_1[2] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 8;
    r4 = 2;
    r5 = 4;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_1[3] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_1[4] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_1[5] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 10;
    r4 = 2;
    r5 = 6;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_1[6] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_1[7] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_1[8] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 9;
    r4 = 2;
    r5 = 5;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_1[9] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_1[10] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_1[11] = static_cast<uint8_t>(r5);
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_1, 12u);
    // end of inlined leaf 0x80872CB4
    // inline leaf 0x80873A04 (1 guest instruction(s))
    // end of inlined leaf 0x80873A04
    r3 = 152;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r3 = 7;
    r4 = 1;
    r5 = 1;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_2[0] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_2[1] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_2[2] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 4;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_2[3] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_2[4] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_2[5] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 6;
    r4 = 1;
    r5 = 2;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_2[6] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_2[7] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_2[8] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 5;
    r4 = 1;
    r5 = 3;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_2[9] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_2[10] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_2[11] = static_cast<uint8_t>(r5);
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_2, 12u);
    // end of inlined leaf 0x80872CB4
    // inline leaf 0x80873A04 (1 guest instruction(s))
    // end of inlined leaf 0x80873A04
    r3 = 152;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r3 = 3;
    r4 = 0;
    r5 = 3;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_3[0] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_3[1] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_3[2] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 0;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_3[3] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_3[4] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_3[5] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 2;
    r4 = 0;
    r5 = 2;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_3[6] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_3[7] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_3[8] = static_cast<uint8_t>(r5);
    // end of inlined leaf 0x80872CB4
    r3 = 1;
    r4 = 0;
    r5 = 1;
    // inline leaf 0x80872CB4 (5 guest instruction(s))
    r6 = -872349696;
    mkw_fifo_burst_3[9] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_3[10] = static_cast<uint8_t>(r4);
    mkw_fifo_burst_3[11] = static_cast<uint8_t>(r5);
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_3, 12u);
    // end of inlined leaf 0x80872CB4
    // inline leaf 0x80873A04 (1 guest instruction(s))
    // end of inlined leaf 0x80873A04
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80172EB4u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r30 + 416), r3);
    r4 = 32;
    // inline leaf 0x80873A08 (6 guest instruction(s))
    r0 = (r4 + -1);
    r3 = (r4 + r3);
    r4 = ~(r0 | r0);
    r0 = (r3 + -1);
    r3 = (r4 & r0);
    // end of inlined leaf 0x80873A08
    MemoryInline::FlatWriteRam32((r30 + 416), r3);
}

loc_80873228:
{
    r3 = (r29 + 216);
    r4 = (r29 + 204);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 204), 0, 160u, true, false);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r29 + 216));
    r31 = 0x808B0000u;
    guest_range_8 = MemoryInline::ResolveRangeHost((r3 + -8), 0, 164u, true, false);
    r11 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r3 + 4));
    r31 = (r31 + 9376);
    r10 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r3 + 8));
    r6 = (r1 + 224);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 204));
    r5 = (r1 + 236);
    r8 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r4 + 4));
    r3 = (r28 + 336);
    r0 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r4 + 8));
    r7 = (r31 + 12);
    MemoryInline::FlatWriteRam32((r1 + 224), r12);
    r4 = 9;
    MemoryInline::FlatWriteRam32((r1 + 228), r11);
    MemoryInline::FlatWriteRam32((r1 + 232), r10);
    MemoryInline::FlatWriteRam32((r1 + 236), r9);
    MemoryInline::FlatWriteRam32((r1 + 240), r8);
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    // inline leaf 0x80873DC0 (21 guest instruction(s))
    r10 = (r4 * 28);
    guest_range_9 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r8 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r9 = (r0 + r10);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32(r9, r8);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r9 + 4), r4);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r9 + 8), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r6 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r6 = (r6 + r10);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    MemoryInline::FlatWrite32((r6 + 16), r4);
    MemoryInline::FlatWrite32((r6 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r3 = (r0 + r10);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    // end of inlined leaf 0x80873DC0
    r3 = (r29 + 240);
    r8 = (r29 + 228);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r29 + 240));
    r6 = (r1 + 200);
    r12 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r3 + 4));
    r5 = (r1 + 212);
    r11 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r3 + 8));
    r3 = (r28 + 336);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r29 + 228));
    r7 = (r31 + 20);
    r9 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r8 + 4));
    r4 = 0;
    r0 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 200), r27);
    MemoryInline::FlatWriteRam32((r1 + 204), r12);
    MemoryInline::FlatWriteRam32((r1 + 208), r11);
    MemoryInline::FlatWriteRam32((r1 + 212), r10);
    MemoryInline::FlatWriteRam32((r1 + 216), r9);
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    // inline leaf 0x80873DC0 (21 guest instruction(s))
    r10 = (r4 * 28);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r8 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r9 = (r0 + r10);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32(r9, r8);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r9 + 4), r4);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r9 + 8), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r6 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r6 = (r6 + r10);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    MemoryInline::FlatWrite32((r6 + 16), r4);
    MemoryInline::FlatWrite32((r6 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r3 = (r0 + r10);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    // end of inlined leaf 0x80873DC0
    r3 = (r29 + 264);
    r8 = (r29 + 252);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r29 + 264));
    r6 = (r1 + 176);
    r12 = MemoryInline::ReadResolved32(guest_range_8, 60u, (r3 + 4));
    r5 = (r1 + 188);
    r11 = MemoryInline::ReadResolved32(guest_range_8, 64u, (r3 + 8));
    r3 = (r28 + 336);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r29 + 252));
    r7 = (r31 + 28);
    r9 = MemoryInline::ReadResolved32(guest_range_8, 48u, (r8 + 4));
    r4 = 1;
    r0 = MemoryInline::ReadResolved32(guest_range_8, 52u, (r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 176), r27);
    MemoryInline::FlatWriteRam32((r1 + 180), r12);
    MemoryInline::FlatWriteRam32((r1 + 184), r11);
    MemoryInline::FlatWriteRam32((r1 + 188), r10);
    MemoryInline::FlatWriteRam32((r1 + 192), r9);
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    // inline leaf 0x80873DC0 (21 guest instruction(s))
    r10 = (r4 * 28);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r8 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r9 = (r0 + r10);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32(r9, r8);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r9 + 4), r4);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r9 + 8), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r6 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r6 = (r6 + r10);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    MemoryInline::FlatWrite32((r6 + 16), r4);
    MemoryInline::FlatWrite32((r6 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r3 = (r0 + r10);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    // end of inlined leaf 0x80873DC0
    r3 = (r29 + 288);
    r8 = (r29 + 276);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r29 + 288));
    r6 = (r1 + 152);
    r12 = MemoryInline::ReadResolved32(guest_range_8, 84u, (r3 + 4));
    r5 = (r1 + 164);
    r11 = MemoryInline::ReadResolved32(guest_range_8, 88u, (r3 + 8));
    r3 = (r28 + 336);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r29 + 276));
    r7 = (r31 + 35);
    r9 = MemoryInline::ReadResolved32(guest_range_8, 72u, (r8 + 4));
    r4 = 2;
    r0 = MemoryInline::ReadResolved32(guest_range_8, 76u, (r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 152), r27);
    MemoryInline::FlatWriteRam32((r1 + 156), r12);
    MemoryInline::FlatWriteRam32((r1 + 160), r11);
    MemoryInline::FlatWriteRam32((r1 + 164), r10);
    MemoryInline::FlatWriteRam32((r1 + 168), r9);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    // inline leaf 0x80873DC0 (21 guest instruction(s))
    r10 = (r4 * 28);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r8 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r9 = (r0 + r10);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32(r9, r8);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r9 + 4), r4);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r9 + 8), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r6 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r6 = (r6 + r10);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    MemoryInline::FlatWrite32((r6 + 16), r4);
    MemoryInline::FlatWrite32((r6 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r3 = (r0 + r10);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    // end of inlined leaf 0x80873DC0
    r3 = (r29 + 312);
    r8 = (r29 + 300);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 108u, (r29 + 312));
    r6 = (r1 + 128);
    r12 = MemoryInline::ReadResolved32(guest_range_8, 108u, (r3 + 4));
    r5 = (r1 + 140);
    r11 = MemoryInline::ReadResolved32(guest_range_8, 112u, (r3 + 8));
    r3 = (r28 + 336);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r29 + 300));
    r7 = (r31 + 40);
    r9 = MemoryInline::ReadResolved32(guest_range_8, 96u, (r8 + 4));
    r4 = 3;
    r0 = MemoryInline::ReadResolved32(guest_range_8, 100u, (r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 128), r27);
    MemoryInline::FlatWriteRam32((r1 + 132), r12);
    MemoryInline::FlatWriteRam32((r1 + 136), r11);
    MemoryInline::FlatWriteRam32((r1 + 140), r10);
    MemoryInline::FlatWriteRam32((r1 + 144), r9);
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    // inline leaf 0x80873DC0 (21 guest instruction(s))
    r10 = (r4 * 28);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r8 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r9 = (r0 + r10);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32(r9, r8);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r9 + 4), r4);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r9 + 8), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r6 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r6 = (r6 + r10);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    MemoryInline::FlatWrite32((r6 + 16), r4);
    MemoryInline::FlatWrite32((r6 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r3 = (r0 + r10);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    // end of inlined leaf 0x80873DC0
    r3 = (r29 + 336);
    r8 = (r29 + 324);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 132u, (r29 + 336));
    r6 = (r1 + 104);
    r12 = MemoryInline::ReadResolved32(guest_range_8, 132u, (r3 + 4));
    r5 = (r1 + 116);
    r11 = MemoryInline::ReadResolved32(guest_range_8, 136u, (r3 + 8));
    r3 = (r28 + 336);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 120u, (r29 + 324));
    r7 = (r31 + 45);
    r9 = MemoryInline::ReadResolved32(guest_range_8, 120u, (r8 + 4));
    r4 = 4;
    r0 = MemoryInline::ReadResolved32(guest_range_8, 124u, (r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 104), r27);
    MemoryInline::FlatWriteRam32((r1 + 108), r12);
    MemoryInline::FlatWriteRam32((r1 + 112), r11);
    MemoryInline::FlatWriteRam32((r1 + 116), r10);
    MemoryInline::FlatWriteRam32((r1 + 120), r9);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    // inline leaf 0x80873DC0 (21 guest instruction(s))
    r10 = (r4 * 28);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r8 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r9 = (r0 + r10);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32(r9, r8);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r9 + 4), r4);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r9 + 8), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r6 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r6 = (r6 + r10);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    MemoryInline::FlatWrite32((r6 + 16), r4);
    MemoryInline::FlatWrite32((r6 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r3 + 8));
    r3 = (r0 + r10);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    // end of inlined leaf 0x80873DC0
    r3 = (r29 + 360);
    r8 = (r29 + 348);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 156u, (r29 + 360));
    r6 = (r1 + 80);
    r12 = MemoryInline::ReadResolved32(guest_range_8, 156u, (r3 + 4));
    r5 = (r1 + 92);
    r11 = MemoryInline::ReadResolved32(guest_range_8, 160u, (r3 + 8));
    r3 = (r28 + 336);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 144u, (r29 + 348));
    r7 = (r31 + 52);
    r9 = MemoryInline::ReadResolved32(guest_range_8, 144u, (r8 + 4));
    r4 = 5;
    r0 = MemoryInline::ReadResolved32(guest_range_8, 148u, (r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 80), r27);
    MemoryInline::FlatWriteRam32((r1 + 84), r12);
    MemoryInline::FlatWriteRam32((r1 + 88), r11);
    MemoryInline::FlatWriteRam32((r1 + 92), r10);
    MemoryInline::FlatWriteRam32((r1 + 96), r9);
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
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
    InvokeDirectCpu<0x80873DC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r3 = (r29 + 384);
    r8 = (r29 + 372);
    r27 = MemoryInline::FlatRead32((r29 + 384));
    r6 = (r1 + 56);
    r12 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r1 + 68);
    r11 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r28 + 336);
    r10 = MemoryInline::FlatRead32((r29 + 372));
    r7 = (r31 + 57);
    r9 = MemoryInline::FlatRead32((r8 + 4));
    r4 = 6;
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 56), r27);
    MemoryInline::FlatWriteRam32((r1 + 60), r12);
    MemoryInline::FlatWriteRam32((r1 + 64), r11);
    MemoryInline::FlatWriteRam32((r1 + 68), r10);
    MemoryInline::FlatWriteRam32((r1 + 72), r9);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
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
    InvokeDirectCpu<0x80873DC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r3 = (r29 + 408);
    r8 = (r29 + 396);
    r27 = MemoryInline::FlatRead32((r29 + 408));
    r6 = (r1 + 32);
    r12 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r1 + 44);
    r11 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r28 + 336);
    r10 = MemoryInline::FlatRead32((r29 + 396));
    r7 = (r31 + 66);
    r9 = MemoryInline::FlatRead32((r8 + 4));
    r4 = 7;
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 32), r27);
    MemoryInline::FlatWriteRam32((r1 + 36), r12);
    MemoryInline::FlatWriteRam32((r1 + 40), r11);
    MemoryInline::FlatWriteRam32((r1 + 44), r10);
    MemoryInline::FlatWriteRam32((r1 + 48), r9);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
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
    InvokeDirectCpu<0x80873DC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r3 = (r29 + 432);
    r8 = (r29 + 420);
    r27 = MemoryInline::FlatRead32((r29 + 432));
    r6 = (r1 + 8);
    r12 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r1 + 20);
    r11 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r28 + 336);
    r10 = MemoryInline::FlatRead32((r29 + 420));
    r7 = (r31 + 71);
    r9 = MemoryInline::FlatRead32((r8 + 4));
    r4 = 8;
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r27);
    MemoryInline::FlatWriteRam32((r1 + 12), r12);
    MemoryInline::FlatWriteRam32((r1 + 16), r11);
    MemoryInline::FlatWriteRam32((r1 + 20), r10);
    MemoryInline::FlatWriteRam32((r1 + 24), r9);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
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
    InvokeDirectCpu<0x80873DC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r3 = (r28 + 336);
    r4 = 0;
    r5 = 1;
    // inline leaf 0x80873E14 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = 1;
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r3_addr_1 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80873E14
    r3 = (r28 + 336);
    r4 = 1;
    r5 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 1;
    r5 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 2;
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 2;
    r5 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 2;
    r5 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 2;
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 3;
    r5 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 3;
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 4;
    r5 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 4;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 5;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 6;
    r5 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 6;
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 7;
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 7;
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 8;
    r5 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 8;
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80873A20u) && KnownTranslatedCpuCall<0x80873A20u>::kAvailable && !KnownTranslatedCpuCall<0x80873A20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80873A20u>()) {
        const auto state_free_result_80873A20_1393B = func_80873A20_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_80873A20_1393B);
    } else {
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80873A20u>(ctx);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8087367C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80873750;
    }
}

loc_80873680:
{
    r3 = (r28 + 336);
    r4 = 7;
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 5;
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 4;
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 6;
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 2;
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 3;
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 8;
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 4;
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 5;
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r28 + 336);
    r4 = 1;
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r24 = 0;
}

loc_80873724:
{
    r5 = r24;
    r3 = (r28 + 336);
    r4 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r4 = r24;
    r3 = (r28 + 336);
    r5 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80873E14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r24 = (r24 + 1);
}

loc_8087374C:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(10))) {
        goto loc_80873724;
    }
}

loc_80873750:
{
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x808739C8u) && KnownTranslatedCpuCall<0x808739C8u>::kAvailable && !KnownTranslatedCpuCall<0x808739C8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x808739C8u>()) {
        const auto state_free_result_808739C8_15114 = func_808739C8_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_808739C8_15114);
    } else {
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x808739C8u>(ctx);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80873760:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_808737E4;
    }
}

loc_80873764:
{
    r27 = 0x808B0000u;
    r3 = (r28 + 784);
    r27 = (r27 + 9376);
    r4 = 0;
    r5 = (r27 + 79);
    r6 = 0;
    ctx->lr = 0x80873780u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80873A40u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r28 + 784);
    r5 = (r27 + 93);
    r4 = 1;
    r6 = 1;
    ctx->lr = 0x80873794u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80873A40u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r28 + 784);
    r5 = (r27 + 104);
    r4 = 2;
    r6 = 1;
    ctx->lr = 0x808737A8u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80873A40u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r28 + 784);
    r5 = (r27 + 117);
    r4 = 3;
    r6 = 0;
    ctx->lr = 0x808737BCu;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80873A40u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r28 + 784);
    r5 = (r27 + 131);
    r4 = 4;
    r6 = 0;
    ctx->lr = 0x808737D0u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80873A40u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r28 + 784);
    r5 = (r27 + 150);
    r4 = 5;
    r6 = 0;
    ctx->lr = 0x808737E4u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80873A40u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808737E4:
{
    r4 = MemoryInline::FlatRead8((r30 + 144));
    r3 = r28;
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam8((r30 + 144), static_cast<uint8_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 496));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 480));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 464));
    r11 = (r1 + 464);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 516));
    ctx->lr = r0;
    r1 = (r1 + 512);
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80872CC8 func_80872CC8 preserves=false fpr_mask=0xE0000000
