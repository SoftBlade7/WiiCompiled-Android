#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80599690(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
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

    goto loc_80599690;

loc_80599690:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -208), 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 212u, (r1 + 212), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 192u, (r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 176u, (r1 + 176), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 160u, (r1 + 160), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 144u, (r1 + 144), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 96);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r31 = 0x80890000u;
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r31 = (r31 + 8040);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r29 = MemoryInline::FlatRead32((r25 + 28));
    r28 = r3;
    r4 = MemoryInline::FlatRead32((r25 + 24));
    r30 = MemoryInline::FlatRead32((r29 + 140));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    MemoryInline::FlatWriteFloat32((r25 + 112), f0.d);
    r3 = MemoryInline::FlatRead32(r25);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r5 & 32);
}

loc_8059971C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80599978;
    }
}

loc_80599720:
{
    r0 = (r5 & 33554432);
}

loc_80599724:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80599978;
    }
}

loc_80599728:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80599730:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80599978;
    }
}

loc_80599734:
{
    f31.d = MemoryInline::FlatReadFloat32((r4 + 36));
    r3 = r25;
    guest_range_2 = MemoryInline::ResolveRangeHost(r25, 0, 112u, true, false);
    f26.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 108u, (r25 + 108));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f27.d = MemoryInline::FlatReadFloat32((r3 + 368));
    r3 = r25;
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f4.d = PpcFmulsInline(f31.d, f27.d);
    f2.d = MemoryInline::FlatReadFloat32(r26);
    r3 = r25;
    f5.d = PpcFmulsInline(f26.d, f0.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r25 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    r4 = (r1 + 32);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f2.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r25 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r25 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    // inline leaf 0x80590C44 (10 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 156));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 172));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 188));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C44
    r3 = r25;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f26.d = MemoryInline::FlatReadFloat32((r3 + 368));
    r3 = r25;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x805997CCu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
    r3 = 0x808B0000u;
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 26260));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f6.d = PpcFmulsInline(f0.d, f26.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f5.d = PpcFmulsInline(f6.d, f5.d);
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f1.d = PpcFmulsInline(f6.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r3 = MemoryInline::FlatRead32(r25);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 8388608);
}

loc_8059982C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8059994C;
    }
}

loc_80599830:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80599838:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059994C;
    }
}

loc_8059983C:
{
    r3 = r25;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f1.d = MemoryInline::FlatReadFloat32((r3 + 368));
    r3 = MemoryInline::FlatRead32((r25 + 28));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x805B83D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r25);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80599860:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80599884;
    }
}

loc_80599864:
{
    r3 = r25;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
}

loc_80599884:
{
    r3 = r25;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r30 = r3;
    r3 = r25;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    f1.d = f31.d;
    r5 = MemoryInline::FlatRead32((r25 + 16));
    r7 = MemoryInline::FlatRead32((r25 + 28));
    r6 = r28;
    r4 = (r30 & 255);
    r8 = (r25 + 72);
    r9 = (r1 + 44);
    ctx->lr = 0x805998B8u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805B6F4Cu>(ctx);
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
    r12 = ctx->gpr[12];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
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
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 & 67);
}

loc_805998C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80599958;
    }
}

loc_805998C4:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r25 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 40));
    MemoryInline::FlatWriteFloat32((r25 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r25 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r25 + 40), f0.d);
    r0 = MemoryInline::FlatRead32((r29 + 132));
}

loc_805998FC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80599958;
    }
}

loc_80599900:
{
    r3 = (r0 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r5 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat64((r31 + 24));
    r3 = r25;
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 26000));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    r4 = MemoryInline::FlatRead32((r25 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f25.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    MemoryInline::FlatWriteFloat32((r25 + 112), f0.d);
    // inline leaf 0x8059069C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8059069C
    f1.d = f25.d;
    // inline leaf 0x8056C950 (5 guest instruction(s))
}

loc_inl12_0x8056C950:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 160));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl12_0x8056C958:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl12_return;
    }
}

