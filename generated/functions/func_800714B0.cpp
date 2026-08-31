#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800714B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800714B0;

loc_800714B0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
}

loc_800714BC:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(9))) {
        goto loc_800714FC;
    }
}

loc_800714DC:
{
    r5 = (r4 + -1);
    r6 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800714FC;
    }
}

loc_800714F4:
{
    r0 = 1;
    goto loc_80071500;
}

loc_800714FC:
{
    r0 = 0;
}

loc_80071500:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071504:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80071D24;
    }
}

loc_80071508:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_8007150C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800719E8;
    }
}

loc_80071510:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007153C;
    }
}

loc_80071514:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_80071518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D14;
    }
}

loc_8007151C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80071530;
    }
}

loc_80071520:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80071524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071598;
    }
}

loc_80071528:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007160C;
    }
}

loc_8007152C:
{
    goto loc_80071D14;
}

loc_80071530:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_80071534:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80071560;
    }
}

loc_80071538:
{
    goto loc_800716D8;
}

loc_8007153C:
{
    r5 = 65536;
    r0 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80071548:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071CF8;
    }
}

loc_8007154C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80071D14;
    }
}

loc_80071550:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(8));
}

loc_80071554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071C68;
    }
}

loc_80071558:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80071D14;
    }
}

loc_8007155C:
{
    goto loc_80071B28;
}

loc_80071560:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r3 = r31;
    r12 = MemoryInline::FlatRead32(r31);
    r4 = r29;
    r5 = (r0 & 536870912);
    r0 = (r0 & 1073741824);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r6 = (r6_rot_1 & 134217727);
    ctr = r12;
    ctx->lr = 0x80071594u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80071D24;
}

loc_80071598:
{
    r3 = r29;
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x800715A8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80070EC0u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r29 + 296));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800715B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800715C4;
    }
}

loc_800715B4:
{
    r0 = MemoryInline::FlatRead32((r29 + 232));
    r3 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    ctx->lr = 0x800715C4u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80056F10u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800715C4:
{
    r3 = MemoryInline::FlatRead32((r29 + 212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800715CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_800715D0:
{
    r0 = MemoryInline::FlatRead16((r29 + 218));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800715D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_800715DC:
{
    r0 = MemoryInline::FlatRead8((r29 + 216));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800715E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_800715E8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r29;
    r6 = r30;
    r7 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x80071608u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80071D24;
}

loc_8007160C:
{
    r4 = MemoryInline::FlatRead32((r3 + 212));
}

loc_80071614:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80071654;
    }
}

loc_80071618:
{
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 & 2);
}

loc_80071620:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80071654;
    }
}

loc_80071624:
{
    r0 = MemoryInline::FlatRead8((r3 + 216));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8007162C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071654;
    }
}

loc_80071630:
{
    r12 = MemoryInline::FlatRead32(r4);
    r3 = r4;
    r5 = r29;
    r6 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r7 = r31;
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x80071654u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071654:
{
    r4 = MemoryInline::FlatRead32((r29 + 304));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8007165C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80071678;
    }
}

loc_80071660:
{
    r0 = MemoryInline::FlatRead32((r29 + 308));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071668:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80071678;
    }
}

loc_8007166C:
{
    r0 = MemoryInline::FlatRead32((r29 + 300));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071674:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071690;
    }
}

loc_80071678:
{
    r6 = MemoryInline::FlatRead32((r29 + 300));
    r3 = (r1 + 28);
    r5 = MemoryInline::FlatRead32((r29 + 308));
    r0 = MemoryInline::FlatRead32((r29 + 232));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x80071690u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80076CC0u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071690:
{
    r3 = MemoryInline::FlatRead32((r29 + 212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80071698:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_8007169C:
{
    r0 = MemoryInline::FlatRead16((r29 + 218));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800716A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_800716A8:
{
    r0 = MemoryInline::FlatRead8((r29 + 216));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800716B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_800716B4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r29;
    r6 = r30;
    r7 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x800716D4u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80071D24;
}

loc_800716D8:
{
    r5 = MemoryInline::FlatRead8((r3 + 257));
    r4 = MemoryInline::FlatRead8((r3 + 256));
    r5 = (r5 + 1);
    r6 = MemoryInline::FlatRead32((r3 + 212));
    r0 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r4));
}

loc_800716F0:
{
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    MemoryInline::FlatWrite8((r3 + 257), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8007173C;
    }
}

loc_80071700:
{
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 & 4);
}

loc_80071708:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007173C;
    }
}

loc_8007170C:
{
    r0 = MemoryInline::FlatRead8((r3 + 216));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007173C;
    }
}

loc_80071718:
{
    r12 = MemoryInline::FlatRead32(r6);
    r3 = r6;
    r5 = r29;
    r6 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r7 = r31;
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x8007173Cu;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8007173C:
{
    r3 = r29;
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8006D790u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = MemoryInline::FlatRead32((r29 + 212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80071750:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007178C;
    }
}

loc_80071754:
{
    r0 = MemoryInline::FlatRead16((r29 + 218));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8007175C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007178C;
    }
}

loc_80071760:
{
    r0 = MemoryInline::FlatRead8((r29 + 216));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007178C;
    }
}

