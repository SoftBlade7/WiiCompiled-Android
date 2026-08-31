#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80858D60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r15_addr_0 = 0;
    uint32_t r15_addr_1 = 0;
    uint32_t r15_addr_2 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r16_rot_1 = 0;
    uint32_t r16_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
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

    goto loc_80858D60;

loc_80858D60:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -608), 0, 616u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -608), r1);
    r1 = (r1 + -608);
    r0 = ctx->lr;
    r4 = 1;
    r5 = 0;
    MemoryInline::WriteResolved32(guest_range_4, 612u, (r1 + 612), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 536u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_4, 536u, (r1 + 536), r14);
        MemoryInline::WriteResolved32(guest_range_4, 540u, (r1 + 540), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 544u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_4, 544u, (r1 + 544), r16);
        MemoryInline::WriteResolved32(guest_range_4, 548u, (r1 + 548), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 552u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_4, 552u, (r1 + 552), r18);
        MemoryInline::WriteResolved32(guest_range_4, 556u, (r1 + 556), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 560u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_4, 560u, (r1 + 560), r20);
        MemoryInline::WriteResolved32(guest_range_4, 564u, (r1 + 564), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 568u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_4, 568u, (r1 + 568), r22);
        MemoryInline::WriteResolved32(guest_range_4, 572u, (r1 + 572), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 576u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_4, 576u, (r1 + 576), r24);
        MemoryInline::WriteResolved32(guest_range_4, 580u, (r1 + 580), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 584u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_4, 584u, (r1 + 584), r26);
        MemoryInline::WriteResolved32(guest_range_4, 588u, (r1 + 588), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 592u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_4, 592u, (r1 + 592), r28);
        MemoryInline::WriteResolved32(guest_range_4, 596u, (r1 + 596), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 600u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_4, 600u, (r1 + 600), r30);
        MemoryInline::WriteResolved32(guest_range_4, 604u, (r1 + 604), r31);
    }
    r31 = 0x808B0000u;
    r28 = r3;
    r29 = 0;
    r31 = (r31 + -4784);
    r12 = MemoryInline::FlatRead32((r3 + 284));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    r3 = (r3 + 284);
    ctx->lr = 0x80858D9Cu;
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
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 116));
    ctr = r12;
    ctx->lr = 0x80858DB0u;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80858DB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80858DD0;
    }
}

loc_80858DB8:
{
    r3 = (r28 + 284);
    r5 = (r28 + 264);
    r4 = 2;
    r6 = 0;
    r7 = 0;
    // inline leaf 0x805F0D84 (7 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r3 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 28), r5);
    MemoryInline::FlatWrite8((r4 + 64), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 73), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x805F0D84
}

loc_80858DD0:
{
    r3 = r28;
    r4 = (r28 + 284);
    // inline leaf 0x80602474 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x80602474
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 108));
    ctr = r12;
    ctx->lr = 0x80858DF0u;
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
    MemoryInline::FlatWrite32((r28 + 84), r3);
    r3 = r28;
    r14 = 0;
    r12 = MemoryInline::FlatRead32(r28);
    r12 = MemoryInline::FlatRead32((r12 + 116));
    ctr = r12;
    ctx->lr = 0x80858E0Cu;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80858E10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80858E78;
    }
}

loc_80858E14:
{
    r3 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r4 = 1;
    r5 = 1;
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80858E34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(30))) {
        goto loc_80858E44;
    }
}

loc_80858E38:
{
}

loc_80858E3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(32))) {
        goto loc_80858E44;
    }
}

loc_80858E40:
{
    r5 = 0;
}

loc_80858E44:
{
}

loc_80858E48:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80858E58;
    }
}

loc_80858E4C:
{
}

loc_80858E50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(36))) {
        goto loc_80858E58;
    }
}

loc_80858E54:
{
    r4 = 0;
}

loc_80858E58:
{
}

loc_80858E5C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80858E6C;
    }
}

loc_80858E60:
{
}

loc_80858E64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(40))) {
        goto loc_80858E6C;
    }
}

loc_80858E68:
{
    r0 = 0;
}

