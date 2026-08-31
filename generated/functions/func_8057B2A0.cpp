#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805903CC_statefree(uint32_t);
extern "C" uint64_t func_80590794_statefree(uint32_t);
extern "C" uint64_t func_805911C0_statefree(uint32_t);

extern "C" void func_8057B2A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8057B2A0;

loc_8057B2A0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -208), 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r1 + 212), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 192u, (r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 176);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 172u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead16((r3 + 596));
    r30 = 0x808B0000u;
    r31 = 0x80890000u;
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & -257);
    MemoryInline::FlatWrite16((r3 + 596), static_cast<uint16_t>(r0));
    f30.d = f1.d;
    r28 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    f31.d = f2.d;
    r30 = (r30 + 22768);
    r31 = (r31 + 6656);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 16384);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057B2FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057B748;
    }
}

loc_8057B300:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057B308:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057B748;
    }
}

loc_8057B30C:
{
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r27 = 1;
    r0 = (r4 & 4096);
}

loc_8057B318:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057B324;
    }
}

loc_8057B31C:
{
    r0 = (r4 & 1024);
}

loc_8057B320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057B328;
    }
}

loc_8057B324:
{
    r27 = 0;
}

loc_8057B328:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r3 + 156), f0.d);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1);
}

loc_8057B340:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057B380;
    }
}

loc_8057B344:
{
    r3 = r28;
    r4 = (r28 + 92);
    // inline leaf 0x80590C94 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 196));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C94
    f2.d = MemoryInline::FlatReadFloat32((r28 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 100));
    MemoryInline::FlatWriteFloat32((r28 + 116), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 120), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 124), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 80), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 84), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 88), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 128), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 132), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 136), f0.d);
}

loc_8057B380:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8057B384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057B748;
    }
}

loc_8057B388:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 524));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8057B390:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057B748;
    }
}

loc_8057B394:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    r3 = r28;
    f31.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    // inline leaf 0x8059081C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 8);
    // end of inlined leaf 0x8059081C
    f0.d = MemoryInline::FlatReadFloat32((r31 + 124));
    r29 = (r3 + 28);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8057B3B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057B3F0;
    }
}

loc_8057B3B4:
{
    r3 = r28;
    // inline leaf 0x8059081C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 8);
    // end of inlined leaf 0x8059081C
    r27 = r3;
    r3 = r28;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = r3;
    r3 = (r1 + 32);
    r5 = (r27 + 28);
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
    r3 = r28;
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    r4 = (r1 + 32);
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x8057B3F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D396Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_8057B3F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 112));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8057B3F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057B6A4;
    }
}

loc_8057B3FC:
{
    r0 = MemoryInline::FlatRead16((r28 + 596));
    r3 = r28;
    r0 = (r0 | 256);
    MemoryInline::FlatWrite16((r28 + 596), static_cast<uint16_t>(r0));
    // inline leaf 0x8059081C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 8);
    // end of inlined leaf 0x8059081C
    r27 = r3;
    r3 = r28;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f1.d = MemoryInline::FlatReadFloat32((r27 + 64));
    r4 = (r1 + 116);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = r28;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f0.d);
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
    r3 = r28;
    r4 = (r1 + 104);
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
    f5.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r27 + 64));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 68));
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r27 + 72));
    f8.d = MemoryInline::FlatReadFloat32((r30 + 536));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 128));
    SetCRFloatResident(cr, 0, f8.d, f31.d);
}

loc_8057B49C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f4.d = (-(f4.d));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f5.d = PpcFmulsInline(f3.d, f5.d);
    f4.d = PpcFmulsInline(f3.d, f6.d);
    f3.d = PpcFmulsInline(f3.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057B4E8;
    }
}

loc_8057B4E4:
{
    f31.d = f8.d;
}

