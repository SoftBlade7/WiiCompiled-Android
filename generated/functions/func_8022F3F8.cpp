#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022F3F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
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

    goto loc_8022F3F8;

loc_8022F3F8:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    MemoryInline::FlatWriteRam32((r1 + 136), r14);
    MemoryInline::FlatWriteRam32((r1 + 140), r15);
    MemoryInline::FlatWriteRam32((r1 + 144), r16);
    MemoryInline::FlatWriteRam32((r1 + 148), r17);
    MemoryInline::FlatWriteRam32((r1 + 152), r18);
    MemoryInline::FlatWriteRam32((r1 + 156), r19);
    MemoryInline::FlatWriteRam32((r1 + 160), r20);
    MemoryInline::FlatWriteRam32((r1 + 164), r21);
    MemoryInline::FlatWriteRam32((r1 + 168), r22);
    MemoryInline::FlatWriteRam32((r1 + 172), r23);
    MemoryInline::FlatWriteRam32((r1 + 176), r24);
    MemoryInline::FlatWriteRam32((r1 + 180), r25);
    MemoryInline::FlatWriteRam32((r1 + 184), r26);
    MemoryInline::FlatWriteRam32((r1 + 188), r27);
    MemoryInline::FlatWriteRam32((r1 + 192), r28);
    MemoryInline::FlatWriteRam32((r1 + 196), r29);
    MemoryInline::FlatWriteRam32((r1 + 200), r30);
    MemoryInline::FlatWriteRam32((r1 + 204), r31);
    r18 = 0;
    r14 = r3;
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r18);
    MemoryInline::FlatWriteRam32((r1 + 16), r18);
    r17 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r18);
    r16 = MemoryInline::FlatRead8((r1 + 9));
    r15 = MemoryInline::FlatRead8((r1 + 10));
    r12 = MemoryInline::FlatRead8((r1 + 11));
    r11 = MemoryInline::FlatRead8((r1 + 16));
    r10 = MemoryInline::FlatRead8((r1 + 17));
    r9 = MemoryInline::FlatRead8((r1 + 18));
    r8 = MemoryInline::FlatRead8((r1 + 19));
    r7 = MemoryInline::FlatRead8((r1 + 20));
    r6 = MemoryInline::FlatRead8((r1 + 21));
    r5 = MemoryInline::FlatRead8((r1 + 22));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    MemoryInline::FlatWriteRam32((r1 + 12), r18);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r16));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r15));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 3), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r18);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r4 + 8), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r4 + 9), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r4 + 10), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r4 + 11), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r4 + 12), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r4 + 13), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r4 + 14), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r4 + 15), static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8022F498u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r3));
    r3 = r14;
    r12 = MemoryInline::FlatRead32(r14);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8022F4B0u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 4), r3);
    r15 = r31;
    r16 = 0;
}

loc_8022F4BC:
{
    r12 = MemoryInline::FlatRead32(r14);
    r3 = r14;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8022F4D0u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3_addr_2 = (r3 + r16);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    r16 = (r16 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(4));
}

loc_8022F4DC:
{
    MemoryInline::FlatWrite8(r15, static_cast<uint8_t>(r0));
    r15 = (r15 + 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022F4BC;
    }
}