loc_80858E6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80858E70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80858E78;
    }
}

loc_80858E74:
{
    r14 = 1;
}

loc_80858E78:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80858E8Cu;
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
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (0 - r3);
    r5 = (r0 | r3);
    r0 = MemoryInline::FlatRead32((r28 + 84));
    r4 = (r4 + -39);
    r3 = r28;
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r5 = (r5_rot_0 & 134217727);
    r4 = (r6 + r14);
    r0 = (r5 + r0);
    r4 = (r4 + r0);
    ctx->lr = 0x80858EC0u;
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
    InvokeDirectCpu<0x8060245Cu>(ctx);
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
    r14 = MemoryInline::FlatRead32((r28 + 84));
    r3 = (r14 * 596);
    r3 = (r3 + 16);
    ctx->lr = 0x80858ED0u;
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
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    r4 = 0x805C0000u;
    r5 = 0x805C0000u;
    r7 = r14;
    r6 = 596;
    r4 = (r4 + -11352);
    r5 = (r5 + -11088);
    ctx->lr = 0x80858EECu;
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
    InvokeDirectCpu<0x80020E34u>(ctx);
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
    r15 = 0x808E0000u;
    MemoryInline::FlatWrite32((r28 + 72), r3);
    r15 = (r15 + -22616);
    r19 = 0;
    r17 = 0;
    r18 = 0;
    r14 = 0x808B0000u;
    goto loc_80858FC0;
}

loc_80858F0C:
{
    r0 = MemoryInline::FlatRead32((r28 + 72));
    r4 = r29;
    r3 = r28;
    r6 = 0;
    r5 = (r0 + r17);
    r29 = (r29 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x80858F3Cu;
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
    r12 = MemoryInline::FlatRead32(r28);
    r3_addr_2 = (r3 + r18);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    r16_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r16 = (r16_rot_2 & -4);
    ctr = r12;
    ctx->lr = 0x80858F58u;
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
    r0 = MemoryInline::FlatRead32((r28 + 72));
    r5 = r3;
    r15_addr_2 = (r15 + r16);
    r6 = MemoryInline::FlatRead32(r15_addr_2);
    r4 = (r14 + -3724);
    r3 = (r0 + r17);
    r7 = 31;
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x80858F7Cu;
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
    InvokeDirectCpu<0x805BD518u>(ctx);
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
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x80858F90u;
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
    r0 = MemoryInline::FlatRead32((r28 + 72));
    r4 = (r28 + 244);
    r3_addr_3 = (r3 + r18);
    r6 = MemoryInline::FlatRead32(r3_addr_3);
    r5 = 0;
    r3 = (r0 + r17);
    MemoryInline::FlatWrite32((r3 + 576), r6);
    r0 = MemoryInline::FlatRead32((r28 + 72));
    r3 = (r0 + r17);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x805BDAC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r17 = (r17 + 596);
    r18 = (r18 + 4);
    r19 = (r19 + 1);
}

loc_80858FC0:
{
    r0 = MemoryInline::FlatRead32((r28 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(r0));
}

loc_80858FC8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80858F0C;
    }
}

loc_80858FCC:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(39));
}

loc_80858FD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80859030;
    }
}

loc_80858FD8:
{
    r3 = 596;
    ctx->lr = 0x80858FE0u;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80858FE4:
{
    r5 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80858FF4;
    }
}

loc_80858FEC:
{
    ctx->lr = 0x80858FF0u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8064DB68u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r5 = r3;
}

loc_80858FF4:
{
    MemoryInline::FlatWrite32((r28 + 80), r5);
    r4 = r29;
    r3 = r28;
    r6 = 0;
    r29 = (r29 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r3 = MemoryInline::FlatRead32((r28 + 80));
    ctx->lr = 0x80859014u;
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
    InvokeDirectCpu<0x8064DBFCu>(ctx);
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
    r3 = MemoryInline::FlatRead32((r28 + 80));
    r0 = 28;
    r4 = (r28 + 244);
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 576), r0);
    r3 = MemoryInline::FlatRead32((r28 + 80));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x805BDAC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_80859030:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 116));
    ctr = r12;
    ctx->lr = 0x80859044u;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80859048:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80859870;
    }
}

