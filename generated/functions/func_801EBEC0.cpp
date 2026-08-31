#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EBEC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801EBEC0;

loc_801EBEC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = r3;
    r31 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -24264));
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EBEEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EBF00;
    }
}

loc_801EBEF0:
{
    r3 = MemoryInline::FlatRead32((r13 + -27936));
    ctx->lr = 0x801EBEF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A0504u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -24264), r0);
}

loc_801EBF00:
{
    r0 = MemoryInline::FlatRead8((r13 + -24272));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EBF08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EBF20;
    }
}

loc_801EBF0C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EBF20;
    }
}

loc_801EBF10:
{
}

loc_801EBF14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_801EBF20;
    }
}

loc_801EBF18:
{
    r31 = -7;
    goto loc_801EC04C;
}

loc_801EBF20:
{
}

loc_801EBF24:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_801EBF40;
    }
}

loc_801EBF28:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_801EBF30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801EBF40;
    }
}

loc_801EBF34:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EBF3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EBF48;
    }
}

loc_801EBF40:
{
    r31 = -28;
    goto loc_801EC04C;
}

loc_801EBF48:
{
    r28 = 0x80350000u;
    r4 = 0;
    r3 = (r28 + 29216);
    r5 = 24;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D1BA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r27);
    r29 = (r28 + 29216);
    r4 = 0;
    r3 = -2;
    MemoryInline::FlatWriteRam32((r28 + 29216), r12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801EBF74:
{
    r0 = -1;
    r5 = MemoryInline::FlatRead32((r27 + 4));
    MemoryInline::FlatWriteRam32((r29 + 4), r5);
    MemoryInline::FlatWriteRam32((r29 + 20), r4);
    MemoryInline::FlatWriteRam32((r29 + 8), r3);
    MemoryInline::FlatWriteRam32((r29 + 12), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC020;
    }
}

loc_801EBF90:
{
    r3 = 11;
    r4 = 1120;
    ctr = r12;
    ctx->lr = 0x801EBFA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801EBFA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EC024;
    }
}

loc_801EBFA8:
{
    r4 = MemoryInline::FlatRead32((r29 + 20));
    r0 = MemoryInline::FlatRead32((r13 + -27932));
    r4 = (r4 + 1);
}

loc_801EBFB8:
{
    MemoryInline::FlatWriteRam32((r29 + 20), r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801EC024;
    }
}

loc_801EBFC0:
{
    r4 = (r3 & 536870911);
    r0 = 268435456;
}

loc_801EBFCC:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_801EBFDC;
    }
}

loc_801EBFD0:
{
    r0 = 402653184;
}

loc_801EBFD8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_801EC024;
    }
}

loc_801EBFDC:
{
}

loc_801EBFE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EC018;
    }
}

loc_801EBFE4:
{
    r6 = 0x80350000u;
    r6 = (r6 + 29216);
    r12 = MemoryInline::FlatRead32((r6 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801EBFF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC018;
    }
}

loc_801EBFF8:
{
    r5 = MemoryInline::FlatRead32((r6 + 20));
    r4 = r3;
    r3 = 11;
    r0 = (r5 + -1);
    r5 = 1120;
    MemoryInline::FlatWriteRam32((r6 + 20), r0);
    ctr = r12;
    ctx->lr = 0x801EC018u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801EC018:
{
    r3 = 0;
    goto loc_801EC024;
}

loc_801EC020:
{
    r3 = 0;
}

loc_801EC024:
{
    r4 = 0x80350000u;
}

loc_801EC02C:
{
    r4 = (r4 + 29216);
    MemoryInline::FlatWriteRam32((r4 + 16), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801EC03C;
    }
}

loc_801EC038:
{
    r31 = -49;
}

loc_801EC03C:
{
}

loc_801EC040:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EC04C;
    }
}

loc_801EC044:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -24272), static_cast<uint8_t>(r0));
}

loc_801EC04C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EC054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC060;
    }
}

loc_801EC058:
{
    MemoryInline::FlatWrite32((r3 + 780), r31);
    goto loc_801EC064;
}

loc_801EC060:
{
    MemoryInline::FlatWrite32((r13 + -24268), r31);
}

loc_801EC064:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 32);
    r3 = r31;
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x801EBEC0 func_801EBEC0 preserves=true fpr_mask=0x00000000
