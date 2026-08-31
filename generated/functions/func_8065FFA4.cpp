#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065FFA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8065FFA4;

loc_8065FFA4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 12), r19);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 16), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 20), r21);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 24), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 28), r23);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 36), r25);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 40), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 60), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 8408));
    ctx->lr = 0x8065FFC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80656F40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r20 = r31;
    r19 = (r31 + 24);
    r29 = 0;
    r28 = 48;
    r27 = 36;
    r26 = 67;
    r25 = 0;
}

loc_8065FFE0:
{
    r3 = r19;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x8065FFF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r20 + 28), static_cast<uint8_t>(r28));
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
}

loc_8065FFFC:
{
    r19 = (r19 + 8);
    MemoryInline::FlatWrite8((r20 + 29), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r20 + 30), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r20 + 31), static_cast<uint8_t>(r25));
    r20 = (r20 + 8);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065FFE0;
    }
}

loc_80660014:
{
    r27 = 0;
    r3 = -1;
    r0 = 255;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 56u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r31 + 60), static_cast<uint8_t>(r3));
    r19 = r31;
    r28 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 40), r27);
    r26 = 0x809C0000u;
    r25 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r31 + 44), r27);
    MemoryInline::WriteResolved8(guest_range_0, 53u, (r31 + 61), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 55u, (r31 + 63), static_cast<uint8_t>(r27));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 12), r27);
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 8), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 16), r27);
    }
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r31 + 62), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r31 + 48), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r31 + 49), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r31 + 50), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r31 + 51), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r31 + 52), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r31 + 53), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r31 + 54), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 47u, (r31 + 55), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r31 + 56), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 49u, (r31 + 57), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r31 + 58), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r31 + 59), static_cast<uint8_t>(r0));
    goto loc_806600D0;
}

loc_8066008C:
{
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80660098:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(11))) {
        goto loc_806600C0;
    }
}

loc_8066009C:
{
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r26 + -10456));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3321));
    MemoryInline::FlatWrite16((r19 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 3312));
    MemoryInline::FlatWrite16((r19 + 26), static_cast<uint16_t>(r0));
    goto loc_806600C8;
}

loc_806600C0:
{
    MemoryInline::FlatWrite16((r19 + 24), static_cast<uint16_t>(r27));
    MemoryInline::FlatWrite16((r19 + 26), static_cast<uint16_t>(r27));
}

loc_806600C8:
{
    r19 = (r19 + 8);
    r28 = (r28 + 1);
}

loc_806600D0:
{
    r3 = MemoryInline::FlatRead32((r25 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 88));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_806600E8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066008C;
    }
}

loc_806600EC:
{
    r21 = r31;
    r22 = (r31 + 64);
    r23 = 0;
    r29 = 255;
    r25 = 48;
    r26 = 36;
    r27 = 67;
    r28 = 0;
    r30 = -1;
}

loc_80660110:
{
    r19 = r21;
    r20 = (r22 + 16);
    r24 = 0;
}

loc_8066011C:
{
    r3 = r20;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x8066012Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r19 + 84), static_cast<uint8_t>(r25));
    r24 = (r24 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
}

loc_80660138:
{
    r20 = (r20 + 8);
    MemoryInline::FlatWrite8((r19 + 85), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r19 + 86), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r19 + 87), static_cast<uint8_t>(r28));
    r19 = (r19 + 8);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066011C;
    }
}

loc_80660150:
{
    MemoryInline::FlatWrite8((r21 + 116), static_cast<uint8_t>(r30));
    r23 = (r23 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(12));
}

loc_8066015C:
{
    r22 = (r22 + 56);
    guest_range_4 = MemoryInline::ResolveRangeHost((r21 + 64), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r21 + 96), r28);
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r21 + 100), r28);
    }
    MemoryInline::WriteResolved8(guest_range_4, 53u, (r21 + 117), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_4, 54u, (r21 + 118), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 55u, (r21 + 119), static_cast<uint8_t>(r28));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r21 + 68), r28);
        MemoryInline::WriteResolved32(guest_range_4, 0u, (r21 + 64), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r21 + 76), r28);
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r21 + 72), r28);
    }
    MemoryInline::WriteResolved8(guest_range_4, 40u, (r21 + 104), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 41u, (r21 + 105), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 42u, (r21 + 106), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 43u, (r21 + 107), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 44u, (r21 + 108), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 45u, (r21 + 109), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 46u, (r21 + 110), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 47u, (r21 + 111), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 48u, (r21 + 112), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 49u, (r21 + 113), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 50u, (r21 + 114), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 51u, (r21 + 115), static_cast<uint8_t>(r29));
    r21 = (r21 + 56);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80660110;
    }
}