loc_8085904C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_80859060:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085907C;
    }
}

loc_80859064:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_80859068:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085907C;
    }
}

loc_8085906C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(36));
}

loc_80859070:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085907C;
    }
}

loc_80859074:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(40));
}

loc_80859078:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80859870;
    }
}

loc_8085907C:
{
    r3 = 372;
    ctx->lr = 0x80859084u;
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
}

loc_80859088:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80859098;
    }
}

loc_80859090:
{
    ctx->lr = 0x80859094u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8063D798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r30 = r3;
}

loc_80859098:
{
    r4 = r29;
    r3 = r28;
    r5 = r30;
    r6 = 0;
    r29 = (r29 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r14 = (r31 + 928);
    r3 = (r31 + 960);
    guest_range_0 = MemoryInline::ResolveRangeHost((r14 + 1), 0, 31u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r14 + 21));
    MemoryInline::FlatWriteRam32((r1 + 216), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r14 + 22));
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r14 + 23));
    MemoryInline::FlatWriteRam32((r1 + 224), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r14 + 24));
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r14 + 25));
    MemoryInline::FlatWriteRam32((r1 + 232), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r14 + 26));
    MemoryInline::FlatWriteRam32((r1 + 236), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r14 + 27));
    MemoryInline::FlatWriteRam32((r1 + 240), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r14 + 28));
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r14 + 29));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 31u, true, false);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 1));
    MemoryInline::FlatWriteRam32((r1 + 248), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r14 + 30));
    MemoryInline::FlatWriteRam32((r1 + 524), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 2));
    MemoryInline::FlatWriteRam32((r1 + 252), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r14 + 31));
    MemoryInline::FlatWriteRam32((r1 + 256), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 3));
    MemoryInline::FlatWriteRam32((r1 + 260), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 4));
    MemoryInline::FlatWriteRam8((r1 + 135), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 524));
    MemoryInline::FlatWriteRam32((r1 + 264), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 5));
    MemoryInline::FlatWriteRam8((r1 + 73), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 256));
    MemoryInline::FlatWriteRam32((r1 + 268), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 6));
    MemoryInline::FlatWriteRam8((r1 + 74), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 260));
    MemoryInline::FlatWriteRam32((r1 + 272), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 7));
    MemoryInline::FlatWriteRam8((r1 + 75), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 264));
    MemoryInline::FlatWriteRam32((r1 + 276), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 8));
    MemoryInline::FlatWriteRam8((r1 + 76), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 268));
    MemoryInline::FlatWriteRam32((r1 + 280), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 9));
    MemoryInline::FlatWriteRam8((r1 + 77), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 272));
    MemoryInline::FlatWriteRam32((r1 + 284), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r3 + 10));
    MemoryInline::FlatWriteRam8((r1 + 78), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 276));
    MemoryInline::FlatWriteRam32((r1 + 288), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r3 + 11));
    MemoryInline::FlatWriteRam8((r1 + 79), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 280));
    MemoryInline::FlatWriteRam32((r1 + 292), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r3 + 12));
    MemoryInline::FlatWriteRam8((r1 + 80), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 284));
    MemoryInline::FlatWriteRam32((r1 + 296), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r3 + 13));
    MemoryInline::FlatWriteRam8((r1 + 81), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 288));
    MemoryInline::FlatWriteRam32((r1 + 300), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r3 + 14));
    MemoryInline::FlatWriteRam8((r1 + 82), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 292));
    MemoryInline::FlatWriteRam32((r1 + 304), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r3 + 15));
    MemoryInline::FlatWriteRam8((r1 + 83), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 296));
    MemoryInline::FlatWriteRam32((r1 + 308), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r3 + 16));
    MemoryInline::FlatWriteRam8((r1 + 84), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 300));
    MemoryInline::FlatWriteRam32((r1 + 312), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r3 + 17));
    MemoryInline::FlatWriteRam8((r1 + 85), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 304));
    MemoryInline::FlatWriteRam32((r1 + 316), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r3 + 18));
    MemoryInline::FlatWriteRam8((r1 + 86), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 308));
    MemoryInline::FlatWriteRam32((r1 + 320), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r3 + 19));
    MemoryInline::FlatWriteRam8((r1 + 87), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 312));
    MemoryInline::FlatWriteRam32((r1 + 324), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r3 + 20));
    MemoryInline::FlatWriteRam8((r1 + 88), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 316));
    MemoryInline::FlatWriteRam32((r1 + 328), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r3 + 21));
    MemoryInline::FlatWriteRam8((r1 + 89), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 320));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r14 + 20));
    MemoryInline::FlatWriteRam32((r1 + 332), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r3 + 22));
    MemoryInline::FlatWriteRam8((r1 + 90), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 324));
    MemoryInline::FlatWriteRam32((r1 + 336), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r3 + 23));
    MemoryInline::FlatWriteRam8((r1 + 124), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 216));
    MemoryInline::FlatWriteRam8((r1 + 91), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 328));
    MemoryInline::FlatWriteRam32((r1 + 340), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r3 + 24));
    MemoryInline::FlatWriteRam8((r1 + 125), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 220));
    MemoryInline::FlatWriteRam8((r1 + 92), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 332));
    MemoryInline::FlatWriteRam32((r1 + 344), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r3 + 25));
    MemoryInline::FlatWriteRam8((r1 + 126), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 224));
    MemoryInline::FlatWriteRam8((r1 + 93), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 336));
    MemoryInline::FlatWriteRam32((r1 + 348), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r3 + 26));
    MemoryInline::FlatWriteRam8((r1 + 127), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 228));
    MemoryInline::FlatWriteRam8((r1 + 94), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 340));
    MemoryInline::FlatWriteRam32((r1 + 352), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r3 + 27));
    MemoryInline::FlatWriteRam8((r1 + 128), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 232));
    MemoryInline::FlatWriteRam8((r1 + 95), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 344));
    MemoryInline::FlatWriteRam32((r1 + 356), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 27u, (r3 + 28));
    MemoryInline::FlatWriteRam8((r1 + 129), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 236));
    MemoryInline::FlatWriteRam8((r1 + 96), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 348));
    MemoryInline::FlatWriteRam32((r1 + 360), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r3 + 29));
    MemoryInline::FlatWriteRam8((r1 + 130), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 240));
    MemoryInline::FlatWriteRam8((r1 + 97), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 352));
    MemoryInline::FlatWriteRam32((r1 + 364), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 29u, (r3 + 30));
    MemoryInline::FlatWriteRam8((r1 + 131), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 244));
    MemoryInline::FlatWriteRam8((r1 + 98), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 356));
    MemoryInline::FlatWriteRam8((r1 + 132), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 248));
    MemoryInline::FlatWriteRam8((r1 + 99), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 360));
    r16 = MemoryInline::FlatRead8((r31 + 928));
    r17 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r14 + 1));
    r18 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r14 + 2));
    r19 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r14 + 3));
    r20 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r14 + 4));
    r21 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r14 + 5));
    r22 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r14 + 6));
    r23 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r14 + 7));
    r24 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r14 + 8));
    r25 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r14 + 9));
    r26 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r14 + 10));
    r27 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r14 + 11));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r14 + 12));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r14 + 13));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r14 + 14));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r14 + 15));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r14 + 16));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r14 + 17));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r14 + 18));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r14 + 19));
    r14 = MemoryInline::FlatRead8((r31 + 960));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 30u, (r3 + 31));
    MemoryInline::FlatWriteRam8((r1 + 133), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 252));
    MemoryInline::FlatWriteRam8((r1 + 100), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 364));
    MemoryInline::FlatWriteRam8((r1 + 101), static_cast<uint8_t>(r0));
    r0 = r15;
    MemoryInline::FlatWriteRam32((r1 + 368), r15);
    MemoryInline::FlatWriteRam8((r1 + 104), static_cast<uint8_t>(r16));
    MemoryInline::FlatWriteRam8((r1 + 105), static_cast<uint8_t>(r17));
    MemoryInline::FlatWriteRam8((r1 + 106), static_cast<uint8_t>(r18));
    MemoryInline::FlatWriteRam8((r1 + 107), static_cast<uint8_t>(r19));
    MemoryInline::FlatWriteRam8((r1 + 108), static_cast<uint8_t>(r20));
    MemoryInline::FlatWriteRam8((r1 + 109), static_cast<uint8_t>(r21));
    MemoryInline::FlatWriteRam8((r1 + 110), static_cast<uint8_t>(r22));
    MemoryInline::FlatWriteRam8((r1 + 111), static_cast<uint8_t>(r23));
    MemoryInline::FlatWriteRam8((r1 + 112), static_cast<uint8_t>(r24));
    MemoryInline::FlatWriteRam8((r1 + 113), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRam8((r1 + 114), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 115), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r1 + 116), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 117), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 118), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 119), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 120), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 121), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 122), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 123), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 134), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 72), static_cast<uint8_t>(r14));
    MemoryInline::FlatWriteRam8((r1 + 102), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 103), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r31 + 992));
    r3 = (r31 + 992);
    MemoryInline::FlatWriteRam32((r1 + 372), r0);
    r25 = (r31 + 1024);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 31u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r3 + 1));
    MemoryInline::FlatWriteRam32((r1 + 376), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r3 + 2));
    MemoryInline::FlatWriteRam32((r1 + 380), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r3 + 3));
    MemoryInline::FlatWriteRam32((r1 + 384), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 388), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r3 + 5));
    MemoryInline::FlatWriteRam32((r1 + 392), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r3 + 6));
    MemoryInline::FlatWriteRam32((r1 + 396), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r3 + 7));
    MemoryInline::FlatWriteRam32((r1 + 400), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 404), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r3 + 9));
    MemoryInline::FlatWriteRam32((r1 + 408), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r3 + 10));
    MemoryInline::FlatWriteRam32((r1 + 412), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 10u, (r3 + 11));
    MemoryInline::FlatWriteRam32((r1 + 416), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r3 + 12));
    MemoryInline::FlatWriteRam32((r1 + 420), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r3 + 13));
    MemoryInline::FlatWriteRam32((r1 + 424), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 13u, (r3 + 14));
    MemoryInline::FlatWriteRam32((r1 + 428), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 14u, (r3 + 15));
    MemoryInline::FlatWriteRam32((r1 + 432), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 15u, (r3 + 16));
    MemoryInline::FlatWriteRam32((r1 + 436), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 16u, (r3 + 17));
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 17u, (r3 + 18));
    MemoryInline::FlatWriteRam32((r1 + 444), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 18u, (r3 + 19));
    r27 = MemoryInline::FlatRead8((r31 + 1024));
    MemoryInline::FlatWriteRam32((r1 + 448), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 19u, (r3 + 20));
    MemoryInline::FlatWriteRam32((r1 + 452), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 20u, (r3 + 21));
    MemoryInline::FlatWriteRam32((r1 + 456), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 21u, (r3 + 22));
    MemoryInline::FlatWriteRam32((r1 + 460), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 22u, (r3 + 23));
    MemoryInline::FlatWriteRam32((r1 + 464), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 23u, (r3 + 24));
    MemoryInline::FlatWriteRam32((r1 + 468), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 24u, (r3 + 25));
    MemoryInline::FlatWriteRam32((r1 + 472), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r3 + 26));
    MemoryInline::FlatWriteRam32((r1 + 476), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 26u, (r3 + 27));
    MemoryInline::FlatWriteRam32((r1 + 480), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 27u, (r3 + 28));
    MemoryInline::FlatWriteRam32((r1 + 484), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 28u, (r3 + 29));
    MemoryInline::FlatWriteRam32((r1 + 488), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 29u, (r3 + 30));
    MemoryInline::FlatWriteRam32((r1 + 492), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 30u, (r3 + 31));
    MemoryInline::FlatWriteRam32((r1 + 496), r0);
    guest_range_3 = MemoryInline::ResolveRangeHost((r25 + 1), 0, 31u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 23u, (r25 + 24));
    MemoryInline::FlatWriteRam32((r1 + 528), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 24u, (r25 + 25));
    MemoryInline::FlatWriteRam32((r1 + 500), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 25u, (r25 + 26));
    MemoryInline::FlatWriteRam32((r1 + 504), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 26u, (r25 + 27));
    MemoryInline::FlatWriteRam32((r1 + 508), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 27u, (r25 + 28));
    MemoryInline::FlatWriteRam32((r1 + 512), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 28u, (r25 + 29));
    MemoryInline::FlatWriteRam32((r1 + 516), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 29u, (r25 + 30));
    r26 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r25 + 1));
    r24 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r25 + 2));
    r23 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r25 + 3));
    r22 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r25 + 4));
    r21 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r25 + 5));
    r20 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r25 + 6));
    r19 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r25 + 7));
    r18 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r25 + 8));
    r17 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r25 + 9));
    r16 = MemoryInline::ReadResolved8(guest_range_3, 9u, (r25 + 10));
    r15 = MemoryInline::ReadResolved8(guest_range_3, 10u, (r25 + 11));
    r14 = MemoryInline::ReadResolved8(guest_range_3, 11u, (r25 + 12));
    r12 = MemoryInline::ReadResolved8(guest_range_3, 12u, (r25 + 13));
    r11 = MemoryInline::ReadResolved8(guest_range_3, 13u, (r25 + 14));
    r10 = MemoryInline::ReadResolved8(guest_range_3, 14u, (r25 + 15));
    r9 = MemoryInline::ReadResolved8(guest_range_3, 15u, (r25 + 16));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 16u, (r25 + 17));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 17u, (r25 + 18));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 18u, (r25 + 19));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 19u, (r25 + 20));
    r4 = MemoryInline::ReadResolved8(guest_range_3, 20u, (r25 + 21));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 21u, (r25 + 22));
    r31 = MemoryInline::ReadResolved8(guest_range_3, 22u, (r25 + 23));
    MemoryInline::FlatWriteRam32((r1 + 520), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 30u, (r25 + 31));
    r25 = MemoryInline::FlatRead32((r1 + 372));
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 376));
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 380));
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 384));
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 388));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 392));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 396));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 400));
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 404));
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 408));
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 412));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 416));
    MemoryInline::FlatWriteRam8((r1 + 51), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 420));
    MemoryInline::FlatWriteRam8((r1 + 52), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 424));
    MemoryInline::FlatWriteRam8((r1 + 53), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 428));
    MemoryInline::FlatWriteRam8((r1 + 54), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 432));
    MemoryInline::FlatWriteRam8((r1 + 55), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 436));
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 440));
    MemoryInline::FlatWriteRam8((r1 + 57), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 444));
    MemoryInline::FlatWriteRam8((r1 + 58), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 448));
    MemoryInline::FlatWriteRam8((r1 + 59), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 452));
    MemoryInline::FlatWriteRam8((r1 + 60), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 456));
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 460));
    MemoryInline::FlatWriteRam8((r1 + 62), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 464));
    MemoryInline::FlatWriteRam8((r1 + 63), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 468));
    MemoryInline::FlatWriteRam8((r1 + 64), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 472));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 528));
    MemoryInline::FlatWriteRam8((r1 + 65), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 476));
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 500));
    MemoryInline::FlatWriteRam8((r1 + 66), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 480));
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 504));
    MemoryInline::FlatWriteRam8((r1 + 67), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 484));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 508));
    MemoryInline::FlatWriteRam8((r1 + 68), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 488));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 512));
    MemoryInline::FlatWriteRam8((r1 + 69), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 492));
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 516));
    MemoryInline::FlatWriteRam8((r1 + 70), static_cast<uint8_t>(r25));
    r25 = MemoryInline::FlatRead32((r1 + 496));
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 520));
    MemoryInline::FlatWriteRam8((r1 + 71), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r24));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r23));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r22));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r21));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r20));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r19));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r18));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r17));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r16));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r15));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r14));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r0));
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl2_0x8061B358:
{
}

