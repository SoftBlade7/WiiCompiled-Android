#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D31D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800D31D8;

loc_800D31D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80270000u;
    r31 = (r31 + 25688);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r5 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1539));
}

loc_800D3208:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D321C;
    }
}

loc_800D320C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2305));
}

loc_800D3210:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D321C;
    }
}

loc_800D3214:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2817));
}

loc_800D3218:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D3230;
    }
}

loc_800D321C:
{
    r4 = (r31 + 1428);
    r3 = 4;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D322Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800D3628;
}

loc_800D3230:
{
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800D3238:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3270;
    }
}

loc_800D323C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3250;
    }
}

loc_800D3240:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D3244:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3260;
    }
}

loc_800D3248:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3268;
    }
}

loc_800D324C:
{
    goto loc_800D3288;
}

loc_800D3250:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_800D3254:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3280;
    }
}

loc_800D3258:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3288;
    }
}

loc_800D325C:
{
    goto loc_800D3278;
}

loc_800D3260:
{
    r29 = (r31 + 1472);
    goto loc_800D328C;
}

loc_800D3268:
{
    r29 = (r31 + 1488);
    goto loc_800D328C;
}

loc_800D3270:
{
    r29 = (r31 + 1504);
    goto loc_800D328C;
}

loc_800D3278:
{
    r29 = (r31 + 1524);
    goto loc_800D328C;
}

loc_800D3280:
{
    r29 = (r31 + 1544);
    goto loc_800D328C;
}

loc_800D3288:
{
    r29 = (r31 + 1560);
}

loc_800D328C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1026));
}

loc_800D3290:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3500;
    }
}

loc_800D3294:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3368;
    }
}

loc_800D3298:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(260));
}

loc_800D329C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D34A0;
    }
}

loc_800D32A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3308;
    }
}

loc_800D32A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(6));
}

loc_800D32A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3470;
    }
}

loc_800D32AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D32DC;
    }
}

loc_800D32B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_800D32B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3450;
    }
}

loc_800D32B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D32CC;
    }
}

loc_800D32BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800D32C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3440;
    }
}

loc_800D32C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3448;
    }
}

loc_800D32C8:
{
    goto loc_800D35A8;
}

loc_800D32CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_800D32D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3460;
    }
}

loc_800D32D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3468;
    }
}

loc_800D32D8:
{
    goto loc_800D3458;
}

loc_800D32DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(257));
}

loc_800D32E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3488;
    }
}

loc_800D32E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D32FC;
    }
}

loc_800D32E8:
{
}

loc_800D32EC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(256))) {
        goto loc_800D3480;
    }
}

loc_800D32F0:
{
}

loc_800D32F4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(8))) {
        goto loc_800D35A8;
    }
}

loc_800D32F8:
{
    goto loc_800D3478;
}

loc_800D32FC:
{
}

loc_800D3300:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(259))) {
        goto loc_800D3498;
    }
}

loc_800D3304:
{
    goto loc_800D3490;
}

loc_800D3308:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(514));
}

loc_800D330C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D34D8;
    }
}

loc_800D3310:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3340;
    }
}

loc_800D3314:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(264));
}

loc_800D3318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D34C0;
    }
}

loc_800D331C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3330;
    }
}

loc_800D3320:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(262));
}

loc_800D3324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D34B0;
    }
}

loc_800D3328:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D34B8;
    }
}

loc_800D332C:
{
    goto loc_800D34A8;
}

loc_800D3330:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(512));
}

loc_800D3334:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D34C8;
    }
}

loc_800D3338:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D34D0;
    }
}

loc_800D333C:
{
    goto loc_800D35A8;
}

loc_800D3340:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(769));
}

loc_800D3344:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D34E8;
    }
}

loc_800D3348:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3358;
    }
}

loc_800D334C:
{
}

loc_800D3350:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(768))) {
        goto loc_800D34E0;
    }
}

loc_800D3354:
{
    goto loc_800D35A8;
}

loc_800D3358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1024));
}

loc_800D335C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D34F0;
    }
}

loc_800D3360:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D34F8;
    }
}

loc_800D3364:
{
    goto loc_800D35A8;
}

