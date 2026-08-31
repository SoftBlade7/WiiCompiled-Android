#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631C68_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_8084F298(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
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

    goto loc_8084F298;

loc_8084F298:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    r10 = 0x808B0000u;
    r8 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r0);
    r10 = (r10 + -7872);
    r9 = 2;
    r7 = 0x809C0000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r1 + 88), r18);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r1 + 92), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 96), r20);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r1 + 104), r22);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 108), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r1 + 112), r24);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r1 + 120), r26);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 124), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r1 + 128), r28);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r1 + 136), r30);
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r1 + 140), r31);
    }
    r30 = r3;
    r0 = 0;
    r20 = (r10 + 156);
    r12 = (r10 + 176);
    r28 = (r10 + 184);
    r31 = r4;
    r5 = MemoryInline::FlatRead32((r8 + 7736));
    r6 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r10 + 136);
    MemoryInline::FlatWrite32((r6 + 116), r9);
    r6 = MemoryInline::FlatRead32((r7 + -10456));
    r3 = MemoryInline::FlatRead32((r6 + 6016));
    r3 = (r3 & -3);
    MemoryInline::FlatWrite32((r6 + 6016), r3);
    r6 = MemoryInline::FlatRead32((r7 + -10456));
    r3 = MemoryInline::FlatRead32((r6 + 6016));
    r3 = (r3 & -2);
    MemoryInline::FlatWrite32((r6 + 6016), r3);
    r6 = MemoryInline::FlatRead32((r7 + -10456));
    r3 = MemoryInline::FlatRead32((r6 + 6016));
    r3 = (r3 & -3);
    MemoryInline::FlatWrite32((r6 + 6016), r3);
    r3 = MemoryInline::FlatRead32((r7 + -10456));
    MemoryInline::FlatWrite32((r3 + 6000), r0);
    r11 = MemoryInline::FlatRead32((r8 + 7736));
    r9 = MemoryInline::FlatRead32((r10 + 136));
    r3 = MemoryInline::FlatRead32((r11 + 144));
    r8 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead8((r3 + 20));
    r7 = MemoryInline::FlatRead32((r5 + 8));
    r6 = MemoryInline::FlatRead32((r5 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8084F33C:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
    r3 = MemoryInline::FlatRead32((r10 + 156));
    r0 = MemoryInline::FlatRead32((r20 + 4));
    r18 = MemoryInline::FlatRead32((r20 + 8));
    r19 = MemoryInline::FlatRead32((r20 + 12));
    r20 = MemoryInline::FlatRead32((r20 + 16));
    r21 = MemoryInline::FlatRead8((r10 + 176));
    r26 = MemoryInline::FlatRead32((r10 + 184));
    r22 = MemoryInline::FlatRead8((r12 + 1));
    r23 = MemoryInline::FlatRead8((r12 + 2));
    r24 = MemoryInline::FlatRead8((r12 + 3));
    r25 = MemoryInline::FlatRead8((r12 + 4));
    r27 = MemoryInline::FlatRead32((r28 + 4));
    r29 = MemoryInline::FlatRead32((r28 + 8));
    r12 = MemoryInline::FlatRead32((r28 + 12));
    r10 = MemoryInline::FlatRead32((r28 + 16));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 56), r9);
    r4 = MemoryInline::FlatRead32((r4 + 576));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 60), r8);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 64), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 72), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 36), r3);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 44), r18);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 48), r19);
    }
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 52), r20);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 8), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 9), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 10), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 11), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r1 + 12), static_cast<uint8_t>(r25));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 16), r26);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 24), r29);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 28), r12);
    }
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 32), r10);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084F4A4;
    }
}

loc_8084F3D4:
{
}

loc_8084F3D8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8084F4A4;
    }
}

loc_8084F3DC:
{
    r3 = MemoryInline::FlatRead32(r11);
    r19 = MemoryInline::FlatRead32((r3 + 316));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_8084F3E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084F3F4;
    }
}

loc_8084F3EC:
{
    r19 = 0;
    goto loc_8084F448;
}

loc_8084F3F4:
{
    r18 = 0x809C0000u;
    r18 = (r18 + 7348);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084F444;
    }
}

loc_8084F400:
{
    r12 = MemoryInline::FlatRead32(r19);
    r3 = r19;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8084F414u;
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
    ctx->xer = xer;
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
    goto loc_8084F42C;
}

loc_8084F418:
{
}

loc_8084F41C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r18))) {
        goto loc_8084F428;
    }
}

loc_8084F420:
{
    r0 = 1;
    goto loc_8084F438;
}

loc_8084F428:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8084F42C:
{
}

loc_8084F430:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8084F418;
    }
}

loc_8084F434:
{
    r0 = 0;
}

loc_8084F438:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8084F43C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084F444;
    }
}

loc_8084F440:
{
    goto loc_8084F448;
}

loc_8084F444:
{
    r19 = 0;
}

loc_8084F448:
{
    r12 = MemoryInline::FlatRead32(r19);
    r3 = r19;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x8084F45Cu;
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
    ctx->xer = xer;
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
    r12 = MemoryInline::FlatRead32(r19);
    r3 = r19;
    r4 = 2070;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x8084F478u;
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
    ctx->xer = xer;
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
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 77;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8084F494u;
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
    ctx->xer = xer;
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
    r3 = r31;
    r4 = 0;
    // inline leaf 0x805BE430 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 592), r4);
    // end of inlined leaf 0x805BE430
    goto loc_8084F674;
}

