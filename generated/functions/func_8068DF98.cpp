#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8068DF98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8068DF98;

loc_8068DF98:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r5 = (r5 + 8036);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 64), r28);
    r28 = r3;
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 314u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, r3, r5);
    r3 = r29;
    // inline leaf 0x80590A10 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A10
    r0 = (r3 + -2);
    r3 = r29;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    MemoryInline::WriteResolved8(guest_range_4, 13u, (r28 + 13), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_1 & 1);
    MemoryInline::WriteResolved8(guest_range_4, 14u, (r28 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_4, 280u, (r28 + 280), r29);
    // inline leaf 0x80590A7C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A7C
    MemoryInline::WriteResolved32(guest_range_4, 284u, (r28 + 284), r3);
    r3 = r29;
    r4 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_4, 288u, (r28 + 288), r0);
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    MemoryInline::WriteResolved32(guest_range_4, 292u, (r28 + 292), r3);
    r3 = r29;
    // inline leaf 0x80590A28 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A28
    r0 = (r3 + -3);
    r3 = r29;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    MemoryInline::WriteResolved8(guest_range_4, 296u, (r28 + 296), static_cast<uint8_t>(r0));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    MemoryInline::WriteResolved8(guest_range_4, 302u, (r28 + 302), static_cast<uint8_t>(r3));
    r4 = 0x809C0000u;
    r5 = 1;
    r6 = 1;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2932));
    r0 = (r3 + -5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    MemoryInline::WriteResolved8(guest_range_4, 312u, (r28 + 312), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2932));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
    MemoryInline::WriteResolved8(guest_range_4, 313u, (r28 + 313), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
}

loc_8068E08C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8068E09C;
    }
}

loc_8068E090:
{
}

loc_8068E094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8068E09C;
    }
}

loc_8068E098:
{
    r6 = 0;
}

loc_8068E09C:
{
}

loc_8068E0A0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8068E0B0;
    }
}

loc_8068E0A4:
{
}

loc_8068E0A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8068E0B0;
    }
}

loc_8068E0AC:
{
    r5 = 0;
}

loc_8068E0B0:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r28 + 314), 0, 26u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r28 + 314), static_cast<uint8_t>(r5));
    r31 = 0x809C0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + -10456), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2932));
    r0 = (r3 + -6);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r28 + 315), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_6 & 1);
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r28 + 316), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2928));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_7 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r28 + 317), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    r0 = (r3 + -6);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_8 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r28 + 318), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    r0 = (r3 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_9 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r28 + 319), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    r0 = (r3 + -11);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_10 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r28 + 320), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_11 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r28 + 321), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    r0 = (r3 + -14);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_12 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 8u, (r28 + 322), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    r0 = (r3 + -19);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_13 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 9u, (r28 + 323), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    r0 = (r3 + -9);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_14 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 10u, (r28 + 324), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    r0 = (r3 + -5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_15 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 11u, (r28 + 325), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    r0 = (r3 + -4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_16 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 12u, (r28 + 326), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    r0 = (r3 + -28);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_17 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 13u, (r28 + 327), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r5 = 0x809C0000u;
    r3 = 0x809C0000u;
    r30 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 2920));
    r0 = (r4 + -30);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_18 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 14u, (r28 + 328), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 2920));
    r0 = (r4 + -29);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_19 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 15u, (r28 + 329), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 2920));
    r0 = (r4 + -32);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_20 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 16u, (r28 + 330), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 2920));
    r0 = (r4 + -54);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_21 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 17u, (r28 + 331), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 8656));
    r0 = MemoryInline::FlatRead8((r4 + 20));
    MemoryInline::WriteResolved8(guest_range_5, 18u, (r28 + 332), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 8656));
    r0 = MemoryInline::FlatRead8((r4 + 21));
    MemoryInline::WriteResolved8(guest_range_5, 19u, (r28 + 333), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 8656));
    r0 = MemoryInline::FlatRead8((r4 + 22));
    MemoryInline::WriteResolved8(guest_range_5, 20u, (r28 + 334), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 8656));
    r0 = MemoryInline::FlatRead8((r4 + 23));
    MemoryInline::WriteResolved8(guest_range_5, 21u, (r28 + 335), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_22 & 1);
    MemoryInline::WriteResolved8(guest_range_5, 22u, (r28 + 336), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    r0 = (r3 + -27);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_23 & 134217727);
    MemoryInline::WriteResolved8(guest_range_5, 23u, (r28 + 337), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + 8656));
    r0 = MemoryInline::FlatRead8((r3 + 24));
    MemoryInline::WriteResolved8(guest_range_5, 24u, (r28 + 338), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + 8656));
    r0 = MemoryInline::FlatRead8((r3 + 25));
    MemoryInline::WriteResolved8(guest_range_5, 25u, (r28 + 339), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 2);
}

