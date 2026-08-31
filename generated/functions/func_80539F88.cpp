#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80539F88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
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

    goto loc_80539F88;

loc_80539F88:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r8 = 0x808B0000u;
    r7 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r5 = 0x808B0000u;
    r12 = 0x808B0000u;
    r10 = 0x808B0000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r21);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r23);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r25);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r31);
    r31 = 0;
    r8 = (r8 + 13680);
    r7 = (r7 + 11588);
    r5 = (r5 + 13320);
    r30 = 0x808B0000u;
    r22 = 0x808B0000u;
    r24 = 0x808B0000u;
    r25 = 0x808B0000u;
    r27 = 0x808B0000u;
    r28 = 0x808B0000u;
    r6 = 0x808B0000u;
    r30 = (r30 + 13952);
    r21 = 0x808B0000u;
    r22 = (r22 + 13928);
    r23 = 0x808B0000u;
    r24 = (r24 + 13296);
    r25 = (r25 + 13272);
    r26 = 0x808B0000u;
    r27 = (r27 + 13904);
    r28 = (r28 + 13880);
    r29 = 0x808B0000u;
    r12 = (r12 + 13856);
    r11 = 0x808B0000u;
    r10 = (r10 + 13832);
    r9 = 0x808B0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 365u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r4);
    r4 = 0x808B0000u;
    r4 = (r4 + 13760);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r8);
    r8 = 0x808B0000u;
    r8 = (r8 + 13808);
    MemoryInline::WriteResolved32(guest_range_0, 264u, (r3 + 264), r7);
    r7 = 0x808B0000u;
    r7 = (r7 + 13784);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r31);
    MemoryInline::WriteResolved8(guest_range_0, 274u, (r3 + 274), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 268u, (r3 + 268), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 270u, (r3 + 270), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 272u, (r3 + 272), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 280u, (r3 + 280), r5);
    r0 = MemoryInline::FlatRead8((r6 + 13553));
    r6 = 0x808B0000u;
    MemoryInline::WriteResolved8(guest_range_0, 284u, (r3 + 284), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 280u, (r3 + 280), r30);
    r30 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 288u, (r3 + 288), r5);
    r0 = MemoryInline::FlatRead8((r21 + 13554));
    MemoryInline::WriteResolved8(guest_range_0, 292u, (r3 + 292), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 288u, (r3 + 288), r22);
    MemoryInline::WriteResolved32(guest_range_0, 296u, (r3 + 296), r5);
    r0 = MemoryInline::FlatRead8((r23 + 13552));
    MemoryInline::WriteResolved8(guest_range_0, 300u, (r3 + 300), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 296u, (r3 + 296), r24);
    MemoryInline::WriteResolved32(guest_range_0, 304u, (r3 + 304), r25);
    r0 = MemoryInline::FlatRead16((r26 + 13556));
    MemoryInline::WriteResolved16(guest_range_0, 308u, (r3 + 308), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 304u, (r3 + 304), r27);
    MemoryInline::WriteResolved32(guest_range_0, 312u, (r3 + 312), r28);
    r0 = MemoryInline::FlatRead32((r29 + 13560));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r3 + 316), r0);
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r3 + 312), r12);
    }
    MemoryInline::WriteResolved32(guest_range_0, 320u, (r3 + 320), r25);
    r0 = MemoryInline::FlatRead16((r11 + 13564));
    MemoryInline::WriteResolved16(guest_range_0, 324u, (r3 + 324), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 320u, (r3 + 320), r10);
    MemoryInline::WriteResolved32(guest_range_0, 328u, (r3 + 328), r5);
    r0 = MemoryInline::FlatRead8((r9 + 13566));
    MemoryInline::WriteResolved8(guest_range_0, 332u, (r3 + 332), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 328u, (r3 + 328), r8);
    MemoryInline::WriteResolved32(guest_range_0, 336u, (r3 + 336), r5);
    r0 = MemoryInline::FlatRead8((r9 + 13566));
    MemoryInline::WriteResolved8(guest_range_0, 340u, (r3 + 340), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 336u, (r3 + 336), r8);
    MemoryInline::WriteResolved32(guest_range_0, 344u, (r3 + 344), r5);
    r0 = MemoryInline::FlatRead8((r9 + 13566));
    MemoryInline::WriteResolved8(guest_range_0, 348u, (r3 + 348), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 344u, (r3 + 344), r8);
    MemoryInline::WriteResolved32(guest_range_0, 352u, (r3 + 352), r5);
    r0 = MemoryInline::FlatRead8((r23 + 13552));
    MemoryInline::WriteResolved8(guest_range_0, 356u, (r3 + 356), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 352u, (r3 + 352), r24);
    MemoryInline::WriteResolved32(guest_range_0, 360u, (r3 + 360), r7);
    r0 = MemoryInline::FlatRead8((r6 + 13567));
    MemoryInline::WriteResolved8(guest_range_0, 364u, (r3 + 364), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 360u, (r3 + 360), r4);
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl0_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl0_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl0_cont_8051BED0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r3 = MemoryInline::FlatRead32((r3 + 3220));
    r4 = 48;
    r5 = 4;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053A120u;
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
    MemoryInline::FlatWrite32((r30 + 56), r3);
    r3 = 96;
    MemoryInline::FlatWrite16((r30 + 60), static_cast<uint16_t>(r31));
    ctx->lr = 0x8053A130u;
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
    MemoryInline::FlatWrite32((r30 + 64), r3);
    r22 = 0;
}

loc_8053A138:
{
    r21_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r21 = (r21_rot_2 & 1020);
    r3 = 160;
    ctx->lr = 0x8053A144u;
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
    r4 = (r30 + r21);
    MemoryInline::FlatWrite32((r4 + 68), r3);
    r3 = 160;
    ctx->lr = 0x8053A154u;
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
    r22 = (r22 + 1);
    r4 = (r30 + r21);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(12));
}

loc_8053A160:
{
    MemoryInline::FlatWrite32((r4 + 116), r3);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053A138;
    }
}

loc_8053A168:
{
    r3 = r30;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r1 + 68));
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80539F88 func_80539F88 preserves=true fpr_mask=0x00000000
