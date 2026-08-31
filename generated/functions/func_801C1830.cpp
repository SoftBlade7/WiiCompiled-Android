#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C1830(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_801C1830;

loc_801C1830:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -1536), 0, 1544u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -1536), r1);
    r1 = (r1 + -1536);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 1540u, (r1 + 1540), r0);
    r11 = (r1 + 1536);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1508u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1508u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 1512u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1516u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1516u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 1520u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1524u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1524u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 1528u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1532u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r11 = MemoryInline::FlatRead8((r2 + -26168));
    r6 = 0x80350000u;
    r10 = MemoryInline::FlatRead8((r2 + -26167));
    r25 = r4;
    r9 = MemoryInline::FlatRead8((r2 + -26166));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r8 = MemoryInline::FlatRead8((r2 + -26165));
    r27 = r3;
    r7 = MemoryInline::FlatRead8((r2 + -26164));
    r6 = (r6 + 2352);
    r4 = MemoryInline::FlatRead8((r2 + -26163));
    r28 = r5;
    r3 = MemoryInline::FlatRead8((r2 + -26162));
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r1 + 44), static_cast<uint8_t>(r11));
    r6_addr_0 = (r6 + r0);
    r31 = MemoryInline::FlatRead32(r6_addr_0);
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r1 + 45), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r1 + 46), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 47u, (r1 + 47), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r1 + 48), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 49u, (r1 + 49), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r1 + 50), static_cast<uint8_t>(r3));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = MemoryInline::FlatRead32((r31 + 2108));
    r26 = MemoryInline::FlatRead32((r31 + 2236));
    r30 = MemoryInline::FlatRead32((r31 + 2268));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C18B0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(-1))) {
        goto loc_801C2E14;
    }
}

loc_801C18B4:
{
}

loc_801C18B8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801C18C4;
    }
}

loc_801C18BC:
{
    r26 = -2;
    goto loc_801C2E14;
}

loc_801C18C4:
{
}

loc_801C18C8:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_801C1FE0;
    }
}

loc_801C18CC:
{
}

loc_801C18D0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801C18DC;
    }
}

loc_801C18D4:
{
    r26 = 0;
    goto loc_801C2E14;
}

loc_801C18DC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_801C1908;
    }
}

loc_801C18FC:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r30 + r0);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C1908:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r4 = (r30 + 5);
    r0 = (r3 + -1);
}

loc_801C191C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_801C1FD0;
    }
}

loc_801C1920:
{
    r3 = 1;
    r0 = 4;
    MemoryInline::FlatWriteRam16((r1 + 1426), static_cast<uint16_t>(r3));
    r27 = 25;
    r12 = 0;
    r10 = MemoryInline::FlatRead32((r1 + 1408));
    MemoryInline::FlatWriteRam8((r1 + 1404), static_cast<uint8_t>(r0));
    r9 = MemoryInline::FlatRead32((r1 + 1412));
    r11 = MemoryInline::FlatRead32((r1 + 1404));
    r8 = MemoryInline::FlatRead32((r1 + 1416));
    r7 = MemoryInline::FlatRead32((r1 + 1420));
    r6 = MemoryInline::FlatRead32((r1 + 1424));
    r5 = MemoryInline::FlatRead32((r1 + 1428));
    r4 = MemoryInline::FlatRead32((r1 + 1432));
    r3 = MemoryInline::FlatRead32((r1 + 1436));
    r0 = MemoryInline::FlatRead32((r1 + 1440));
    MemoryInline::FlatWriteRam32((r1 + 1400), r27);
    MemoryInline::FlatWriteRam32((r1 + 1444), r12);
    MemoryInline::FlatWriteRam32((r1 + 1448), r27);
    MemoryInline::FlatWriteRam32((r1 + 1452), r11);
    MemoryInline::FlatWriteRam32((r1 + 1456), r10);
    MemoryInline::FlatWriteRam32((r1 + 1460), r9);
    MemoryInline::FlatWriteRam32((r1 + 1464), r8);
    MemoryInline::FlatWriteRam32((r1 + 1468), r7);
    MemoryInline::FlatWriteRam32((r1 + 1472), r6);
    MemoryInline::FlatWriteRam32((r1 + 1476), r5);
    MemoryInline::FlatWriteRam32((r1 + 1480), r4);
    MemoryInline::FlatWriteRam32((r1 + 1484), r3);
    MemoryInline::FlatWriteRam32((r1 + 1488), r0);
    MemoryInline::FlatWriteRam32((r1 + 1492), r12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C19C4;
    }
}

loc_801C19B8:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C19C4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C19D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C19E4;
    }
}

