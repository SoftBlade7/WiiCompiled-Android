#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80584044(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80584044;

loc_80584044:
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
    f2.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::WriteResolved32(guest_range_1, 188u, (r1 + 188), r31);
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r3 = (r1 + 48);
    MemoryInline::WriteResolved32(guest_range_1, 184u, (r1 + 184), r30);
    r30 = 0x80890000u;
    r30 = (r30 + 6656);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 84));
    MemoryInline::WriteResolved32(guest_range_1, 180u, (r1 + 180), r29);
    r29 = r4;
    r7 = MemoryInline::FlatRead32(r5);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    r6 = MemoryInline::FlatRead32((r5 + 4));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r7);
    r4 = (r1 + 64);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r1 + 64), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r1 + 68), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r1 + 72), f0.d);
    ctx->lr = 0x805840C0u;
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
    ctx->fpr[7] = f7;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80239E10u>(ctx);
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
    f7 = ctx->fpr[7];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f31.d = MemoryInline::FlatReadFloat32((r30 + 204));
    r12 = 0;
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r3 = 0x809C0000u;
    r11 = MemoryInline::FlatRead32(r29);
    f1.d = f31.d;
    r10 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r4 = (r1 + 36);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 160u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r1 + 76), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r5 = (r5 + 15364);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r1 + 80), f0.d);
    r7 = (r1 + 76);
    r8 = (r1 + 8);
    r6 = -1;
    MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r1 + 84), f0.d);
    r9 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r1 + 88), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r1 + 92), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r1 + 96), f0.d);
    MemoryInline::WriteResolved32(guest_range_2, 156u, (r1 + 164), r12);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 8), r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 36), r11);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 40), r10);
    }
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 44), r0);
    ctx->lr = 0x80584130u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078F784u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80584134:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805841EC;
    }
}

loc_80584138:
{
    r3 = 552075264;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r3 + 4095);
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805841EC;
    }
}

loc_8058414C:
{
    f5.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f3.d = (-(f31.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 100));
    r3 = r31;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f2.d));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    // inline leaf 0x80590888 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590888
    f6.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f5.d = PpcFmulsInline(f6.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f3.d = PpcFmulsInline(f6.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
}

loc_805841EC:
{
    r3 = r31;
    r4 = (r1 + 36);
    // inline leaf 0x80590238 (11 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 104), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 108), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    // end of inlined leaf 0x80590238
    r3 = r31;
    r4 = (r1 + 48);
    // inline leaf 0x80590288 (21 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    f6.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 240), 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 256), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 260), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 264), f5.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 268), f4.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 240), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 244), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 248), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 252), f0.d);
    }
    // end of inlined leaf 0x80590288
    r3 = r31;
    // inline leaf 0x80590764 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80590764
    ctx->lr = 0x80584210u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80597934u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    cr = ctx->cr;
    r3 = r31;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r1 + 24);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 104));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 108));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 112));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 212));
    MemoryInline::FlatWriteFloat32((r3 + 240), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 216));
    MemoryInline::FlatWriteFloat32((r3 + 244), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 220));
    MemoryInline::FlatWriteFloat32((r3 + 248), f0.d);
    r3 = r31;
    // inline leaf 0x80590C6C (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 160));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 176));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 192));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C6C
    r3 = r31;
    r4 = (r1 + 12);
    // inline leaf 0x80590C94 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 196));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C94
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r3 = r31;
    MemoryInline::FlatWriteFloat32((r31 + 80), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 84), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r31 + 88), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 92), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 96), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 100), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 128), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 132), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 136), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r30 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    MemoryInline::FlatWriteFloat32((r3 + 344), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 72));
    MemoryInline::FlatWriteFloat32((r3 + 348), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    MemoryInline::FlatWriteFloat32((r3 + 352), f0.d);
    goto loc_805842F0;
}

loc_805842DC:
{
    r3 = r31;
    r4 = r30;
    // inline leaf 0x805906B4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805906B4
    ctx->lr = 0x805842ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80598BE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r30 = (r30 + 1);
}

loc_805842F0:
{
    r3 = r31;
    // inline leaf 0x805902DC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r3 + 12));
    // end of inlined leaf 0x805902DC
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80584300:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805842DC;
    }
}

loc_80584304:
{
    r3 = r31;
    // inline leaf 0x8059152C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 80));
    // end of inlined leaf 0x8059152C
    ctx->lr = 0x80584310u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80787D50u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 212));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    r31 = MemoryInline::FlatRead32((r1 + 188));
    r30 = MemoryInline::FlatRead32((r1 + 184));
    r29 = MemoryInline::FlatRead32((r1 + 180));
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80584044 func_80584044 preserves=false fpr_mask=0x80000000
