#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B11B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806B11B0;

loc_806B11B0:
{
    r0 = MemoryInline::FlatRead8((r3 + 297));
    r6 = 0;
    r4 = 0x808A0000u;
    MemoryInline::FlatWrite16((r3 + 2768), static_cast<uint16_t>(r6));
}

loc_806B11C4:
{
    MemoryInline::FlatWrite16((r3 + 2770), static_cast<uint16_t>(r6));
    r4 = (r4 + -10592);
    MemoryInline::FlatWrite16((r3 + 2772), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 2774), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 2776), static_cast<uint16_t>(r6));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B11EC;
    }
}

loc_806B11DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 11));
}

loc_806B11E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B11EC;
    }
}

loc_806B11E8:
{
    r6 = 1;
}

loc_806B11EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 297));
    r5 = 0;
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r6));
}

loc_806B11FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B121C;
    }
}

loc_806B1200:
{
    r0 = MemoryInline::FlatRead8((r3 + 11));
}

loc_806B1208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B121C;
    }
}

loc_806B120C:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_806B1214:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B121C;
    }
}

loc_806B1218:
{
    r5 = 1;
}

loc_806B121C:
{
    r0 = MemoryInline::FlatRead8((r3 + 297));
    r6 = 0;
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r5));
}

loc_806B122C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1240;
    }
}

loc_806B1230:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_806B1238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1240;
    }
}

loc_806B123C:
{
    r6 = 1;
}

loc_806B1240:
{
    r0 = MemoryInline::FlatRead8((r3 + 298));
    r5 = 0;
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r6));
}

loc_806B1250:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1264;
    }
}

loc_806B1254:
{
    r0 = MemoryInline::FlatRead8((r3 + 11));
}

loc_806B125C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B1264;
    }
}

loc_806B1260:
{
    r5 = 1;
}

loc_806B1264:
{
    r0 = MemoryInline::FlatRead8((r3 + 298));
    r6 = 0;
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r5));
}

loc_806B1274:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1294;
    }
}

loc_806B1278:
{
    r0 = MemoryInline::FlatRead8((r3 + 11));
}

loc_806B1280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1294;
    }
}

loc_806B1284:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_806B128C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B1294;
    }
}

loc_806B1290:
{
    r6 = 1;
}

loc_806B1294:
{
    r0 = MemoryInline::FlatRead8((r3 + 298));
    r5 = 0;
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r6));
}

loc_806B12A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B12B8;
    }
}

loc_806B12A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_806B12B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B12B8;
    }
}

loc_806B12B4:
{
    r5 = 1;
}

loc_806B12B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 342));
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r5));
}

loc_806B12C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1328;
    }
}

loc_806B12C8:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_806B12D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B12E4;
    }
}

loc_806B12D4:
{
    r5 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
}

loc_806B12E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_806B12EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1300;
    }
}

loc_806B12F0:
{
    r5 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r0));
}

loc_806B1300:
{
    r0 = MemoryInline::FlatRead8((r3 + 11));
}

loc_806B1308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1328;
    }
}

loc_806B130C:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_806B1314:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B1328;
    }
}

loc_806B1318:
{
    r5 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_806B1328:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
}

loc_806B1330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1350;
    }
}

loc_806B1334:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 132));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 136));
    MemoryInline::FlatWriteFloat32((r3 + 2428), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 2432), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 2436), f0.d);
    goto loc_806B1368;
}

loc_806B1350:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 140));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 2428), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 2432), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 2436), f0.d);
}

loc_806B1368:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r7 = 200;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 228u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r4 + 148));
    r10 = 150;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B137C:
{
    r9 = 180;
    r8 = 5;
    r6 = 10;
    r5 = -1;
    r0 = 90;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 2440), 0, 24u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, (r3 + 2440), r10);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 2442), r9);
    }
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 2444), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 2448), f0.d);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 2452), r7);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 2454), r7);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 2456), r7);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r3 + 2458), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r3 + 2460), r5);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r3 + 2462), r0);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B13D4;
    }
}

loc_806B13BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_806B13C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B13D4;
    }
}

loc_806B13C8:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_806B13D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1408;
    }
}

loc_806B13D4:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    r5 = 135;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r4 + 152));
    r0 = 78;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 156u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r4 + 156));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 160u, (r4 + 160));
        }
    }
    MemoryInline::FlatWriteFloat32((r3 + 2480), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 2484), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 2488), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 2492), f0.d);
    MemoryInline::FlatWrite8((r3 + 2496), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2497), static_cast<uint8_t>(r0));
    goto loc_806B1484;
}

loc_806B1408:
{
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_806B1410:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B1420;
    }
}

loc_806B1414:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_806B141C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1454;
    }
}

loc_806B1420:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r4 + 164));
    r5 = 135;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 168u, (r4 + 168));
    r0 = 78;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 160u, (r4 + 160));
    MemoryInline::FlatWriteFloat32((r3 + 2480), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 2484), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 2488), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 2492), f0.d);
    MemoryInline::FlatWrite8((r3 + 2496), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2497), static_cast<uint8_t>(r0));
    goto loc_806B1484;
}

loc_806B1454:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    r5 = 135;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r4 + 164));
    r0 = 30;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r4 + 156));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 172u, (r4 + 172));
    MemoryInline::FlatWriteFloat32((r3 + 2480), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 2484), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 2488), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 2492), f0.d);
    MemoryInline::FlatWrite8((r3 + 2496), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2497), static_cast<uint8_t>(r0));
}