loc_801C19D8:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C1A58;
}

loc_801C19E4:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C1A04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 1448);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C1A58:
{
    r3 = 77725696;
    r9 = 1;
    r8 = (r3 + 1);
    r7 = 22;
    r6 = 21;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r9));
    r3 = (r1 + 1356);
    r4 = (r1 + 40);
    r5 = 4;
    MemoryInline::FlatWriteRam32((r1 + 40), r8);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam32((r1 + 1352), r7);
    MemoryInline::FlatWriteRam16((r1 + 1378), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 1396), r0);
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
    r3 = (r1 + 1360);
    r4 = (r1 + 17);
    r5 = 1;
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
    r3 = (r1 + 1361);
    r4 = (r1 + 18);
    r5 = 1;
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
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 1352), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 1352));
            r12 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 1356));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 1360));
            r10 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 1364));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 1368));
            r8 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 1372));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 1376));
            r6 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 1380));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 1384));
            r4 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 1388));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 1392));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 1396));
        }
    }
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 1304), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 1304), r27);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 1308), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 1312), r11);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 1316), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 1320), r9);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 1324), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 1328), r7);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 1332), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 1336), r5);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 1340), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 1344), r3);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 1348), r0);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C1B44;
    }
}

loc_801C1B38:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C1B44:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C1B54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C1B64;
    }
}

loc_801C1B58:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C1BD8;
}

loc_801C1B64:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C1B84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 1304);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C1BD8:
{
    r3 = 77725696;
    r9 = 0;
    r8 = (r3 + 9);
    r7 = 1;
    r6 = 22;
    r0 = 21;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r9));
    r3 = (r1 + 1260);
    r4 = (r1 + 36);
    r5 = 4;
    MemoryInline::FlatWriteRam32((r1 + 36), r8);
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam32((r1 + 1256), r6);
    MemoryInline::FlatWriteRam16((r1 + 1282), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 1300), r9);
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
    r3 = (r1 + 1264);
    r4 = (r1 + 15);
    r5 = 1;
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
    r3 = (r1 + 1265);
    r4 = (r1 + 16);
    r5 = 1;
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
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 1256), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 1256));
            r12 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 1260));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 1264));
            r10 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 1268));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 1272));
            r8 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 1276));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 1280));
            r6 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 1284));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 1288));
            r4 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r1 + 1292));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r1 + 1296));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r1 + 1300));
        }
    }
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 1208), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 1208), r27);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r1 + 1212), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 1216), r11);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r1 + 1220), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 1224), r9);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r1 + 1228), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 1232), r7);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r1 + 1236), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 1240), r5);
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 1244), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r1 + 1248), r3);
        MemoryInline::WriteResolved32(guest_range_4, 44u, (r1 + 1252), r0);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C1CC4;
    }
}

loc_801C1CB8:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C1CC4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C1CD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C1CE4;
    }
}

loc_801C1CD8:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C1D58;
}

loc_801C1CE4:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C1D04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 1208);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C1D58:
{
    r12 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 1138), static_cast<uint16_t>(r0));
    r27 = 20;
    r10 = MemoryInline::FlatRead32((r1 + 1120));
    MemoryInline::FlatWriteRam8((r1 + 1116), static_cast<uint8_t>(r12));
    r9 = MemoryInline::FlatRead32((r1 + 1124));
    r11 = MemoryInline::FlatRead32((r1 + 1116));
    r8 = MemoryInline::FlatRead32((r1 + 1128));
    r7 = MemoryInline::FlatRead32((r1 + 1132));
    r6 = MemoryInline::FlatRead32((r1 + 1136));
    r5 = MemoryInline::FlatRead32((r1 + 1140));
    r4 = MemoryInline::FlatRead32((r1 + 1144));
    r3 = MemoryInline::FlatRead32((r1 + 1148));
    r0 = MemoryInline::FlatRead32((r1 + 1152));
    MemoryInline::FlatWriteRam32((r1 + 1112), r27);
    MemoryInline::FlatWriteRam32((r1 + 1156), r12);
    MemoryInline::FlatWriteRam32((r1 + 1160), r27);
    MemoryInline::FlatWriteRam32((r1 + 1164), r11);
    MemoryInline::FlatWriteRam32((r1 + 1168), r10);
    MemoryInline::FlatWriteRam32((r1 + 1172), r9);
    MemoryInline::FlatWriteRam32((r1 + 1176), r8);
    MemoryInline::FlatWriteRam32((r1 + 1180), r7);
    MemoryInline::FlatWriteRam32((r1 + 1184), r6);
    MemoryInline::FlatWriteRam32((r1 + 1188), r5);
    MemoryInline::FlatWriteRam32((r1 + 1192), r4);
    MemoryInline::FlatWriteRam32((r1 + 1196), r3);
    MemoryInline::FlatWriteRam32((r1 + 1200), r0);
    MemoryInline::FlatWriteRam32((r1 + 1204), r12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C1DF8;
    }
}

