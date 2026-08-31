#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A4E34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A4E34;

loc_805A4E34:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    r11 = (r1 + 240);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    r7 = 0x809C0000u;
    r30 = 0x80890000u;
    r7 = MemoryInline::FlatRead32((r7 + -10456));
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r0 = MemoryInline::FlatRead32((r7 + 2920));
    r29 = r6;
    r30 = (r30 + 8728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(39));
}

loc_805A4E70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A5530;
    }
}

loc_805A4E74:
{
    r4 = MemoryInline::FlatRead32(r5);
    r7 = 1;
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r8 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r8 & 1024);
}

loc_805A4E8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A4E9C;
    }
}

loc_805A4E90:
{
    r0 = (r8 & 16);
}

loc_805A4E94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A4E9C;
    }
}

loc_805A4E98:
{
    r5 = 0;
}

loc_805A4E9C:
{
}

loc_805A4EA0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_805A4EB4;
    }
}

loc_805A4EA4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 8);
}

loc_805A4EAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A4EB4;
    }
}

loc_805A4EB0:
{
    r7 = 0;
}

loc_805A4EB4:
{
    r5 = MemoryInline::FlatRead32((r3 + 300));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_805A4EBC:
{
    r4 = MemoryInline::FlatRead32((r3 + 304));
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r0 = MemoryInline::FlatRead32((r3 + 308));
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r31 = (r31_rot_1 & 134217727);
    MemoryInline::FlatWriteRam32((r1 + 164), r5);
    MemoryInline::FlatWriteRam32((r1 + 168), r4);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A4F00;
    }
}

loc_805A4EDC:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f0.d);
}

loc_805A4F00:
{
    r3 = r28;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r4 = (r1 + 140);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r5 = (r1 + 152);
    r6 = (r26 + 312);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = (r1 + 128);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x805A4F70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f3.d = (-(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 168));
    r3 = r28;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    r3 = MemoryInline::FlatRead16((r27 + 148));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r27 + 148), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_805A500C;
    }
}

loc_805A5004:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r27 + 148), static_cast<uint16_t>(r0));
}

loc_805A500C:
{
    r3 = MemoryInline::FlatRead16((r27 + 150));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r27 + 150), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_805A5028;
    }
}

loc_805A5020:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r27 + 150), static_cast<uint16_t>(r0));
}

loc_805A5028:
{
    r3 = MemoryInline::FlatRead16((r27 + 152));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r27 + 152), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_805A5044;
    }
}

loc_805A503C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r27 + 152), static_cast<uint16_t>(r0));
}

loc_805A5044:
{
    r0 = MemoryInline::FlatRead16((r27 + 148));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805A504C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805A5088;
    }
}

loc_805A5050:
{
    r0 = MemoryInline::FlatRead16((r27 + 150));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805A5058:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_805A5068;
    }
}

loc_805A505C:
{
    r0 = MemoryInline::FlatRead8((r27 + 168));
}

loc_805A5064:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A5088;
    }
}

loc_805A5068:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 128));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 240));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 120), f0.d);
    goto loc_805A50A4;
}

loc_805A5088:
{
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f2.d = MemoryInline::FlatReadFloat32((r27 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 300));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 120), f0.d);
}

loc_805A50A4:
{
    r0 = MemoryInline::FlatRead16((r27 + 152));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A50AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A50D0;
    }
}

loc_805A50B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 132));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 240));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 124), f0.d);
    goto loc_805A50EC;
}

loc_805A50D0:
{
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f2.d = MemoryInline::FlatReadFloat32((r27 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 240));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 124), f0.d);
}

loc_805A50EC:
{
    r3 = r28;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteRamFloat32((r1 + 176), f0.d);
    f0.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f1.d);
    f1.d = (-(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = (r1 + 176);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f2.d);
    f0.d = (-(f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    ctx->lr = 0x805A5144u;
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
    r0 = MemoryInline::FlatRead16((r27 + 148));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r25 = 1;
}

loc_805A5150:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805A5158;
    }
}

loc_805A5154:
{
    r25 = 3;
}

loc_805A5158:
{
    r5 = 0x802A0000u;
    r5 = (r5 + 16640);
    r4 = MemoryInline::FlatRead32(r5);
    r24 = 0;
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805A5170:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r31 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 80u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 28), f0.d);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 32), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 36), r3);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 92), r4);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 96), r3);
    }
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r1 + 100), r0);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 25), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 24), static_cast<uint8_t>(r24));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 80), r4);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 84), r3);
    }
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 88), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 68), r4);
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 72), r3);
    }
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 76), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A538C;
    }
}

loc_805A51B8:
{
    r23 = (r1 + 176);
    r22 = (r1 + 104);
    r21 = 0;
    goto loc_805A5268;
}

loc_805A51C8:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r23);
    r3 = r26;
    r7 = r28;
    r4 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 12), r22);
    r5 = (r1 + 92);
    r6 = (r27 + 112);
    r8 = (r21 & 255);
    MemoryInline::FlatWriteRam32((r1 + 16), r24);
    r10 = (r1 + 116);
    r9 = MemoryInline::FlatRead16((r27 + 148));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    ctx->lr = 0x805A51F8u;
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
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805A5548u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r11 = ctx->gpr[11];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805A51FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A5264;
    }
}

loc_805A5200:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r3 = r26;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 96));
    r4 = r27;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    r5 = r28;
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f2.d);
    r9 = r23;
    r7 = (r1 + 24);
    r8 = (r1 + 92);
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r10 = (r1 + 116);
    r6 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r24);
    ctx->lr = 0x805A5244u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    InvokeDirectCpu<0x805A57CCu>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805A5248:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805A5264;
    }
}

