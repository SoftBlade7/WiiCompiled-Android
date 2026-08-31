#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015C37C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_15 = 0;
    uint32_t r4_addr_16 = 0;
    uint32_t r4_addr_17 = 0;
    uint32_t r4_addr_18 = 0;
    uint32_t r4_addr_19 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_20 = 0;
    uint32_t r4_addr_21 = 0;
    uint32_t r4_addr_22 = 0;
    uint32_t r4_addr_23 = 0;
    uint32_t r4_addr_24 = 0;
    uint32_t r4_addr_25 = 0;
    uint32_t r4_addr_26 = 0;
    uint32_t r4_addr_27 = 0;
    uint32_t r4_addr_28 = 0;
    uint32_t r4_addr_29 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_30 = 0;
    uint32_t r4_addr_31 = 0;
    uint32_t r4_addr_32 = 0;
    uint32_t r4_addr_33 = 0;
    uint32_t r4_addr_34 = 0;
    uint32_t r4_addr_35 = 0;
    uint32_t r4_addr_36 = 0;
    uint32_t r4_addr_37 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    goto loc_8015C37C;

loc_8015C37C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r30 = 0x80270000u;
    r26 = MemoryInline::FlatRead32((r4 + 4));
    r24 = r3;
    r25 = r4;
    r30 = (r30 + 4424);
    goto loc_8015C5E8;
}

loc_8015C3A8:
{
    r29 = MemoryInline::FlatRead32((r26 + 20));
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r27 = MemoryInline::FlatRead32((r24 + 4));
    r31 = r3;
    r28 = MemoryInline::FlatRead32((r30 + 56));
    goto loc_8015C498;
}

loc_8015C3C4:
{
    r3 = MemoryInline::FlatRead32((r27 + 20));
}

loc_8015C3CC:
{
    r6 = r29;
    r7 = r3;
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8015C3E0;
    }
}

loc_8015C3D8:
{
    r0 = 1;
    goto loc_8015C47C;
}

loc_8015C3E0:
{
    ctr = r31;
}

loc_8015C3E8:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(0))) {
        goto loc_8015C478;
    }
}

loc_8015C3EC:
{
    r8 = MemoryInline::FlatRead8(r6);
    r0 = 0;
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(0))) {
        goto loc_8015C404;
    }
}

loc_8015C3FC:
{
}

loc_8015C400:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(256))) {
        goto loc_8015C408;
    }
}

loc_8015C404:
{
    r0 = 1;
}

loc_8015C408:
{
}

loc_8015C40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015C414;
    }
}

loc_8015C410:
{
    goto loc_8015C41C;
}

loc_8015C414:
{
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r4_addr_4 = (r4 + r8);
    r8 = MemoryInline::FlatRead8(r4_addr_4);
}

loc_8015C41C:
{
    r9 = MemoryInline::FlatRead8(r7);
    r0 = 0;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8015C434;
    }
}

loc_8015C42C:
{
}

loc_8015C430:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(256))) {
        goto loc_8015C438;
    }
}

loc_8015C434:
{
    r0 = 1;
}

loc_8015C438:
{
}

loc_8015C43C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015C444;
    }
}

loc_8015C440:
{
    goto loc_8015C44C;
}

loc_8015C444:
{
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r4_addr_6 = (r4 + r5);
    r5 = MemoryInline::FlatRead8(r4_addr_6);
}

loc_8015C44C:
{
}

loc_8015C450:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r8))) {
        goto loc_8015C45C;
    }
}

loc_8015C454:
{
    r0 = 1;
    goto loc_8015C47C;
}

loc_8015C45C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015C46C;
    }
}

loc_8015C464:
{
    r0 = 0;
    goto loc_8015C47C;
}

loc_8015C46C:
{
    r7 = (r7 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015C3EC;
    }
}

loc_8015C478:
{
    r0 = 0;
}

loc_8015C47C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015C480:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C494;
    }
}

