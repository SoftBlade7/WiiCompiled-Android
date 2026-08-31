#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802022E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802022E0;

loc_802022E0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x80360000u;
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r5 = (r5 + -20912);
}

loc_802022FC:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r3))) {
        goto loc_80202338;
    }
}

loc_80202314:
{
    r4 = (r5 + 131072);
    r0 = (r4 + 32072);
}

loc_80202320:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80202338;
    }
}

loc_80202324:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = (r0 & 536870912);
    r0 = (r4 + -536870912);
}

loc_80202334:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8020233C;
    }
}

loc_80202338:
{
    r6 = 0;
}

loc_8020233C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80202340:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020235C;
    }
}

loc_80202344:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80202510;
}

loc_8020235C:
{
}

loc_80202360:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8020236C;
    }
}

loc_80202364:
{
    r31 = 0;
    goto loc_80202374;
}

loc_8020236C:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r31 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80202374:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80202378:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202394;
    }
}

loc_8020237C:
{
    r4 = 0x80360000u;
    r0 = 38;
    r4 = (r4 + -20912);
    r3 = 38;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80202510;
}

loc_80202394:
{
    r3 = r31;
    ctx->lr = 0x8020239Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80205CF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802023A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802023C4;
    }
}

loc_802023A4:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r3);
    MemoryInline::FlatWrite32((r30 + 28), r3);
    goto loc_80202510;
}

loc_802023C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_802023C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802023FC;
    }
}

loc_802023CC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802023D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802023FC;
    }
}

loc_802023D8:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802023E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802023FC;
    }
}

loc_802023E4:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802023F0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_802023FC;
    }
}

loc_802023F4:
{
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802023F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202418;
    }
}

loc_802023FC:
{
    r4 = 0x80360000u;
    r0 = 38;
    r4 = (r4 + -20912);
    r3 = 38;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    goto loc_80202510;
}

loc_80202418:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80202420;
    }
}

loc_8020241C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020243C;
    }
}

loc_80202420:
{
    r4 = 0x80360000u;
    r0 = 38;
    r4 = (r4 + -20912);
    r3 = 38;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    goto loc_80202510;
}

loc_8020243C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80202440:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020246C;
    }
}

loc_80202444:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r0);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    goto loc_80202510;
}

loc_8020246C:
{
    MemoryInline::FlatWrite32((r31 + 5616), r30);
    r3 = r30;
    r4 = r29;
    r9 = MemoryInline::FlatRead32((r30 + 32));
    r8 = MemoryInline::FlatRead32((r30 + 36));
    r7 = MemoryInline::FlatRead32((r30 + 40));
    r6 = MemoryInline::FlatRead32((r30 + 44));
    r5 = MemoryInline::FlatRead32((r30 + 12));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    MemoryInline::FlatWriteRam32((r1 + 16), r9);
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    MemoryInline::FlatWriteRam32((r1 + 24), r7);
    MemoryInline::FlatWriteRam32((r1 + 28), r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x802024ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020116Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r9 = MemoryInline::FlatRead32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802024B4:
{
    r8 = MemoryInline::FlatRead32((r1 + 20));
    r0 = 0;
    r7 = MemoryInline::FlatRead32((r1 + 24));
    r6 = MemoryInline::FlatRead32((r1 + 28));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r30 + 32), r9);
    MemoryInline::FlatWrite32((r30 + 36), r8);
    MemoryInline::FlatWrite32((r30 + 40), r7);
    MemoryInline::FlatWrite32((r30 + 44), r6);
    MemoryInline::FlatWrite32((r30 + 12), r5);
    MemoryInline::FlatWrite32((r30 + 16), r4);
    MemoryInline::FlatWrite32((r31 + 5616), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020250C;
    }
}

loc_802024EC:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r3);
    MemoryInline::FlatWrite32((r30 + 28), r3);
    goto loc_80202510;
}

loc_8020250C:
{
    r3 = 0;
}

loc_80202510:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802022E0 func_802022E0 preserves=true fpr_mask=0x00000000