loc_inl2_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl2_0x8061B368;
    }
}

loc_inl2_0x8061B360:
{
    r3 = 0;
    goto loc_inl2_cont_8061B358;
}

loc_inl2_0x8061B368:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(17));
}

loc_80859754:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80859774;
    }
}

loc_80859758:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(18));
}

loc_8085975C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085977C;
    }
}

loc_80859760:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(19));
}

loc_80859764:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80859784;
    }
}

loc_80859768:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(36));
}

loc_8085976C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085978C;
    }
}

loc_80859770:
{
    goto loc_80859794;
}

loc_80859774:
{
    r15 = (r1 + 104);
    goto loc_80859798;
}

loc_8085977C:
{
    r15 = (r1 + 72);
    goto loc_80859798;
}

loc_80859784:
{
    r15 = (r1 + 40);
    goto loc_80859798;
}

loc_8085978C:
{
    r15 = (r1 + 8);
    goto loc_80859798;
}

loc_80859794:
{
    r15 = (r1 + 104);
}

loc_80859798:
{
    r4 = r30;
    r3 = (r1 + 176);
    // inline leaf 0x805C2C18 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x805C2C18
    r14 = 0x808B0000u;
    r5 = r15;
    r14 = (r14 + -3724);
    r6 = r15;
    r3 = (r1 + 176);
    r7 = 0;
    r4 = (r14 + 7);
    ctx->lr = 0x808597C4u;
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
    InvokeDirectCpu<0x805C2C60u>(ctx);
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
    r3 = r30;
    r4 = (r14 + 18);
    r5 = 1500;
    r6 = 0;
    ctx->lr = 0x808597D8u;
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
    InvokeDirectCpu<0x8063DCBCu>(ctx);
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
    r3 = r30;
    r4 = (r14 + 23);
    r5 = 1501;
    r6 = 0;
    ctx->lr = 0x808597ECu;
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
    InvokeDirectCpu<0x8063DCBCu>(ctx);
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
    r3 = r30;
    r4 = (r14 + 30);
    r5 = 1502;
    r6 = 0;
    ctx->lr = 0x80859800u;
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
    InvokeDirectCpu<0x8063DCBCu>(ctx);
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
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80859810:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8085981C;
    }
}

