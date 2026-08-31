#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130324(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r15_addr_0 = 0;
    uint32_t r15_addr_1 = 0;
    uint32_t r15_addr_10 = 0;
    uint32_t r15_addr_11 = 0;
    uint32_t r15_addr_12 = 0;
    uint32_t r15_addr_13 = 0;
    uint32_t r15_addr_14 = 0;
    uint32_t r15_addr_15 = 0;
    uint32_t r15_addr_16 = 0;
    uint32_t r15_addr_17 = 0;
    uint32_t r15_addr_18 = 0;
    uint32_t r15_addr_19 = 0;
    uint32_t r15_addr_2 = 0;
    uint32_t r15_addr_20 = 0;
    uint32_t r15_addr_21 = 0;
    uint32_t r15_addr_22 = 0;
    uint32_t r15_addr_23 = 0;
    uint32_t r15_addr_24 = 0;
    uint32_t r15_addr_3 = 0;
    uint32_t r15_addr_4 = 0;
    uint32_t r15_addr_5 = 0;
    uint32_t r15_addr_6 = 0;
    uint32_t r15_addr_7 = 0;
    uint32_t r15_addr_8 = 0;
    uint32_t r15_addr_9 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t xer = ctx->xer;

    goto loc_80130324;

loc_80130324:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r0 = MemoryInline::FlatRead8((r4 + 30));
    r15 = r4;
    r19 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80130348:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80130354;
    }
}

loc_8013034C:
{
    r3 = 0;
    goto loc_801306A4;
}

loc_80130354:
{
    r20 = (r3 + 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 131070);
    r31 = 0x80330000u;
    r22 = (r4 + r3);
    r16 = (r20 & 65535);
    r23_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r23 = (r23_rot_1 & 262140);
    r21 = (r4 + r0);
    r31 = (r31 + 9376);
    r29 = 0;
    r30 = 4;
    r28 = (r2 + -26944);
    r25 = 3;
    r24 = 2;
    r14 = 0x80280000u;
    r26 = (r2 + -26936);
    r27 = 1;
}

loc_80130394:
{
    r3 = (r16 & 255);
    r4 = (r1 + 8);
    r5 = 1;
    // inline leaf 0x80131294 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80131294
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801303A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801306A0;
    }
}

loc_801303AC:
{
    r0 = MemoryInline::FlatRead8((r22 + 26));
    r17 = 0;
    r19 = (r19 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801303BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80130584;
    }
}

loc_801303C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801303D4;
    }
}

loc_801303C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801303C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801303E4;
    }
}

loc_801303CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013048C;
    }
}

loc_801303D0:
{
    goto loc_80130680;
}

loc_801303D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_801303D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80130668;
    }
}

loc_801303DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80130680;
    }
}

loc_801303E0:
{
    goto loc_801305D0;
}

loc_801303E4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r16), static_cast<uint32_t>(1));
}

loc_801303E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80130400;
    }
}

loc_801303EC:
{
    r3 = 2;
    ctx->lr = 0x801303F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012ED54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r15_addr_2 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_2, r3);
    MemoryInline::FlatWrite8((r22 + 20), static_cast<uint8_t>(r30));
    goto loc_80130434;
}

loc_80130400:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
}

loc_80130404:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013041C;
    }
}

loc_80130408:
{
    r3 = 3;
    ctx->lr = 0x80130410u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012ED54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r15_addr_3 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_3, r3);
    MemoryInline::FlatWrite8((r22 + 20), static_cast<uint8_t>(r24));
    goto loc_80130434;
}

loc_8013041C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r16), static_cast<uint32_t>(3));
}

loc_80130420:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80130680;
    }
}

loc_80130424:
{
    r3 = 1;
    ctx->lr = 0x8013042Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012ED54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r15_addr_4 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_4, r3);
    MemoryInline::FlatWrite8((r22 + 20), static_cast<uint8_t>(r25));
}

loc_80130434:
{
    r15_addr_6 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8013043C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013046C;
    }
}

loc_80130440:
{
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r29));
    r0 = MemoryInline::FlatRead8((r22 + 20));
    r15_addr_7 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_7);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4 = (r26 + r0);
    r0 = MemoryInline::FlatRead16((r4 + -2));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r15_addr_8 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_8);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r27));
    goto loc_8013047C;
}

loc_8013046C:
{
    r4 = (r14 + 10272);
    r3 = 458752;
    ctx->lr = 0x80130478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r24));
}

loc_8013047C:
{
    r0 = MemoryInline::FlatRead8((r22 + 20));
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -1));
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r0));
}

loc_8013048C:
{
    r15_addr_11 = (r15 + r23);
    r6 = MemoryInline::FlatRead32(r15_addr_11);
    r5 = MemoryInline::FlatRead8((r1 + 8));
    r4 = MemoryInline::FlatRead16((r6 + 2));
    r3 = (r6 + r4);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r21 + 12));
    r3 = (r3 + -1);
    r0 = (r3 & 65535);
}

loc_801304B4:
{
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r3));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80130578;
    }
}

loc_801304BC:
{
    r0 = MemoryInline::FlatRead8((r22 + 20));
    r18 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801304C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013050C;
    }
}

loc_801304CC:
{
    r0 = MemoryInline::FlatRead8((r22 + 23));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & 16776960);
    r15_addr_12 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_12);
    r0 = (r4 + r0);
    r18 = (r0 & 65535);
    ctx->lr = 0x801304E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x8014CE4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
}