loc_8057B4E8:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = PpcFmulsInline(f31.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f2.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x8057B524u;
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
    r3 = (r1 + 68);
    r4 = (r1 + 56);
    r5 = (r1 + 80);
    r6 = (r28 + 116);
    // inline leaf 0x805AEC24 (26 guest instruction(s))
    f5.d = MemoryInline::FlatReadFloat32(r6);
    f4.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f8.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f2.d = PpcFmulsInline(f1.d, f6.d);
    f0.d = PpcFmulsInline(f5.d, f6.d);
    f1.d = PpcFmulsInline(f8.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x805AEC24
    f3.d = MemoryInline::FlatReadFloat32((r30 + 528));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f5.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f4.d = PpcFmulsInline(f1.d, f3.d);
    f6.d = MemoryInline::FlatReadFloat32((r30 + 532));
    f3.d = PpcFmulsInline(f0.d, f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f2.d = PpcFmulsInline(f2.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = PpcFmulsInline(f1.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f5.d);
    f0.d = PpcFmulsInline(f0.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    r3 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 1048576);
}

loc_8057B598:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057B5B8;
    }
}

loc_8057B59C:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
}

loc_8057B5B8:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057B5EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057B5FC;
    }
}

loc_8057B5F0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
}

loc_8057B5FC:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 532));
    r3 = r28;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r0 = MemoryInline::FlatRead16((r28 + 596));
    f31.d = MemoryInline::FlatReadFloat32((r3 + 20));
    r0 = (r0 & 2);
}

loc_8057B638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057B640;
    }
}

loc_8057B63C:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
}

loc_8057B640:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r3 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 262144);
}

loc_8057B680:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057B688;
    }
}

loc_8057B684:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
}

loc_8057B688:
{
    r3 = r28;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f1.d = f31.d;
    r4 = (r1 + 128);
    r5 = (r1 + 44);
    ctx->lr = 0x8057B6A0u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x805B5CE8u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    goto loc_8057B6F0;
}

loc_8057B6A4:
{
    r3 = r28;
    // inline leaf 0x805911A8 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 124));
    // end of inlined leaf 0x805911A8
}

loc_8057B6B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(30))) {
        goto loc_8057B6F0;
    }
}

loc_8057B6B4:
{
    r3 = r28;
    // inline leaf 0x805911C0 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 128));
    // end of inlined leaf 0x805911C0
}

loc_8057B6C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8057B6F0;
    }
}

loc_8057B6C4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 124));
    r4 = r29;
    r3 = (r1 + 20);
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
    r3 = r28;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = (r1 + 20);
    // inline leaf 0x805B6388 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 272));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 276));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 280));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 272), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 276), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 280), f0.d);
    // end of inlined leaf 0x805B6388
    r3 = r28;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    // inline leaf 0x805713D8 (9 guest instruction(s))
    r5 = 0x80890000u;
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 5988));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 | 16777216);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x805713D8
}

loc_8057B6F0:
{
    r3 = r28;
    // inline leaf 0x805911A8 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 124));
    // end of inlined leaf 0x805911A8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(30));
}

loc_8057B6FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057B748;
    }
}

loc_8057B700:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805911C0u) && KnownTranslatedCpuCall<0x805911C0u>::kAvailable && !KnownTranslatedCpuCall<0x805911C0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805911C0u>()) {
        const auto state_free_result_805911C0_6CDC = func_805911C0_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_805911C0_6CDC);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x805911C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8057B70C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057B748;
    }
}

loc_8057B710:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 124));
    r4 = r29;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805903CCu) && KnownTranslatedCpuCall<0x805903CCu>::kAvailable && !KnownTranslatedCpuCall<0x805903CCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805903CCu>()) {
        const auto state_free_result_805903CC_7631 = func_805903CC_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_805903CC_7631);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x805903CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x805B6388u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = r28;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x805713D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    r3 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590794u) && KnownTranslatedCpuCall<0x80590794u>::kAvailable && !KnownTranslatedCpuCall<0x80590794u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590794u>()) {
        const auto state_free_result_80590794_80A4 = func_80590794_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80590794_80A4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590794u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->lr = 0x8057B748u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8070B09Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8057B748:
{
    r0 = MemoryInline::FlatRead16((r28 + 596));
    r0 = (r0 & -129);
    MemoryInline::FlatWrite16((r28 + 596), static_cast<uint16_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r11 = (r1 + 176);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -20), 0, 20u, true, false);
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8057B2A0 func_8057B2A0 preserves=false fpr_mask=0xC0000000