loc_806601BC:
{
    r0 = 2;
    r8 = 0;
    r3 = 255;
    r9 = r31;
    r10 = r31;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 736), 0, 276u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 736), static_cast<uint8_t>(r3));
    r11 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 748), r8);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 744), r8);
    }
    ctr = r0;
}

loc_806601E4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 2040);
    r3 = (r11 + 1);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 756), r8);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & 2040);
    r0 = (r11 + 2);
    r3 = (r11 + 4);
    MemoryInline::FlatWrite32((r4 + 752), r8);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_2 & 2040);
    r7 = (r31 + r6);
    r0 = (r11 + 3);
    guest_range_2 = MemoryInline::ResolveRangeHost((r9 + 848), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r9 + 852), r8);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & 2040);
    r0 = (r11 + 5);
    r6 = (r31 + r5);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r9 + 848), r8);
    r5 = (r31 + r4);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & 2040);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 2040);
    MemoryInline::FlatWrite32((r10 + 944), r8);
    r4 = (r31 + r3);
    r3 = (r31 + r0);
    r11 = (r11 + 6);
    MemoryInline::FlatWrite32((r7 + 756), r8);
    MemoryInline::FlatWrite32((r7 + 752), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r9 + 860), r8);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r9 + 856), r8);
    }
    MemoryInline::FlatWrite32((r10 + 948), r8);
    MemoryInline::FlatWrite32((r6 + 756), r8);
    MemoryInline::FlatWrite32((r6 + 752), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r9 + 868), r8);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r9 + 864), r8);
    }
    MemoryInline::FlatWrite32((r10 + 952), r8);
    MemoryInline::FlatWrite32((r5 + 756), r8);
    MemoryInline::FlatWrite32((r5 + 752), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r9 + 876), r8);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r9 + 872), r8);
    }
    MemoryInline::FlatWrite32((r10 + 956), r8);
    MemoryInline::FlatWrite32((r4 + 756), r8);
    MemoryInline::FlatWrite32((r4 + 752), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r9 + 884), r8);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r9 + 880), r8);
    }
    MemoryInline::FlatWrite32((r10 + 960), r8);
    MemoryInline::FlatWrite32((r3 + 756), r8);
    MemoryInline::FlatWrite32((r3 + 752), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r9 + 892), r8);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r9 + 888), r8);
    }
    r9 = (r9 + 48);
    MemoryInline::FlatWrite32((r10 + 964), r8);
    r10 = (r10 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806601E4;
    }
}

loc_806602B0:
{
    r29 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 256u, (r31 + 992), r29);
    r30 = 0x809C0000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 260u, (r31 + 996), r29);
        MemoryInline::WriteResolved32(guest_range_1, 264u, (r31 + 1000), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 268u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 268u, (r31 + 1004), r29);
        MemoryInline::WriteResolved32(guest_range_1, 272u, (r31 + 1008), r29);
    }
    r3 = MemoryInline::FlatRead32((r30 + 8456));
    // inline leaf 0x80662D80 (17 guest instruction(s))
}

loc_inl0_0x80662D80:
{
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl0_0x80662D90:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_inl0_0x80662DB0;
    }
}

loc_inl0_0x80662D94:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r6 + r0);
    r4 = (r4 + 56);
    goto loc_inl0_0x80662DB4;
}

loc_inl0_0x80662DB0:
{
    r4 = 0;
}

loc_inl0_0x80662DB4:
{
    r4 = (r4 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -28648));
    MemoryInline::FlatWrite16((r3 + 192), static_cast<uint16_t>(r0));
}

loc_inl0_cont_80662D80:
{
    // end of inlined leaf 0x80662D80
    r3 = MemoryInline::FlatRead32((r30 + 8456));
    // inline leaf 0x80662DC4 (17 guest instruction(s))
}

loc_inl1_0x80662DC4:
{
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x80662DD4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl1_0x80662DF4;
    }
}

loc_inl1_0x80662DD8:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r6 + r0);
    r4 = (r4 + 56);
    goto loc_inl1_0x80662DF8;
}

loc_inl1_0x80662DF4:
{
    r4 = 0;
}

loc_inl1_0x80662DF8:
{
    r4 = (r4 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -28640));
    MemoryInline::FlatWrite16((r3 + 194), static_cast<uint16_t>(r0));
}

loc_inl1_cont_80662DC4:
{
    // end of inlined leaf 0x80662DC4
    r3 = MemoryInline::FlatRead32((r30 + 8456));
    MemoryInline::FlatWrite32((r3 + 2532), r29);
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 12));
            r20 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r1 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r1 + 68));
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
    ctx->gpr[11] = r11;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF801FB gpr_write=0xFFF80FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8065FFA4 func_8065FFA4 preserves=true fpr_mask=0x00000000