loc_801C1DEC:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C1DF8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C1E08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C1E18;
    }
}

loc_801C1E0C:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C1E8C;
}

loc_801C1E18:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C1E38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 1160);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C1E8C:
{
    r11 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 1042), static_cast<uint16_t>(r0));
    r12 = 21;
    r9 = MemoryInline::FlatRead32((r1 + 1024));
    MemoryInline::FlatWriteRam8((r1 + 1020), static_cast<uint8_t>(r11));
    r8 = MemoryInline::FlatRead32((r1 + 1028));
    r10 = MemoryInline::FlatRead32((r1 + 1020));
    r7 = MemoryInline::FlatRead32((r1 + 1032));
    r6 = MemoryInline::FlatRead32((r1 + 1036));
    r5 = MemoryInline::FlatRead32((r1 + 1040));
    r4 = MemoryInline::FlatRead32((r1 + 1044));
    r3 = MemoryInline::FlatRead32((r1 + 1048));
    r0 = MemoryInline::FlatRead32((r1 + 1052));
    MemoryInline::FlatWriteRam32((r1 + 1016), r12);
    MemoryInline::FlatWriteRam32((r1 + 1060), r28);
    MemoryInline::FlatWriteRam32((r1 + 1056), r11);
    MemoryInline::FlatWriteRam32((r1 + 1064), r12);
    MemoryInline::FlatWriteRam32((r1 + 1068), r10);
    MemoryInline::FlatWriteRam32((r1 + 1072), r9);
    MemoryInline::FlatWriteRam32((r1 + 1076), r8);
    MemoryInline::FlatWriteRam32((r1 + 1080), r7);
    MemoryInline::FlatWriteRam32((r1 + 1084), r6);
    MemoryInline::FlatWriteRam32((r1 + 1088), r5);
    MemoryInline::FlatWriteRam32((r1 + 1092), r4);
    MemoryInline::FlatWriteRam32((r1 + 1096), r3);
    MemoryInline::FlatWriteRam32((r1 + 1100), r0);
    MemoryInline::FlatWriteRam32((r1 + 1104), r11);
    MemoryInline::FlatWriteRam32((r1 + 1108), r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C1F2C;
    }
}

loc_801C1F20:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C1F2C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C1F3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C1F4C;
    }
}

loc_801C1F40:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C1FC0;
}

loc_801C1F4C:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C1F6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 1064);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C1FC0:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_801C2E34;
}

loc_801C1FD0:
{
    r3 = r29;
    r26 = -2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C2E14;
}

loc_801C1FE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(3));
}

loc_801C1FE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C2B24;
    }
}

loc_801C1FE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C1FFC;
    }
}

loc_801C1FEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(1));
}

loc_801C1FF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C200C;
    }
}

loc_801C1FF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C29D0;
    }
}

loc_801C1FF8:
{
    goto loc_801C2E14;
}

loc_801C1FFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(5));
}

loc_801C2000:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C200C;
    }
}

loc_801C2004:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C2E14;
    }
}

loc_801C2008:
{
    goto loc_801C2C78;
}

loc_801C200C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_801C2038;
    }
}

loc_801C202C:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r30 + r0);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C2038:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r4 = (r30 + 7);
    r0 = (r3 + -1);
}

loc_801C204C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_801C29C0;
    }
}

