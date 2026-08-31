#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052DD40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r9_stbu_ea_0 = 0;
    uint32_t r9_stbu_ea_1 = 0;
    uint32_t r9_stbu_ea_2 = 0;
    uint32_t r9_stbu_ea_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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

    goto loc_8052DD40;

loc_8052DD40:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r10 = 0;
    r5 = 17;
    MemoryInline::WriteResolved32(guest_range_4, 52u, (r1 + 52), r0);
    r0 = 3;
    r9 = 2;
    r8 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 8), r22);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r1 + 12), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_4, 44u, (r1 + 44), r31);
    }
    r31 = r3;
    r11 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 6016));
    MemoryInline::FlatWrite32((r3 + 5976), r5);
    r4 = (r4 & -8);
    MemoryInline::FlatWrite32((r3 + 5984), r10);
    MemoryInline::FlatWrite32((r3 + 5988), r10);
    MemoryInline::FlatWrite32((r3 + 6008), r10);
    MemoryInline::FlatWrite32((r3 + 5980), r9);
    MemoryInline::FlatWrite32((r3 + 5996), r8);
    MemoryInline::FlatWrite32((r3 + 6016), r4);
    ctr = r0;
}

loc_8052DD94:
{
    r4 = (r11 & 255);
    r11 = (r11 + 1);
    r7 = (r4 * 240);
    r5 = (0 - r4);
    r0 = (r11 & 255);
    r6 = (r3 + r7);
    r5 = (r5 | r4);
    MemoryInline::FlatWrite32((r6 + 3108), r10);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r5 = (0 - r0);
    r11 = (r11 + 1);
    MemoryInline::FlatWrite32((r6 + 3104), r8);
    r7 = (r0 * 240);
    r5 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 3112), r4);
    r0 = (r11 & 255);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r11 = (r11 + 1);
    MemoryInline::FlatWrite32((r6 + 3300), r9);
    r6 = (r3 + r7);
    r5 = (0 - r0);
    MemoryInline::FlatWrite32((r6 + 3108), r10);
    r7 = (r0 * 240);
    r5 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 3104), r8);
    r0 = (r11 & 255);
    r11 = (r11 + 1);
    MemoryInline::FlatWrite32((r6 + 3112), r4);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    r5 = (0 - r0);
    MemoryInline::FlatWrite32((r6 + 3300), r9);
    r6 = (r3 + r7);
    r7 = (r0 * 240);
    r5 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 3108), r10);
    MemoryInline::FlatWrite32((r6 + 3104), r8);
    MemoryInline::FlatWrite32((r6 + 3112), r4);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    MemoryInline::FlatWrite32((r6 + 3300), r9);
    r6 = (r3 + r7);
    MemoryInline::FlatWrite32((r6 + 3108), r10);
    MemoryInline::FlatWrite32((r6 + 3104), r8);
    MemoryInline::FlatWrite32((r6 + 3112), r4);
    MemoryInline::FlatWrite32((r6 + 3300), r9);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052DD94;
    }
}

loc_8052DE48:
{
    r4 = MemoryInline::FlatRead32((r3 + 6016));
    r6 = 1;
    r0 = 2;
    r11 = 0;
    r4 = (r4 & -8);
    r5 = 3;
    MemoryInline::FlatWrite32((r3 + 6000), r11);
    r12 = 0;
    MemoryInline::FlatWrite32((r3 + 5996), r6);
    MemoryInline::FlatWrite8((r3 + 6013), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 5980), r6);
    MemoryInline::FlatWrite32((r3 + 6016), r4);
    ctr = r0;
}

