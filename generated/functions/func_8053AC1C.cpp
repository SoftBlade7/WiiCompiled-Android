#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053AC1C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_2 = 0;
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
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
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

    goto loc_8053AC1C;

loc_8053AC1C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 0x80890000u;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r29 = r3;
    r30 = r5;
    r25 = r4;
    r28 = (r1 + 8);
    r5 = 0;
    r27 = 0;
    r6 = (r6 + 632);
    r3 = MemoryInline::FlatRead8(r6);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 8), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r1 + 9), static_cast<uint8_t>(r0));
}

loc_8053AC58:
{
    r12 = MemoryInline::FlatRead32((r29 + 280));
    r3 = (r29 + 280);
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053AC70u;
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
    r27 = (r27 + 1);
    r0 = MemoryInline::FlatRead8((r29 + 284));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(2));
}

loc_8053AC7C:
{
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r5 = r3;
    r28 = (r28 + 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053AC58;
    }
}

loc_8053AC8C:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r25));
}

loc_8053AC94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053B094;
    }
}

loc_8053AC98:
{
    r6 = (r1 + 8);
    r7 = 0;
    r0 = 16;
}

loc_8053ACA4:
{
    r3 = MemoryInline::FlatRead8(r6);
}

loc_8053ACAC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(12))) {
        goto loc_8053ADD8;
    }
}

loc_8053ACB0:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r3 = (r29 + r3);
    r4 = MemoryInline::FlatRead32((r3 + 68));
    r3 = MemoryInline::FlatRead32((r3 + 116));
    r10 = (r4 + -4);
    r11 = (r3 + -4);
    ctr = r0;
}

loc_8053ACCC:
{
    r9 = MemoryInline::FlatRead32((r10 + 4));
    r10 = (r10 + 8);
    r8 = MemoryInline::FlatRead32(r10);
    MemoryInline::FlatWrite32((r11 + 4), r9);
    MemoryInline::FlatWrite32((r11 + 8), r8);
    r11 = (r11 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053ACCC;
    }
}

loc_8053ACE0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 128), 0, 32u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r4 + 128));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 128), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r3 + 128), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r4 + 129));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 129), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r4 + 130));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 130), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r4 + 131));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 131), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r4 + 132));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 132), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r4 + 133));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 133), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 134));
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r3 + 134), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r4 + 137));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r4 + 136));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r3 + 136), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r3 + 137), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r4 + 139));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r4 + 138));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r3 + 138), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r3 + 139), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r4 + 141));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r4 + 140));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r3 + 140), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r3 + 141), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r4 + 143));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r4 + 142));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r3 + 142), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r3 + 143), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r4 + 144));
    MemoryInline::WriteResolved8(guest_range_2, 16u, (r3 + 144), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r4 + 145));
    MemoryInline::WriteResolved8(guest_range_2, 17u, (r3 + 145), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r4 + 146));
    MemoryInline::WriteResolved8(guest_range_2, 18u, (r3 + 146), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r4 + 147));
    MemoryInline::WriteResolved8(guest_range_2, 19u, (r3 + 147), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r4 + 149));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r4 + 148));
    MemoryInline::WriteResolved8(guest_range_2, 20u, (r3 + 148), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 21u, (r3 + 149), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r4 + 151));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r4 + 150));
    MemoryInline::WriteResolved8(guest_range_2, 22u, (r3 + 150), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 23u, (r3 + 151), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r4 + 153));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r4 + 152));
    MemoryInline::WriteResolved8(guest_range_2, 24u, (r3 + 152), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 25u, (r3 + 153), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 27u, (r4 + 155));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r4 + 154));
    MemoryInline::WriteResolved8(guest_range_2, 26u, (r3 + 154), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 27u, (r3 + 155), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r4 + 156));
    MemoryInline::WriteResolved8(guest_range_2, 28u, (r3 + 156), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 29u, (r4 + 157));
    MemoryInline::WriteResolved8(guest_range_2, 29u, (r3 + 157), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 30u, (r4 + 158));
    MemoryInline::WriteResolved8(guest_range_2, 30u, (r3 + 158), static_cast<uint8_t>(r8));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 31u, (r4 + 159));
    MemoryInline::WriteResolved8(guest_range_2, 31u, (r3 + 159), static_cast<uint8_t>(r4));
}

loc_8053ADD8:
{
    r7 = (r7 + 1);
    r6 = (r6 + 1);
}

loc_8053ADE4:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(2))) {
        goto loc_8053ACA4;
    }
}

loc_8053ADE8:
{
    r28 = (r1 + 8);
    r27 = 0;
}

loc_8053ADF0:
{
    r0 = MemoryInline::FlatRead8(r28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_8053ADF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053AE3C;
    }
}

loc_8053ADFC:
{
    r12 = MemoryInline::FlatRead32((r29 + 288));
    r3 = (r29 + 288);
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053AE14u;
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
    r4 = MemoryInline::FlatRead8((r29 + 292));
    r5 = r3;
}

loc_8053AE20:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(99))) {
        goto loc_8053AE28;
    }
}

