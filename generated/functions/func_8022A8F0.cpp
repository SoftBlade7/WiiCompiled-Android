#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022A8F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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

    goto loc_8022A8F0;

loc_8022A8F0:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_5, 52u, (r1 + 52), r0);
    r0 = MemoryInline::FlatRead8((r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 8), r22);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 12), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r1 + 44), r31);
    }
    r29 = r3;
}

loc_8022A90C:
{
    r30 = (r4 + 16);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022A928;
    }
}

loc_8022A914:
{
}

loc_8022A918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8022A9E8;
    }
}

loc_8022A91C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8022A920:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022AC6C;
    }
}

loc_8022A924:
{
    goto loc_8022AED0;
}

loc_8022A928:
{
    r4 = MemoryInline::FlatRead16(r30);
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_8022A934:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8022A93C;
    }
}

loc_8022A938:
{
    r4 = r0;
}

loc_8022A93C:
{
    r22 = (r4 & 65535);
    r23 = (r30 + 32);
    r24 = 0;
    goto loc_8022A96C;
}

loc_8022A94C:
{
    r0 = (r24 & 65535);
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 * 80);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & 262140);
    r4_addr_9 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_9);
    r4 = (r23 + r0);
    ctx->lr = 0x8022A968u;
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
    InvokeDirectCpu<0x8022B414u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r24 = (r24 + 1);
}

loc_8022A96C:
{
    r0 = (r24 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r22));
}

loc_8022A974:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022A94C;
    }
}

loc_8022A978:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r5 = (r2 + -25696);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 5));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r30 + 7));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r30 + 8));
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 9));
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r30 + 10));
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r30 + 11));
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r3));
    r6 = MemoryInline::FlatRead8((r2 + -25696));
    MemoryInline::FlatWrite8((r4 + 11), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r5 + 1));
    r3 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWrite8((r29 + 20), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r29 + 21), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r29 + 22), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_8022AED0;
}

loc_8022A9E8:
{
    r4 = MemoryInline::FlatRead16(r30);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r3 + 4));
}

loc_8022A9F4:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8022A9FC;
    }
}

loc_8022A9F8:
{
    r4 = r0;
}

loc_8022A9FC:
{
    r5 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r3 + 6));
    r31 = (r4 & 65535);
    r0 = 8;
}

loc_8022AA0C:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(8))) {
        goto loc_8022AA14;
    }
}

loc_8022AA10:
{
    r0 = r5;
}

loc_8022AA14:
{
    r6 = (r0 & 65535);
    r7 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8022AA20:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8022AC10;
    }
}

loc_8022AA24:
{
}

loc_8022AA28:
{
    r8 = (r6 + -8);
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_8022ABC0;
    }
}

loc_8022AA30:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8022AA4C;
    }
}

loc_8022AA38:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_8022AA44:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_8022AA4C;
    }
}

loc_8022AA48:
{
    r5 = 1;
}

loc_8022AA4C:
{
}

loc_8022AA50:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8022ABC0;
    }
}

loc_8022AA54:
{
    r0 = (r8 + 7);
    r5 = r30;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 536870911);
    r4 = 0;
    ctr = r0;
}

loc_8022AA6C:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_8022ABC0;
    }
}