loc_80859814:
{
    r0 = MemoryInline::FlatRead8((r3 + 81));
    goto loc_80859820;
}

loc_8085981C:
{
    r0 = 0;
}

loc_80859820:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80859824:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80859848;
    }
}

loc_80859828:
{
    r4 = 0x808B0000u;
    r3 = r30;
    r4 = (r4 + -3724);
    r5 = 1504;
    r4 = (r4 + 36);
    r6 = 0;
    ctx->lr = 0x80859844u;
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
    InvokeDirectCpu<0x8063DCBCu>(ctx);
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
    goto loc_80859864;
}

loc_80859848:
{
    r4 = 0x808B0000u;
    r3 = r30;
    r4 = (r4 + -3724);
    r5 = 1503;
    r4 = (r4 + 42);
    r6 = 0;
    ctx->lr = 0x80859864u;
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
    InvokeDirectCpu<0x8063DCBCu>(ctx);
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
}

loc_80859864:
{
    r3 = (r1 + 176);
    r4 = -1;
    ctx->lr = 0x80859870u;
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
    InvokeDirectCpu<0x805C2C20u>(ctx);
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
}

loc_80859870:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80859884u;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80859888:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808599DC;
    }
}

loc_8085988C:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(39));
}

loc_80859894:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80859950;
    }
}

