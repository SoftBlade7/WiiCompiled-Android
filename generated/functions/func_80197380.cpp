#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80197380(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_addic_src_1 = 0;
    uint32_t r0_addic_src_2 = 0;
    uint32_t r0_addic_src_3 = 0;
    uint32_t r0_addic_src_4 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r15_addic_src_0 = 0;
    uint32_t r15_addic_src_1 = 0;
    uint32_t r15_addic_src_2 = 0;
    uint32_t r15_addic_src_3 = 0;
    uint32_t r15_addic_src_4 = 0;
    uint32_t r30_addic_src_0 = 0;
    uint32_t r30_addic_src_1 = 0;
    uint32_t r30_addic_src_2 = 0;
    uint32_t r30_addic_src_3 = 0;
    uint32_t r30_addic_src_4 = 0;
    uint32_t r6_addic_src_0 = 0;
    uint32_t r6_addic_src_1 = 0;
    uint32_t r6_addic_src_2 = 0;
    uint32_t r6_addic_src_3 = 0;
    uint32_t r6_addic_src_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80197380;

loc_80197380:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r11 = (r1 + 192);
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
    r0 = (r3 * 1336);
    r7 = 1127219200;
    r6 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 80), r7);
    r27 = r3;
    r6 = (r6 + 22496);
    MemoryInline::FlatWriteRam32((r1 + 88), r7);
    r28 = r4;
    r14 = r5;
    r31 = (r6 + r0);
    r30 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BF64Cu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_801973C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801973D4;
    }
}

loc_801973CC:
{
    r3 = 0;
    goto loc_80197A94;
}

loc_801973D4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 1308));
    r17 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801973E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801973F4;
    }
}

loc_801973E8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_80197A94;
}

loc_801973F4:
{
    r16 = 1;
    r3 = r27;
    MemoryInline::FlatWrite8((r31 + 1308), static_cast<uint8_t>(r16));
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C0990u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8019740C:
{
    r15 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_80197468;
    }
}

loc_80197414:
{
    r0 = MemoryInline::FlatRead32((r31 + 1240));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019741C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80197468;
    }
}

loc_80197420:
{
    r0 = MemoryInline::FlatRead8((r31 + 1314));
}

loc_80197428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80197468;
    }
}

loc_8019742C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1315));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80197434:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80197468;
    }
}

loc_80197438:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80197460;
    }
}

loc_8019743C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80197460;
    }
}

loc_80197440:
{
    MemoryInline::FlatWrite8((r31 + 1315), static_cast<uint8_t>(r16));
    r3 = r27;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r31 + 1240));
    ctr = r12;
    ctx->lr = 0x80197458u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1314), static_cast<uint8_t>(r0));
}

loc_80197460:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1311), static_cast<uint8_t>(r0));
}

loc_80197468:
{
    r3 = r17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 1309));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80197478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80197488;
    }
}

loc_8019747C:
{
    MemoryInline::FlatWrite8((r31 + 93), static_cast<uint8_t>(r15));
    r3 = r31;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80195124u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80197488:
{
    r4 = 0x80190000u;
    r3 = r27;
    r4 = (r4 + 32216);
    ctx->lr = 0x80197498u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C0A1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r31 + 271));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801974A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80197A88;
    }
}

loc_801974A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801974A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80197A88;
    }
}

loc_801974AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r14), static_cast<int32_t>(0));
}

loc_801974B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80197A88;
    }
}

loc_801974B4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = MemoryInline::FlatRead8((r31 + 271));
}

loc_801974C0:
{
    r30 = r29;
    if ((static_cast<uint32_t>(r29) <= static_cast<uint32_t>(r14))) {
        goto loc_801974CC;
    }
}

loc_801974C8:
{
    r30 = r14;
}

loc_801974CC:
{
    r4 = 0;
    r0 = r30;
    MemoryInline::FlatWrite8((r31 + 271), static_cast<uint8_t>(r4));
    r5 = (r30 * 132);
    r4 = MemoryInline::FlatRead8((r31 + 270));
    r5 = (r28 + r5);
    r6 = (r4 - r30);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_801974F0;
    }
}

loc_801974EC:
{
    r6 = (r6 + 16);
}

loc_801974F0:
{
    r5 = (r5 + -132);
    goto loc_801975F4;
}

loc_801974F8:
{
    r4 = (r6 * 56);
    r6 = (r6 + 1);
}