loc_8007176C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r29;
    r6 = r30;
    r7 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = 2;
    ctr = r12;
    ctx->lr = 0x8007178Cu;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8007178C:
{
    ctx->lr = 0x80071790u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B1870u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071794:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80071900;
    }
}

loc_80071798:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 232), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r29 + 260));
    r0 = (r0 & 1);
}

loc_800717A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80071858;
    }
}

loc_800717A4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r29 + 258));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 236));
    r4 = (r0 * 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A165Cu>(ctx);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 232), 0, 28u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r29 + 248));
}

loc_800717BC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800717E0;
    }
}

loc_800717C0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r29 + 258));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r29 + 257));
    r3 = (r0 * 36);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r4 * r0);
    r4 = (r5 + r0);
    goto loc_800717E4;
}

loc_800717E0:
{
    r4 = 0;
}

loc_800717E4:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r29 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800717EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071810;
    }
}

loc_800717F0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r29 + 258));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r5 * r0);
    r10 = (r6 + r0);
    goto loc_80071814;
}

loc_80071810:
{
    r10 = 0;
}

loc_80071814:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 232));
    r8 = r31;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r9 = (r1 + 16);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r29 + 258));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r29 + 244));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r29 + 236));
            r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r29 + 240));
        }
    }
    r0 = (r3 + 31);
    r7 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r29 + 258));
    r0 = (r0 & -32);
    r0 = (r11 * r0);
    r3 = (r12 + r0);
    ctx->lr = 0x80071854u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80067270u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800718F8;
}

loc_80071858:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r29 + 248));
}

loc_80071860:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80071884;
    }
}

loc_80071864:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r29 + 258));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r29 + 257));
    r3 = (r0 * 36);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r4 * r0);
    r4 = (r5 + r0);
    goto loc_80071888;
}

loc_80071884:
{
    r4 = 0;
}

loc_80071888:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r29 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80071890:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800718B4;
    }
}

loc_80071894:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r29 + 258));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r5 * r0);
    r10 = (r6 + r0);
    goto loc_800718B8;
}

loc_800718B4:
{
    r10 = 0;
}

loc_800718B8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 232));
    r8 = r31;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r9 = (r1 + 20);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r29 + 258));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 244));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 236));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 240));
        }
    }
    r0 = (r3 + 31);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r29 + 258));
    r0 = (r0 & -32);
    r0 = (r11 * r0);
    r3 = (r12 + r0);
    ctx->lr = 0x800718F8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80066DD0u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800718F8:
{
    ctx->lr = 0x800718FCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B18E0u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800719A0;
}

loc_80071900:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 232), 0, 28u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r29 + 248));
}

loc_80071908:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8007192C;
    }
}

loc_8007190C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r29 + 258));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r29 + 257));
    r3 = (r0 * 36);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r4 * r0);
    r4 = (r5 + r0);
    goto loc_80071930;
}

loc_8007192C:
{
    r4 = 0;
}

loc_80071930:
{
    r6 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r29 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80071938:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007195C;
    }
}

loc_8007193C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r29 + 258));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r5 * r0);
    r10 = (r6 + r0);
    goto loc_80071960;
}

loc_8007195C:
{
    r10 = 0;
}

loc_80071960:
{
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 232));
    r8 = r31;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r9 = (r1 + 24);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r29 + 258));
    r11 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r12 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r29 + 244));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r29 + 236));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r29 + 240));
        }
    }
    r0 = (r3 + 31);
    r7 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r29 + 258));
    r0 = (r0 & -32);
    r0 = (r11 * r0);
    r3 = (r12 + r0);
    ctx->lr = 0x800719A0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80066AA0u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800719A0:
{
    r3 = MemoryInline::FlatRead32((r29 + 212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800719A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_800719AC:
{
    r0 = MemoryInline::FlatRead16((r29 + 218));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800719B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_800719B8:
{
    r0 = MemoryInline::FlatRead8((r29 + 216));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800719C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_800719C4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r29;
    r6 = r30;
    r7 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x800719E4u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80071D24;
}

loc_800719E8:
{
    r4 = MemoryInline::FlatRead32((r3 + 212));
}

loc_800719F0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80071A30;
    }
}

loc_800719F4:
{
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 & 16);
}

loc_800719FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80071A30;
    }
}

loc_80071A00:
{
    r0 = MemoryInline::FlatRead8((r3 + 216));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071A08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071A30;
    }
}

loc_80071A0C:
{
    r12 = MemoryInline::FlatRead32(r4);
    r3 = r4;
    r5 = r29;
    r6 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    r7 = r31;
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x80071A30u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071A30:
{
}

loc_80071A34:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80071A40;
    }
}

loc_80071A38:
{
    r10 = MemoryInline::FlatRead32(r31);
    goto loc_80071A44;
}

loc_80071A40:
{
    r10 = MemoryInline::FlatRead32((r29 + 280));
}

loc_80071A44:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 232), 0, 44u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r29 + 248));
}

loc_80071A4C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80071A70;
    }
}

