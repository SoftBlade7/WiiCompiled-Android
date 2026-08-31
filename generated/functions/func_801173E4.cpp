#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801173E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801173E4;

loc_801173E4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801173F0:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011740C;
    }
}

loc_80117408:
{
    r3 = MemoryInline::FlatRead32((r13 + -26696));
}

loc_8011740C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x8011741Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F00DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117420:
{
    r31 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117430;
    }
}

loc_80117428:
{
    r3 = 0;
    goto loc_80117634;
}

loc_80117430:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80117438:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80117524;
    }
}

loc_8011743C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117448;
    }
}

loc_80117440:
{
    r5 = 0;
    goto loc_8011745C;
}

loc_80117448:
{
}

loc_8011744C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80117458;
    }
}

loc_80117450:
{
    r5 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_8011745C;
}

loc_80117458:
{
    r5 = (r3 + 16);
}

loc_8011745C:
{
    r4 = MemoryInline::FlatRead32(r29);
    r30 = (r13 + -26712);
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32((r13 + -26712), r0);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80117478:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80117484;
    }
}

loc_8011747C:
{
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_801174F8;
}

loc_80117484:
{
}

loc_80117488:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_80117498;
    }
}

loc_8011748C:
{
    f0.d = MemoryInline::FlatReadFloat64(r30);
    MemoryInline::FlatWriteFloat64((r3 + 16), f0.d);
    goto loc_801174F8;
}

loc_80117498:
{
}

loc_8011749C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_801174F8;
    }
}

loc_801174A0:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801174A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801174B0;
    }
}

loc_801174AC:
{
    ctx->lr = 0x801174B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801174B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801174B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801174C0;
    }
}

loc_801174B8:
{
    r5 = 0;
    goto loc_801174F4;
}

loc_801174C0:
{
    r3 = r30;
    ctx->lr = 0x801174C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F23F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 47;
    r5 = r3;
    goto loc_801174E8;
}

loc_801174D4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_801174DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_801174E4;
    }
}

loc_801174E0:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
}

loc_801174E4:
{
    r3 = (r3 + 1);
}

loc_801174E8:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801174D4;
    }
}

loc_801174F4:
{
    MemoryInline::FlatWrite32((r31 + 16), r5);
}

loc_801174F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801174FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117508;
    }
}

loc_80117500:
{
    r3 = 0;
    goto loc_80117634;
}

loc_80117508:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117510:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011751C;
    }
}

loc_80117514:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    goto loc_80117634;
}

loc_8011751C:
{
    r3 = (r31 + 16);
    goto loc_80117634;
}

loc_80117524:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80117528:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117614;
    }
}

loc_8011752C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117538;
    }
}

loc_80117530:
{
    r4 = 0;
    goto loc_8011754C;
}

loc_80117538:
{
}

loc_8011753C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80117548;
    }
}

loc_80117540:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_8011754C;
}

loc_80117548:
{
    r4 = (r3 + 16);
}

loc_8011754C:
{
    f1.d = MemoryInline::FlatReadFloat64(r4);
    r30 = (r13 + -26704);
    f0.d = MemoryInline::FlatReadFloat64(r29);
    f0.d = (f1.d - f0.d);
    MemoryInline::FlatWriteFloat64((r13 + -26704), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80117568:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80117578;
    }
}

loc_8011756C:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_801175E8;
}

loc_80117578:
{
}

loc_8011757C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80117588;
    }
}

loc_80117580:
{
    MemoryInline::FlatWriteFloat64((r3 + 16), f0.d);
    goto loc_801175E8;
}

loc_80117588:
{
}

loc_8011758C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801175E8;
    }
}

loc_80117590:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117598:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801175A0;
    }
}

loc_8011759C:
{
    ctx->lr = 0x801175A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801175A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801175A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801175B0;
    }
}

loc_801175A8:
{
    r5 = 0;
    goto loc_801175E4;
}

loc_801175B0:
{
    r3 = r30;
    ctx->lr = 0x801175B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F23F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 47;
    r5 = r3;
    goto loc_801175D8;
}

loc_801175C4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_801175CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_801175D4;
    }
}

loc_801175D0:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
}

loc_801175D4:
{
    r3 = (r3 + 1);
}

loc_801175D8:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801175C4;
    }
}

loc_801175E4:
{
    MemoryInline::FlatWrite32((r31 + 16), r5);
}

loc_801175E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801175EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801175F8;
    }
}

loc_801175F0:
{
    r3 = 0;
    goto loc_80117634;
}

loc_801175F8:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117600:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011760C;
    }
}

loc_80117604:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    goto loc_80117634;
}

loc_8011760C:
{
    r3 = (r31 + 16);
    goto loc_80117634;
}

loc_80117614:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117620;
    }
}

loc_80117618:
{
    r3 = 0;
    goto loc_80117634;
}

loc_80117620:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117624:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117630;
    }
}

loc_80117628:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_80117634;
}

loc_80117630:
{
    r3 = (r3 + 16);
}

loc_80117634:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801173E4 func_801173E4 preserves=true fpr_mask=0x00000000