loc_8015C484:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8015C48C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r3))) {
        goto loc_8015C494;
    }
}

loc_8015C490:
{
    goto loc_8015C588;
}

loc_8015C494:
{
    r27 = MemoryInline::FlatRead32(r27);
}

loc_8015C498:
{
}

loc_8015C49C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8015C3C4;
    }
}

loc_8015C4A0:
{
    r27 = MemoryInline::FlatRead32((r24 + 12));
    goto loc_8015C57C;
}

loc_8015C4A8:
{
    r3 = MemoryInline::FlatRead32((r27 + 20));
}

loc_8015C4B0:
{
    r6 = r29;
    r7 = r3;
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8015C4C4;
    }
}

loc_8015C4BC:
{
    r0 = 1;
    goto loc_8015C560;
}

loc_8015C4C4:
{
    ctr = r31;
}

loc_8015C4CC:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(0))) {
        goto loc_8015C55C;
    }
}

loc_8015C4D0:
{
    r8 = MemoryInline::FlatRead8(r6);
    r0 = 0;
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(0))) {
        goto loc_8015C4E8;
    }
}

loc_8015C4E0:
{
}

loc_8015C4E4:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(256))) {
        goto loc_8015C4EC;
    }
}

loc_8015C4E8:
{
    r0 = 1;
}

loc_8015C4EC:
{
}

loc_8015C4F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015C4F8;
    }
}

loc_8015C4F4:
{
    goto loc_8015C500;
}

loc_8015C4F8:
{
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r4_addr_12 = (r4 + r8);
    r8 = MemoryInline::FlatRead8(r4_addr_12);
}

loc_8015C500:
{
    r9 = MemoryInline::FlatRead8(r7);
    r0 = 0;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8015C518;
    }
}

loc_8015C510:
{
}

loc_8015C514:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(256))) {
        goto loc_8015C51C;
    }
}

loc_8015C518:
{
    r0 = 1;
}

loc_8015C51C:
{
}

loc_8015C520:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015C528;
    }
}

loc_8015C524:
{
    goto loc_8015C530;
}

loc_8015C528:
{
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r4_addr_14 = (r4 + r5);
    r5 = MemoryInline::FlatRead8(r4_addr_14);
}

loc_8015C530:
{
}

loc_8015C534:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r8))) {
        goto loc_8015C540;
    }
}

loc_8015C538:
{
    r0 = 1;
    goto loc_8015C560;
}

loc_8015C540:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015C550;
    }
}

loc_8015C548:
{
    r0 = 0;
    goto loc_8015C560;
}

loc_8015C550:
{
    r7 = (r7 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015C4D0;
    }
}

loc_8015C55C:
{
    r0 = 0;
}

loc_8015C560:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015C564:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C578;
    }
}

loc_8015C568:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8015C570:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r3))) {
        goto loc_8015C578;
    }
}

loc_8015C574:
{
    goto loc_8015C588;
}

loc_8015C578:
{
    r27 = MemoryInline::FlatRead32(r27);
}

loc_8015C57C:
{
}

loc_8015C580:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8015C4A8;
    }
}

loc_8015C584:
{
    r27 = 0;
}

loc_8015C588:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8015C58C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C5A0;
    }
}

loc_8015C590:
{
    r3 = r24;
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015C320u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8015C5E4;
}

loc_8015C5A0:
{
    r0 = MemoryInline::FlatRead32((r27 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015C5A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015C5C8;
    }
}

loc_8015C5AC:
{
    r3 = r27;
    r4 = r26;
    ctx->lr = 0x8015C5B8u;
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
    InvokeDirectCpu<0x8015C37Cu>(ctx);
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

loc_8015C5BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C5E4;
    }
}

loc_8015C5C0:
{
    r3 = 0;
    goto loc_8015C850;
}