loc_80071A50:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 26u, (r29 + 258));
    r4 = MemoryInline::ReadResolved8(guest_range_3, 25u, (r29 + 257));
    r3 = (r0 * 36);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r4 * r0);
    r5 = (r5 + r0);
    goto loc_80071A74;
}

loc_80071A70:
{
    r5 = 0;
}

loc_80071A74:
{
    r6 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r29 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80071A7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071AA0;
    }
}

loc_80071A80:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 26u, (r29 + 258));
    r4 = MemoryInline::ReadResolved8(guest_range_3, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r4 * r0);
    r6 = (r6 + r0);
    goto loc_80071AA4;
}

loc_80071AA0:
{
    r6 = 0;
}

loc_80071AA4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 26u, (r29 + 258));
    r3 = (r1 + 12);
    r9 = MemoryInline::ReadResolved8(guest_range_3, 25u, (r29 + 257));
    r8 = 0;
    r4 = (r0 * 48);
    r7 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r29 + 272));
    r11 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r29 + 244));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r29 + 232));
    r4 = (r4 + 31);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r4 & -32);
    r0 = (r9 * r0);
    r9 = 0;
    r4 = (r11 + r0);
    ctx->lr = 0x80071AE0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80069000u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80071AE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_80071AEC:
{
    r0 = MemoryInline::FlatRead16((r29 + 218));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071AF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_80071AF8:
{
    r0 = MemoryInline::FlatRead8((r29 + 216));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071B00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_80071B04:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r29;
    r6 = r30;
    r7 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x80071B24u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80071D24;
}

loc_80071B28:
{
    r4 = MemoryInline::FlatRead32((r3 + 212));
}

loc_80071B30:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80071B70;
    }
}

loc_80071B34:
{
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 & 32);
}

loc_80071B3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80071B70;
    }
}

loc_80071B40:
{
    r0 = MemoryInline::FlatRead8((r3 + 216));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071B48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071B70;
    }
}

loc_80071B4C:
{
    r12 = MemoryInline::FlatRead32(r4);
    r3 = r4;
    r5 = r29;
    r6 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r7 = r31;
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x80071B70u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071B70:
{
}

loc_80071B74:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80071B80;
    }
}

loc_80071B78:
{
    r10 = MemoryInline::FlatRead32(r31);
    goto loc_80071B84;
}

loc_80071B80:
{
    r10 = MemoryInline::FlatRead32((r29 + 280));
}

loc_80071B84:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r29 + 232), 0, 48u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r29 + 248));
}

loc_80071B8C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80071BB0;
    }
}

loc_80071B90:
{
    r0 = MemoryInline::ReadResolved16(guest_range_4, 26u, (r29 + 258));
    r4 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r29 + 257));
    r3 = (r0 * 36);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r4 * r0);
    r5 = (r5 + r0);
    goto loc_80071BB4;
}

loc_80071BB0:
{
    r5 = 0;
}

loc_80071BB4:
{
    r6 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r29 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80071BBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071BE0;
    }
}

loc_80071BC0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_4, 26u, (r29 + 258));
    r4 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r4 * r0);
    r6 = (r6 + r0);
    goto loc_80071BE4;
}

loc_80071BE0:
{
    r6 = 0;
}

loc_80071BE4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_4, 26u, (r29 + 258));
    r3 = (r1 + 8);
    r9 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r29 + 257));
    r7 = 0;
    r4 = (r0 * 48);
    r8 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r29 + 276));
    r11 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r29 + 244));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r29 + 232));
    r4 = (r4 + 31);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r4 & -32);
    r0 = (r9 * r0);
    r9 = 0;
    r4 = (r11 + r0);
    ctx->lr = 0x80071C20u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80069000u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80071C28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_80071C2C:
{
    r0 = MemoryInline::FlatRead16((r29 + 218));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071C34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_80071C38:
{
    r0 = MemoryInline::FlatRead8((r29 + 216));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071C40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_80071C44:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r29;
    r6 = r30;
    r7 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x80071C64u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80071D24;
}

loc_80071C68:
{
    r3 = MemoryInline::FlatRead32((r3 + 292));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80071C70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071C84;
    }
}

loc_80071C74:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80071C84u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071C84:
{
    r3 = MemoryInline::FlatRead32((r29 + 296));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80071C8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071CA0;
    }
}

loc_80071C90:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80071CA0u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071CA0:
{
    r3 = MemoryInline::FlatRead32((r29 + 300));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80071CA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071CBC;
    }
}

loc_80071CAC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80071CBCu;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071CBC:
{
    r3 = MemoryInline::FlatRead32((r29 + 304));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80071CC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071CD8;
    }
}

loc_80071CC8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80071CD8u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071CD8:
{
    r3 = MemoryInline::FlatRead32((r29 + 308));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80071CE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D24;
    }
}

loc_80071CE4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80071CF4u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80071D24;
}

loc_80071CF8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x80071D10u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80071D24;
}

loc_80071D14:
{
    r3 = r29;
    r5 = r30;
    r6 = r31;
    ctx->lr = 0x80071D24u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8006E0B0u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071D24:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800714B0 func_800714B0 preserves=true fpr_mask=0x00000000