loc_806B1484:
{
    r0 = MemoryInline::FlatRead8((r3 + 312));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 176u);
        if (resolved_pair.valid) {
            f7.d = PpcBitCastToFloatInline(resolved_pair.first);
            f6.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r4 + 176));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 180u, (r4 + 180));
        }
    }
}

loc_806B1494:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 184u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 184u, (r4 + 184));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 188u, (r4 + 188));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 2500), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r3 + 2500), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 2504), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 2508), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 2512), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 2516), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 2520), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 2524), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 2528), f0.d);
    }
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B14D8;
    }
}

loc_806B14D0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 192u, (r4 + 192));
    MemoryInline::FlatWriteFloat32((r3 + 2528), f0.d);
}

loc_806B14D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 204u, (r4 + 204));
}

loc_806B14E8:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 200u, (r4 + 200));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 180u, (r4 + 180));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r4 + 116));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 196u, (r4 + 196));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r4 + 164));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 188u, (r4 + 188));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 208u, (r4 + 208));
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 2532), 0, 80u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r3 + 2532), f9.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 2544), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 2548), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 2552), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 2556), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 2560), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 2564), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 2568), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r3 + 2572), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r3 + 2576), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, (r3 + 2580), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r3 + 2584), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r3 + 2588), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r3 + 2592), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 64u, (r3 + 2596), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 68u, (r3 + 2600), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, (r3 + 2604), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r3 + 2608), f7.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1560;
    }
}

loc_806B1554:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r4 + 104));
    MemoryInline::FlatWriteFloat32((r3 + 2612), f0.d);
    goto loc_806B1568;
}

loc_806B1560:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r4 + 108));
    MemoryInline::FlatWriteFloat32((r3 + 2612), f0.d);
}

loc_806B1568:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    r5 = 240;
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r4 + 152));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 212u, (r4 + 212));
}

loc_806B157C:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r4 + 156));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r4 + 116));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    MemoryInline::FlatWriteFloat32((r3 + 2616), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 2620), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 2624), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 2628), f2.d);
    MemoryInline::FlatWrite8((r3 + 2636), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteFloat32((r3 + 2732), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 2736), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B15C8;
    }
}

loc_806B15AC:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r4 + 136));
    MemoryInline::FlatWriteFloat32((r3 + 2644), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 2652), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 2656), f0.d);
    goto loc_806B15E0;
}

loc_806B15C8:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 216u, (r4 + 216));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 2644), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 2652), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 2656), f0.d);
}

loc_806B15E0:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    r5 = 255;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 220u, (r4 + 220));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
}

loc_806B15F4:
{
    MemoryInline::FlatWriteFloat32((r3 + 2640), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 2648), f0.d);
    MemoryInline::FlatWrite8((r3 + 2660), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2661), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2662), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2663), static_cast<uint8_t>(r5));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B161C;
    }
}

loc_806B1610:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 2664), f0.d);
    goto loc_806B1624;
}

loc_806B161C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r4 + 108));
    MemoryInline::FlatWriteFloat32((r3 + 2664), f0.d);
}

loc_806B1624:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
}

loc_806B1630:
{
    MemoryInline::FlatWriteFloat32((r3 + 2668), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1644;
    }
}

loc_806B1638:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 2672), f0.d);
    goto loc_806B164C;
}

loc_806B1644:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r4 + 108));
    MemoryInline::FlatWriteFloat32((r3 + 2672), f0.d);
}

loc_806B164C:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    r6 = 255;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    r5 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
}

loc_806B1664:
{
    MemoryInline::FlatWriteFloat32((r3 + 2676), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 2680), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 2684), f1.d);
    MemoryInline::FlatWrite8((r3 + 2688), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2689), static_cast<uint8_t>(r5));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B1688;
    }
}

loc_806B167C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 2692), f0.d);
    goto loc_806B1690;
}

loc_806B1688:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r4 + 104));
    MemoryInline::FlatWriteFloat32((r3 + 2692), f0.d);
}

loc_806B1690:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
}

loc_806B169C:
{
    MemoryInline::FlatWriteFloat32((r3 + 2696), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B16B0;
    }
}

loc_806B16A4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r4 + 104));
    MemoryInline::FlatWriteFloat32((r3 + 2716), f0.d);
    goto loc_806B16B8;
}

loc_806B16B0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r4 + 164));
    MemoryInline::FlatWriteFloat32((r3 + 2716), f0.d);
}

loc_806B16B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
}

loc_806B16C4:
{
    MemoryInline::FlatWriteFloat32((r3 + 2720), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B16D8;
    }
}

loc_806B16CC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 216u, (r4 + 216));
    MemoryInline::FlatWriteFloat32((r3 + 2708), f0.d);
    goto loc_806B16E0;
}

loc_806B16D8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r4 + 164));
    MemoryInline::FlatWriteFloat32((r3 + 2708), f0.d);
}

loc_806B16E0:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B16EC:
{
    MemoryInline::FlatWriteFloat32((r3 + 2712), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B1700;
    }
}

loc_806B16F4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 2700), f0.d);
    goto loc_806B1708;
}

loc_806B1700:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r4 + 104));
    MemoryInline::FlatWriteFloat32((r3 + 2700), f0.d);
}

loc_806B1708:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 224u, (r4 + 224));
    MemoryInline::FlatWriteFloat32((r3 + 2704), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 2728), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000004F9 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x000001FB fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806B11B0 func_806B11B0 preserves=true fpr_mask=0x00000000