loc_801C2050:
{
    r3 = 1;
    r0 = 4;
    MemoryInline::FlatWriteRam16((r1 + 946), static_cast<uint16_t>(r3));
    r27 = 20;
    r12 = 0;
    r10 = MemoryInline::FlatRead32((r1 + 928));
    MemoryInline::FlatWriteRam8((r1 + 924), static_cast<uint8_t>(r0));
    r9 = MemoryInline::FlatRead32((r1 + 932));
    r11 = MemoryInline::FlatRead32((r1 + 924));
    r8 = MemoryInline::FlatRead32((r1 + 936));
    r7 = MemoryInline::FlatRead32((r1 + 940));
    r6 = MemoryInline::FlatRead32((r1 + 944));
    r5 = MemoryInline::FlatRead32((r1 + 948));
    r4 = MemoryInline::FlatRead32((r1 + 952));
    r3 = MemoryInline::FlatRead32((r1 + 956));
    r0 = MemoryInline::FlatRead32((r1 + 960));
    MemoryInline::FlatWriteRam32((r1 + 920), r27);
    MemoryInline::FlatWriteRam32((r1 + 964), r12);
    MemoryInline::FlatWriteRam32((r1 + 968), r27);
    MemoryInline::FlatWriteRam32((r1 + 972), r11);
    MemoryInline::FlatWriteRam32((r1 + 976), r10);
    MemoryInline::FlatWriteRam32((r1 + 980), r9);
    MemoryInline::FlatWriteRam32((r1 + 984), r8);
    MemoryInline::FlatWriteRam32((r1 + 988), r7);
    MemoryInline::FlatWriteRam32((r1 + 992), r6);
    MemoryInline::FlatWriteRam32((r1 + 996), r5);
    MemoryInline::FlatWriteRam32((r1 + 1000), r4);
    MemoryInline::FlatWriteRam32((r1 + 1004), r3);
    MemoryInline::FlatWriteRam32((r1 + 1008), r0);
    MemoryInline::FlatWriteRam32((r1 + 1012), r12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C20F4;
    }
}

loc_801C20E8:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C20F4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C2104:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C2114;
    }
}

loc_801C2108:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C2188;
}

loc_801C2114:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C2134u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 968);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C2188:
{
    r3 = 1;
    r0 = 4;
    MemoryInline::FlatWriteRam16((r1 + 850), static_cast<uint16_t>(r3));
    r27 = 25;
    r12 = 0;
    r10 = MemoryInline::FlatRead32((r1 + 832));
    MemoryInline::FlatWriteRam8((r1 + 828), static_cast<uint8_t>(r0));
    r9 = MemoryInline::FlatRead32((r1 + 836));
    r11 = MemoryInline::FlatRead32((r1 + 828));
    r8 = MemoryInline::FlatRead32((r1 + 840));
    r7 = MemoryInline::FlatRead32((r1 + 844));
    r6 = MemoryInline::FlatRead32((r1 + 848));
    r5 = MemoryInline::FlatRead32((r1 + 852));
    r4 = MemoryInline::FlatRead32((r1 + 856));
    r3 = MemoryInline::FlatRead32((r1 + 860));
    r0 = MemoryInline::FlatRead32((r1 + 864));
    MemoryInline::FlatWriteRam32((r1 + 824), r27);
    MemoryInline::FlatWriteRam32((r1 + 868), r12);
    MemoryInline::FlatWriteRam32((r1 + 872), r27);
    MemoryInline::FlatWriteRam32((r1 + 876), r11);
    MemoryInline::FlatWriteRam32((r1 + 880), r10);
    MemoryInline::FlatWriteRam32((r1 + 884), r9);
    MemoryInline::FlatWriteRam32((r1 + 888), r8);
    MemoryInline::FlatWriteRam32((r1 + 892), r7);
    MemoryInline::FlatWriteRam32((r1 + 896), r6);
    MemoryInline::FlatWriteRam32((r1 + 900), r5);
    MemoryInline::FlatWriteRam32((r1 + 904), r4);
    MemoryInline::FlatWriteRam32((r1 + 908), r3);
    MemoryInline::FlatWriteRam32((r1 + 912), r0);
    MemoryInline::FlatWriteRam32((r1 + 916), r12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C222C;
    }
}

loc_801C2220:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C222C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C223C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C224C;
    }
}

loc_801C2240:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C22C0;
}

loc_801C224C:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C226Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 872);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C22C0:
{
    r3 = 77725696;
    r9 = 1;
    r8 = (r3 + 9);
    r7 = 22;
    r6 = 21;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r9));
    r3 = (r1 + 780);
    r4 = (r1 + 32);
    r5 = 4;
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam32((r1 + 776), r7);
    MemoryInline::FlatWriteRam16((r1 + 802), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 820), r0);
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
    r3 = (r1 + 784);
    r4 = (r1 + 13);
    r5 = 1;
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
    r3 = (r1 + 785);
    r4 = (r1 + 14);
    r5 = 1;
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
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 776), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 776));
            r12 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 780));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 784));
            r10 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 788));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r1 + 792));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r1 + 796));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r1 + 800));
            r6 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r1 + 804));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r1 + 808));
            r4 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r1 + 812));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r1 + 816));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r1 + 820));
        }
    }
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 728), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_6, 0u, (r1 + 728), r27);
        MemoryInline::WriteResolved32(guest_range_6, 4u, (r1 + 732), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_6, 8u, (r1 + 736), r11);
        MemoryInline::WriteResolved32(guest_range_6, 12u, (r1 + 740), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_6, 16u, (r1 + 744), r9);
        MemoryInline::WriteResolved32(guest_range_6, 20u, (r1 + 748), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_6, 24u, (r1 + 752), r7);
        MemoryInline::WriteResolved32(guest_range_6, 28u, (r1 + 756), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_6, 32u, (r1 + 760), r5);
        MemoryInline::WriteResolved32(guest_range_6, 36u, (r1 + 764), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_6, 40u, (r1 + 768), r3);
        MemoryInline::WriteResolved32(guest_range_6, 44u, (r1 + 772), r0);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C23AC;
    }
}