loc_80197504:
{
    r4 = (r31 + r4);
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + 272), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r4 + 272));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r4 + 274));
        }
    }
    guest_range_4 = MemoryInline::ResolveRangeHost((r5 + -132), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 0u, (r5 + -132), r8);
        MemoryInline::WriteResolved16(guest_range_4, 2u, (r5 + -130), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 4u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r4 + 276));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 6u, (r4 + 278));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 4u, (r5 + -128), r8);
        MemoryInline::WriteResolved16(guest_range_4, 6u, (r5 + -126), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r4 + 280));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r4 + 282));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 8u, (r5 + -124), r8);
        MemoryInline::WriteResolved16(guest_range_4, 10u, (r5 + -122), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 12u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 12u, (r4 + 284));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 14u, (r4 + 286));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 12u, (r5 + -120), r8);
        MemoryInline::WriteResolved16(guest_range_4, 14u, (r5 + -118), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 16u, (r4 + 288));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 18u, (r4 + 290));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 16u, (r5 + -116), r8);
        MemoryInline::WriteResolved16(guest_range_4, 18u, (r5 + -114), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 20u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 20u, (r4 + 292));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 22u, (r4 + 294));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 20u, (r5 + -112), r8);
        MemoryInline::WriteResolved16(guest_range_4, 22u, (r5 + -110), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 24u, (r4 + 296));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 26u, (r4 + 298));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 24u, (r5 + -108), r8);
        MemoryInline::WriteResolved16(guest_range_4, 26u, (r5 + -106), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 28u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 28u, (r4 + 300));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 30u, (r4 + 302));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 28u, (r5 + -104), r8);
        MemoryInline::WriteResolved16(guest_range_4, 30u, (r5 + -102), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 32u, (r4 + 304));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 34u, (r4 + 306));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 32u, (r5 + -100), r8);
        MemoryInline::WriteResolved16(guest_range_4, 34u, (r5 + -98), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 36u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 36u, (r4 + 308));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 38u, (r4 + 310));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 36u, (r5 + -96), r8);
        MemoryInline::WriteResolved16(guest_range_4, 38u, (r5 + -94), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 40u, (r4 + 312));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 42u, (r4 + 314));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 40u, (r5 + -92), r8);
        MemoryInline::WriteResolved16(guest_range_4, 42u, (r5 + -90), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 44u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 44u, (r4 + 316));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 46u, (r4 + 318));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 44u, (r5 + -88), r8);
        MemoryInline::WriteResolved16(guest_range_4, 46u, (r5 + -86), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_3, 48u, (r4 + 320));
            r7 = MemoryInline::ReadResolved16(guest_range_3, 50u, (r4 + 322));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 48u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_4, 48u, (r5 + -84), r8);
        MemoryInline::WriteResolved16(guest_range_4, 50u, (r5 + -82), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 52u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved16(guest_range_3, 52u, (r4 + 324));
            r4 = MemoryInline::ReadResolved16(guest_range_3, 54u, (r4 + 326));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 52u, (r5 + -80), r7);
        MemoryInline::WriteResolved16(guest_range_4, 54u, (r5 + -78), r4);
    }
    r5 = (r5 + -132);
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(16))) {
        goto loc_801975F4;
    }
}

loc_801975F0:
{
    r6 = 0;
}

loc_801975F4:
{
    r0_addic_src_2 = r0;
    r0 = (r0_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801975F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801974F8;
    }
}