loc_8015C5C8:
{
    r3 = 0x80280000u;
    r4 = MemoryInline::FlatRead32((r24 + 20));
    r3 = (r3 + 32672);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8015C5DCu;
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
    InvokeDirectCpu<0x801A25D0u>(ctx);
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
    r3 = 0;
    goto loc_8015C850;
}

loc_8015C5E4:
{
    r26 = MemoryInline::FlatRead32(r26);
}

loc_8015C5E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8015C5EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C3A8;
    }
}

loc_8015C5F0:
{
    r31 = 0x80270000u;
    r27 = MemoryInline::FlatRead32((r25 + 12));
    r31 = (r31 + 4424);
    goto loc_8015C844;
}

loc_8015C600:
{
    r28 = MemoryInline::FlatRead32((r27 + 20));
    r25 = MemoryInline::FlatRead32(r27);
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r26 = MemoryInline::FlatRead32((r24 + 4));
    r30 = r3;
    r29 = MemoryInline::FlatRead32((r31 + 56));
    goto loc_8015C6F4;
}

loc_8015C620:
{
    r3 = MemoryInline::FlatRead32((r26 + 20));
}

loc_8015C628:
{
    r6 = r28;
    r7 = r3;
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8015C63C;
    }
}

loc_8015C634:
{
    r0 = 1;
    goto loc_8015C6D8;
}

loc_8015C63C:
{
    ctr = r30;
}

loc_8015C644:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(0))) {
        goto loc_8015C6D4;
    }
}

loc_8015C648:
{
    r8 = MemoryInline::FlatRead8(r6);
    r0 = 0;
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(0))) {
        goto loc_8015C660;
    }
}

loc_8015C658:
{
}

loc_8015C65C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(256))) {
        goto loc_8015C664;
    }
}

loc_8015C660:
{
    r0 = 1;
}

loc_8015C664:
{
}

loc_8015C668:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015C670;
    }
}

loc_8015C66C:
{
    goto loc_8015C678;
}

loc_8015C670:
{
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r4_addr_22 = (r4 + r8);
    r8 = MemoryInline::FlatRead8(r4_addr_22);
}

loc_8015C678:
{
    r9 = MemoryInline::FlatRead8(r7);
    r0 = 0;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8015C690;
    }
}

loc_8015C688:
{
}

loc_8015C68C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(256))) {
        goto loc_8015C694;
    }
}

loc_8015C690:
{
    r0 = 1;
}

loc_8015C694:
{
}

loc_8015C698:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015C6A0;
    }
}

loc_8015C69C:
{
    goto loc_8015C6A8;
}

loc_8015C6A0:
{
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r4_addr_24 = (r4 + r5);
    r5 = MemoryInline::FlatRead8(r4_addr_24);
}

loc_8015C6A8:
{
}

loc_8015C6AC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r8))) {
        goto loc_8015C6B8;
    }
}

loc_8015C6B0:
{
    r0 = 1;
    goto loc_8015C6D8;
}

loc_8015C6B8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015C6C8;
    }
}

loc_8015C6C0:
{
    r0 = 0;
    goto loc_8015C6D8;
}

loc_8015C6C8:
{
    r7 = (r7 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015C648;
    }
}

loc_8015C6D4:
{
    r0 = 0;
}

loc_8015C6D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015C6DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C6F0;
    }
}

loc_8015C6E0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8015C6E8:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r3))) {
        goto loc_8015C6F0;
    }
}

loc_8015C6EC:
{
    goto loc_8015C7E4;
}

loc_8015C6F0:
{
    r26 = MemoryInline::FlatRead32(r26);
}

loc_8015C6F4:
{
}

loc_8015C6F8:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8015C620;
    }
}

loc_8015C6FC:
{
    r26 = MemoryInline::FlatRead32((r24 + 12));
    goto loc_8015C7D8;
}

loc_8015C704:
{
    r3 = MemoryInline::FlatRead32((r26 + 20));
}

