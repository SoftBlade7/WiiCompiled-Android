#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80741CEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
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

    goto loc_80741CEC;

loc_80741CEC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -432), 0, 440u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -432), r1);
    r1 = (r1 + -432);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 436u, (r1 + 436), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 388u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_1, 388u, (r1 + 388), r21);
        MemoryInline::WriteResolved32(guest_range_1, 392u, (r1 + 392), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 396u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 396u, (r1 + 396), r23);
        MemoryInline::WriteResolved32(guest_range_1, 400u, (r1 + 400), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 404u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 404u, (r1 + 404), r25);
        MemoryInline::WriteResolved32(guest_range_1, 408u, (r1 + 408), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 412u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 412u, (r1 + 412), r27);
        MemoryInline::WriteResolved32(guest_range_1, 416u, (r1 + 416), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 420u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 420u, (r1 + 420), r29);
        MemoryInline::WriteResolved32(guest_range_1, 424u, (r1 + 424), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 428u, (r1 + 428), r31);
    r21 = 0x808A0000u;
    r23 = 0x809C0000u;
    r25 = r3;
    r26 = r4;
    r21 = (r21 + 10520);
    r3 = MemoryInline::FlatRead32((r23 + 11240));
    // inline leaf 0x80739530 (4 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead8((r3 + 38));
    // end of inlined leaf 0x80739530
    r31 = 0;
    r22 = r3;
    r3 = MemoryInline::FlatRead32((r23 + 11240));
    r4 = (r1 + 12);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r31);
    r5 = (r1 + 8);
    r30 = 0;
    r29 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r31);
    r28 = 0;
    r27 = 0;
    r23 = 0;
    ctx->lr = 0x80741D4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807398ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80741D50:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80741D78;
    }
}

loc_80741D54:
{
}

loc_80741D58:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(1))) {
        goto loc_80741DB0;
    }
}

loc_80741D5C:
{
}

loc_80741D60:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(2))) {
        goto loc_80741E50;
    }
}

loc_80741D64:
{
}

loc_80741D68:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(3))) {
        goto loc_80741EB4;
    }
}

loc_80741D6C:
{
}

loc_80741D70:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(4))) {
        goto loc_80741F18;
    }
}

loc_80741D74:
{
    goto loc_80741F78;
}

loc_80741D78:
{
    r3 = (r21 + 168);
    r31 = MemoryInline::FlatRead32((r21 + 168));
    r30 = MemoryInline::FlatRead32((r3 + 4));
    r29 = MemoryInline::FlatRead32((r3 + 8));
    r28 = MemoryInline::FlatRead32((r3 + 12));
    r27 = MemoryInline::FlatRead32((r3 + 16));
    r23 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    MemoryInline::FlatWriteRam32((r1 + 20), r30);
    MemoryInline::FlatWriteRam32((r1 + 24), r29);
    MemoryInline::FlatWriteRam32((r1 + 28), r28);
    MemoryInline::FlatWriteRam32((r1 + 32), r27);
    MemoryInline::FlatWriteRam32((r1 + 36), r23);
    goto loc_80741F78;
}

loc_80741DB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r24 = (r21 + 192);
    r22 = MemoryInline::FlatRead32((r21 + 192));
    r8 = (r1 + 40);
    guest_range_0 = MemoryInline::ResolveRangeHost((r24 + 4), 0, 44u, true, false);
    r23 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r24 + 4));
    r21 = (r0 * 24);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r24 + 8));
    r7 = (r1 + 44);
    r30 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r24 + 12));
    r6 = (r1 + 48);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r24 + 16));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r24 + 20));
        }
    }
    r5 = (r1 + 52);
    r27 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r24 + 24));
    r4 = (r1 + 56);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r24 + 28));
    r3 = (r1 + 60);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r24 + 32));
            r10 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r24 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r24 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r24 + 44));
        }
    }
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 40), r22);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 44), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 48), r31);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 52), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 56), r29);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 60), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 64), r27);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 68), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 72), r11);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 76), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 80), r9);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 84), r0);
    }
    r8_addr_4 = (r8 + r21);
    r31 = MemoryInline::FlatRead32(r8_addr_4);
    r7_addr_4 = (r7 + r21);
    r30 = MemoryInline::FlatRead32(r7_addr_4);
    r6_addr_4 = (r6 + r21);
    r29 = MemoryInline::FlatRead32(r6_addr_4);
    r5_addr_4 = (r5 + r21);
    r28 = MemoryInline::FlatRead32(r5_addr_4);
    r4_addr_4 = (r4 + r21);
    r27 = MemoryInline::FlatRead32(r4_addr_4);
    r3_addr_4 = (r3 + r21);
    r23 = MemoryInline::FlatRead32(r3_addr_4);
    goto loc_80741F78;
}

loc_80741E50:
{
    r3 = (r21 + 240);
    r0 = 9;
    r5 = (r1 + 300);
    r4 = (r3 + -4);
    ctr = r0;
}

loc_80741E64:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80741E64;
    }
}

