#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801384C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801384C4;

loc_801384C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80280000u;
    r30 = (r30 + 13600);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    // inline leaf 0x8013B190 (4 guest instruction(s))
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r3 = (r3 + 1600);
    // end of inlined leaf 0x8013B190
    r4 = MemoryInline::FlatRead16(r29);
    r31 = r3;
}

loc_80138500:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8013861C;
    }
}

loc_80138504:
{
    r0 = (r4 & 1);
}

loc_80138508:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80138544;
    }
}

loc_8013850C:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (r0 & 32);
}

loc_80138514:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80138544;
    }
}

loc_80138518:
{
    r5 = (r4 & 65534);
    r3 = 0x80330000u;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r5));
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80138530:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80138544;
    }
}

loc_80138534:
{
    r3 = 851968;
    r4 = (r30 + 188);
    r3 = (r3 + 2);
    ctx->lr = 0x80138544u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80138544:
{
    r3 = MemoryInline::FlatRead16(r29);
    r0 = (r3 & 2);
}

loc_8013854C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013858C;
    }
}

loc_80138550:
{
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (r0 & 64);
}

loc_80138558:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013858C;
    }
}

loc_8013855C:
{
    r5 = (r3 & -3);
    r3 = 0x80330000u;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r5));
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80138574:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013858C;
    }
}

loc_80138578:
{
    r3 = 851968;
    r4 = (r30 + 248);
    r3 = (r3 + 2);
    r5 = (r5 & 65535);
    ctx->lr = 0x8013858Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8013858C:
{
    r3 = MemoryInline::FlatRead16(r29);
    r0 = (r3 & 4);
}

loc_80138594:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801385D4;
    }
}

loc_80138598:
{
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (r0 & 128);
}

loc_801385A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801385D4;
    }
}

loc_801385A4:
{
    r5 = (r3 & -5);
    r3 = 0x80330000u;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r5));
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_801385BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801385D4;
    }
}

loc_801385C0:
{
    r3 = 851968;
    r4 = (r30 + 304);
    r3 = (r3 + 2);
    r5 = (r5 & 65535);
    ctx->lr = 0x801385D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801385D4:
{
    r3 = MemoryInline::FlatRead16(r29);
    r0 = (r3 & 8);
}

loc_801385DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013861C;
    }
}

loc_801385E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r0 & 1);
}

loc_801385E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013861C;
    }
}

loc_801385EC:
{
    r5 = (r3 & -9);
    r3 = 0x80330000u;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r5));
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80138604:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013861C;
    }
}

loc_80138608:
{
    r3 = 851968;
    r4 = (r30 + 368);
    r3 = (r3 + 2);
    r5 = (r5 & 65535);
    ctx->lr = 0x8013861Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8013861C:
{
    r3 = 0x80330000u;
    r30 = 0;
    r3 = (r3 + 25208);
    r31 = (r3 + 52);
}

loc_8013862C:
{
    r0 = MemoryInline::FlatRead8((r31 + 281));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80138634:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80138654;
    }
}

loc_80138638:
{
    r4 = r28;
    r3 = (r31 + 8);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8013864C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80138654;
    }
}

loc_80138650:
{
    goto loc_80138668;
}

loc_80138654:
{
    r30 = (r30 + 1);
    r31 = (r31 + 284);
}

loc_80138660:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(4))) {
        goto loc_8013862C;
    }
}

loc_80138664:
{
    r31 = 0;
}

loc_80138668:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8013866C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80138690;
    }
}

loc_80138670:
{
    r3 = MemoryInline::FlatRead16(r31);
    r4 = MemoryInline::FlatRead16(r29);
    ctx->lr = 0x8013867Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80145A08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80138680:
{
    r3 = 3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80138694;
    }
}

loc_80138688:
{
    r3 = 1;
    goto loc_80138694;
}

loc_80138690:
{
    r3 = 7;
}

loc_80138694:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801384C4 func_801384C4 preserves=true fpr_mask=0x00000000