loc_800D3368:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2304));
}

loc_800D336C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3558;
    }
}

loc_800D3370:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D33D8;
    }
}

loc_800D3374:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1539));
}

loc_800D3378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3530;
    }
}

loc_800D337C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D33B0;
    }
}

loc_800D3380:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1536));
}

loc_800D3384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3518;
    }
}

loc_800D3388:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D33A4;
    }
}

loc_800D338C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1281));
}

loc_800D3390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3510;
    }
}

loc_800D3394:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D35A8;
    }
}

loc_800D3398:
{
}

loc_800D339C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(1280))) {
        goto loc_800D3508;
    }
}

loc_800D33A0:
{
    goto loc_800D35A8;
}

loc_800D33A4:
{
}

loc_800D33A8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(1538))) {
        goto loc_800D3528;
    }
}

loc_800D33AC:
{
    goto loc_800D3520;
}

loc_800D33B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1794));
}

loc_800D33B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3548;
    }
}

loc_800D33B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D33CC;
    }
}

loc_800D33BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1792));
}

loc_800D33C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3538;
    }
}

loc_800D33C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3540;
    }
}

loc_800D33C8:
{
    goto loc_800D35A8;
}

loc_800D33CC:
{
}

loc_800D33D0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2048))) {
        goto loc_800D3550;
    }
}

loc_800D33D4:
{
    goto loc_800D35A8;
}

loc_800D33D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2817));
}

loc_800D33DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3580;
    }
}

loc_800D33E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3410;
    }
}

loc_800D33E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2561));
}

loc_800D33E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3570;
    }
}

loc_800D33EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3404;
    }
}

loc_800D33F0:
{
}

loc_800D33F4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(2560))) {
        goto loc_800D3568;
    }
}

loc_800D33F8:
{
}

loc_800D33FC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(2306))) {
        goto loc_800D35A8;
    }
}

loc_800D3400:
{
    goto loc_800D3560;
}

loc_800D3404:
{
}

loc_800D3408:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(2816))) {
        goto loc_800D3578;
    }
}

loc_800D340C:
{
    goto loc_800D35A8;
}

loc_800D3410:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3328));
}

loc_800D3414:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3598;
    }
}

loc_800D3418:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D3434;
    }
}

loc_800D341C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3073));
}

loc_800D3420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D3590;
    }
}

loc_800D3424:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D35A8;
    }
}

loc_800D3428:
{
}

loc_800D342C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(3072))) {
        goto loc_800D3588;
    }
}

loc_800D3430:
{
    goto loc_800D35A8;
}

loc_800D3434:
{
}

loc_800D3438:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(3330))) {
        goto loc_800D35A8;
    }
}

loc_800D343C:
{
    goto loc_800D35A0;
}

loc_800D3440:
{
    r30 = (r31 + 1580);
    goto loc_800D35AC;
}

loc_800D3448:
{
    r30 = (r31 + 1592);
    goto loc_800D35AC;
}

loc_800D3450:
{
    r30 = (r31 + 1604);
    goto loc_800D35AC;
}

loc_800D3458:
{
    r30 = (r31 + 1624);
    goto loc_800D35AC;
}

loc_800D3460:
{
    r30 = (r31 + 1640);
    goto loc_800D35AC;
}

loc_800D3468:
{
    r30 = (r31 + 1652);
    goto loc_800D35AC;
}

loc_800D3470:
{
    r30 = (r31 + 1664);
    goto loc_800D35AC;
}

loc_800D3478:
{
    r30 = (r31 + 1688);
    goto loc_800D35AC;
}

loc_800D3480:
{
    r30 = (r31 + 1712);
    goto loc_800D35AC;
}

loc_800D3488:
{
    r30 = (r31 + 1724);
    goto loc_800D35AC;
}

loc_800D3490:
{
    r30 = (r31 + 1744);
    goto loc_800D35AC;
}

loc_800D3498:
{
    r30 = (r31 + 1764);
    goto loc_800D35AC;
}

loc_800D34A0:
{
    r30 = (r31 + 1784);
    goto loc_800D35AC;
}

loc_800D34A8:
{
    r30 = (r31 + 1808);
    goto loc_800D35AC;
}

