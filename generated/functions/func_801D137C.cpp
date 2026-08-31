#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D137C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_21 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D137C;

loc_801D137C:
{
}

loc_801D1380:
{
    r0 = 99;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801D1458;
    }
}

loc_801D1388:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801D138C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D15EC;
    }
}

loc_801D1390:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801D1394:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D15EC;
    }
}

loc_801D1398:
{
    r0 = 4;
    r5 = 0;
    r4 = 1;
    ctr = r0;
}

loc_801D13A8:
{
    r0 = (r3 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D13B4;
    }
}

loc_801D13B0:
{
    goto loc_801D1450;
}

loc_801D13B4:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D13C8;
    }
}

loc_801D13C4:
{
    goto loc_801D1450;
}

loc_801D13C8:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D13DC;
    }
}

loc_801D13D8:
{
    goto loc_801D1450;
}

loc_801D13DC:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D13F0;
    }
}

loc_801D13EC:
{
    goto loc_801D1450;
}

loc_801D13F0:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1404;
    }
}

loc_801D1400:
{
    goto loc_801D1450;
}

loc_801D1404:
{
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_6 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1418;
    }
}

loc_801D1414:
{
    goto loc_801D1450;
}

loc_801D1418:
{
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_7 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D142C;
    }
}

loc_801D1428:
{
    goto loc_801D1450;
}

loc_801D142C:
{
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_8 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1440;
    }
}

loc_801D143C:
{
    goto loc_801D1450;
}

loc_801D1440:
{
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_9 & -2);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D13A8;
    }
}

loc_801D144C:
{
    r5 = -1;
}

loc_801D1450:
{
    r0 = (r5 + 20);
    goto loc_801D15EC;
}

loc_801D1458:
{
}

loc_801D145C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801D1528;
    }
}

loc_801D1460:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801D1464:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D15EC;
    }
}

loc_801D1468:
{
    r0 = 4;
    r5 = 0;
    r3 = 1;
    ctr = r0;
}

loc_801D1478:
{
    r0 = (r4 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1484;
    }
}

loc_801D1480:
{
    goto loc_801D1520;
}

loc_801D1484:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1498;
    }
}

loc_801D1494:
{
    goto loc_801D1520;
}

loc_801D1498:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D14AC;
    }
}

loc_801D14A8:
{
    goto loc_801D1520;
}

loc_801D14AC:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D14C0;
    }
}

loc_801D14BC:
{
    goto loc_801D1520;
}

loc_801D14C0:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D14D4;
    }
}

loc_801D14D0:
{
    goto loc_801D1520;
}

loc_801D14D4:
{
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D14E8;
    }
}

loc_801D14E4:
{
    goto loc_801D1520;
}

loc_801D14E8:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D14FC;
    }
}

loc_801D14F8:
{
    goto loc_801D1520;
}

loc_801D14FC:
{
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1510;
    }
}

loc_801D150C:
{
    goto loc_801D1520;
}

loc_801D1510:
{
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & -2);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1478;
    }
}

loc_801D151C:
{
    r5 = -1;
}

loc_801D1520:
{
    r0 = (r5 + 30);
    goto loc_801D15EC;
}

loc_801D1528:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801D152C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D15EC;
    }
}

loc_801D1530:
{
    r0 = 4;
    r4 = 0;
    r3 = 1;
    ctr = r0;
}

loc_801D1540:
{
    r0 = (r5 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D154C;
    }
}

loc_801D1548:
{
    goto loc_801D15E8;
}

loc_801D154C:
{
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1560;
    }
}

loc_801D155C:
{
    goto loc_801D15E8;
}

loc_801D1560:
{
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1574;
    }
}

loc_801D1570:
{
    goto loc_801D15E8;
}

loc_801D1574:
{
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_14 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1588;
    }
}

loc_801D1584:
{
    goto loc_801D15E8;
}

loc_801D1588:
{
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_15 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D159C;
    }
}

loc_801D1598:
{
    goto loc_801D15E8;
}

loc_801D159C:
{
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_16 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D15B0;
    }
}

loc_801D15AC:
{
    goto loc_801D15E8;
}

loc_801D15B0:
{
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_17 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D15C4;
    }
}

loc_801D15C0:
{
    goto loc_801D15E8;
}

loc_801D15C4:
{
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_18 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D15D8;
    }
}

loc_801D15D4:
{
    goto loc_801D15E8;
}

loc_801D15D8:
{
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_19 & -2);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1540;
    }
}

loc_801D15E4:
{
    r4 = -1;
}

loc_801D15E8:
{
    r0 = (r4 + 40);
}

loc_801D15EC:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D137C func_801D137C preserves=true fpr_mask=0x00000000