loc_8015C70C:
{
    r6 = r28;
    r7 = r3;
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8015C720;
    }
}

loc_8015C718:
{
    r0 = 1;
    goto loc_8015C7BC;
}

loc_8015C720:
{
    ctr = r30;
}

loc_8015C728:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(0))) {
        goto loc_8015C7B8;
    }
}

loc_8015C72C:
{
    r8 = MemoryInline::FlatRead8(r6);
    r0 = 0;
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(0))) {
        goto loc_8015C744;
    }
}

loc_8015C73C:
{
}

loc_8015C740:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(256))) {
        goto loc_8015C748;
    }
}

loc_8015C744:
{
    r0 = 1;
}

loc_8015C748:
{
}

loc_8015C74C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015C754;
    }
}

loc_8015C750:
{
    goto loc_8015C75C;
}

loc_8015C754:
{
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r4_addr_30 = (r4 + r8);
    r8 = MemoryInline::FlatRead8(r4_addr_30);
}

loc_8015C75C:
{
    r9 = MemoryInline::FlatRead8(r7);
    r0 = 0;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8015C774;
    }
}

loc_8015C76C:
{
}

loc_8015C770:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(256))) {
        goto loc_8015C778;
    }
}

loc_8015C774:
{
    r0 = 1;
}

loc_8015C778:
{
}

loc_8015C77C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015C784;
    }
}

loc_8015C780:
{
    goto loc_8015C78C;
}

loc_8015C784:
{
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r4_addr_32 = (r4 + r5);
    r5 = MemoryInline::FlatRead8(r4_addr_32);
}

loc_8015C78C:
{
}

loc_8015C790:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r8))) {
        goto loc_8015C79C;
    }
}

loc_8015C794:
{
    r0 = 1;
    goto loc_8015C7BC;
}

loc_8015C79C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015C7AC;
    }
}

loc_8015C7A4:
{
    r0 = 0;
    goto loc_8015C7BC;
}

loc_8015C7AC:
{
    r7 = (r7 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015C72C;
    }
}

loc_8015C7B8:
{
    r0 = 0;
}

loc_8015C7BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015C7C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C7D4;
    }
}

loc_8015C7C4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8015C7CC:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r3))) {
        goto loc_8015C7D4;
    }
}

loc_8015C7D0:
{
    goto loc_8015C7E4;
}

loc_8015C7D4:
{
    r26 = MemoryInline::FlatRead32(r26);
}

loc_8015C7D8:
{
}

loc_8015C7DC:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8015C704;
    }
}

loc_8015C7E0:
{
    r26 = 0;
}

loc_8015C7E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8015C7E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C7FC;
    }
}

loc_8015C7EC:
{
    r3 = r24;
    r4 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015C320u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8015C840;
}

loc_8015C7FC:
{
    r0 = MemoryInline::FlatRead32((r26 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015C804:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015C824;
    }
}

loc_8015C808:
{
    r3 = 0x80280000u;
    r4 = MemoryInline::FlatRead32((r24 + 20));
    r3 = (r3 + 32704);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8015C81Cu;
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
    InvokeDirectCpu<0x801A25D0u>(ctx);
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
    r3 = 0;
    goto loc_8015C850;
}

loc_8015C824:
{
    r3 = 0x80280000u;
    r4 = MemoryInline::FlatRead32((r24 + 20));
    r3 = (r3 + 32672);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8015C838u;
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
    InvokeDirectCpu<0x801A25D0u>(ctx);
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
    r3 = 0;
    goto loc_8015C850;
}

loc_8015C840:
{
    r27 = r25;
}

loc_8015C844:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8015C848:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C600;
    }
}

loc_8015C84C:
{
    r3 = 1;
}

loc_8015C850:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 52));
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
    ctx->gpr[11] = r11;
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
// RECOMP_REGISTRATION base 0x8015C37C func_8015C37C preserves=true fpr_mask=0x00000000
