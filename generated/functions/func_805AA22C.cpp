#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AA22C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805AA22C;

loc_805AA22C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -528), 0, 536u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -528), r1);
    r1 = (r1 + -528);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 532u, (r1 + 532), r0);
    r11 = (r1 + 528);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 500u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 500u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 504u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 508u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 508u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 512u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 516u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 516u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 520u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 524u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r31 = 0x80890000u;
    r25 = MemoryInline::FlatRead32((r3 + 44));
    r26 = r3;
    r30 = MemoryInline::FlatRead32((r7 + 144));
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r3 = r25;
    r31 = (r31 + 9336);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r1 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r1 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r1 + 136), f0.d);
    r3 = MemoryInline::FlatRead32(r25);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AA294:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AA2A0;
    }
}

loc_805AA298:
{
    f8.d = MemoryInline::FlatReadFloat32((r31 + 4));
    goto loc_805AA2A4;
}

loc_805AA2A0:
{
    f8.d = MemoryInline::FlatReadFloat32((r31 + 44));
}

loc_805AA2A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    r8 = 0x802A0000u;
    f7.d = MemoryInline::FlatReadFloat32((r26 + 84));
    r3 = (r1 + 140);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 132));
    r7 = (r8 + 16688);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f5.d = MemoryInline::FlatReadFloat32((r26 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    r4 = r3;
    f4.d = MemoryInline::FlatReadFloat32((r26 + 92));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    r5 = (r26 + 84);
    f0.d = PpcFmulsInline(f3.d, f8.d);
    r6 = 1;
    f1.d = PpcFmulsInline(f6.d, f8.d);
    f3.d = PpcFmulsInline(f2.d, f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteFloat32((r26 + 84), f2.d);
    MemoryInline::FlatWriteFloat32((r26 + 88), f1.d);
    MemoryInline::FlatWriteFloat32((r26 + 92), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f0.d);
    ctx->lr = 0x805AA32Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    f10.d = MemoryInline::FlatReadFloat32((r26 + 84));
    r5 = 0x802A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f10.d);
    r5 = (r5 + 16640);
    r4 = MemoryInline::FlatRead32(r5);
    f9.d = MemoryInline::FlatReadFloat32((r26 + 88));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f9.d);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    f8.d = MemoryInline::FlatReadFloat32((r26 + 92));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f8.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 48));
    MemoryInline::FlatWriteRam32((r1 + 104), r4);
    MemoryInline::FlatWriteRam32((r1 + 108), r3);
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805AA388:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AA394:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805AA408;
    }
}

loc_805AA398:
{
    r3 = (r1 + 440);
    r4 = (r1 + 128);
    r5 = (r1 + 140);
    ctx->lr = 0x805AA3A8u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE7B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
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
    cr = ctx->cr;
    r5 = r29;
    r3 = (r1 + 32);
    r4 = (r1 + 440);
    // inline leaf 0x8059A4F8 (31 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f7.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f4.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f6.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    f3.d = PpcFmulsInline(f2.d, f5.d);
    f9.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8059A4F8
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 104);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    ctx->lr = 0x805AA3D8u;
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
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r26 + 24), f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r26 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    goto loc_805AA558;
}

loc_805AA408:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 140));
    r3 = (r1 + 344);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 144));
    r4 = (r1 + 140);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f7.d = PpcFmulsInline(f2.d, f9.d);
    f5.d = PpcFmulsInline(f6.d, f10.d);
    f1.d = MemoryInline::FlatReadFloat32(r27);
    f3.d = PpcFmulsInline(f4.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f1.d = (-(f1.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f5.d));
    f2.d = PpcFmulsInline(f2.d, f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f10.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f9.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f3.d = PpcFmulsInline(f6.d, f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f5.d);
    f2.d = PpcFmulsInline(f4.d, f9.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    ctx->lr = 0x805AA46Cu;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 108));
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805AA484:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805AA490;
    }
}

loc_805AA488:
{
    f1.d = f0.d;
    goto loc_805AA4A0;
}

loc_805AA490:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805AA498:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805AA4A0;
    }
}

loc_805AA49C:
{
    f1.d = f0.d;
}

loc_805AA4A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    r3 = (r1 + 392);
    r4 = (r1 + 92);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x805AA4B4u;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    r3 = (r1 + 344);
    r4 = (r1 + 392);
    r5 = (r1 + 296);
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f3.d = MemoryInline::FlatReadFloat32((r1 + 328));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 312));
    f7.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 296));
    f4.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 332));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 300));
    f6.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 316));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 336));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f3.d = PpcFmulsInline(f2.d, f5.d);
    f9.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 320));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 304));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f10.d = MemoryInline::FlatReadFloat32((r26 + 28));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f3.d = PpcFmulsInline(f2.d, f9.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f6.d);
    f0.d = PpcFmulsInline(f10.d, f6.d);
    f1.d = PpcFmulsInline(f10.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    f0.d = PpcFmulsInline(f10.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
}

loc_805AA558:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 112));
    r3 = (r1 + 68);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 100), f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 104), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 108), f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 112));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 116));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f2.d);
    r5 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    r4 = MemoryInline::FlatRead32((r1 + 84));
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 68), r5);
    MemoryInline::FlatWriteRam32((r1 + 72), r4);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    ctx->lr = 0x805AA5D4u;
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
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = 0x802A0000u;
    r3 = (r1 + 44);
    r4 = (r4 + 16688);
    r5 = (r1 + 68);
    r6 = 1;
    ctx->lr = 0x805AA5ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    r3 = (r1 + 20);
    r4 = (r1 + 44);
    r5 = (r1 + 68);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r3 = (r1 + 200);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r4 = (r1 + 44);
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f2.d);
    ctx->lr = 0x805AA630u;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    r3 = (r1 + 248);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    r4 = (r1 + 56);
    f1.d = (-(f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x805AA64Cu;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    r3 = (r1 + 200);
    r4 = (r1 + 248);
    r5 = (r1 + 152);
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f7.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r11 = (r1 + 528);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f1.d = PpcFmulsInline(f1.d, f7.d);
    f8.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f0.d = PpcFmulsInline(f0.d, f6.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f2.d = PpcFmulsInline(f2.d, f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f4.d = PpcFmulsInline(f4.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 176));
    f3.d = PpcFmulsInline(f3.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 100));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 192));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 184));
    f2.d = PpcFmulsInline(f5.d, f8.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 188));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f10.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f10.d);
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
    f5.d = PpcFmulsInline(f9.d, f8.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 104));
    f2.d = PpcFmulsInline(f4.d, f7.d);
    f1.d = PpcFmulsInline(f3.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f8.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f8.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 108));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 120), f0.d);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    r25 = MemoryInline::FlatRead32((r11 + -28));
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::FlatRead32((r1 + 532));
    ctx->lr = r0;
    r1 = (r1 + 528);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE00007E gpr_write=0xFE0009FB gpr_return=0x00000018 fpr_read=0xC000C71B fpr_write=0xC000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805AA22C func_805AA22C preserves=true fpr_mask=0x00000000