loc_801304E8:
{
    r15_addr_13 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_13, r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8013050C;
    }
}

loc_801304F0:
{
}

loc_801304F4:
{
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r18));
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_80130504;
    }
}

loc_801304FC:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r29));
    goto loc_80130680;
}

loc_80130504:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r30));
    goto loc_80130680;
}

loc_8013050C:
{
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r18));
    r15_addr_15 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_15);
    // inline leaf 0x8012EFAC (17 guest instruction(s))
}

loc_inl2_0x8012EFAC:
{
    r3 = (r3 + -8);
    r0 = (r3 & 1);
}

loc_inl2_0x8012EFB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x8012EFC0;
    }
}

loc_inl2_0x8012EFB8:
{
    r3 = 0;
    goto loc_inl2_cont_8012EFAC;
}

loc_inl2_0x8012EFC0:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl2_0x8012EFC8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_inl2_0x8012EFE8;
    }
}

loc_inl2_0x8012EFCC:
{
    r3 = 0x80310000u;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & 4080);
    r3 = (r3 + -26176);
    r3 = (r3 + 196608);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + -30232));
    goto loc_inl2_cont_8012EFAC;
}

loc_inl2_0x8012EFE8:
{
    r3 = 0;
}

loc_inl2_cont_8012EFAC:
{
    // end of inlined leaf 0x8012EFAC
    r0 = MemoryInline::FlatRead8((r22 + 20));
    r4 = (r3 & 65535);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -1));
    r3 = (r18 + r0);
    r0 = (r3 + 8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80130534:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8013055C;
    }
}

loc_80130538:
{
    r15_addr_16 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_16);
    ctx->lr = 0x80130540u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r15_addr_17 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_17, r29);
    r3 = 0x80280000u;
    r4 = (r3 + 10332);
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r30));
    r3 = 458752;
    ctx->lr = 0x80130558u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
    goto loc_80130680;
}

loc_8013055C:
{
}

loc_80130560:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_8013056C;
    }
}

loc_80130564:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r25));
    goto loc_80130680;
}

loc_8013056C:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r29));
    r17 = 1;
    goto loc_80130680;
}

loc_80130578:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite8((r22 + 23), static_cast<uint8_t>(r0));
    goto loc_80130680;
}

loc_80130584:
{
    r3 = MemoryInline::FlatRead16((r21 + 12));
    r3 = (r3 + -1);
    r0 = (r3 & 65535);
}

loc_80130590:
{
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r3));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801305C4;
    }
}

loc_80130598:
{
    r0 = MemoryInline::FlatRead8((r22 + 20));
    r3 = MemoryInline::FlatRead8((r1 + 8));
}

loc_801305A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801305B8;
    }
}

loc_801305A8:
{
    r0 = MemoryInline::FlatRead8((r22 + 23));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & 16776960);
    r0 = (r3 + r0);
    r3 = (r0 & 65535);
}

loc_801305B8:
{
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r30));
    goto loc_80130680;
}

loc_801305C4:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite8((r22 + 23), static_cast<uint8_t>(r0));
    goto loc_80130680;
}

loc_801305D0:
{
    r15_addr_18 = (r15 + r23);
    r7 = MemoryInline::FlatRead32(r15_addr_18);
    r3 = (r20 & 255);
    r6 = MemoryInline::FlatRead8((r1 + 8));
    r5 = MemoryInline::FlatRead16((r7 + 2));
    r4 = (r7 + r5);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r21 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r0));
    r5 = (r0 & 65535);
    r15_addr_19 = (r15 + r23);
    r4 = MemoryInline::FlatRead32(r15_addr_19);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r4 = (r4 + r0);
    r4 = (r4 + 8);
    // inline leaf 0x80131294 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80131294
    r15_addr_20 = (r15 + r23);
    r4 = MemoryInline::FlatRead32(r15_addr_20);
    r19 = (r19 + r3);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 12));
    r3 = (r0 - r3);
    r0 = (r3 & 65535);
}

loc_80130634:
{
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r3));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80130680;
    }
}

loc_8013063C:
{
    r0 = MemoryInline::FlatRead8((r22 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80130644:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013065C;
    }
}

loc_80130648:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D01Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = (r3 & 255);
}

loc_80130650:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013065C;
    }
}

loc_80130654:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r29));
    goto loc_80130680;
}

loc_8013065C:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r29));
    r17 = 1;
    goto loc_80130680;
}

loc_80130668:
{
    r3 = MemoryInline::FlatRead16((r21 + 12));
    r3 = (r3 + -1);
    r0 = (r3 & 65535);
}

loc_80130674:
{
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r3));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80130680;
    }
}

loc_8013067C:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r29));
}

loc_80130680:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(0));
}

loc_80130684:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80130394;
    }
}

loc_80130688:
{
    r3 = MemoryInline::FlatRead8((r31 + 31));
    r4 = 0;
    r15_addr_22 = (r15 + r23);
    r5 = MemoryInline::FlatRead32(r15_addr_22);
    ctx->lr = 0x80130698u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EFF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r15_addr_23 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_23, r29);
    goto loc_80130394;
}

loc_801306A0:
{
    r3 = r19;
}

loc_801306A4:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80130324 func_80130324 preserves=true fpr_mask=0x00000000