loc_8052DE7C:
{
    r10 = (r12 & 255);
    r0 = (r12 + 2);
    r5 = (r10 * 240);
    r4 = (r12 + 1);
    r7 = (r0 & 255);
    r0 = (r12 + 3);
    r9 = (r3 + r5);
    r8 = (r4 & 255);
    guest_range_0 = MemoryInline::ResolveRangeHost((r9 + 3312), 0, 1210u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r9 + 3312), static_cast<uint16_t>(r11));
    r6 = (r0 & 255);
    r4 = (r12 + 4);
    r0 = (r12 + 5);
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r9 + 3318), static_cast<uint16_t>(r11));
    r5 = (r4 & 255);
    r10 = (r10 + 1);
    r4 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r9 + 3321), static_cast<uint8_t>(r10));
    r0 = (r8 + 1);
    r7 = (r7 + 1);
    r6 = (r6 + 1);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r9 + 3320), static_cast<uint8_t>(r10));
    r5 = (r5 + 1);
    r4 = (r4 + 1);
    r12 = (r12 + 6);
    MemoryInline::WriteResolved16(guest_range_0, 240u, (r9 + 3552), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 246u, (r9 + 3558), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 249u, (r9 + 3561), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 248u, (r9 + 3560), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 480u, (r9 + 3792), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 486u, (r9 + 3798), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 489u, (r9 + 3801), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 488u, (r9 + 3800), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_0, 720u, (r9 + 4032), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 726u, (r9 + 4038), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 729u, (r9 + 4041), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 728u, (r9 + 4040), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved16(guest_range_0, 960u, (r9 + 4272), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 966u, (r9 + 4278), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 969u, (r9 + 4281), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 968u, (r9 + 4280), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 1200u, (r9 + 4512), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 1206u, (r9 + 4518), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 1209u, (r9 + 4521), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1208u, (r9 + 4520), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052DE7C;
    }
}

loc_8052DF30:
{
    r4 = MemoryInline::FlatRead32((r3 + 9072));
    r11 = 0;
    r0 = 2;
    r6 = 3;
    r5 = 1;
    r4 = (r4 & -8);
    MemoryInline::FlatWrite8((r3 + 6012), static_cast<uint8_t>(r11));
    r12 = 0;
    MemoryInline::FlatWrite8((r3 + 6013), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r3 + 9056), r11);
    MemoryInline::FlatWrite32((r3 + 9052), r5);
    MemoryInline::FlatWrite8((r3 + 9069), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r3 + 9036), r5);
    MemoryInline::FlatWrite32((r3 + 9072), r4);
    ctr = r0;
}

loc_8052DF6C:
{
    r10 = (r12 & 255);
    r0 = (r12 + 2);
    r5 = (r10 * 240);
    r4 = (r12 + 1);
    r7 = (r0 & 255);
    r0 = (r12 + 3);
    r9 = (r3 + r5);
    r8 = (r4 & 255);
    guest_range_1 = MemoryInline::ResolveRangeHost((r9 + 6368), 0, 1210u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r9 + 6368), static_cast<uint16_t>(r11));
    r6 = (r0 & 255);
    r4 = (r12 + 4);
    r0 = (r12 + 5);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r9 + 6374), static_cast<uint16_t>(r11));
    r5 = (r4 & 255);
    r10 = (r10 + 1);
    r4 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r9 + 6377), static_cast<uint8_t>(r10));
    r0 = (r8 + 1);
    r7 = (r7 + 1);
    r6 = (r6 + 1);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r9 + 6376), static_cast<uint8_t>(r10));
    r5 = (r5 + 1);
    r4 = (r4 + 1);
    r12 = (r12 + 6);
    MemoryInline::WriteResolved16(guest_range_1, 240u, (r9 + 6608), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_1, 246u, (r9 + 6614), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 249u, (r9 + 6617), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 248u, (r9 + 6616), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 480u, (r9 + 6848), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_1, 486u, (r9 + 6854), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 489u, (r9 + 6857), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 488u, (r9 + 6856), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_1, 720u, (r9 + 7088), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_1, 726u, (r9 + 7094), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 729u, (r9 + 7097), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 728u, (r9 + 7096), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved16(guest_range_1, 960u, (r9 + 7328), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_1, 966u, (r9 + 7334), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 969u, (r9 + 7337), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 968u, (r9 + 7336), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_1, 1200u, (r9 + 7568), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_1, 1206u, (r9 + 7574), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 1209u, (r9 + 7577), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 1208u, (r9 + 7576), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052DF6C;
    }
}

