#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801181AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_801181AC;

loc_801181AC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
    r0 = MemoryInline::FlatRead32((r13 + -30120));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_801181C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801181D4;
    }
}

loc_801181CC:
{
    r3 = 0;
    goto loc_80118648;
}

loc_801181D4:
{
    r0 = MemoryInline::FlatRead32((r13 + -26672));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_801181DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801181E8;
    }
}

loc_801181E0:
{
    r3 = 0;
    goto loc_80118648;
}

loc_801181E8:
{
    r31 = 0x80280000u;
    r30 = 0;
    r31 = (r31 + -9656);
    goto loc_80118624;
}

loc_801181F8:
{
    r4 = MemoryInline::FlatRead32((r13 + -26680));
    r0 = MemoryInline::FlatRead32((r13 + -26676));
    r0 = (r4 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(128));
}

loc_80118208:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80118240;
    }
}

loc_8011820C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(256));
}

loc_80118210:
{
    r3 = 256;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8011821C;
    }
}

loc_80118218:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
}

loc_8011821C:
{
    MemoryInline::FlatWrite32((r13 + -26680), r3);
    r4 = (r3 + 1);
    r3 = MemoryInline::FlatRead32((r13 + -26684));
    ctx->lr = 0x8011822Cu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r13 = ctx->gpr[13];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80118230:
{
    MemoryInline::FlatWrite32((r13 + -26684), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80118240;
    }
}

loc_80118238:
{
    r3 = 0;
    goto loc_80118648;
}

loc_80118240:
{
    r5 = MemoryInline::FlatRead32((r13 + -26676));
    r6 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -26684));
    r0 = MemoryInline::FlatRead32((r13 + -26680));
    r4 = (r4 + r5);
    r3 = MemoryInline::FlatRead32((r13 + -30120));
    r5 = (r0 - r5);
    ctx->lr = 0x80118260u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x800F1308u>(ctx);
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
    r13 = ctx->gpr[13];
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
}

loc_80118264:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_8011846C;
    }
}

loc_80118268:
{
    r3 = MemoryInline::FlatRead32((r13 + -30120));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80118270:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80118284;
    }
}

loc_80118274:
{
    r4 = 2;
    ctx->lr = 0x8011827Cu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x800F11F8u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r3 = MemoryInline::FlatRead32((r13 + -30120));
    ctx->lr = 0x80118284u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x800F11C4u>(ctx);
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
    r13 = ctx->gpr[13];
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
}

loc_80118284:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    r0 = -1;
    MemoryInline::FlatWrite32((r13 + -30120), r0);
}

loc_80118294:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80118444;
    }
}

loc_80118298:
{
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r28 = 0x80280000u;
    r30 = 0x80280000u;
    r28 = (r28 + -9640);
    r31 = (r3 + -1);
    r30 = (r30 + -9072);
    r27 = 3;
    goto loc_8011842C;
}

loc_801182B8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r30, 0, 16u, true, false);
    r20 = MemoryInline::ReadResolved8(guest_range_2, 0u, r30);
    r3 = r28;
    r21 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r30 + 1));
    r5 = (r1 + 8);
    r22 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r30 + 2));
    r4 = 0;
    r23 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r30 + 3));
    r24 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r30 + 4));
    r25 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r30 + 5));
    r26 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r30 + 6));
    r29 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r30 + 7));
    r12 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r30 + 8));
    r11 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r30 + 9));
    r10 = MemoryInline::ReadResolved8(guest_range_2, 10u, (r30 + 10));
    r9 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r30 + 11));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r30 + 12));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 13u, (r30 + 13));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 14u, (r30 + 14));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 15u, (r30 + 15));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 8), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 9), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r1 + 10), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r1 + 11), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r1 + 12), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r1 + 13), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r1 + 14), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r1 + 15), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r1 + 16), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r1 + 17), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_3, 10u, (r1 + 18), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_3, 11u, (r1 + 19), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r1 + 20), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r1 + 21), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 14u, (r1 + 22), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r1 + 23), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r13 + -30116), r28);
    ctr = r27;
}