loc_805A524C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r0 = 3;
    MemoryInline::FlatWriteFloat32((r27 + 112), f0.d);
    r31 = 1;
    MemoryInline::FlatWrite16((r27 + 148), static_cast<uint16_t>(r0));
    goto loc_805A5274;
}

loc_805A5264:
{
    r21 = (r21 + 1);
}

loc_805A5268:
{
    r0 = (r21 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r25));
}

loc_805A5270:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805A51C8;
    }
}

loc_805A5274:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 176));
    r22 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 180));
    f5.d = (-(f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 184));
    f4.d = (-(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f3.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 176), f5.d);
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    r0 = MemoryInline::FlatRead16((r27 + 150));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805A52C8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805A52D0;
    }
}

loc_805A52CC:
{
    r22 = 3;
}

loc_805A52D0:
{
    r23 = (r1 + 176);
    r24 = (r1 + 104);
    r21 = 0;
    r25 = 1;
    goto loc_805A5380;
}

loc_805A52E4:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r23);
    r3 = r26;
    r7 = r28;
    r4 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 12), r24);
    r5 = (r1 + 92);
    r6 = (r27 + 116);
    r8 = (r21 & 255);
    MemoryInline::FlatWriteRam32((r1 + 16), r25);
    r10 = (r1 + 116);
    r9 = MemoryInline::FlatRead16((r27 + 150));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    ctx->lr = 0x805A5314u;
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
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805A5548u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r11 = ctx->gpr[11];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805A5318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A537C;
    }
}

loc_805A531C:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r3 = r26;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 96));
    r4 = r27;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    r5 = r28;
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f2.d);
    r9 = r23;
    r6 = (r1 + 25);
    r8 = (r1 + 92);
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r10 = (r1 + 116);
    r7 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r25);
    ctx->lr = 0x805A5360u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    InvokeDirectCpu<0x805A57CCu>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805A5364:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805A537C;
    }
}

loc_805A5368:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r0 = 3;
    MemoryInline::FlatWriteFloat32((r27 + 116), f0.d);
    MemoryInline::FlatWrite16((r27 + 150), static_cast<uint16_t>(r0));
    goto loc_805A538C;
}

loc_805A537C:
{
    r21 = (r21 + 1);
}

loc_805A5380:
{
    r0 = (r21 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r22));
}

loc_805A5388:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805A52E4;
    }
}

loc_805A538C:
{
    r0 = MemoryInline::FlatRead8((r27 + 168));
}

loc_805A5394:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A53B4;
    }
}

loc_805A5398:
{
    r3 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 33554432);
}

loc_805A53A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A53B4;
    }
}

loc_805A53AC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 168), static_cast<uint8_t>(r0));
}

loc_805A53B4:
{
    r3 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 33554432);
}

loc_805A53C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A53EC;
    }
}

loc_805A53C8:
{
    r0 = MemoryInline::FlatRead32((r27 + 108));
}

loc_805A53D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_805A53EC;
    }
}

loc_805A53D4:
{
    r0 = MemoryInline::FlatRead16((r27 + 148));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805A53DC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805A53EC;
    }
}

loc_805A53E0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 168), static_cast<uint8_t>(r0));
    goto loc_805A5418;
}

loc_805A53EC:
{
    r0 = MemoryInline::FlatRead8((r27 + 168));
}

loc_805A53F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A5418;
    }
}

loc_805A53F8:
{
    r0 = MemoryInline::FlatRead16((r27 + 148));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805A5400:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805A5410;
    }
}

loc_805A5404:
{
    r0 = MemoryInline::FlatRead16((r27 + 150));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805A540C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_805A5418;
    }
}

loc_805A5410:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteFloat32((r27 + 128), f0.d);
}

loc_805A5418:
{
    r4 = MemoryInline::FlatRead32(r28);
    r21 = 0;
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1024);
}

loc_805A542C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A5508;
    }
}

loc_805A5430:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_805A543C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805A5508;
    }
}

loc_805A5440:
{
    r0 = MemoryInline::FlatRead8((r1 + 25));
}

loc_805A5448:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A5508;
    }
}

loc_805A544C:
{
}

loc_805A5450:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_805A5508;
    }
}

loc_805A5454:
{
    r3 = r28;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f1.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 416));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A5468:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A5508;
    }
}

loc_805A546C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 68), 0, 120u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 80));
    f2.d = MemoryInline::FlatReadFloat32(r27);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 68));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 84));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 72));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 108u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 108u, (r1 + 176));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 112u, (r1 + 180));
        }
    }
    f3.d = PpcFmulsInline(f1.d, f11.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 88));
    f6.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 76));
    f1.d = PpcFmulsInline(f1.d, f8.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f2.d = PpcFmulsInline(f0.d, f10.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 116u, (r1 + 184));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f11.d);
    f0.d = PpcFmulsInline(f0.d, f7.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f4.d = PpcFmulsInline(f5.d, f9.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f10.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f5.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f9.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f8.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = std::fabs(f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f7.d);
    f1.d = std::fabs(f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f6.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A5500:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A5508;
    }
}

loc_805A5504:
{
    r21 = 1;
}

loc_805A5508:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_805A550C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A551C;
    }
}

loc_805A5510:
{
    r0 = 15;
    MemoryInline::FlatWrite16((r27 + 152), static_cast<uint16_t>(r0));
    goto loc_805A5530;
}

loc_805A551C:
{
    r0 = MemoryInline::FlatRead16((r27 + 152));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A5524:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805A5530;
    }
}

loc_805A5528:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteFloat32((r27 + 132), f0.d);
}

loc_805A5530:
{
    r11 = (r1 + 240);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805A4E34 func_805A4E34 preserves=true fpr_mask=0x00000000