loc_8084F4A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-100));
}

loc_8084F4A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084F4C0;
    }
}

loc_8084F4AC:
{
}

loc_8084F4B0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8084F4F4;
    }
}

loc_8084F4B4:
{
}

loc_8084F4B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_8084F4F4;
    }
}

loc_8084F4BC:
{
    goto loc_8084F510;
}

loc_8084F4C0:
{
    r3 = r30;
    r5 = r31;
    r4 = 65;
    ctx->lr = 0x8084F4D0u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80837F20u>(ctx);
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
    r4 = 0x809C0000u;
    r3 = 65;
    r18 = MemoryInline::FlatRead32((r4 + 9000));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80631C68u) && KnownTranslatedCpuCall<0x80631C68u>::kAvailable && !KnownTranslatedCpuCall<0x80631C68u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631C68u>()) {
        const auto state_free_result_80631C68_4E12 = func_80631C68_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631C68_4E12[0]);
        cr = static_cast<uint32_t>(state_free_result_80631C68_4E12[1]);
    } else {
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80631C68u>(ctx);
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
    }
    r4 = r3;
    r3 = r18;
    r5 = 0;
    ctx->lr = 0x8084F4F0u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x806F8DCCu>(ctx);
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
    goto loc_8084F674;
}

loc_8084F4F4:
{
    r3 = 0x809C0000u;
}

loc_8084F4FC:
{
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 0;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8084F50C;
    }
}

loc_8084F508:
{
    r0 = 2;
}

loc_8084F50C:
{
    MemoryInline::FlatWrite32((r3 + 5980), r0);
}

loc_8084F510:
{
    r9 = (r1 + 8);
    r10 = 0;
    r9_addr_1 = (r9 + r4);
    r8 = MemoryInline::FlatRead8(r9_addr_1);
    r7 = 0x809C0000u;
    goto loc_8084F548;
}

loc_8084F524:
{
    r5 = (r10 & 255);
    r6 = MemoryInline::FlatRead32((r7 + -10456));
    r3 = (r5 * 240);
    r10 = (r10 + 1);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r3 = (r6 + r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite32((r3 + 3112), r0);
}

loc_8084F548:
{
    r0 = (r10 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
}

loc_8084F550:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8084F524;
    }
}

loc_8084F554:
{
    r9_addr_2 = (r9 + r4);
    r3 = MemoryInline::FlatRead8(r9_addr_2);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
}

loc_8084F55C:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8084F638;
    }
}

loc_8084F560:
{
    r0 = (12 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r0 & 255);
}

loc_8084F56C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_8084F600;
    }
}

loc_8084F570:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8084F600;
    }
}

loc_8084F574:
{
    r0 = (11 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(11) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r7 = 0x809C0000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    r6 = 5;
    ctr = r0;
}

loc_8084F58C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(4))) {
        goto loc_8084F600;
    }
}

loc_8084F590:
{
    r0 = (r3 & 255);
    r3 = (r3 + 8);
    r8 = (r0 * 240);
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + -10456), 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r5 = (r0 + r8);
    MemoryInline::FlatWrite32((r5 + 3112), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r5 = (r0 + r8);
    MemoryInline::FlatWrite32((r5 + 3352), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r5 = (r0 + r8);
    MemoryInline::FlatWrite32((r5 + 3592), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r5 = (r0 + r8);
    MemoryInline::FlatWrite32((r5 + 3832), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r5 = (r0 + r8);
    MemoryInline::FlatWrite32((r5 + 4072), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r5 = (r0 + r8);
    MemoryInline::FlatWrite32((r5 + 4312), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r5 = (r0 + r8);
    MemoryInline::FlatWrite32((r5 + 4552), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r5 = (r0 + r8);
    MemoryInline::FlatWrite32((r5 + 4792), r6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8084F590;
    }
}

loc_8084F600:
{
    r5 = (r3 & 255);
    r7 = 5;
    r0 = (12 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r6 = 0x809C0000u;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
}

loc_8084F618:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8084F638;
    }
}

loc_8084F61C:
{
    r0 = (r3 & 255);
    r5 = MemoryInline::FlatRead32((r6 + -10456));
    r0 = (r0 * 240);
    r3 = (r3 + 1);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 3112), r7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8084F61C;
    }
}

loc_8084F638:
{
    r5 = 0x809C0000u;
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r3 = (r1 + 56);
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r3_addr_1 = (r3 + r7);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = (r1 + 36);
    MemoryInline::FlatWrite32((r4 + 5984), r0);
    r4 = (r1 + 16);
    r3_addr_2 = (r3 + r7);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = r30;
    r6 = MemoryInline::FlatRead32((r5 + -10456));
    r5 = r31;
    r4_addr_1 = (r4 + r7);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r6 + 5988), r0);
    ctx->lr = 0x8084F674u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80837720u>(ctx);
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
}

loc_8084F674:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 88));
            r19 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 96));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 104));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 108));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 112));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 116));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 120));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r1 + 128));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r1 + 136));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r1 + 140));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8084F298 func_8084F298 preserves=true fpr_mask=0x00000000