loc_8052E020:
{
    r4 = 0;
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 9068), static_cast<uint8_t>(r4));
    r22 = 0x809C0000u;
    r4 = (r31 + 5976);
    r5 = 4;
    MemoryInline::FlatWrite8((r3 + 9069), static_cast<uint8_t>(r0));
    r3 = r31;
    r6 = MemoryInline::FlatRead32((r22 + -10432));
    r6 = MemoryInline::FlatRead32((r6 + 52));
    ctx->lr = 0x8052E04Cu;
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
    InvokeDirectCpu<0x80009D6Cu>(ctx);
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
    r6 = MemoryInline::FlatRead32((r22 + -10432));
    r3 = r31;
    r4 = (r31 + 5980);
    r5 = 4;
    r6 = MemoryInline::FlatRead32((r6 + 52));
    ctx->lr = 0x8052E064u;
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
    InvokeDirectCpu<0x80009D6Cu>(ctx);
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
    r6 = MemoryInline::FlatRead32((r22 + -10432));
    r3 = r31;
    r4 = (r31 + 5984);
    r5 = 4;
    r6 = MemoryInline::FlatRead32((r6 + 52));
    ctx->lr = 0x8052E07Cu;
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
    InvokeDirectCpu<0x80009D6Cu>(ctx);
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
    r6 = MemoryInline::FlatRead32((r22 + -10432));
    r3 = r31;
    r4 = (r31 + 3092);
    r5 = 1;
    r6 = MemoryInline::FlatRead32((r6 + 52));
    ctx->lr = 0x8052E094u;
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
    InvokeDirectCpu<0x80009D6Cu>(ctx);
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
    r6 = MemoryInline::FlatRead32((r22 + -10432));
    r3 = r31;
    r4 = (r31 + 3094);
    r5 = 1;
    r6 = MemoryInline::FlatRead32((r6 + 52));
    ctx->lr = 0x8052E0ACu;
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
    InvokeDirectCpu<0x80009D6Cu>(ctx);
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
    r24 = (r31 + 3096);
    r23 = 0;
}

loc_8052E0B4:
{
    r6 = MemoryInline::FlatRead32((r22 + -10432));
    r3 = r31;
    r4 = (r24 + 8);
    r5 = 4;
    r6 = MemoryInline::FlatRead32((r6 + 52));
    ctx->lr = 0x8052E0CCu;
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
    InvokeDirectCpu<0x80009D6Cu>(ctx);
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
    r6 = MemoryInline::FlatRead32((r22 + -10432));
    r3 = r31;
    r4 = (r24 + 12);
    r5 = 4;
    r6 = MemoryInline::FlatRead32((r6 + 52));
    ctx->lr = 0x8052E0E4u;
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
    InvokeDirectCpu<0x80009D6Cu>(ctx);
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
    r6 = MemoryInline::FlatRead32((r22 + -10432));
    r3 = r31;
    r4 = (r24 + 16);
    r5 = 4;
    r6 = MemoryInline::FlatRead32((r6 + 52));
    ctx->lr = 0x8052E0FCu;
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
    InvokeDirectCpu<0x80009D6Cu>(ctx);
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
    r6 = MemoryInline::FlatRead32((r22 + -10432));
    r3 = r31;
    r4 = (r24 + 204);
    r5 = 4;
    r6 = MemoryInline::FlatRead32((r6 + 52));
    ctx->lr = 0x8052E114u;
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
    InvokeDirectCpu<0x80009D6Cu>(ctx);
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
    r24 = (r24 + 240);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(12));
}