loc_8022AA70:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r7 = (r7 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 32u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r5 + 4));
    r9 = (r0 + r4);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r5 + 5));
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r5 + 6));
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r5 + 7));
    MemoryInline::FlatWrite8((r9 + 2), static_cast<uint8_t>(r8));
    r10 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r5 + 8));
    MemoryInline::FlatWrite8((r9 + 3), static_cast<uint8_t>(r0));
    r9 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r5 + 9));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r5 + 10));
    r11 = (r0 + r4);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r5 + 11));
    MemoryInline::FlatWrite8((r11 + 8), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r5 + 12));
    MemoryInline::FlatWrite8((r11 + 9), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_3, 9u, (r5 + 13));
    MemoryInline::FlatWrite8((r11 + 10), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 10u, (r5 + 14));
    MemoryInline::FlatWrite8((r11 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 11u, (r5 + 15));
    r11 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r23 = MemoryInline::ReadResolved8(guest_range_3, 12u, (r5 + 16));
    r22 = (r11 + r4);
    r24 = MemoryInline::ReadResolved8(guest_range_3, 13u, (r5 + 17));
    MemoryInline::FlatWrite8((r22 + 16), static_cast<uint8_t>(r10));
    r12 = MemoryInline::ReadResolved8(guest_range_3, 14u, (r5 + 18));
    MemoryInline::FlatWrite8((r22 + 17), static_cast<uint8_t>(r9));
    r11 = MemoryInline::ReadResolved8(guest_range_3, 15u, (r5 + 19));
    MemoryInline::FlatWrite8((r22 + 18), static_cast<uint8_t>(r8));
    r10 = MemoryInline::ReadResolved8(guest_range_3, 16u, (r5 + 20));
    MemoryInline::FlatWrite8((r22 + 19), static_cast<uint8_t>(r0));
    r9 = MemoryInline::ReadResolved8(guest_range_3, 17u, (r5 + 21));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 18u, (r5 + 22));
    r22 = (r0 + r4);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 19u, (r5 + 23));
    MemoryInline::FlatWrite8((r22 + 24), static_cast<uint8_t>(r23));
    r23 = MemoryInline::ReadResolved8(guest_range_3, 20u, (r5 + 24));
    MemoryInline::FlatWrite8((r22 + 25), static_cast<uint8_t>(r24));
    r24 = MemoryInline::ReadResolved8(guest_range_3, 21u, (r5 + 25));
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r12));
    r25 = MemoryInline::ReadResolved8(guest_range_3, 22u, (r5 + 26));
    MemoryInline::FlatWrite8((r22 + 27), static_cast<uint8_t>(r11));
    r28 = MemoryInline::ReadResolved8(guest_range_3, 23u, (r5 + 27));
    r11 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r27 = MemoryInline::ReadResolved8(guest_range_3, 24u, (r5 + 28));
    r22 = (r11 + r4);
    r26 = MemoryInline::ReadResolved8(guest_range_3, 25u, (r5 + 29));
    MemoryInline::FlatWrite8((r22 + 32), static_cast<uint8_t>(r10));
    r12 = MemoryInline::ReadResolved8(guest_range_3, 26u, (r5 + 30));
    MemoryInline::FlatWrite8((r22 + 33), static_cast<uint8_t>(r9));
    r11 = MemoryInline::ReadResolved8(guest_range_3, 27u, (r5 + 31));
    MemoryInline::FlatWrite8((r22 + 34), static_cast<uint8_t>(r8));
    r10 = MemoryInline::ReadResolved8(guest_range_3, 28u, (r5 + 32));
    MemoryInline::FlatWrite8((r22 + 35), static_cast<uint8_t>(r0));
    r9 = MemoryInline::ReadResolved8(guest_range_3, 29u, (r5 + 33));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 30u, (r5 + 34));
    r22 = (r0 + r4);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 31u, (r5 + 35));
    MemoryInline::FlatWrite8((r22 + 40), static_cast<uint8_t>(r23));
    r5 = (r5 + 32);
    MemoryInline::FlatWrite8((r22 + 41), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite8((r22 + 42), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r22 + 43), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r23 = (r28 + r4);
    MemoryInline::FlatWrite8((r23 + 48), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r23 + 49), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r23 + 50), static_cast<uint8_t>(r12));
    MemoryInline::FlatWrite8((r23 + 51), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r11 = (r11 + r4);
    r4 = (r4 + 64);
    MemoryInline::FlatWrite8((r11 + 56), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r11 + 57), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r11 + 58), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r11 + 59), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8022AA70;
    }
}

loc_8022ABC0:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0 = (r6 - r7);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & -8);
    r8 = (r30 + r4);
    ctr = r0;
}

loc_8022ABD8:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r6))) {
        goto loc_8022AC10;
    }
}

loc_8022ABDC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r4 = MemoryInline::FlatRead8((r8 + 4));
    r6 = (r0 + r5);
    r0 = MemoryInline::FlatRead8((r8 + 5));
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r4));
    r5 = (r5 + 8);
    r4 = MemoryInline::FlatRead8((r8 + 6));
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 7));
    r8 = (r8 + 4);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8022ABDC;
    }
}