loc_800D34B0:
{
    r30 = (r31 + 1832);
    goto loc_800D35AC;
}

loc_800D34B8:
{
    r30 = (r31 + 1860);
    goto loc_800D35AC;
}

loc_800D34C0:
{
    r30 = (r31 + 1888);
    goto loc_800D35AC;
}

loc_800D34C8:
{
    r30 = (r31 + 1916);
    goto loc_800D35AC;
}

loc_800D34D0:
{
    r30 = (r31 + 1928);
    goto loc_800D35AC;
}

loc_800D34D8:
{
    r30 = (r31 + 1952);
    goto loc_800D35AC;
}

loc_800D34E0:
{
    r30 = (r31 + 1976);
    goto loc_800D35AC;
}

loc_800D34E8:
{
    r30 = (r31 + 1988);
    goto loc_800D35AC;
}

loc_800D34F0:
{
    r30 = (r31 + 2012);
    goto loc_800D35AC;
}

loc_800D34F8:
{
    r30 = (r31 + 2028);
    goto loc_800D35AC;
}

loc_800D3500:
{
    r30 = (r31 + 2052);
    goto loc_800D35AC;
}

loc_800D3508:
{
    r30 = (r31 + 2080);
    goto loc_800D35AC;
}

loc_800D3510:
{
    r30 = (r31 + 2096);
    goto loc_800D35AC;
}

loc_800D3518:
{
    r30 = (r31 + 2120);
    goto loc_800D35AC;
}

loc_800D3520:
{
    r30 = (r31 + 2132);
    goto loc_800D35AC;
}

loc_800D3528:
{
    r30 = (r31 + 2156);
    goto loc_800D35AC;
}

loc_800D3530:
{
    r30 = (r31 + 2176);
    goto loc_800D35AC;
}

loc_800D3538:
{
    r30 = (r31 + 2204);
    goto loc_800D35AC;
}

loc_800D3540:
{
    r30 = (r31 + 2216);
    goto loc_800D35AC;
}

loc_800D3548:
{
    r30 = (r31 + 2236);
    goto loc_800D35AC;
}

loc_800D3550:
{
    r30 = (r31 + 2256);
    goto loc_800D35AC;
}

loc_800D3558:
{
    r30 = (r13 + -32216);
    goto loc_800D35AC;
}

loc_800D3560:
{
    r30 = (r31 + 2272);
    goto loc_800D35AC;
}

loc_800D3568:
{
    r30 = (r31 + 2288);
    goto loc_800D35AC;
}

loc_800D3570:
{
    r30 = (r31 + 2304);
    goto loc_800D35AC;
}

loc_800D3578:
{
    r30 = (r31 + 2332);
    goto loc_800D35AC;
}

loc_800D3580:
{
    r30 = (r31 + 2344);
    goto loc_800D35AC;
}

loc_800D3588:
{
    r30 = (r31 + 2368);
    goto loc_800D35AC;
}

loc_800D3590:
{
    r30 = (r31 + 2384);
    goto loc_800D35AC;
}

loc_800D3598:
{
    r30 = (r31 + 2412);
    goto loc_800D35AC;
}

loc_800D35A0:
{
    r30 = (r31 + 2424);
    goto loc_800D35AC;
}

loc_800D35A8:
{
    r30 = (r31 + 2452);
}

loc_800D35AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D35B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D35CC;
    }
}

loc_800D35B8:
{
    r4 = (r31 + 2476);
    r3 = 2;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D35C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800D35DC;
}

loc_800D35CC:
{
    r3 = 2;
    r4 = (r13 + -32208);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D35DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800D35DC:
{
    r6 = MemoryInline::FlatRead32(r28);
    r5 = r29;
    r4 = (r31 + 2492);
    r3 = 2;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D35F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead32((r28 + 4));
    r5 = r30;
    r4 = (r31 + 2512);
    r3 = 2;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D360Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r28 + 8));
    r4 = (r31 + 2536);
    r3 = 2;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D3620u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    ctx->lr = 0x800D3628u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800D2CD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800D3628:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFF7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800D31D8 func_800D31D8 preserves=true fpr_mask=0x00000000