loc_8052E120:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052E0B4;
    }
}

loc_8052E124:
{
    r3 = r31;
    r4 = (r31 + 6016);
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x8052E138u;
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
    InvokeDirectCpu<0x80009D6Cu>(ctx);
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
    r12 = MemoryInline::FlatRead32(r31);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10432));
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    ctr = r12;
    ctx->lr = 0x8052E158u;
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
    r3 = (r31 + 3088);
    r4 = (r31 + 32);
    ctx->lr = 0x8052E164u;
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
    InvokeDirectCpu<0x8052FB90u>(ctx);
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
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 3092), 0, 3052u, true, false);
    r9 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r31 + 3092));
    r3 = (r31 + 40);
    r8 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r31 + 3093));
    r4 = (r31 + 3096);
    r7 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r31 + 3094));
    r5 = (r31 + 2920);
    r6 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r31 + 3095));
    r0 = 38;
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 36), 0, 3052u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r31 + 36), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r31 + 37), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r31 + 38), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r31 + 39), static_cast<uint8_t>(r6));
}

loc_8052E194:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 32u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r4 + 4));
    r9 = (r3 + 35);
    guest_range_6 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, (r3 + 4), static_cast<uint8_t>(r6));
    r8 = (r4 + 35);
    r6 = MemoryInline::ReadResolved8(guest_range_5, 1u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r3 + 5), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 2u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r3 + 6), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_6, 4u, (r3 + 8), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_6, 8u, (r3 + 12), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_6, 12u, (r3 + 16), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_6, 20u, (r3 + 24), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_5, 24u, (r4 + 28));
    MemoryInline::WriteResolved8(guest_range_6, 24u, (r3 + 28), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 25u, (r4 + 29));
    MemoryInline::WriteResolved8(guest_range_6, 25u, (r3 + 29), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_6, 28u, (r3 + 32), r6);
    ctr = r0;
}

loc_8052E1F0:
{
    r7 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r6 = MemoryInline::FlatRead8(r8);
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r7));
    r9_stbu_ea_3 = (r9 + 2);
    MemoryInline::FlatWrite8(r9_stbu_ea_3, static_cast<uint8_t>(r6));
    r9 = r9_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052E1F0;
    }
}