loc_8022AC10:
{
    r6 = MemoryInline::FlatRead8((r30 + 36));
    r22 = (r30 + 56);
    r5 = MemoryInline::FlatRead8((r30 + 37));
    r23 = 0;
    r4 = MemoryInline::FlatRead8((r30 + 38));
    r0 = MemoryInline::FlatRead8((r30 + 39));
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    goto loc_8022AC5C;
}

loc_8022AC3C:
{
    r0 = (r23 & 65535);
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 * 80);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r3 = (r3_rot_6 & 262140);
    r4_addr_7 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_7);
    r4 = (r22 + r0);
    ctx->lr = 0x8022AC58u;
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
    InvokeDirectCpu<0x8022B414u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r23 = (r23 + 1);
}

loc_8022AC5C:
{
    r0 = (r23 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_8022AC64:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022AC3C;
    }
}

loc_8022AC68:
{
    goto loc_8022AED0;
}

loc_8022AC6C:
{
    r4 = MemoryInline::FlatRead16(r30);
    r0 = MemoryInline::FlatRead16((r3 + 8));
}

loc_8022AC78:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8022AC80;
    }
}

loc_8022AC7C:
{
    r4 = r0;
}

loc_8022AC80:
{
    r5 = MemoryInline::FlatRead16((r30 + 2));
    r23 = (r4 & 65535);
    r0 = MemoryInline::FlatRead16((r3 + 10));
}

loc_8022AC90:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_8022AC98;
    }
}

loc_8022AC94:
{
    r5 = r0;
}

loc_8022AC98:
{
    r31 = (r5 & 65535);
    r22 = (r30 + 24);
    r24 = 0;
    goto loc_8022ACC8;
}

loc_8022ACA8:
{
    r0 = (r24 & 65535);
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 * 80);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 262140);
    r4_addr_2 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
    r4 = (r22 + r0);
    ctx->lr = 0x8022ACC4u;
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
    InvokeDirectCpu<0x8022B414u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r24 = (r24 + 1);
}

loc_8022ACC8:
{
    r0 = (r24 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r23));
}

loc_8022ACD0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022ACA8;
    }
}

loc_8022ACD4:
{
    r0 = MemoryInline::FlatRead16(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8022ACDC:
{
    r4 = MemoryInline::FlatRead8((r30 + 4));
    r5 = 0;
    r0 = (r0 * 80);
    r7 = MemoryInline::FlatRead8((r30 + 5));
    r6 = MemoryInline::FlatRead8((r30 + 6));
    r3 = MemoryInline::FlatRead8((r30 + 7));
    MemoryInline::FlatWrite8((r29 + 20), static_cast<uint8_t>(r4));
    r4 = (r22 + r0);
    MemoryInline::FlatWrite8((r29 + 21), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r29 + 22), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r29 + 23), static_cast<uint8_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022AED0;
    }
}

loc_8022AD0C:
{
}

loc_8022AD10:
{
    r3 = (r31 + 65536);
    r3 = (r3 + -8);
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(8))) {
        goto loc_8022AE84;
    }
}

loc_8022AD1C:
{
    r3 = (r3 & 65535);
    r0 = (r3 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8022AD30:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_8022AE84;
    }
}