loc_80741E78:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r8 = (r1 + 304);
    r7 = (r1 + 308);
    r6 = (r1 + 312);
    r0 = (r0 * 24);
    r5 = (r1 + 316);
    r4 = (r1 + 320);
    r3 = (r1 + 324);
    r8_addr_3 = (r8 + r0);
    r31 = MemoryInline::FlatRead32(r8_addr_3);
    r7_addr_3 = (r7 + r0);
    r30 = MemoryInline::FlatRead32(r7_addr_3);
    r6_addr_3 = (r6 + r0);
    r29 = MemoryInline::FlatRead32(r6_addr_3);
    r5_addr_3 = (r5 + r0);
    r28 = MemoryInline::FlatRead32(r5_addr_3);
    r4_addr_3 = (r4 + r0);
    r27 = MemoryInline::FlatRead32(r4_addr_3);
    r3_addr_3 = (r3 + r0);
    r23 = MemoryInline::FlatRead32(r3_addr_3);
    goto loc_80741F78;
}

loc_80741EB4:
{
    r3 = (r21 + 312);
    r0 = 12;
    r5 = (r1 + 204);
    r4 = (r3 + -4);
    ctr = r0;
}

loc_80741EC8:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80741EC8;
    }
}

loc_80741EDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r8 = (r1 + 208);
    r7 = (r1 + 212);
    r6 = (r1 + 216);
    r0 = (r0 * 24);
    r5 = (r1 + 220);
    r4 = (r1 + 224);
    r3 = (r1 + 228);
    r8_addr_2 = (r8 + r0);
    r31 = MemoryInline::FlatRead32(r8_addr_2);
    r7_addr_2 = (r7 + r0);
    r30 = MemoryInline::FlatRead32(r7_addr_2);
    r6_addr_2 = (r6 + r0);
    r29 = MemoryInline::FlatRead32(r6_addr_2);
    r5_addr_2 = (r5 + r0);
    r28 = MemoryInline::FlatRead32(r5_addr_2);
    r4_addr_2 = (r4 + r0);
    r27 = MemoryInline::FlatRead32(r4_addr_2);
    r3_addr_2 = (r3 + r0);
    r23 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_80741F78;
}

loc_80741F18:
{
    r3 = (r21 + 408);
    r0 = 15;
    r5 = (r1 + 84);
    r4 = (r3 + -4);
    ctr = r0;
}

loc_80741F2C:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80741F2C;
    }
}

loc_80741F40:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r8 = (r1 + 88);
    r7 = (r1 + 92);
    r6 = (r1 + 96);
    r0 = (r0 * 24);
    r5 = (r1 + 100);
    r4 = (r1 + 104);
    r3 = (r1 + 108);
    r8_addr_1 = (r8 + r0);
    r31 = MemoryInline::FlatRead32(r8_addr_1);
    r7_addr_1 = (r7 + r0);
    r30 = MemoryInline::FlatRead32(r7_addr_1);
    r6_addr_1 = (r6 + r0);
    r29 = MemoryInline::FlatRead32(r6_addr_1);
    r5_addr_1 = (r5 + r0);
    r28 = MemoryInline::FlatRead32(r5_addr_1);
    r4_addr_1 = (r4 + r0);
    r27 = MemoryInline::FlatRead32(r4_addr_1);
    r3_addr_1 = (r3 + r0);
    r23 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_80741F78:
{
    r21 = (r31 + r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
    r22 = (r29 + r28);
    r24 = (r27 + r23);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80741FB4;
    }
}

loc_80741F88:
{
    r4 = MemoryInline::FlatRead32((r25 + 360));
    r3 = r25;
    r5 = r31;
    r6 = r30;
    r7 = 0;
    ctx->lr = 0x80741FA0u;
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
    InvokeDirectCpu<0x8074210Cu>(ctx);
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
    r3 = MemoryInline::FlatRead32((r25 + 360));
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r25 + 360));
    ctx->lr = 0x80741FB4u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8073F848u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80741FB4:
{
}

loc_80741FB8:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(0))) {
        goto loc_80741FF4;
    }
}

loc_80741FBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80741FC0:
{
    r4 = MemoryInline::FlatRead32((r25 + 364));
    r3 = r25;
    r5 = r29;
    r6 = r28;
    r7 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80741FDC;
    }
}

loc_80741FD8:
{
    r7 = 0;
}

loc_80741FDC:
{
    ctx->lr = 0x80741FE0u;
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
    InvokeDirectCpu<0x8074210Cu>(ctx);
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
    r3 = MemoryInline::FlatRead32((r25 + 364));
    r0 = (r21 + 1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r25 + 364));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073F8F8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_80741FF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80741FF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80742038;
    }
}

loc_80741FFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80742000:
{
    r4 = MemoryInline::FlatRead32((r25 + 368));
    r3 = r25;
    r5 = r27;
    r6 = r23;
    r7 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074201C;
    }
}

loc_80742018:
{
    r7 = 0;
}

loc_8074201C:
{
    ctx->lr = 0x80742020u;
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
    InvokeDirectCpu<0x8074210Cu>(ctx);
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
    r3 = MemoryInline::FlatRead32((r25 + 368));
    r4 = (r21 + r22);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r25 + 368));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073F8F8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_80742038:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 388), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 388));
            r22 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 392));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 396));
            r24 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 400));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 404));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 408));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 412));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 416));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 420));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r1 + 424));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r1 + 428));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r1 + 436));
    ctx->lr = r0;
    r1 = (r1 + 432);
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
// RECOMP_REGISTRATION base 0x80741CEC func_80741CEC preserves=true fpr_mask=0x00000000