loc_8052E204:
{
    guest_range_7 = MemoryInline::ResolveRangeHost((r4 + 112), 0, 125u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r4 + 112));
    guest_range_8 = MemoryInline::ResolveRangeHost((r3 + 112), 0, 125u, false, true);
    MemoryInline::WriteResolved32(guest_range_8, 0u, (r3 + 112), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_7, 4u, (r4 + 116));
    MemoryInline::WriteResolved8(guest_range_8, 4u, (r3 + 116), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 5u, (r4 + 117));
    MemoryInline::WriteResolved8(guest_range_8, 5u, (r3 + 117), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 6u, (r4 + 118));
    MemoryInline::WriteResolved8(guest_range_8, 6u, (r3 + 118), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 7u, (r4 + 119));
    MemoryInline::WriteResolved8(guest_range_8, 7u, (r3 + 119), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r4 + 120));
    MemoryInline::WriteResolved32(guest_range_8, 8u, (r3 + 120), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 12u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r4 + 128));
            r7 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r4 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_8, 12u, (r3 + 124), r7);
        MemoryInline::WriteResolved32(guest_range_8, 16u, (r3 + 128), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 20u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r4 + 136));
            r7 = MemoryInline::ReadResolved32(guest_range_7, 20u, (r4 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_8, 20u, (r3 + 132), r7);
        MemoryInline::WriteResolved32(guest_range_8, 24u, (r3 + 136), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 28u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_7, 32u, (r4 + 144));
            r7 = MemoryInline::ReadResolved32(guest_range_7, 28u, (r4 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_8, 28u, (r3 + 140), r7);
        MemoryInline::WriteResolved32(guest_range_8, 32u, (r3 + 144), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 36u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_7, 40u, (r4 + 152));
            r7 = MemoryInline::ReadResolved32(guest_range_7, 36u, (r4 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_8, 36u, (r3 + 148), r7);
        MemoryInline::WriteResolved32(guest_range_8, 40u, (r3 + 152), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 44u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_7, 48u, (r4 + 160));
            r7 = MemoryInline::ReadResolved32(guest_range_7, 44u, (r4 + 156));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_8, 44u, (r3 + 156), r7);
        MemoryInline::WriteResolved32(guest_range_8, 48u, (r3 + 160), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 52u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_7, 56u, (r4 + 168));
            r7 = MemoryInline::ReadResolved32(guest_range_7, 52u, (r4 + 164));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_8, 52u, (r3 + 164), r7);
        MemoryInline::WriteResolved32(guest_range_8, 56u, (r3 + 168), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 60u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_7, 64u, (r4 + 176));
            r7 = MemoryInline::ReadResolved32(guest_range_7, 60u, (r4 + 172));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_8, 60u, (r3 + 172), r7);
        MemoryInline::WriteResolved32(guest_range_8, 64u, (r3 + 176), r6);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_7, 68u, (r4 + 180));
    MemoryInline::WriteResolved32(guest_range_8, 68u, (r3 + 180), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_7, 72u, (r4 + 184));
    MemoryInline::WriteResolved8(guest_range_8, 72u, (r3 + 184), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 73u, (r4 + 185));
    MemoryInline::WriteResolved8(guest_range_8, 73u, (r3 + 185), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 74u, (r4 + 186));
    MemoryInline::WriteResolved8(guest_range_8, 74u, (r3 + 186), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_7, 76u, (r4 + 188));
    MemoryInline::WriteResolved32(guest_range_8, 76u, (r3 + 188), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_7, 80u, (r4 + 192));
    MemoryInline::WriteResolved8(guest_range_8, 80u, (r3 + 192), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 81u, (r4 + 193));
    MemoryInline::WriteResolved8(guest_range_8, 81u, (r3 + 193), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 82u, (r4 + 194));
    MemoryInline::WriteResolved8(guest_range_8, 82u, (r3 + 194), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_7, 84u, (r4 + 196));
    MemoryInline::WriteResolved32(guest_range_8, 84u, (r3 + 196), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_7, 88u, (r4 + 200));
    MemoryInline::WriteResolved32(guest_range_8, 88u, (r3 + 200), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_7, 92u, (r4 + 204));
    MemoryInline::WriteResolved32(guest_range_8, 92u, (r3 + 204), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_7, 96u, (r4 + 208));
    MemoryInline::WriteResolved32(guest_range_8, 96u, (r3 + 208), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_7, 100u, (r4 + 212));
    MemoryInline::WriteResolved32(guest_range_8, 100u, (r3 + 212), r6);
    r6 = MemoryInline::ReadResolved16(guest_range_7, 104u, (r4 + 216));
    MemoryInline::WriteResolved16(guest_range_8, 104u, (r3 + 216), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_7, 106u, (r4 + 218));
    MemoryInline::WriteResolved16(guest_range_8, 106u, (r3 + 218), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_7, 108u, (r4 + 220));
    MemoryInline::WriteResolved16(guest_range_8, 108u, (r3 + 220), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_7, 110u, (r4 + 222));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::WriteResolved16(guest_range_8, 110u, (r3 + 222), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 112u, (r4 + 224));
    MemoryInline::WriteResolved8(guest_range_8, 112u, (r3 + 224), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 113u, (r4 + 225));
    MemoryInline::WriteResolved8(guest_range_8, 113u, (r3 + 225), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 114u, (r4 + 226));
    MemoryInline::WriteResolved8(guest_range_8, 114u, (r3 + 226), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_7, 120u, (r4 + 232));
    MemoryInline::WriteResolved16(guest_range_8, 120u, (r3 + 232), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 124u, (r4 + 236));
    r4 = (r4 + 240);
    MemoryInline::WriteResolved8(guest_range_8, 124u, (r3 + 236), static_cast<uint8_t>(r6));
    r3 = (r3 + 240);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
}

