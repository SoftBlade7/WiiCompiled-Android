#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013735C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8013735C;

loc_8013735C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r31 = 0x80280000u;
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r31 = (r31 + 12160);
    r3 = (r1 + 8);
    r30 = 0;
    r4 = 0;
    r5 = 32;
    ctx->lr = 0x80137398u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8013739C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_801374F4;
    }
}

loc_801373A0:
{
    r3 = 0x80330000u;
    r3 = (r3 + 24648);
    r0 = MemoryInline::FlatRead32((r3 + 548));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801373B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137698;
    }
}

loc_801373B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(5896));
}

loc_801373B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137448;
    }
}

loc_801373BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801373D8;
    }
}

loc_801373C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(5889));
}

loc_801373C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013749C;
    }
}

loc_801373C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801374B4;
    }
}

loc_801373CC:
{
}

loc_801373D0:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(5888))) {
        goto loc_801373E4;
    }
}

loc_801373D4:
{
    goto loc_801374B4;
}

loc_801373D8:
{
}

loc_801373DC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(5898))) {
        goto loc_80137408;
    }
}

loc_801373E0:
{
    goto loc_801374B4;
}

loc_801373E4:
{
    r3 = (r1 + 8);
    r4 = (r29 + 8);
    r30 = 2;
    // inline leaf 0x80131D90 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80131D90
    r3 = 9;
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 14), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    goto loc_801374D0;
}

loc_80137408:
{
    r30 = MemoryInline::FlatRead16((r29 + 16));
}

loc_80137410:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(11))) {
        goto loc_80137434;
    }
}

loc_80137414:
{
    r3 = (r1 + 8);
    r4 = (r29 + 8);
    // inline leaf 0x80131D90 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80131D90
    r3 = 9;
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 14), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    goto loc_801374D0;
}

loc_80137434:
{
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 6));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    goto loc_801374D0;
}

loc_80137448:
{
    r30 = MemoryInline::FlatRead8((r29 + 8));
}

loc_80137450:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(7))) {
        goto loc_80137464;
    }
}

loc_80137454:
{
}

loc_80137458:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(5))) {
        goto loc_80137464;
    }
}

loc_8013745C:
{
}

loc_80137460:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(9))) {
        goto loc_80137478;
    }
}

loc_80137464:
{
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 6));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    goto loc_801374D0;
}

loc_80137478:
{
}

loc_8013747C:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(10))) {
        goto loc_801374D0;
    }
}

loc_80137480:
{
}

loc_80137484:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(1))) {
        goto loc_801374D0;
    }
}

loc_80137488:
{
    r3 = MemoryInline::FlatRead16((r29 + 6));
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    goto loc_801374D0;
}

loc_8013749C:
{
    r0 = 13;
    r30 = 3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 6));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    goto loc_801374D0;
}

loc_801374B4:
{
    r0 = MemoryInline::FlatRead8((r13 + -26128));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801374BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801374D0;
    }
}

loc_801374C0:
{
    r5 = MemoryInline::FlatRead16((r29 + 6));
    r4 = (r31 + 0);
    r3 = 1280;
    ctx->lr = 0x801374D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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

loc_801374D0:
{
    r3 = (r30 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801374D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137698;
    }
}

loc_801374D8:
{
    r5 = 0x80330000u;
    r4 = (r1 + 8);
    r5 = (r5 + 24648);
    r12 = MemoryInline::FlatRead32((r5 + 548));
    ctr = r12;
    ctx->lr = 0x801374F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80137698;
}

loc_801374F4:
{
    r0 = MemoryInline::FlatRead8((r13 + -26128));
    r30 = MemoryInline::FlatRead8((r27 + 28));
}

loc_80137500:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_80137570;
    }
}

loc_80137504:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_80137508:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013753C;
    }
}

loc_8013750C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80137520;
    }
}

loc_80137510:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80137514:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013752C;
    }
}

loc_80137518:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80137534;
    }
}

