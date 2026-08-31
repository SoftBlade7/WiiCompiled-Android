#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011218C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;

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

    goto loc_8011218C;

loc_8011218C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 344));
    r3 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801121C0:
{
    r30 = (r3 + -1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80112200;
    }
}

loc_801121C8:
{
    ctx->lr = 0x801121CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r31 + 348));
    r0 = MemoryInline::FlatRead32((r13 + -30244));
    r0 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801121DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801121E8;
    }
}

loc_801121E0:
{
    r3 = 1;
    goto loc_80112328;
}

loc_801121E8:
{
    MemoryInline::FlatWrite32((r31 + 348), r3);
    r0 = MemoryInline::FlatRead32((r13 + -30248));
}

loc_801121F4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r0))) {
        goto loc_801121FC;
    }
}

loc_801121F8:
{
    r0 = r30;
}

loc_801121FC:
{
    r30 = r0;
}

loc_80112200:
{
    r0 = MemoryInline::FlatRead32((r31 + 404));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80112208:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80112280;
    }
}

loc_8011220C:
{
    r0 = MemoryInline::FlatRead32((r31 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80112214:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112280;
    }
}

loc_80112218:
{
    r0 = MemoryInline::FlatRead32((r31 + 424));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80112220:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112280;
    }
}

loc_80112224:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r3 = r31;
    r5 = r28;
    r4 = (r31 + 400);
    r6 = (r1 + 8);
    ctx->lr = 0x8011223Cu;
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
    InvokeDirectCpu<0x8011309Cu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80112240:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011225C;
    }
}

loc_80112244:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_8011224C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112300;
    }
}

loc_80112250:
{
    r3 = 1;
    goto loc_80112328;
}

loc_8011225C:
{
    r5 = 1;
    r4 = 5;
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 288), r5);
    r3 = 3;
    MemoryInline::FlatWrite32((r31 + 60), r4);
    MemoryInline::FlatWrite32((r31 + 80), r0);
    MemoryInline::FlatWrite32((r31 + 340), r5);
    goto loc_80112328;
}

loc_80112280:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    r4 = r28;
    r5 = r30;
    r6 = 0;
    ctx->lr = 0x80112294u;
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
    InvokeDirectCpu<0x800F1308u>(ctx);
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

loc_80112298:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_80112300;
    }
}

loc_801122A0:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    // inline leaf 0x800F151C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26796));
    // end of inlined leaf 0x800F151C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-56));
}

loc_801122AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801122C0;
    }
}

loc_801122B0:
{
    r0 = 1;
    r3 = 2;
    MemoryInline::FlatWrite32((r31 + 340), r0);
    goto loc_80112328;
}

loc_801122C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-6));
}

loc_801122C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801122D8;
    }
}

loc_801122C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-26));
}

loc_801122CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801122D8;
    }
}

loc_801122D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-76));
}

loc_801122D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801122E0;
    }
}

loc_801122D8:
{
    r3 = 1;
    goto loc_80112328;
}

loc_801122E0:
{
    r4 = 1;
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 80), r3);
    r3 = 3;
    MemoryInline::FlatWrite32((r31 + 288), r4);
    MemoryInline::FlatWrite32((r31 + 60), r0);
    MemoryInline::FlatWrite32((r31 + 340), r4);
    goto loc_80112328;
}

loc_80112300:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80112304:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112318;
    }
}

loc_80112308:
{
    r0 = 1;
    r3 = 2;
    MemoryInline::FlatWrite32((r31 + 340), r0);
    goto loc_80112328;
}

loc_80112318:
{
    r0 = 0;
    r3 = 0;
    r28_addr_1 = (r28 + r4);
    MemoryInline::FlatWrite8(r28_addr_1, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32(r29, r4);
}

loc_80112328:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011218C func_8011218C preserves=true fpr_mask=0x00000000