loc_801C23A0:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C23AC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C23BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C23CC;
    }
}

loc_801C23C0:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C2440;
}

loc_801C23CC:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C23ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 728);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C2440:
{
    r3 = 77725696;
    r4 = 128;
    r5 = (r3 + 1);
    r8 = 1;
    r7 = 22;
    r6 = 21;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r4));
    r3 = (r1 + 684);
    r4 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    r5 = 4;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam32((r1 + 680), r7);
    MemoryInline::FlatWriteRam16((r1 + 706), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 724), r0);
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
    r3 = (r1 + 688);
    r4 = (r1 + 11);
    r5 = 1;
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
    r3 = (r1 + 689);
    r4 = (r1 + 12);
    r5 = 1;
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
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 680), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r1 + 680));
            r12 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r1 + 684));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r1 + 688));
            r10 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r1 + 692));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r1 + 696));
            r8 = MemoryInline::ReadResolved32(guest_range_7, 20u, (r1 + 700));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r1 + 704));
            r6 = MemoryInline::ReadResolved32(guest_range_7, 28u, (r1 + 708));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_7, 32u, (r1 + 712));
            r4 = MemoryInline::ReadResolved32(guest_range_7, 36u, (r1 + 716));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_7, 40u, (r1 + 720));
            r0 = MemoryInline::ReadResolved32(guest_range_7, 44u, (r1 + 724));
        }
    }
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 632), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_8, 0u, (r1 + 632), r27);
        MemoryInline::WriteResolved32(guest_range_8, 4u, (r1 + 636), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_8, 8u, (r1 + 640), r11);
        MemoryInline::WriteResolved32(guest_range_8, 12u, (r1 + 644), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_8, 16u, (r1 + 648), r9);
        MemoryInline::WriteResolved32(guest_range_8, 20u, (r1 + 652), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_8, 24u, (r1 + 656), r7);
        MemoryInline::WriteResolved32(guest_range_8, 28u, (r1 + 660), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_8, 32u, (r1 + 664), r5);
        MemoryInline::WriteResolved32(guest_range_8, 36u, (r1 + 668), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_8, 40u, (r1 + 672), r3);
        MemoryInline::WriteResolved32(guest_range_8, 44u, (r1 + 676), r0);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C2530;
    }
}

loc_801C2524:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C2530:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C2540:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C2550;
    }
}

loc_801C2544:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C25C4;
}

loc_801C2550:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C2570u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 632);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C25C4:
{
    r4 = MemoryInline::FlatRead8((r13 + -24526));
    r3 = 77725696;
    r5 = (r3 + 1);
    r8 = 7;
    r7 = 22;
    r6 = 21;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r4));
    r3 = (r1 + 540);
    r4 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    r5 = 4;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam32((r1 + 536), r7);
    MemoryInline::FlatWriteRam16((r1 + 562), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
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
    r3 = (r1 + 544);
    r4 = (r1 + 10);
    r5 = 1;
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
    r3 = (r1 + 545);
    r4 = (r1 + 44);
    r5 = 7;
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
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 536), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r1 + 536));
            r12 = MemoryInline::ReadResolved32(guest_range_9, 4u, (r1 + 540));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_9, 8u, (r1 + 544));
            r10 = MemoryInline::ReadResolved32(guest_range_9, 12u, (r1 + 548));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_9, 16u, (r1 + 552));
            r8 = MemoryInline::ReadResolved32(guest_range_9, 20u, (r1 + 556));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_9, 24u, (r1 + 560));
            r6 = MemoryInline::ReadResolved32(guest_range_9, 28u, (r1 + 564));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_9, 32u, (r1 + 568));
            r4 = MemoryInline::ReadResolved32(guest_range_9, 36u, (r1 + 572));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_9, 40u, (r1 + 576));
            r0 = MemoryInline::ReadResolved32(guest_range_9, 44u, (r1 + 580));
        }
    }
    guest_range_10 = MemoryInline::ResolveRangeHost((r1 + 584), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_10, 0u, (r1 + 584), r27);
        MemoryInline::WriteResolved32(guest_range_10, 4u, (r1 + 588), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_10, 8u, (r1 + 592), r11);
        MemoryInline::WriteResolved32(guest_range_10, 12u, (r1 + 596), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_10, 16u, (r1 + 600), r9);
        MemoryInline::WriteResolved32(guest_range_10, 20u, (r1 + 604), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_10, 24u, (r1 + 608), r7);
        MemoryInline::WriteResolved32(guest_range_10, 28u, (r1 + 612), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_10, 32u, (r1 + 616), r5);
        MemoryInline::WriteResolved32(guest_range_10, 36u, (r1 + 620), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_10, 40u, (r1 + 624), r3);
        MemoryInline::WriteResolved32(guest_range_10, 44u, (r1 + 628), r0);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C26B4;
    }
}