loc_80859898:
{
    r3 = 372;
    ctx->lr = 0x808598A0u;
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
}

loc_808598A4:
{
    r5 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808598B4;
    }
}

loc_808598AC:
{
    ctx->lr = 0x808598B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805F9900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r5 = r3;
}

loc_808598B4:
{
    MemoryInline::FlatWrite32((r28 + 76), r5);
    r3 = r28;
    r4 = r29;
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r15 = MemoryInline::FlatRead32((r28 + 76));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(0));
}

loc_808598D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808598DC;
    }
}

loc_808598D4:
{
    r15 = 0;
    goto loc_80859930;
}

loc_808598DC:
{
    r14 = 0x809C0000u;
    r14 = (r14 + 7368);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085992C;
    }
}

loc_808598E8:
{
    r12 = MemoryInline::FlatRead32(r15);
    r3 = r15;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x808598FCu;
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
    goto loc_80859914;
}

loc_80859900:
{
}

loc_80859904:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r14))) {
        goto loc_80859910;
    }
}

loc_80859908:
{
    r0 = 1;
    goto loc_80859920;
}

loc_80859910:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80859914:
{
}

loc_80859918:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80859900;
    }
}

loc_8085991C:
{
    r0 = 0;
}

loc_80859920:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80859924:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085992C;
    }
}