loc_8011834C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r6 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    r7 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = (r7 ^ r6);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80118370;
    }
}

loc_8011836C:
{
    r3 = r28;
}

loc_80118370:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r6 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    r7 = MemoryInline::FlatRead8((r5 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = (r7 ^ r6);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80118394;
    }
}

loc_80118390:
{
    r3 = r28;
}

loc_80118394:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r6 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    r7 = MemoryInline::FlatRead8((r5 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = (r7 ^ r6);
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801183B8;
    }
}

loc_801183B4:
{
    r3 = r28;
}

loc_801183B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r6 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    r7 = MemoryInline::FlatRead8((r5 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = (r7 ^ r6);
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801183DC;
    }
}

loc_801183D8:
{
    r3 = r28;
}

loc_801183DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r6 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    r7 = MemoryInline::FlatRead8((r5 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = (r7 ^ r6);
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80118400;
    }
}

loc_801183FC:
{
    r3 = r28;
}

loc_80118400:
{
    r5 = (r5 + 5);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8011834C;
    }
}

loc_8011840C:
{
    r3 = r31;
    r7 = (r1 + 8);
    r4 = 0;
    r6 = 0;
    r5 = 0;
    r8 = 0;
    ctx->lr = 0x80118428u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80119818u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r31 = (r31 + -1);
}

loc_8011842C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80118430:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801182B8;
    }
}

loc_80118434:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    ctx->lr = 0x8011843Cu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x800EF414u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26668), r0);
}

loc_80118444:
{
    r3 = MemoryInline::FlatRead32((r13 + -26684));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011844C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80118464;
    }
}

loc_80118450:
{
    ctx->lr = 0x80118454u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3884u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26684), r0);
    MemoryInline::FlatWrite32((r13 + -26680), r0);
    MemoryInline::FlatWrite32((r13 + -26676), r0);
}

loc_80118464:
{
    r3 = 0;
    goto loc_80118648;
}

loc_8011846C:
{
    r0 = MemoryInline::FlatRead32((r13 + -26676));
    r4 = MemoryInline::FlatRead32((r13 + -26684));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r13 + -26676), r0);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r30));
    r27 = MemoryInline::FlatRead32((r13 + -26676));
    r3 = MemoryInline::FlatRead32((r13 + -26684));
    r29 = r27;
    r0 = (r27 + -6);
    r28 = r3;
    goto loc_801184F4;
}

loc_80118498:
{
    r4 = MemoryInline::FlatRead8(r28);
}

loc_801184A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(92))) {
        goto loc_801184F0;
    }
}

loc_801184A4:
{
    r4 = MemoryInline::FlatRead8((r28 + 1));
}

loc_801184AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(102))) {
        goto loc_801184F0;
    }
}

loc_801184B0:
{
    r4 = MemoryInline::FlatRead8((r28 + 2));
}

loc_801184B8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(105))) {
        goto loc_801184F0;
    }
}

loc_801184BC:
{
    r4 = MemoryInline::FlatRead8((r28 + 3));
}

loc_801184C4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(110))) {
        goto loc_801184F0;
    }
}

loc_801184C8:
{
    r4 = MemoryInline::FlatRead8((r28 + 4));
}

loc_801184D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(97))) {
        goto loc_801184F0;
    }
}

loc_801184D4:
{
    r4 = MemoryInline::FlatRead8((r28 + 5));
}

loc_801184DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(108))) {
        goto loc_801184F0;
    }
}

loc_801184E0:
{
    r4 = MemoryInline::FlatRead8((r28 + 6));
}

loc_801184E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(92))) {
        goto loc_801184F0;
    }
}

loc_801184EC:
{
    goto loc_801185E0;
}

loc_801184F0:
{
    r28 = (r28 + 1);
}

loc_801184F4:
{
    r4 = (r28 - r3);
}