loc_8013751C:
{
    goto loc_8013754C;
}

loc_80137520:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(4));
}

loc_80137524:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013754C;
    }
}

loc_80137528:
{
    goto loc_80137544;
}

loc_8013752C:
{
    r26 = (r31 + 28);
    goto loc_80137550;
}

loc_80137534:
{
    r26 = (r31 + 44);
    goto loc_80137550;
}

loc_8013753C:
{
    r26 = (r31 + 60);
    goto loc_80137550;
}

loc_80137544:
{
    r26 = (r31 + 80);
    goto loc_80137550;
}

loc_8013754C:
{
    r26 = (r31 + 96);
}

loc_80137550:
{
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801377FCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r7 = r3;
    r5 = r30;
    r6 = r26;
    r4 = (r31 + 120);
    r3 = 1283;
    ctx->lr = 0x80137570u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131788u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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

loc_80137570:
{
    r4 = MemoryInline::FlatRead8((r27 + 28));
    r3 = 0x80250000u;
    r3 = (r3 + -13856);
    r28 = (r28 & 255);
    r0 = (r4 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r3_addr_1 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = (r5 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r27 + 28), static_cast<uint8_t>(r0));
    r5_addr_1 = (r5 + r4);
    r0 = MemoryInline::FlatRead8(r5_addr_1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_801375A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801375C8;
    }
}

loc_801375A8:
{
    r4 = 0x80250000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r4 = (r4 + -13976);
    r3 = r27;
    r4_addr_1 = (r4 + r0);
    r12 = MemoryInline::FlatRead32(r4_addr_1);
    r4 = r29;
    ctr = r12;
    ctx->lr = 0x801375C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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

loc_801375C8:
{
    r3 = MemoryInline::FlatRead8((r27 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r3));
}

loc_801375D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137698;
    }
}

loc_801375D4:
{
    r0 = MemoryInline::FlatRead8((r13 + -26128));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_801375DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80137698;
    }
}

loc_801375E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_801375E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137618;
    }
}

loc_801375E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801375FC;
    }
}

loc_801375EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801375F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137608;
    }
}

loc_801375F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80137610;
    }
}

loc_801375F8:
{
    goto loc_80137628;
}

loc_801375FC:
{
}

loc_80137600:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(4))) {
        goto loc_80137628;
    }
}

loc_80137604:
{
    goto loc_80137620;
}

loc_80137608:
{
    r26 = (r31 + 28);
    goto loc_8013762C;
}

loc_80137610:
{
    r26 = (r31 + 44);
    goto loc_8013762C;
}

loc_80137618:
{
    r26 = (r31 + 60);
    goto loc_8013762C;
}

loc_80137620:
{
    r26 = (r31 + 80);
    goto loc_8013762C;
}

loc_80137628:
{
    r26 = (r31 + 96);
}

loc_8013762C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80137630:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137664;
    }
}

loc_80137634:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80137648;
    }
}

loc_80137638:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8013763C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137654;
    }
}

loc_80137640:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013765C;
    }
}

loc_80137644:
{
    goto loc_80137674;
}

loc_80137648:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_8013764C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80137674;
    }
}

loc_80137650:
{
    goto loc_8013766C;
}

loc_80137654:
{
    r27 = (r31 + 28);
    goto loc_80137678;
}

loc_8013765C:
{
    r27 = (r31 + 44);
    goto loc_80137678;
}

loc_80137664:
{
    r27 = (r31 + 60);
    goto loc_80137678;
}

loc_8013766C:
{
    r27 = (r31 + 80);
    goto loc_80137678;
}

loc_80137674:
{
    r27 = (r31 + 96);
}

loc_80137678:
{
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801377FCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r7 = r3;
    r5 = r26;
    r6 = r27;
    r4 = (r31 + 172);
    r3 = 1284;
    ctx->lr = 0x80137698u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131788u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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

loc_80137698:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 68));
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x8013735C func_8013735C preserves=true fpr_mask=0x00000000