loc_80859928:
{
    goto loc_80859930;
}

loc_8085992C:
{
    r15 = 0;
}

loc_80859930:
{
    r6 = 0x808B0000u;
    r3 = r15;
    r6 = (r6 + -3724);
    r4 = (r6 + 48);
    r5 = (r6 + 56);
    r6 = (r6 + 76);
    ctx->lr = 0x8085994Cu;
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
    InvokeDirectCpu<0x805F9994u>(ctx);
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
    goto loc_808599B8;
}

loc_80859950:
{
    r3 = 372;
    ctx->lr = 0x80859958u;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8085995C:
{
    r5 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085996C;
    }
}

loc_80859964:
{
    ctx->lr = 0x80859968u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8063D798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r5 = r3;
}

loc_8085996C:
{
    MemoryInline::FlatWrite32((r28 + 76), r5);
    r3 = r28;
    r4 = r29;
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r4 = MemoryInline::FlatRead32((r28 + 76));
    r3 = (r1 + 136);
    // inline leaf 0x805C2C18 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x805C2C18
    r6 = 0x808B0000u;
    r3 = (r1 + 136);
    r6 = (r6 + -3724);
    r7 = 0;
    r4 = (r6 + 88);
    r5 = (r6 + 99);
    r6 = (r6 + 117);
    ctx->lr = 0x808599ACu;
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
    InvokeDirectCpu<0x805C2C60u>(ctx);
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
    r3 = (r1 + 136);
    r4 = -1;
    ctx->lr = 0x808599B8u;
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
    InvokeDirectCpu<0x805C2C20u>(ctx);
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
}