loc_8068E2D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068E304;
    }
}

loc_8068E2DC:
{
    r3 = r29;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r0 = (r3 & 255);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
}

loc_8068E2FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8068E304;
    }
}

loc_8068E300:
{
    r30 = 1;
}

loc_8068E304:
{
    MemoryInline::FlatWrite8((r28 + 340), static_cast<uint8_t>(r30));
    r30 = 0x809C0000u;
    r31 = 0;
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 2);
}

loc_8068E31C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068E348;
    }
}

loc_8068E320:
{
    r3 = r29;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
}

loc_8068E340:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8068E348;
    }
}

loc_8068E344:
{
    r31 = 1;
}

loc_8068E348:
{
    MemoryInline::FlatWrite8((r28 + 341), static_cast<uint8_t>(r31));
    r3 = 0x809C0000u;
    r0 = 1;
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_8068E364:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_8068E374;
    }
}

loc_8068E368:
{
}

loc_8068E36C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_8068E374;
    }
}

loc_8068E370:
{
    r4 = 0;
}

loc_8068E374:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8068E378:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8068E388;
    }
}

loc_8068E37C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(10));
}

loc_8068E380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068E388;
    }
}

loc_8068E384:
{
    r0 = 0;
}

loc_8068E388:
{
    MemoryInline::FlatWrite8((r28 + 342), static_cast<uint8_t>(r0));
    r3 = 0x809C0000u;
    r31 = 0x80690000u;
    r30 = 0x80690000u;
    r6 = MemoryInline::FlatRead32((r3 + 8656));
    r3 = (r28 + 404);
    r4 = (r31 + -6076);
    r5 = (r30 + -6072);
    r0 = MemoryInline::FlatRead8((r6 + 26));
    r6 = 4;
    MemoryInline::FlatWrite8((r28 + 343), static_cast<uint8_t>(r0));
    r7 = 16;
    ctx->lr = 0x8068E3BCu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 468);
    r4 = (r31 + -6076);
    r5 = (r30 + -6072);
    r6 = 4;
    r7 = 4;
    ctx->lr = 0x8068E3D4u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 484);
    r4 = (r31 + -6076);
    r5 = (r30 + -6072);
    r6 = 4;
    r7 = 2;
    ctx->lr = 0x8068E3ECu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 492);
    r4 = (r31 + -6076);
    r5 = (r30 + -6072);
    r6 = 4;
    r7 = 1;
    ctx->lr = 0x8068E404u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    // inline leaf 0x8059092C (11 guest instruction(s))
}

loc_inl7_0x8059092C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl7_0x8059093C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl7_0x8059094C;
    }
}

loc_inl7_0x80590940:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 248);
    goto loc_inl7_cont_8059092C;
}

loc_inl7_0x8059094C:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r3 = (r3 + 88);
}