loc_inl12_0x8056C95C:
{
    MemoryInline::FlatWriteFloat32((r3 + 160), f1.d);
    goto loc_inl12_cont_8056C950;
}

loc_inl12_return:
{
}

loc_inl12_cont_8056C950:
{
    // end of inlined leaf 0x8056C950
    goto loc_80599958;
}

loc_8059994C:
{
    r3 = MemoryInline::FlatRead32((r25 + 28));
    r3 = (r3 + 8);
    // inline leaf 0x805B821C (40 guest instruction(s))
    r5 = 0x80890000u;
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 10152));
    r5 = 0;
    r0 = -1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10156));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 132u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 60), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 56), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 52), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 72), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 68), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 64), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 84), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 80), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 96), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 92), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 88), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r3 + 100), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r3 + 104), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 108), r5);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r5);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r5);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (r3 + 128), f1.d);
    }
    // end of inlined leaf 0x805B821C
}

loc_80599958:
{
    r3 = MemoryInline::FlatRead32((r25 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r3 = MemoryInline::FlatRead32((r3 + 140));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
}

loc_80599978:
{
    r3 = r25;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f28.d = MemoryInline::FlatReadFloat32((r25 + 32));
    f8.d = MemoryInline::FlatReadFloat32(r27);
    f31.d = MemoryInline::FlatReadFloat32((r25 + 36));
    f3.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f8.d));
    f26.d = MemoryInline::FlatReadFloat32(r26);
    f9.d = MemoryInline::FlatReadFloat32((r3 + 368));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f3.d));
    f29.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f2.d = PpcFmulsInline(f26.d, f6.d);
    f7.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f11.d = MemoryInline::FlatReadFloat32((r25 + 40));
    f1.d = PpcFmulsInline(f29.d, f5.d);
    f25.d = MemoryInline::FlatReadFloat32((r25 + 108));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f7.d));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 112));
    f12.d = PpcFmulsInline(f25.d, f9.d);
    f13.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f25.d));
    MemoryInline::FlatWriteFloat32((r25 + 124), f3.d);
    f27.d = PpcFmulsInline(f12.d, f26.d);
    f9.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f30.d = PpcFmulsInline(f12.d, f29.d);
    MemoryInline::FlatWriteFloat32((r25 + 120), f8.d);
    f8.d = PpcFmulsInline(f9.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f12.d = PpcFmulsInline(f12.d, f13.d);
    MemoryInline::FlatWriteFloat32((r25 + 128), f7.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f27.d));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f30.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f6.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f12.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f8.d));
    MemoryInline::FlatWriteFloat32((r25 + 96), f28.d);
    f3.d = PpcFmulsInline(f13.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r25 + 100), f10.d);
    MemoryInline::FlatWriteFloat32((r25 + 104), f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteFloat32((r25 + 108), f8.d);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80599A24:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f4.d);
    MemoryInline::FlatWriteFloat32((r25 + 68), f3.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80599A7C;
    }
}

loc_80599A34:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f2.d = PpcFmulsInline(f3.d, f26.d);
    MemoryInline::FlatWriteFloat32((r25 + 116), f0.d);
    f1.d = PpcFmulsInline(f3.d, f29.d);
    f0.d = PpcFmulsInline(f3.d, f13.d);
    r3 = r25;
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    // inline leaf 0x80590764 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80590764
    r4 = (r1 + 8);
    ctx->lr = 0x80599A64u;
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
    InvokeDirectCpu<0x805979ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = MemoryInline::FlatRead32(r25);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 | 524288);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80599A80;
}

loc_80599A7C:
{
    MemoryInline::FlatWriteFloat32((r25 + 116), f0.d);
}

loc_80599A80:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 68), 0, 148u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 124u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 108u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 92u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 76u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 60u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 44u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 28u, (r1 + 96));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_3, 144u, (r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
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
// RECOMP_REGISTRATION base 0x80599690 func_80599690 preserves=false fpr_mask=0xFE000000