loc_8022AD34:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 16), 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 16));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r3 = (r4 + r0);
    r5 = (r5 + 8);
    r7 = (r6 + r0);
    r4_addr_4 = (r4 + r0);
    r6 = MemoryInline::FlatRead8(r4_addr_4);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r6));
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 59u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_4, 0u, (r3 + 1));
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r3 + 2));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r3 + 3));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r3 + 8));
    r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 16));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 8u, (r3 + 9));
    r11 = (r7 + r0);
    r7 = MemoryInline::ReadResolved8(guest_range_4, 9u, (r3 + 10));
    MemoryInline::FlatWrite8((r11 + 8), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_4, 10u, (r3 + 11));
    MemoryInline::FlatWrite8((r11 + 9), static_cast<uint8_t>(r8));
    r10 = MemoryInline::ReadResolved8(guest_range_4, 15u, (r3 + 16));
    MemoryInline::FlatWrite8((r11 + 10), static_cast<uint8_t>(r7));
    r9 = MemoryInline::ReadResolved8(guest_range_4, 16u, (r3 + 17));
    MemoryInline::FlatWrite8((r11 + 11), static_cast<uint8_t>(r6));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 17u, (r3 + 18));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 16));
    r7 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r3 + 19));
    r22 = (r6 + r0);
    r6 = MemoryInline::ReadResolved8(guest_range_4, 23u, (r3 + 24));
    MemoryInline::FlatWrite8((r22 + 16), static_cast<uint8_t>(r10));
    r12 = MemoryInline::ReadResolved8(guest_range_4, 24u, (r3 + 25));
    MemoryInline::FlatWrite8((r22 + 17), static_cast<uint8_t>(r9));
    r11 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r3 + 26));
    MemoryInline::FlatWrite8((r22 + 18), static_cast<uint8_t>(r8));
    r10 = MemoryInline::ReadResolved8(guest_range_4, 26u, (r3 + 27));
    MemoryInline::FlatWrite8((r22 + 19), static_cast<uint8_t>(r7));
    r9 = MemoryInline::ReadResolved8(guest_range_4, 31u, (r3 + 32));
    r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 16));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 32u, (r3 + 33));
    r22 = (r7 + r0);
    r7 = MemoryInline::ReadResolved8(guest_range_4, 33u, (r3 + 34));
    MemoryInline::FlatWrite8((r22 + 24), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_4, 34u, (r3 + 35));
    MemoryInline::FlatWrite8((r22 + 25), static_cast<uint8_t>(r12));
    r26 = MemoryInline::ReadResolved8(guest_range_4, 39u, (r3 + 40));
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r11));
    r27 = MemoryInline::ReadResolved8(guest_range_4, 40u, (r3 + 41));
    MemoryInline::FlatWrite8((r22 + 27), static_cast<uint8_t>(r10));
    r28 = MemoryInline::ReadResolved8(guest_range_4, 41u, (r3 + 42));
    r10 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 16));
    r30 = MemoryInline::ReadResolved8(guest_range_4, 42u, (r3 + 43));
    r22 = (r10 + r0);
    r12 = MemoryInline::ReadResolved8(guest_range_4, 47u, (r3 + 48));
    MemoryInline::FlatWrite8((r22 + 32), static_cast<uint8_t>(r9));
    r11 = MemoryInline::ReadResolved8(guest_range_4, 48u, (r3 + 49));
    MemoryInline::FlatWrite8((r22 + 33), static_cast<uint8_t>(r8));
    r10 = MemoryInline::ReadResolved8(guest_range_4, 49u, (r3 + 50));
    MemoryInline::FlatWrite8((r22 + 34), static_cast<uint8_t>(r7));
    r9 = MemoryInline::ReadResolved8(guest_range_4, 50u, (r3 + 51));
    MemoryInline::FlatWrite8((r22 + 35), static_cast<uint8_t>(r6));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 55u, (r3 + 56));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 16));
    r7 = MemoryInline::ReadResolved8(guest_range_4, 56u, (r3 + 57));
    r22 = (r6 + r0);
    r6 = MemoryInline::ReadResolved8(guest_range_4, 57u, (r3 + 58));
    MemoryInline::FlatWrite8((r22 + 40), static_cast<uint8_t>(r26));
    r3 = MemoryInline::ReadResolved8(guest_range_4, 58u, (r3 + 59));
    MemoryInline::FlatWrite8((r22 + 41), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r22 + 42), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r22 + 43), static_cast<uint8_t>(r30));
    r30 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 16));
    r22 = (r30 + r0);
    MemoryInline::FlatWrite8((r22 + 48), static_cast<uint8_t>(r12));
    MemoryInline::FlatWrite8((r22 + 49), static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite8((r22 + 50), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r22 + 51), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 16));
    r9 = (r9 + r0);
    MemoryInline::FlatWrite8((r9 + 56), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r9 + 57), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r9 + 58), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r9 + 59), static_cast<uint8_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8022AD34;
    }
}

loc_8022AE84:
{
    r3 = (r5 & 65535);
    r0 = (r31 - r3);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_8022AE94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022AED0;
    }
}

loc_8022AE98:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r3 = (r3_rot_4 & 524280);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r6 = (r4 + r3);
    r5 = (r5 + 1);
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8022AE98;
    }
}

loc_8022AED0:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 8));
            r23 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8022A8F0 func_8022A8F0 preserves=true fpr_mask=0x00000000