loc_801C26A8:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C26B4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C26C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C26D4;
    }
}

loc_801C26C8:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C2748;
}

loc_801C26D4:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C26F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 584);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C2748:
{
    r12 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 466), static_cast<uint16_t>(r0));
    r27 = 25;
    r10 = MemoryInline::FlatRead32((r1 + 448));
    MemoryInline::FlatWriteRam8((r1 + 444), static_cast<uint8_t>(r12));
    r9 = MemoryInline::FlatRead32((r1 + 452));
    r11 = MemoryInline::FlatRead32((r1 + 444));
    r8 = MemoryInline::FlatRead32((r1 + 456));
    r7 = MemoryInline::FlatRead32((r1 + 460));
    r6 = MemoryInline::FlatRead32((r1 + 464));
    r5 = MemoryInline::FlatRead32((r1 + 468));
    r4 = MemoryInline::FlatRead32((r1 + 472));
    r3 = MemoryInline::FlatRead32((r1 + 476));
    r0 = MemoryInline::FlatRead32((r1 + 480));
    MemoryInline::FlatWriteRam32((r1 + 440), r27);
    MemoryInline::FlatWriteRam32((r1 + 484), r12);
    MemoryInline::FlatWriteRam32((r1 + 488), r27);
    MemoryInline::FlatWriteRam32((r1 + 492), r11);
    MemoryInline::FlatWriteRam32((r1 + 496), r10);
    MemoryInline::FlatWriteRam32((r1 + 500), r9);
    MemoryInline::FlatWriteRam32((r1 + 504), r8);
    MemoryInline::FlatWriteRam32((r1 + 508), r7);
    MemoryInline::FlatWriteRam32((r1 + 512), r6);
    MemoryInline::FlatWriteRam32((r1 + 516), r5);
    MemoryInline::FlatWriteRam32((r1 + 520), r4);
    MemoryInline::FlatWriteRam32((r1 + 524), r3);
    MemoryInline::FlatWriteRam32((r1 + 528), r0);
    MemoryInline::FlatWriteRam32((r1 + 532), r12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C27E8;
    }
}

loc_801C27DC:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C27E8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C27F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C2808;
    }
}

loc_801C27FC:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C287C;
}

loc_801C2808:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C2828u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 488);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C287C:
{
    r11 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 370), static_cast<uint16_t>(r0));
    r12 = 21;
    r9 = MemoryInline::FlatRead32((r1 + 352));
    MemoryInline::FlatWriteRam8((r1 + 348), static_cast<uint8_t>(r11));
    r8 = MemoryInline::FlatRead32((r1 + 356));
    r10 = MemoryInline::FlatRead32((r1 + 348));
    r7 = MemoryInline::FlatRead32((r1 + 360));
    r6 = MemoryInline::FlatRead32((r1 + 364));
    r5 = MemoryInline::FlatRead32((r1 + 368));
    r4 = MemoryInline::FlatRead32((r1 + 372));
    r3 = MemoryInline::FlatRead32((r1 + 376));
    r0 = MemoryInline::FlatRead32((r1 + 380));
    MemoryInline::FlatWriteRam32((r1 + 344), r12);
    MemoryInline::FlatWriteRam32((r1 + 388), r28);
    MemoryInline::FlatWriteRam32((r1 + 384), r11);
    MemoryInline::FlatWriteRam32((r1 + 392), r12);
    MemoryInline::FlatWriteRam32((r1 + 396), r10);
    MemoryInline::FlatWriteRam32((r1 + 400), r9);
    MemoryInline::FlatWriteRam32((r1 + 404), r8);
    MemoryInline::FlatWriteRam32((r1 + 408), r7);
    MemoryInline::FlatWriteRam32((r1 + 412), r6);
    MemoryInline::FlatWriteRam32((r1 + 416), r5);
    MemoryInline::FlatWriteRam32((r1 + 420), r4);
    MemoryInline::FlatWriteRam32((r1 + 424), r3);
    MemoryInline::FlatWriteRam32((r1 + 428), r0);
    MemoryInline::FlatWriteRam32((r1 + 432), r11);
    MemoryInline::FlatWriteRam32((r1 + 436), r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C291C;
    }
}