loc_808599B8:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x808599CCu;
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
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r28 + 76));
    r5 = 0;
    ctx->lr = 0x808599DCu;
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
    InvokeDirectCpu<0x8063DDB4u>(ctx);
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
}

loc_808599DC:
{
    r3 = MemoryInline::FlatRead32((r28 + 72));
    r4 = 0;
    ctx->lr = 0x808599E8u;
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
    InvokeDirectCpu<0x805BDAF0u>(ctx);
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
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(49));
}

loc_808599FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80859A08;
    }
}

loc_80859A00:
{
    r3 = MemoryInline::FlatRead32(r4);
    ctx->lr = 0x80859A08u;
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
    InvokeDirectCpu<0x80622CB8u>(ctx);
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
}

loc_80859A08:
{
    r3 = r28;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x80602D20 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 60), r4);
    MemoryInline::FlatWrite32((r3 + 64), r5);
    // end of inlined leaf 0x80602D20
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 536), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 536));
            r15 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 540));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 544));
            r17 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 548));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r1 + 552));
            r19 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r1 + 556));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r1 + 560));
            r21 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r1 + 564));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r1 + 568));
            r23 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r1 + 572));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r1 + 576));
            r25 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r1 + 580));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r1 + 584));
            r27 = MemoryInline::ReadResolved32(guest_range_5, 52u, (r1 + 588));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r1 + 592));
            r29 = MemoryInline::ReadResolved32(guest_range_5, 60u, (r1 + 596));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_5, 64u, (r1 + 600));
            r31 = MemoryInline::ReadResolved32(guest_range_5, 68u, (r1 + 604));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_5, 76u, (r1 + 612));
    ctx->lr = r0;
    r1 = (r1 + 608);
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
// RECOMP_REGISTRATION base 0x80858D60 func_80858D60 preserves=true fpr_mask=0x00000000