loc_8053AE24:
{
    r4 = 99;
}

loc_8053AE28:
{
    r0 = MemoryInline::FlatRead8(r28);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r29 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    MemoryInline::FlatWrite8((r3 + 133), static_cast<uint8_t>(r4));
}

loc_8053AE3C:
{
    r27 = (r27 + 1);
    r28 = (r28 + 1);
}

loc_8053AE48:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(2))) {
        goto loc_8053ADF0;
    }
}

loc_8053AE4C:
{
    r31 = 0;
    r28 = 0x809C0000u;
    goto loc_8053AED8;
}

loc_8053AE58:
{
    r12 = MemoryInline::FlatRead32((r29 + 352));
    r3 = (r29 + 352);
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053AE70u;
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
    r12 = MemoryInline::FlatRead32((r29 + 360));
    r5 = r3;
    r3 = (r29 + 360);
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053AE8Cu;
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
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r5 = r3;
    r6 = MemoryInline::FlatRead8((r29 + 356));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r29 + r0);
    r4 = (0 - r6);
    r0 = MemoryInline::FlatRead32((r3 + 68));
    r3 = (r4 | r6);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r3 = (r0 + r31);
    MemoryInline::FlatWrite8((r3 + 148), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r4 = MemoryInline::FlatRead8((r29 + 364));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 68));
    r3 = (r0 + r31);
    r31 = (r31 + 1);
    MemoryInline::FlatWrite8((r3 + 136), static_cast<uint8_t>(r4));
}

loc_8053AED8:
{
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_8053AEE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053AE58;
    }
}

loc_8053AEE8:
{
    r12 = MemoryInline::FlatRead32((r29 + 344));
    r3 = (r29 + 344);
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053AF00u;
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
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r5 = r3;
}

loc_8053AF0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8053AF24;
    }
}

loc_8053AF10:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
    r4 = MemoryInline::FlatRead8((r29 + 348));
    r3 = (r29 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    MemoryInline::FlatWrite16((r3 + 134), static_cast<uint16_t>(r4));
}

loc_8053AF24:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
}

loc_8053AF2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8053AF44;
    }
}

loc_8053AF30:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & 1020);
    r4 = MemoryInline::FlatRead8((r29 + 348));
    r3 = (r29 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    MemoryInline::FlatWrite16((r3 + 134), static_cast<uint16_t>(r4));
}

loc_8053AF44:
{
    r28 = (r1 + 8);
    r27 = 0;
}

loc_8053AF4C:
{
    r0 = MemoryInline::FlatRead8(r28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_8053AF54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053AFA0;
    }
}

loc_8053AF58:
{
    r31 = 0;
}

loc_8053AF5C:
{
    r12 = MemoryInline::FlatRead32((r29 + 296));
    r3 = (r29 + 296);
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053AF74u;
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
    r0 = MemoryInline::FlatRead8(r28);
    r5 = r3;
    r4 = MemoryInline::FlatRead8((r29 + 300));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 68));
    r3 = (r0 + r31);
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(5));
}

loc_8053AF98:
{
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r4));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053AF5C;
    }
}

loc_8053AFA0:
{
    r27 = (r27 + 1);
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(2));
}

loc_8053AFAC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053AF4C;
    }
}

loc_8053AFB0:
{
    r12 = MemoryInline::FlatRead32((r29 + 304));
    r3 = (r29 + 304);
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053AFC8u;
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
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r27 = r3;
    r26 = MemoryInline::FlatRead16((r29 + 308));
    r25 = 0;
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r31 = 1;
    r28 = (r29 + r0);
}

loc_8053AFE4:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r25));
    r0 = (r26 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053B088;
    }
}

loc_8053AFF0:
{
    r12 = MemoryInline::FlatRead32((r29 + 312));
    r3 = (r29 + 312);
    r4 = r30;
    r5 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053B00Cu;
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
    r12 = MemoryInline::FlatRead32((r29 + 320));
    r5 = r3;
    r3 = (r29 + 320);
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053B028u;
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
    r12 = MemoryInline::FlatRead32((r29 + 328));
    r5 = r3;
    r3 = (r29 + 328);
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053B044u;
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
    r12 = MemoryInline::FlatRead32((r29 + 336));
    r5 = r3;
    r3 = (r29 + 336);
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053B060u;
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
    r9 = MemoryInline::FlatRead8((r1 + 8));
    r27 = r3;
    r4 = MemoryInline::FlatRead32((r28 + 68));
    r3 = r29;
    r5 = MemoryInline::FlatRead32((r29 + 316));
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r6 = MemoryInline::FlatRead16((r29 + 324));
    r7 = MemoryInline::FlatRead8((r29 + 332));
    r8 = MemoryInline::FlatRead8((r29 + 340));
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8053AA20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8053B088:
{
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(7));
}

loc_8053B090:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053AFE4;
    }
}

loc_8053B094:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 52));
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
// RECOMP_REGISTRATION base 0x8053AC1C func_8053AC1C preserves=true fpr_mask=0x00000000