loc_801184FC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80118498;
    }
}

loc_80118500:
{
    r28 = 0;
    goto loc_801185E0;
}

loc_80118508:
{
    r20 = (r28 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
    r7 = r31;
    r4 = r3;
    MemoryInline::FlatWrite32((r13 + -30116), r31);
    r6 = 0;
    ctr = r20;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80118550;
    }
}

loc_80118524:
{
    r5 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8(r7);
    r0 = (r5 ^ r0);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8(r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80118544;
    }
}

loc_80118540:
{
    r7 = MemoryInline::FlatRead32((r13 + -30116));
}

loc_80118544:
{
    r6 = (r6 + 1);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80118524;
    }
}

loc_80118550:
{
    r4 = r20;
    ctx->lr = 0x80118558u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80118B8Cu>(ctx);
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
    r13 = ctx->gpr[13];
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
    r0 = (r20 + 7);
    r3 = (r28 + 7);
    r29 = (r29 - r0);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_801185E0;
    }
}

loc_80118568:
{
    r28 = r3;
    r0 = (r29 + -6);
    goto loc_801185D0;
}

loc_80118574:
{
    r4 = MemoryInline::FlatRead8(r28);
}

loc_8011857C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(92))) {
        goto loc_801185CC;
    }
}

loc_80118580:
{
    r4 = MemoryInline::FlatRead8((r28 + 1));
}

loc_80118588:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(102))) {
        goto loc_801185CC;
    }
}

loc_8011858C:
{
    r4 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80118594:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(105))) {
        goto loc_801185CC;
    }
}

loc_80118598:
{
    r4 = MemoryInline::FlatRead8((r28 + 3));
}

loc_801185A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(110))) {
        goto loc_801185CC;
    }
}

loc_801185A4:
{
    r4 = MemoryInline::FlatRead8((r28 + 4));
}

loc_801185AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(97))) {
        goto loc_801185CC;
    }
}

loc_801185B0:
{
    r4 = MemoryInline::FlatRead8((r28 + 5));
}

loc_801185B8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(108))) {
        goto loc_801185CC;
    }
}

loc_801185BC:
{
    r4 = MemoryInline::FlatRead8((r28 + 6));
}

loc_801185C4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(92))) {
        goto loc_801185CC;
    }
}

loc_801185C8:
{
    goto loc_801185E0;
}

loc_801185CC:
{
    r28 = (r28 + 1);
}

loc_801185D0:
{
    r4 = (r28 - r3);
}

loc_801185D8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80118574;
    }
}

loc_801185DC:
{
    r28 = 0;
}

loc_801185E0:
{
}

loc_801185E4:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_801185F0;
    }
}

loc_801185E8:
{
}

loc_801185EC:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80118508;
    }
}

loc_801185F0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26676));
    r20 = (r27 - r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(r0));
}

loc_801185FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80118608;
    }
}

loc_80118600:
{
    MemoryInline::FlatWrite32((r13 + -26676), r30);
    goto loc_80118624;
}

loc_80118608:
{
    r3 = MemoryInline::FlatRead32((r13 + -26684));
    r5 = (r0 - r20);
    r4 = (r3 + r20);
    ctx->lr = 0x80118618u;
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000F1F0u>(ctx);
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r13 + -26676));
    r0 = (r0 - r20);
    MemoryInline::FlatWrite32((r13 + -26676), r0);
}

loc_80118624:
{
    r3 = MemoryInline::FlatRead32((r13 + -30120));
    ctx->lr = 0x8011862Cu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x800F1C9Cu>(ctx);
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
    r13 = ctx->gpr[13];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80118630:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801181F8;
    }
}

loc_80118634:
{
    r4 = MemoryInline::FlatRead32((r13 + -30120));
    r3 = (-1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0 = (r4 + 1);
    r0 = (r3 | r0);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
}

loc_80118648:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801181AC func_801181AC preserves=true fpr_mask=0x00000000
