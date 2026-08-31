#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805368F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

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
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_805368F8;

loc_805368F8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    r7 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = MemoryInline::FlatRead32((r5 + -10448));
    r0 = MemoryInline::FlatRead32((r7 + 2928));
}

loc_80536930:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053693C;
    }
}

loc_80536934:
{
    r6 = 0;
    goto loc_80536958;
}

loc_8053693C:
{
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r6 = (r4 + 8);
}

loc_8053694C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80536954;
    }
}

loc_80536950:
{
    goto loc_80536958;
}

loc_80536954:
{
    r6 = 0;
}

loc_80536958:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8053695C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80536978;
    }
}

loc_80536960:
{
    r4 = MemoryInline::FlatRead8((r3 + 8));
    r0 = (r4 * 240);
    r5 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80536974:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80536984;
    }
}

loc_80536978:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r3 + 52), r0);
    goto loc_80536C68;
}

loc_80536984:
{
    r7 = MemoryInline::FlatRead32(r6);
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
}

loc_80536994:
{
    r6 = MemoryInline::FlatRead32((r5 + 2924));
    r0 = MemoryInline::FlatRead32((r5 + 2920));
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805369B8;
    }
}

loc_805369A0:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & -8);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r5 = (r7 + r5);
    r5 = (r5 + r0);
    r10 = MemoryInline::FlatRead16((r5 + 12));
    goto loc_805369BC;
}

loc_805369B8:
{
    r10 = 0;
}

loc_805369BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r7 = 1127219200;
    r9 = 0x80890000u;
    r5 = (r10 ^ -2147483648);
    r0 = (r10 - r0);
    r6 = 0x80890000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r8 = (r30 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    r3 = 0x809C0000u;
    f3.d = MemoryInline::FlatReadFloat64((r9 + 416));
    r0 = (r0 * 150);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 440));
    MemoryInline::FlatWriteRam32((r1 + 24), r7);
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r10));
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r30 = fctiwzword0;
    r30 = (r30 + r0);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80590100
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80536A5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80536A64;
    }
}

loc_80536A60:
{
    r30 = (r30 + 25);
}

loc_80536A64:
{
    r31 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r3 = MemoryInline::FlatRead32((r31 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    r4 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r31 + 6392));
    r5 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r5 = MemoryInline::FlatRead32((r5 + 52));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 131070);
    r30 = (r30 + r0);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80590100
    r4 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r31 + 6392));
    r5 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r5 = MemoryInline::FlatRead32((r5 + 56));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r5 = (r0 & 65535);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 262140);
    r0 = (r0 + r5);
    r30 = (r30 + r0);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x80590100
    r4 = MemoryInline::FlatRead32(r3);
    r3 = -1431633920;
    r6 = (r3 + -21845);
    r3 = MemoryInline::FlatRead32((r31 + 6392));
    r5 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r5 = MemoryInline::FlatRead32((r5 + 52));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_9 & 2147483647);
    r30 = (r30 - r0);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x80590100
    r4 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r31 + 6392));
    r5 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r5 = MemoryInline::FlatRead32((r5 + 52));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & 65535);
    r0 = (r0 * 20);
    r30 = (r30 - r0);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x80590100
    r4 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r31 + 6392));
    r5 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r5 = MemoryInline::FlatRead32((r5 + 52));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r0 & 65535);
    r0 = (r0 * 30);
    r30 = (r30 - r0);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    // end of inlined leaf 0x80590100
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 46));
    r3 = (r4 & 65535);
    r3 = (r3 * 70);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80536B7C:
{
    r30 = (r30 - r3);
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(-1))) {
        goto loc_80536BC8;
    }
}

loc_80536B84:
{
    r0 = (r31 & 255);
    r3 = 0x809C0000u;
    r0 = (r0 * 236);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80536BA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80536BB8;
    }
}

loc_80536BA4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80536BB4u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    r12 = ctx->gpr[12];
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
    goto loc_80536BBC;
}

loc_80536BB8:
{
    r3 = -1;
}

loc_80536BBC:
{
}

loc_80536BC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80536BC8;
    }
}

loc_80536BC4:
{
    r30 = (r30 + 10);
}

loc_80536BC8:
{
}

loc_80536BCC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(-1))) {
        goto loc_80536C08;
    }
}

loc_80536BD0:
{
    r0 = (r31 & 255);
    r3 = 0x809C0000u;
    r0 = (r0 * 236);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80536BEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80536BF8;
    }
}

loc_80536BF0:
{
    r0 = MemoryInline::FlatRead8((r3 + 81));
    goto loc_80536BFC;
}

loc_80536BF8:
{
    r0 = 0;
}

loc_80536BFC:
{
}

loc_80536C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80536C08;
    }
}

loc_80536C04:
{
    r30 = (r30 + 25);
}

loc_80536C08:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    // end of inlined leaf 0x80590100
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r30 = (r30 + r0);
}

loc_80536C30:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(-50))) {
        goto loc_80536C38;
    }
}

loc_80536C34:
{
    r30 = -50;
}

loc_80536C38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(250));
}

loc_80536C3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80536C44;
    }
}

loc_80536C40:
{
    r30 = 250;
}

loc_80536C44:
{
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r3 = (r3 * 240);
    r4 = (r4 + r3);
    r3 = MemoryInline::FlatRead16((r4 + 3318));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r4 + 3318), static_cast<uint16_t>(r0));
}

loc_80536C68:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805368F8 func_805368F8 preserves=true fpr_mask=0x00000000
