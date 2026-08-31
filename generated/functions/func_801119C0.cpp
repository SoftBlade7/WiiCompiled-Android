#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801119C0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801119C0;

loc_801119C0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801119DC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801119FC;
    }
}

loc_801119F4:
{
    r3 = 0;
    goto loc_80111B80;
}

loc_801119FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80111A00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111A0C;
    }
}

loc_80111A04:
{
    r3 = 0;
    goto loc_80111B80;
}

loc_80111A0C:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80111A10:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80111A1C;
    }
}

loc_80111A14:
{
    r3 = 0;
    goto loc_80111B80;
}

loc_80111A1C:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111A24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80111A30;
    }
}

loc_80111A28:
{
    r3 = 0;
    goto loc_80111B80;
}

loc_80111A30:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 404));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111A3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80111A4C;
    }
}

loc_80111A40:
{
    r0 = MemoryInline::FlatRead32((r3 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111A48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111A60;
    }
}

loc_80111A4C:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    ctx->lr = 0x80111A5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80111850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80111B80;
}

loc_80111A60:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80111A70;
    }
}

loc_80111A64:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r30 = r3;
}

loc_80111A70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80111A74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111A80;
    }
}

loc_80111A78:
{
    r3 = 1;
    goto loc_80111B80;
}

loc_80111A80:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_80111A90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(16129));
}

loc_80111A94:
{
    r27 = 16129;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80111AA0;
    }
}

loc_80111A9C:
{
    r27 = r30;
}

loc_80111AA0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r6 = r30;
    r7 = MemoryInline::FlatRead32((r28 + 4));
    r5 = (r29 + r31);
    r0 = MemoryInline::FlatRead32((r28 + 12));
    r4 = (r3 + 400);
    r12 = MemoryInline::FlatRead32((r3 + 444));
    r8 = (r1 + 8);
    r7 = (r7 + r0);
    ctr = r12;
    ctx->lr = 0x80111ACCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80111AD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80111B4C;
    }
}

loc_80111AD4:
{
}

loc_80111AD8:
{
    r4 = MemoryInline::FlatRead32((r28 + 20));
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80111AE8;
    }
}

loc_80111AE0:
{
    r0 = 0;
    goto loc_80111B28;
}

loc_80111AE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80111AEC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80111AF8;
    }
}

loc_80111AF0:
{
    r0 = 0;
    goto loc_80111B28;
}

loc_80111AF8:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r27 = (r0 + r4);
    r4 = r27;
    ctx->lr = 0x80111B0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80111B10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80111B1C;
    }
}

loc_80111B14:
{
    r0 = 0;
    goto loc_80111B28;
}

loc_80111B1C:
{
    MemoryInline::FlatWrite32((r28 + 4), r3);
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 8), r27);
}

loc_80111B28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111B2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111B38;
    }
}

loc_80111B30:
{
    r3 = 0;
    goto loc_80111B80;
}

loc_80111B38:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_80111B74;
}

loc_80111B4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80111B50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111B6C;
    }
}

loc_80111B54:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r31 = (r31 + r27);
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r28 + 12), r0);
    goto loc_80111B74;
}

loc_80111B6C:
{
    r3 = 0;
    goto loc_80111B80;
}

loc_80111B74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r30));
}

loc_80111B78:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80111A90;
    }
}

loc_80111B7C:
{
    r3 = 1;
}

loc_80111B80:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
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
// RECOMP_REGISTRATION base 0x801119C0 func_801119C0 preserves=true fpr_mask=0x00000000