loc_inl7_cont_8059092C:
{
    // end of inlined leaf 0x8059092C
    MemoryInline::FlatWrite32((r28 + 1740), r3);
    r30 = 0x805A0000u;
    r29 = 0x80510000u;
    r3 = (r28 + 1980);
    r4 = (r30 + 8112);
    r6 = 12;
    r5 = (r29 + 13824);
    r7 = 2;
    ctx->lr = 0x8068E430u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 2004);
    r4 = (r30 + 8112);
    r5 = (r29 + 13824);
    r6 = 12;
    r7 = 2;
    ctx->lr = 0x8068E448u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 2028);
    r4 = (r30 + 8112);
    r5 = (r29 + 13824);
    r6 = 12;
    r7 = 2;
    ctx->lr = 0x8068E460u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 2124);
    r4 = (r30 + 8112);
    r5 = (r29 + 13824);
    r6 = 12;
    r7 = 4;
    ctx->lr = 0x8068E478u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 2172);
    r4 = (r30 + 8112);
    r5 = (r29 + 13824);
    r6 = 12;
    r7 = 4;
    ctx->lr = 0x8068E490u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 280));
    // inline leaf 0x80590650 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80590650
    MemoryInline::FlatWrite8((r28 + 297), static_cast<uint8_t>(r3));
    r29 = 1;
    r3 = MemoryInline::FlatRead32((r28 + 280));
    // inline leaf 0x80590664 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r0 & 1);
    // end of inlined leaf 0x80590664
}

loc_8068E4AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8068E4D4;
    }
}

loc_8068E4B0:
{
    r0 = MemoryInline::FlatRead8((r28 + 302));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_8068E4CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8068E4D4;
    }
}

loc_8068E4D0:
{
    r29 = 0;
}

loc_8068E4D4:
{
    MemoryInline::FlatWrite8((r28 + 298), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r28 + 280));
    // inline leaf 0x80590678 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80590678
    MemoryInline::FlatWrite8((r28 + 299), static_cast<uint8_t>(r3));
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r28 + 280));
    // inline leaf 0x80590650 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80590650
}

loc_8068E4F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8068E508;
    }
}

loc_8068E4F8:
{
    r3 = MemoryInline::FlatRead32((r28 + 280));
    // inline leaf 0x80590678 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80590678
}

loc_8068E504:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8068E50C;
    }
}

loc_8068E508:
{
    r29 = 1;
}

loc_8068E50C:
{
    MemoryInline::FlatWrite8((r28 + 301), static_cast<uint8_t>(r29));
    r3 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_8068E524:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(11))) {
        goto loc_8068E534;
    }
}

loc_8068E528:
{
}

loc_8068E52C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(12))) {
        goto loc_8068E534;
    }
}

loc_8068E530:
{
    r0 = 0;
}

loc_8068E534:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8068E538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068E54C;
    }
}

loc_8068E53C:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 297), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 298), static_cast<uint8_t>(r0));
}

loc_8068E54C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80532030u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r3 & 255);
}

loc_8068E55C:
{
    MemoryInline::FlatWrite8((r28 + 300), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068E578;
    }
}

loc_8068E564:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite8((r28 + 297), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 298), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 299), static_cast<uint8_t>(r0));
}

loc_8068E578:
{
    r0 = MemoryInline::FlatRead8((r28 + 332));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8068E580:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068E6BC;
    }
}

loc_8068E584:
{
    r3 = 76;
    ctx->lr = 0x8068E58Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8068E590:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068E5A0;
    }
}

loc_8068E594:
{
    r4 = 17;
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

loc_8068E5A0:
{
    MemoryInline::FlatWrite32((r28 + 344), r3);
    r30 = 0;
    r29 = 0x808A0000u;
    r3 = (r1 + 36);
    MemoryInline::FlatWriteRam32((r1 + 36), r30);
    r5 = (r29 + -10364);
    r4 = 1;
    ctx->lr = 0x8068E5C0u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055B618u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r29 + -10364);
    r3 = MemoryInline::FlatRead32((r28 + 344));
    r4 = (r29 + 12);
    r5 = (r1 + 36);
    r6 = 0;
    ctx->lr = 0x8068E5D8u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055C0E8u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r5 = (r1 + 40);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r6 = (r29 + 18);
    r4 = 0;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r8 = 0;
    r9 = 0;
    r10 = 9;
    r3 = MemoryInline::FlatRead32((r28 + 344));
    ctx->lr = 0x8068E608u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055DDECu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(29));
}

