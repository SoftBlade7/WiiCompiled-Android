#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801178B4(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_801178B4;

loc_801178B4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801178C0:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801178DC;
    }
}

loc_801178D8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26696));
}

loc_801178DC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x801178ECu;
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

loc_801178F0:
{
    r31 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117900;
    }
}

loc_801178F8:
{
    r3 = 0;
    goto loc_80117B04;
}

loc_80117900:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80117908:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801179F4;
    }
}

loc_8011790C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117918;
    }
}

loc_80117910:
{
    r4 = 0;
    goto loc_8011792C;
}

loc_80117918:
{
}

loc_8011791C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80117928;
    }
}

loc_80117920:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_8011792C;
}

loc_80117928:
{
    r4 = (r3 + 16);
}

loc_8011792C:
{
    r4 = MemoryInline::FlatRead32(r4);
    r30 = (r13 + -26712);
    r0 = MemoryInline::FlatRead32(r29);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32((r13 + -26712), r0);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80117948:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80117954;
    }
}

loc_8011794C:
{
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_801179C8;
}

loc_80117954:
{
}

loc_80117958:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_80117968;
    }
}

loc_8011795C:
{
    f0.d = MemoryInline::FlatReadFloat64(r30);
    MemoryInline::FlatWriteFloat64((r3 + 16), f0.d);
    goto loc_801179C8;
}

loc_80117968:
{
}

loc_8011796C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_801179C8;
    }
}

loc_80117970:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117978:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80117980;
    }
}

loc_8011797C:
{
    ctx->lr = 0x80117980u;
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

loc_80117980:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80117984:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117990;
    }
}

loc_80117988:
{
    r5 = 0;
    goto loc_801179C4;
}

loc_80117990:
{
    r3 = r30;
    ctx->lr = 0x80117998u;
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
    goto loc_801179B8;
}

loc_801179A4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_801179AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_801179B4;
    }
}

loc_801179B0:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
}

loc_801179B4:
{
    r3 = (r3 + 1);
}

loc_801179B8:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801179A4;
    }
}

loc_801179C4:
{
    MemoryInline::FlatWrite32((r31 + 16), r5);
}

loc_801179C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801179CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801179D8;
    }
}

loc_801179D0:
{
    r3 = 0;
    goto loc_80117B04;
}

loc_801179D8:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801179E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801179EC;
    }
}

loc_801179E4:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    goto loc_80117B04;
}

loc_801179EC:
{
    r3 = (r31 + 16);
    goto loc_80117B04;
}

loc_801179F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801179F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117AE4;
    }
}

loc_801179FC:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117A08;
    }
}

loc_80117A00:
{
    r4 = 0;
    goto loc_80117A1C;
}

loc_80117A08:
{
}

loc_80117A0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80117A18;
    }
}

loc_80117A10:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_80117A1C;
}

loc_80117A18:
{
    r4 = (r3 + 16);
}

loc_80117A1C:
{
    f1.d = MemoryInline::FlatReadFloat64(r4);
    r30 = (r13 + -26704);
    f0.d = MemoryInline::FlatReadFloat64(r29);
    f0.d = (f1.d / f0.d);
    MemoryInline::FlatWriteFloat64((r13 + -26704), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80117A38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80117A48;
    }
}

loc_80117A3C:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_80117AB8;
}

loc_80117A48:
{
}

loc_80117A4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80117A58;
    }
}

loc_80117A50:
{
    MemoryInline::FlatWriteFloat64((r3 + 16), f0.d);
    goto loc_80117AB8;
}

loc_80117A58:
{
}

loc_80117A5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80117AB8;
    }
}

loc_80117A60:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117A68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80117A70;
    }
}

loc_80117A6C:
{
    ctx->lr = 0x80117A70u;
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

loc_80117A70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80117A74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117A80;
    }
}

loc_80117A78:
{
    r5 = 0;
    goto loc_80117AB4;
}

loc_80117A80:
{
    r3 = r30;
    ctx->lr = 0x80117A88u;
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
    goto loc_80117AA8;
}

loc_80117A94:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80117A9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80117AA4;
    }
}

loc_80117AA0:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
}

loc_80117AA4:
{
    r3 = (r3 + 1);
}

loc_80117AA8:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80117A94;
    }
}

loc_80117AB4:
{
    MemoryInline::FlatWrite32((r31 + 16), r5);
}

loc_80117AB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80117ABC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117AC8;
    }
}

loc_80117AC0:
{
    r3 = 0;
    goto loc_80117B04;
}

loc_80117AC8:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117AD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117ADC;
    }
}

loc_80117AD4:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    goto loc_80117B04;
}

loc_80117ADC:
{
    r3 = (r31 + 16);
    goto loc_80117B04;
}

loc_80117AE4:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117AF0;
    }
}

loc_80117AE8:
{
    r3 = 0;
    goto loc_80117B04;
}

loc_80117AF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117AF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117B00;
    }
}

loc_80117AF8:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_80117B04;
}

loc_80117B00:
{
    r3 = (r3 + 16);
}

loc_80117B04:
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
// RECOMP_REGISTRATION base 0x801178B4 func_801178B4 preserves=true fpr_mask=0x00000000