loc_801975FC:
{
    r0 = (r6 * 56);
    r16 = (r31 + r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r16 + 272), 0, 56u, true, false);
    r15 = MemoryInline::ReadResolved16(guest_range_1, 42u, (r16 + 314));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 38u, (r16 + 310));
    MemoryInline::FlatWriteRam32((r1 + 116), r15);
    r15 = MemoryInline::ReadResolved16(guest_range_1, 44u, (r16 + 316));
    MemoryInline::FlatWriteRam16((r1 + 62), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::FlatWriteRam32((r1 + 96), r15);
    r15 = MemoryInline::ReadResolved16(guest_range_1, 46u, (r16 + 318));
    MemoryInline::FlatWriteRam16((r1 + 66), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 100), r15);
    r15 = MemoryInline::ReadResolved16(guest_range_1, 48u, (r16 + 320));
    MemoryInline::FlatWriteRam16((r1 + 68), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam32((r1 + 104), r15);
    r15 = MemoryInline::ReadResolved16(guest_range_1, 50u, (r16 + 322));
    MemoryInline::FlatWriteRam16((r1 + 70), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::FlatWriteRam32((r1 + 108), r15);
    r15 = MemoryInline::ReadResolved16(guest_range_1, 52u, (r16 + 324));
    MemoryInline::FlatWriteRam16((r1 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 108));
    MemoryInline::FlatWriteRam32((r1 + 112), r15);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r16 + 272));
            r18 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r16 + 274));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r16 + 276));
            r20 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r16 + 278));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r16 + 280));
            r22 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r16 + 282));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r16 + 284));
            r24 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r16 + 286));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r16 + 288));
            r26 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r16 + 290));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r16 + 292));
            r11 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r16 + 294));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved16(guest_range_1, 24u, (r16 + 296));
            r9 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r16 + 298));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_1, 28u, (r16 + 300));
            r7 = MemoryInline::ReadResolved16(guest_range_1, 30u, (r16 + 302));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_1, 32u, (r16 + 304));
            r5 = MemoryInline::ReadResolved16(guest_range_1, 34u, (r16 + 306));
        }
    }
    r4 = MemoryInline::ReadResolved16(guest_range_1, 36u, (r16 + 308));
    r14 = MemoryInline::ReadResolved16(guest_range_1, 40u, (r16 + 312));
    r15 = MemoryInline::ReadResolved16(guest_range_1, 54u, (r16 + 326));
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r17));
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r18));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r19));
    MemoryInline::FlatWriteRam16((r1 + 30), static_cast<uint16_t>(r20));
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r21));
    MemoryInline::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r22));
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r23));
    MemoryInline::FlatWriteRam16((r1 + 38), static_cast<uint16_t>(r24));
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r25));
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r26));
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r12));
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r11));
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r10));
    MemoryInline::FlatWriteRam16((r1 + 50), static_cast<uint16_t>(r9));
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteRam16((r1 + 54), static_cast<uint16_t>(r7));
    MemoryInline::FlatWriteRam16((r1 + 56), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 64), static_cast<uint16_t>(r14));
    MemoryInline::FlatWriteRam16((r1 + 76), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 78), static_cast<uint16_t>(r15));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r10 = MemoryInline::FlatRead16((r2 + -26476));
    r3 = r27;
    r9 = MemoryInline::FlatRead16((r2 + -26474));
    r5 = (r1 + 16);
    r8 = MemoryInline::FlatRead16((r2 + -26472));
    r4 = 0;
    r7 = MemoryInline::FlatRead16((r2 + -26468));
    r6 = MemoryInline::FlatRead16((r2 + -26466));
    r0 = MemoryInline::FlatRead16((r2 + -26464));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r10));
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r9));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r7));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    ctx->lr = 0x80197758u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C07D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead16((r1 + 16));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead16((r1 + 20));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16((r1 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 * r5);
    r0 = (r0 * r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801977C4;
    }
}

loc_80197770:
{
    r0 = (r5 ^ -2147483648);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = (r4 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    MemoryInline::FlatWriteRam32((r1 + 92), r3);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 88));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteFloat32((r31 + 1244), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 1248), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 1252), f0.d);
    goto loc_801977D4;
}

loc_801977C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26460));
    MemoryInline::FlatWriteFloat32((r31 + 1244), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 1248), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 1252), f0.d);
}

loc_801977D4:
{
    r3 = r27;
    r5 = (r1 + 8);
    r4 = 1;
    ctx->lr = 0x801977E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C07D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead16((r1 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 * r5);
    r0 = (r0 * r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80197850;
    }
}

loc_801977FC:
{
    r0 = (r5 ^ -2147483648);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = (r4 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 84), r3);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 88));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteFloat32((r31 + 1256), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 1260), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 1264), f0.d);
    goto loc_80197860;
}

loc_80197850:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26456));
    MemoryInline::FlatWriteFloat32((r31 + 1256), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 1260), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 1264), f0.d);
}

loc_80197860:
{
    r0 = (r30 * 132);
    r3 = 65536;
    r6 = r30;
    r9 = (r3 + -1);
    r14 = (r28 + r0);
    r4 = 253;
    r8 = r9;
    r7 = r9;
    r5 = (r14 + -132);
}

loc_80197884:
{
}

loc_80197888:
{
    r5 = (r5 + -132);
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(1))) {
        goto loc_80197898;
    }
}

loc_80197890:
{
    r3 = r5;
    goto loc_8019789C;
}

loc_80197898:
{
    r3 = (r1 + 24);
}

loc_8019789C:
{
    r0 = MemoryInline::FlatRead8((r3 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-2));
}

loc_801978A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801978FC;
    }
}

loc_801978AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801978BC;
    }
}

loc_801978B0:
{
}

loc_801978B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-7))) {
        goto loc_801978FC;
    }
}

loc_801978B8:
{
    goto loc_80197900;
}

loc_801978BC:
{
}

loc_801978C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801978C8;
    }
}

loc_801978C4:
{
    goto loc_80197900;
}

loc_801978C8:
{
    r4 = MemoryInline::FlatRead8((r3 + 40));
}

loc_801978D0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_801978E0;
    }
}

loc_801978D4:
{
    r8 = MemoryInline::FlatRead16(r3);
    r9 = 0;
    goto loc_801978FC;
}

loc_801978E0:
{
}

loc_801978E4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_801978F4;
    }
}

loc_801978E8:
{
    r9 = MemoryInline::FlatRead16((r3 + 42));
    r8 = 0;
    goto loc_801978FC;
}

