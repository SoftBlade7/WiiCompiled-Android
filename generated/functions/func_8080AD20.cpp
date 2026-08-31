#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080AD20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8080AD20;

loc_8080AD20:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRam32((r1 + 252), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 248), r30);
    MemoryInline::FlatWriteRam32((r1 + 244), r29);
    r29 = 0x808B0000u;
    r29 = (r29 + -20288);
    MemoryInline::FlatWriteRam32((r1 + 240), r28);
    r28 = r4;
    ctx->lr = 0x8080AD54u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081F828u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r4 = 0x808D0000u;
    r3 = (r31 + 172);
    r4 = (r4 + 23600);
    MemoryInline::FlatWrite32(r31, r4);
    ctx->lr = 0x8080AD68u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8070CA8Cu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32(r29);
    r30 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 212), f0.d);
    r4 = 0x805A0000u;
    r5 = 0x80510000u;
    r3 = (r31 + 404);
    MemoryInline::FlatWriteRamFloat32((r1 + 216), f0.d);
    r4 = (r4 + 8112);
    r12 = MemoryInline::FlatRead32((r1 + 212));
    r5 = (r5 + 13824);
    MemoryInline::FlatWriteRamFloat32((r1 + 220), f0.d);
    r6 = 12;
    r11 = MemoryInline::FlatRead32((r1 + 216));
    r7 = 2;
    MemoryInline::FlatWriteRamFloat32((r1 + 200), f0.d);
    r10 = MemoryInline::FlatRead32((r1 + 220));
    MemoryInline::FlatWriteRamFloat32((r1 + 204), f0.d);
    r9 = MemoryInline::FlatRead32((r1 + 200));
    MemoryInline::FlatWriteRamFloat32((r1 + 208), f0.d);
    r8 = MemoryInline::FlatRead32((r1 + 204));
    r0 = MemoryInline::FlatRead32((r1 + 208));
    MemoryInline::FlatWrite32((r31 + 376), r30);
    MemoryInline::FlatWrite32((r31 + 380), r12);
    MemoryInline::FlatWrite32((r31 + 384), r11);
    MemoryInline::FlatWrite32((r31 + 388), r10);
    MemoryInline::FlatWrite32((r31 + 392), r9);
    MemoryInline::FlatWrite32((r31 + 396), r8);
    MemoryInline::FlatWrite32((r31 + 400), r0);
    ctx->lr = 0x8080ADDCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32(r28);
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 332u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r29);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead16((r3 + 46));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r0 * 60);
    r0 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 356), 0, 80u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r31 + 432), r0);
    r3 = MemoryInline::FlatRead32(r28);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8080AE0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 224), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 228), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 232), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r31 + 356), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 360), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 364), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080AEC4;
    }
}

loc_8080AE34:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 296u, (r29 + 296));
    r0 = 3;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 300u, (r29 + 300));
    r3 = (r1 + 176);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 372), r0);
    r4 = (r31 + 48);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 304u, (r29 + 304));
    r5 = (r1 + 188);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 388), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 392), f1.d);
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 188), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f0.d = MemoryInline::FlatReadFloat32((r1 + 176));
    r3 = (r1 + 152);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 404), f0.d);
    r4 = (r31 + 48);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 308u, (r29 + 308));
    r5 = (r1 + 164);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 180));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 408), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 304u, (r29 + 304));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 184));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 412), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 416), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r31 + 420), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r31 + 424), f0.d);
    goto loc_8080B098;
}

loc_8080AEC4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 312u, (r29 + 312));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8080AECC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080AF60;
    }
}

loc_8080AED0:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 296u, (r29 + 296));
    r0 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 316u, (r29 + 316));
    r3 = (r1 + 128);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 372), r0);
    r4 = (r31 + 48);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 304u, (r29 + 304));
    r5 = (r1 + 140);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 380), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 400), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    r3 = (r1 + 104);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 404), f0.d);
    r4 = (r31 + 48);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 304u, (r29 + 304));
    r5 = (r1 + 116);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 408), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 308u, (r29 + 308));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 412), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 416), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r31 + 420), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r31 + 424), f0.d);
    goto loc_8080B098;
}

loc_8080AF60:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 320u, (r29 + 320));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8080AF68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080AFFC;
    }
}

loc_8080AF6C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 324u, (r29 + 324));
    r3 = (r1 + 80);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 316u, (r29 + 316));
    r4 = (r31 + 48);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 388), f0.d);
    r5 = (r1 + 92);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 304u, (r29 + 304));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 372), r30);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 308u, (r29 + 308));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 392), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r3 = (r1 + 56);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 404), f0.d);
    r4 = (r31 + 48);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 308u, (r29 + 308));
    r5 = (r1 + 68);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 408), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 304u, (r29 + 304));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 412), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 416), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r31 + 420), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r31 + 424), f0.d);
    goto loc_8080B098;
}

loc_8080AFFC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 328u, (r29 + 328));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8080B004:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080B098;
    }
}

loc_8080B008:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 324u, (r29 + 324));
    r0 = 2;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 300u, (r29 + 300));
    r3 = (r1 + 32);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 380), f0.d);
    r4 = (r31 + 48);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 308u, (r29 + 308));
    r5 = (r1 + 44);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 372), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 304u, (r29 + 304));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 400), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 8);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 404), f0.d);
    r4 = (r31 + 48);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 308u, (r29 + 308));
    r5 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 408), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 304u, (r29 + 304));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 412), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 416), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r31 + 420), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r31 + 424), f0.d);
}

loc_8080B098:
{
    r12 = MemoryInline::FlatRead32((r31 + 172));
    r3 = (r31 + 172);
    r4 = r31;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 292));
    ctr = r12;
    ctx->lr = 0x8080B0B4u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 252));
    r30 = MemoryInline::FlatRead32((r1 + 248));
    r29 = MemoryInline::FlatRead32((r1 + 244));
    r28 = MemoryInline::FlatRead32((r1 + 240));
    r0 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8080AD20 func_8080AD20 preserves=true fpr_mask=0x00000000