loc_8022F4E8:
{
    r16 = 0;
    MemoryInline::FlatWriteRam32((r1 + 48), r16);
    r3 = r14;
    r4 = r31;
    MemoryInline::FlatWriteRam32((r1 + 44), r16);
    r15 = MemoryInline::FlatRead8((r1 + 49));
    MemoryInline::FlatWriteRam32((r1 + 132), r15);
    r15 = MemoryInline::FlatRead8((r1 + 50));
    r0 = MemoryInline::FlatRead8((r1 + 47));
    MemoryInline::FlatWriteRam32((r1 + 76), r15);
    r15 = MemoryInline::FlatRead8((r1 + 51));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 16), 0, 52u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r31 + 39), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r31 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 52), r16);
    r7 = MemoryInline::FlatRead8((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 80), r15);
    r15 = MemoryInline::FlatRead8((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 28), r16);
    r6 = MemoryInline::FlatRead8((r1 + 45));
    MemoryInline::FlatWriteRam32((r1 + 32), r16);
    r20 = MemoryInline::FlatRead8((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 36), r16);
    r21 = MemoryInline::FlatRead8((r1 + 29));
    MemoryInline::FlatWriteRam32((r1 + 40), r16);
    r22 = MemoryInline::FlatRead8((r1 + 30));
    MemoryInline::FlatWriteRam32((r1 + 24), r16);
    r23 = MemoryInline::FlatRead8((r1 + 31));
    MemoryInline::FlatWriteRam32((r1 + 84), r15);
    r15 = MemoryInline::FlatRead8((r1 + 53));
    MemoryInline::FlatWriteRam32((r1 + 88), r15);
    r15 = MemoryInline::FlatRead8((r1 + 54));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r31 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWriteRam32((r1 + 92), r15);
    r15 = MemoryInline::FlatRead8((r1 + 55));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r31 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r31 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r31 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 92));
    r24 = MemoryInline::FlatRead8((r1 + 32));
    r25 = MemoryInline::FlatRead8((r1 + 33));
    r26 = MemoryInline::FlatRead8((r1 + 34));
    r27 = MemoryInline::FlatRead8((r1 + 35));
    r28 = MemoryInline::FlatRead8((r1 + 36));
    r17 = MemoryInline::FlatRead16((r1 + 24));
    r18 = MemoryInline::FlatRead8((r1 + 26));
    r19 = MemoryInline::FlatRead8((r1 + 27));
    r29 = MemoryInline::FlatRead8((r1 + 37));
    r30 = MemoryInline::FlatRead8((r1 + 38));
    r12 = MemoryInline::FlatRead8((r1 + 39));
    r11 = MemoryInline::FlatRead8((r1 + 40));
    r10 = MemoryInline::FlatRead8((r1 + 41));
    r9 = MemoryInline::FlatRead8((r1 + 42));
    r8 = MemoryInline::FlatRead8((r1 + 43));
    r5 = MemoryInline::FlatRead8((r1 + 46));
    r14 = MemoryInline::FlatRead8((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 56), r16);
    MemoryInline::FlatWriteRam32((r1 + 96), r15);
    r15 = MemoryInline::FlatRead8((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 100), r15);
    r15 = MemoryInline::FlatRead8((r1 + 57));
    MemoryInline::FlatWriteRam32((r1 + 104), r15);
    r15 = MemoryInline::FlatRead8((r1 + 58));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r31 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 108), r15);
    r15 = MemoryInline::FlatRead8((r1 + 59));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r31 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r31 + 48), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r31 + 49), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 108));
    MemoryInline::FlatWriteRam32((r1 + 60), r16);
    MemoryInline::FlatWriteRam32((r1 + 112), r15);
    r15 = MemoryInline::FlatRead8((r1 + 60));
    MemoryInline::FlatWriteRam32((r1 + 116), r15);
    r15 = MemoryInline::FlatRead8((r1 + 61));
    MemoryInline::FlatWriteRam32((r1 + 120), r15);
    r15 = MemoryInline::FlatRead8((r1 + 62));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r31 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::FlatWriteRam32((r1 + 124), r15);
    r15 = MemoryInline::FlatRead8((r1 + 63));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r31 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r31 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 120));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r31 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r31 + 54), static_cast<uint8_t>(r0));
    r0 = r15;
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r31 + 16), static_cast<uint16_t>(r17));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 18), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 19), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 20), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + 21), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r31 + 22), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r31 + 23), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r31 + 24), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r31 + 25), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r31 + 26), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r31 + 27), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r31 + 28), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r31 + 29), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r31 + 30), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r31 + 31), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r31 + 32), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r31 + 33), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r31 + 34), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r31 + 35), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r31 + 36), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r31 + 37), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r31 + 38), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r31 + 40), static_cast<uint8_t>(r14));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r31 + 55), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r31 + 56), r16);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r31 + 60), r16);
    }
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r31 + 64), r16);
    r12 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 128), r15);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    MemoryInline::FlatWriteRam32((r1 + 64), r16);
    MemoryInline::FlatWriteRam32((r1 + 68), r16);
    MemoryInline::FlatWriteRam32((r1 + 72), r16);
    ctr = r12;
    ctx->lr = 0x8022F6F4u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 136), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 136));
            r15 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 140));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 144));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 148));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 152));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 156));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 160));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 164));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 168));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 172));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 176));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 180));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r1 + 184));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r1 + 188));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r1 + 192));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r1 + 196));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r1 + 200));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r1 + 204));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 76u, (r1 + 212));
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8022F3F8 func_8022F3F8 preserves=true fpr_mask=0x00000000