loc_8068E618:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8068E650;
    }
}

loc_8068E61C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r5 = (r1 + 44);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r6 = (r29 + 24);
    r4 = 1;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r8 = 0;
    r9 = 0;
    r10 = 9;
    r3 = MemoryInline::FlatRead32((r28 + 344));
    ctx->lr = 0x8068E64Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055DDECu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8068E680;
}

loc_8068E650:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r5 = (r1 + 48);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r6 = (r29 + 33);
    r4 = 1;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r8 = 0;
    r9 = 0;
    r10 = 9;
    r3 = MemoryInline::FlatRead32((r28 + 344));
    ctx->lr = 0x8068E680u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055DDECu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8068E680:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    r3 = (r3 + -10364);
    r5 = (r1 + 52);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = (r3 + 39);
    r4 = 2;
    r7 = 2;
    r3 = MemoryInline::FlatRead32((r28 + 344));
    r8 = 0;
    r9 = 0;
    r10 = 9;
    ctx->lr = 0x8068E6BCu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055DDECu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8068E6BC:
{
    r0 = MemoryInline::FlatRead8((r28 + 333));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8068E6C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068E7AC;
    }
}

loc_8068E6C8:
{
    r3 = 76;
    ctx->lr = 0x8068E6D0u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8068E6D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068E6E4;
    }
}

loc_8068E6D8:
{
    r4 = 17;
    r5 = 0;
    // inline leaf 0x8055B50C (19 guest instruction(s))
    r7 = 0x808B0000u;
    r6 = 0;
    r7 = (r7 + 18416);
    r0 = (r5 | 77594624);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r7);
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 8), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r3 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r3 + 40), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r3 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r3 + 64), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r3 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r3 + 72), r6);
    }
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r6);
    }
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 32), r6);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    // end of inlined leaf 0x8055B50C
}

loc_8068E6E4:
{
    MemoryInline::FlatWrite32((r28 + 348), r3);
    r29 = 0x808A0000u;
    r29 = (r29 + -10364);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r30);
    r3 = (r1 + 20);
    r5 = (r29 + 45);
    r4 = 1;
    ctx->lr = 0x8068E708u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055B618u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 348));
    r4 = (r29 + 62);
    r5 = (r1 + 20);
    r6 = 0;
    ctx->lr = 0x8068E71Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055C0E8u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r5 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r6 = (r29 + 73);
    r4 = 0;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r8 = 0;
    r9 = 0;
    r10 = 9;
    r3 = MemoryInline::FlatRead32((r28 + 348));
    ctx->lr = 0x8068E74Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055DDECu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r5 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r6 = (r29 + 84);
    r4 = 1;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r8 = 0;
    r9 = 0;
    r10 = 9;
    r3 = MemoryInline::FlatRead32((r28 + 348));
    ctx->lr = 0x8068E77Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055DDECu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r5 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r6 = (r29 + 95);
    r4 = 2;
    r7 = 2;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r8 = 0;
    r9 = 0;
    r10 = 9;
    r3 = MemoryInline::FlatRead32((r28 + 348));
    ctx->lr = 0x8068E7ACu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055DDECu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8068E7AC:
{
    r0 = MemoryInline::FlatRead8((r28 + 337));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8068E7B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068E80C;
    }
}

loc_8068E7B8:
{
    r3 = 76;
    ctx->lr = 0x8068E7C0u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8068E7C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068E7D4;
    }
}

loc_8068E7C8:
{
    r4 = 17;
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

loc_8068E7D4:
{
    MemoryInline::FlatWrite32((r28 + 352), r3);
    r29 = 0x808A0000u;
    r29 = (r29 + -10364);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 16);
    r5 = (r29 + 106);
    r4 = 1;
    ctx->lr = 0x8068E7F8u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055B618u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 352));
    r4 = (r29 + 116);
    r5 = (r1 + 16);
    r6 = 0;
    ctx->lr = 0x8068E80Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055C0E8u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8068E80C:
{
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r3 = r28;
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8068DF98 func_8068DF98 preserves=true fpr_mask=0x00000000