loc_801C2910:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C291C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C292C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C293C;
    }
}

loc_801C2930:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C29B0;
}

loc_801C293C:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C295Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 392);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C29B0:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_801C2E34;
}

loc_801C29C0:
{
    r3 = r29;
    r26 = -2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C2E14;
}

loc_801C29D0:
{
    r3 = 1;
    r0 = 4;
    MemoryInline::FlatWriteRam16((r1 + 274), static_cast<uint16_t>(r3));
    r12 = 25;
    r10 = MemoryInline::FlatRead32((r1 + 256));
    MemoryInline::FlatWriteRam8((r1 + 252), static_cast<uint8_t>(r0));
    r9 = MemoryInline::FlatRead32((r1 + 260));
    r11 = MemoryInline::FlatRead32((r1 + 252));
    r8 = MemoryInline::FlatRead32((r1 + 264));
    r7 = MemoryInline::FlatRead32((r1 + 268));
    r6 = MemoryInline::FlatRead32((r1 + 272));
    r5 = MemoryInline::FlatRead32((r1 + 276));
    r4 = MemoryInline::FlatRead32((r1 + 280));
    r3 = MemoryInline::FlatRead32((r1 + 284));
    r0 = MemoryInline::FlatRead32((r1 + 288));
    MemoryInline::FlatWriteRam32((r1 + 248), r12);
    MemoryInline::FlatWriteRam32((r1 + 292), r28);
    MemoryInline::FlatWriteRam32((r1 + 296), r12);
    MemoryInline::FlatWriteRam32((r1 + 300), r11);
    MemoryInline::FlatWriteRam32((r1 + 304), r10);
    MemoryInline::FlatWriteRam32((r1 + 308), r9);
    MemoryInline::FlatWriteRam32((r1 + 312), r8);
    MemoryInline::FlatWriteRam32((r1 + 316), r7);
    MemoryInline::FlatWriteRam32((r1 + 320), r6);
    MemoryInline::FlatWriteRam32((r1 + 324), r5);
    MemoryInline::FlatWriteRam32((r1 + 328), r4);
    MemoryInline::FlatWriteRam32((r1 + 332), r3);
    MemoryInline::FlatWriteRam32((r1 + 336), r0);
    MemoryInline::FlatWriteRam32((r1 + 340), r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_801C2A70;
    }
}

loc_801C2A64:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r29 + r0);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C2A70:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
}

loc_801C2A80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C2A94;
    }
}

loc_801C2A84:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    goto loc_801C2B0C;
}

loc_801C2A94:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C2AB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 296);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
}

loc_801C2B0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C2B10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C2B1C;
    }
}

loc_801C2B14:
{
    r26 = -2;
    goto loc_801C2E14;
}

loc_801C2B1C:
{
    r3 = 0;
    goto loc_801C2E34;
}

loc_801C2B24:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 178), static_cast<uint16_t>(r3));
    r12 = 25;
    r10 = MemoryInline::FlatRead32((r1 + 160));
    MemoryInline::FlatWriteRam8((r1 + 156), static_cast<uint8_t>(r0));
    r9 = MemoryInline::FlatRead32((r1 + 164));
    r11 = MemoryInline::FlatRead32((r1 + 156));
    r8 = MemoryInline::FlatRead32((r1 + 168));
    r7 = MemoryInline::FlatRead32((r1 + 172));
    r6 = MemoryInline::FlatRead32((r1 + 176));
    r5 = MemoryInline::FlatRead32((r1 + 180));
    r4 = MemoryInline::FlatRead32((r1 + 184));
    r3 = MemoryInline::FlatRead32((r1 + 188));
    r0 = MemoryInline::FlatRead32((r1 + 192));
    MemoryInline::FlatWriteRam32((r1 + 152), r12);
    MemoryInline::FlatWriteRam32((r1 + 196), r28);
    MemoryInline::FlatWriteRam32((r1 + 200), r12);
    MemoryInline::FlatWriteRam32((r1 + 204), r11);
    MemoryInline::FlatWriteRam32((r1 + 208), r10);
    MemoryInline::FlatWriteRam32((r1 + 212), r9);
    MemoryInline::FlatWriteRam32((r1 + 216), r8);
    MemoryInline::FlatWriteRam32((r1 + 220), r7);
    MemoryInline::FlatWriteRam32((r1 + 224), r6);
    MemoryInline::FlatWriteRam32((r1 + 228), r5);
    MemoryInline::FlatWriteRam32((r1 + 232), r4);
    MemoryInline::FlatWriteRam32((r1 + 236), r3);
    MemoryInline::FlatWriteRam32((r1 + 240), r0);
    MemoryInline::FlatWriteRam32((r1 + 244), r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_801C2BC4;
    }
}