loc_801978F4:
{
    r9 = 0;
    r8 = 0;
}

loc_801978FC:
{
    r7 = MemoryInline::FlatRead16(r3);
}

loc_80197900:
{
    r6_addic_src_2 = r6;
    r6 = (r6_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80197904:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80197884;
    }
}

loc_80197908:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(65535));
}

loc_8019790C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80197930;
    }
}

loc_80197910:
{
    r3 = r28;
    r4 = r31;
    r5 = 132;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r30_addic_src_2 = r30;
    r30 = (r30_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80197924:
{
    r28 = (r28 + 132);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80197910;
    }
}

loc_8019792C:
{
    goto loc_80197A88;
}

loc_80197930:
{
}

loc_80197934:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(65535))) {
        goto loc_8019793C;
    }
}

loc_80197938:
{
    r8 = MemoryInline::FlatRead32(r31);
}

loc_8019793C:
{
}

loc_80197940:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(65535))) {
        goto loc_80197948;
    }
}

loc_80197944:
{
    r9 = MemoryInline::FlatRead32((r31 + 96));
}

loc_80197948:
{
    r0 = (r7 & 40959);
}

loc_8019794C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0_mrot_1 = (r8 & 24576);
    r0_mdest_1 = (r0 & -24577);
    r0 = (r0_mdest_1 | r0_mrot_1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
}

loc_80197958:
{
    r5 = (r3 & 65535);
    r3 = (r0 ^ r5);
    MemoryInline::FlatWrite32(r31, r0);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = (r3 & r5);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019799C;
    }
}

loc_80197978:
{
    r3 = MemoryInline::FlatRead32((r31 + 96));
    r0 = (r9 & 65535);
    r5 = (r3 & 65535);
    MemoryInline::FlatWrite32((r31 + 96), r0);
    r3 = (r0 ^ r5);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32((r31 + 100), r0);
    r0 = (r3 & r5);
    MemoryInline::FlatWrite32((r31 + 104), r0);
}

loc_8019799C:
{
    r3 = r31;
    r5 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801952F8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r15 = r30;
    r14 = (r14 + -132);
    r18 = 1;
    r17 = 0;
    r16 = 16;
}

loc_801979BC:
{
}

loc_801979C0:
{
    r14 = (r14 + -132);
    if ((static_cast<uint32_t>(r15) <= static_cast<uint32_t>(1))) {
        goto loc_801979D0;
    }
}

loc_801979C8:
{
    r19 = r14;
    goto loc_801979D4;
}

loc_801979D0:
{
    r19 = (r1 + 24);
}

loc_801979D4:
{
    r0 = MemoryInline::FlatRead8((r19 + 41));
    MemoryInline::FlatWrite8((r31 + 93), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r19 + 40));
    r0 = MemoryInline::FlatRead8((r31 + 92));
}

loc_801979E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_80197A08;
    }
}

loc_801979EC:
{
    r3 = MemoryInline::FlatRead8((r19 + 41));
    r0 = (r3 + 2);
    r0 = (r0 & 255);
}

loc_801979FC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80197A08;
    }
}

loc_80197A00:
{
    MemoryInline::FlatWrite8((r31 + 92), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 1310), static_cast<uint8_t>(r18));
}

loc_80197A08:
{
    r0 = MemoryInline::FlatRead8((r19 + 54));
    MemoryInline::FlatWrite8((r31 + 95), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r19 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80197A2C;
    }
}

loc_80197A1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80197A54;
    }
}

loc_80197A20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-7));
}

loc_80197A24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80197A38;
    }
}

loc_80197A28:
{
    goto loc_80197A54;
}

loc_80197A2C:
{
    r3 = r31;
    r4 = r19;
    ctx->lr = 0x80197A38u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80197108u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80197A38:
{
    r3 = r31;
    r4 = r19;
    ctx->lr = 0x80197A44u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801957F8u>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    r4 = r19;
    ctx->lr = 0x80197A50u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80196964u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80197A58;
}

loc_80197A54:
{
    MemoryInline::FlatWrite8((r31 + 94), static_cast<uint8_t>(r17));
}

loc_80197A58:
{
    r5 = (r14 + 128);
    r4 = (r31 + -4);
    ctr = r16;
}

loc_80197A64:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80197A64;
    }
}

loc_80197A78:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r15_addic_src_2 = r15;
    r15 = (r15_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r15_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(0));
}

loc_80197A80:
{
    MemoryInline::FlatWrite32((r5 + 4), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801979BC;
    }
}

loc_80197A88:
{
    r0 = 0;
    r3 = r30;
    MemoryInline::FlatWrite8((r31 + 1308), static_cast<uint8_t>(r0));
}

loc_80197A94:
{
    r11 = (r1 + 192);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80197380 func_80197380 preserves=true fpr_mask=0x00000000