loc_8052E360:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052E194;
    }
}

loc_8052E364:
{
    r22 = MemoryInline::ReadResolved32(guest_range_2, 2884u, (r31 + 5976));
    r0 = 14;
    r23 = MemoryInline::ReadResolved32(guest_range_2, 2888u, (r31 + 5980));
    r5 = (r31 + 2968);
    r24 = MemoryInline::ReadResolved32(guest_range_2, 2892u, (r31 + 5984));
    r4 = (r31 + 6024);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 2896u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 2896u, (r31 + 5988));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 2900u, (r31 + 5992));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 2904u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 2904u, (r31 + 5996));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 2908u, (r31 + 6000));
        }
    }
    r29 = MemoryInline::ReadResolved8(guest_range_2, 2912u, (r31 + 6004));
    r30 = MemoryInline::ReadResolved8(guest_range_2, 2913u, (r31 + 6005));
    r12 = MemoryInline::ReadResolved8(guest_range_2, 2914u, (r31 + 6006));
    r11 = MemoryInline::ReadResolved8(guest_range_2, 2915u, (r31 + 6007));
    r10 = MemoryInline::ReadResolved32(guest_range_2, 2916u, (r31 + 6008));
    r9 = MemoryInline::ReadResolved8(guest_range_2, 2920u, (r31 + 6012));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 2921u, (r31 + 6013));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 2924u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 2924u, (r31 + 6016));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 2928u, (r31 + 6020));
        }
    }
    r3 = MemoryInline::ReadResolved32(guest_range_2, 2932u, (r31 + 6024));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 2884u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 2884u, (r31 + 2920), r22);
        MemoryInline::WriteResolved32(guest_range_3, 2888u, (r31 + 2924), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 2892u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_3, 2892u, (r31 + 2928), r24);
        MemoryInline::WriteResolved32(guest_range_3, 2896u, (r31 + 2932), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 2900u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 2900u, (r31 + 2936), r26);
        MemoryInline::WriteResolved32(guest_range_3, 2904u, (r31 + 2940), r27);
    }
    MemoryInline::WriteResolved32(guest_range_3, 2908u, (r31 + 2944), r28);
    MemoryInline::WriteResolved8(guest_range_3, 2912u, (r31 + 2948), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 2913u, (r31 + 2949), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_3, 2914u, (r31 + 2950), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_3, 2915u, (r31 + 2951), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved32(guest_range_3, 2916u, (r31 + 2952), r10);
    MemoryInline::WriteResolved8(guest_range_3, 2920u, (r31 + 2956), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_3, 2921u, (r31 + 2957), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 2924u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 2924u, (r31 + 2960), r7);
        MemoryInline::WriteResolved32(guest_range_3, 2928u, (r31 + 2964), r6);
    }
    MemoryInline::WriteResolved32(guest_range_3, 2932u, (r31 + 2968), r3);
    ctr = r0;
}

loc_8052E3FC:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052E3FC;
    }
}

loc_8052E410:
{
    r0 = MemoryInline::ReadResolved32(guest_range_2, 3048u, (r31 + 6140));
    MemoryInline::WriteResolved32(guest_range_3, 3048u, (r31 + 3084), r0);
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r1 + 8));
            r23 = MemoryInline::ReadResolved32(guest_range_9, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_9, 8u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_9, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_9, 16u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_9, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_9, 24u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_9, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_9, 32u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_9, 36u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_9, 44u, (r1 + 52));
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8052DD40 func_8052DD40 preserves=true fpr_mask=0x00000000