loc_801C2BB8:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r29 + r0);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C2BC4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
}

loc_801C2BD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C2BE8;
    }
}

loc_801C2BD8:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    goto loc_801C2C60;
}

loc_801C2BE8:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C2C08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 200);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
}

loc_801C2C60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C2C64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C2C70;
    }
}

loc_801C2C68:
{
    r26 = -2;
    goto loc_801C2E14;
}

loc_801C2C70:
{
    r3 = 0;
    goto loc_801C2E34;
}

loc_801C2C78:
{
    r3 = 77725696;
    r7 = 1;
    r5 = (r3 + 8);
    r6 = 22;
    r0 = 21;
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r3 = (r1 + 108);
    r4 = (r1 + 20);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r7));
    r5 = 4;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam32((r1 + 104), r6);
    MemoryInline::FlatWriteRam16((r1 + 130), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 148), r28);
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
    r3 = (r1 + 112);
    r4 = (r1 + 8);
    r5 = 1;
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
    r3 = (r1 + 113);
    r4 = (r1 + 9);
    r5 = 1;
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
    guest_range_11 = MemoryInline::ResolveRangeHost((r1 + 104), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 0u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_11, 0u, (r1 + 104));
            r12 = MemoryInline::ReadResolved32(guest_range_11, 4u, (r1 + 108));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_11, 8u, (r1 + 112));
            r10 = MemoryInline::ReadResolved32(guest_range_11, 12u, (r1 + 116));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_11, 16u, (r1 + 120));
            r8 = MemoryInline::ReadResolved32(guest_range_11, 20u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_11, 24u, (r1 + 128));
            r6 = MemoryInline::ReadResolved32(guest_range_11, 28u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_11, 32u, (r1 + 136));
            r4 = MemoryInline::ReadResolved32(guest_range_11, 36u, (r1 + 140));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_11, 40u, (r1 + 144));
            r0 = MemoryInline::ReadResolved32(guest_range_11, 44u, (r1 + 148));
        }
    }
    guest_range_12 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_12, 0u, (r1 + 56), r29);
        MemoryInline::WriteResolved32(guest_range_12, 4u, (r1 + 60), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_12, 8u, (r1 + 64), r11);
        MemoryInline::WriteResolved32(guest_range_12, 12u, (r1 + 68), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_12, 16u, (r1 + 72), r9);
        MemoryInline::WriteResolved32(guest_range_12, 20u, (r1 + 76), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_12, 24u, (r1 + 80), r7);
        MemoryInline::WriteResolved32(guest_range_12, 28u, (r1 + 84), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_12, 32u, (r1 + 88), r5);
        MemoryInline::WriteResolved32(guest_range_12, 36u, (r1 + 92), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_12, 40u, (r1 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_12, 44u, (r1 + 100), r0);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r31 + 352));
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r0 = (r0 - r4);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_801C2D60;
    }
}

loc_801C2D54:
{
    r0 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r29 + r0);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C2D60:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
}

loc_801C2D70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C2D84;
    }
}

loc_801C2D74:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    goto loc_801C2DFC;
}

loc_801C2D84:
{
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C2DA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r4 = (r1 + 56);
    r3 = MemoryInline::FlatRead32((r31 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead8((r31 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r31 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
}

loc_801C2DFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C2E00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C2E0C;
    }
}

loc_801C2E04:
{
    r26 = -2;
    goto loc_801C2E14;
}

loc_801C2E0C:
{
    r3 = 0;
    goto loc_801C2E34;
}

loc_801C2E14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801C2E18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C2E30;
    }
}

loc_801C2E1C:
{
    r12 = r28;
    r3 = r27;
    r4 = r26;
    ctr = r12;
    ctx->lr = 0x801C2E30u;
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
    r13 = ctx->gpr[13];
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

loc_801C2E30:
{
    r3 = r26;
}

loc_801C2E34:
{
    r11 = (r1 + 1536);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_13 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_13, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_13, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_13, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_13, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_13, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_13, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_13, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_13, 32u, (r1 + 1540));
    ctx->lr = r0;
    r1 = (r1 + 1536);
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801C1830 func_801C1830 preserves=true fpr_mask=0x00000000
