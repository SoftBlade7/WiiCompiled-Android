#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80112348(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80112348;

loc_80112348:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80112354:
{
    r6 = r5;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80112374;
    }
}

loc_8011236C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80112370:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011237C;
    }
}

loc_80112374:
{
    r3 = 0;
    goto loc_80112474;
}

loc_8011237C:
{
    r0 = MemoryInline::FlatRead32((r3 + 404));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80112384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801123F4;
    }
}

loc_80112388:
{
    r0 = MemoryInline::FlatRead32((r3 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80112390:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801123F4;
    }
}

loc_80112394:
{
    r0 = MemoryInline::FlatRead32((r3 + 424));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8011239C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801123F4;
    }
}

loc_801123A0:
{
    r31 = 0;
    r5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r4 = (r3 + 400);
    r7 = (r1 + 8);
    ctx->lr = 0x801123B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80113030u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_801123BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801123D8;
    }
}

loc_801123C0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_801123C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112450;
    }
}

loc_801123CC:
{
    r3 = -2;
    goto loc_80112474;
}

loc_801123D8:
{
    r3 = 1;
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 288), r3);
    r3 = -1;
    MemoryInline::FlatWrite32((r30 + 60), r0);
    MemoryInline::FlatWrite32((r30 + 80), r31);
    goto loc_80112474;
}

loc_801123F4:
{
    r3 = MemoryInline::FlatRead32((r3 + 76));
    r5 = r6;
    r6 = 0;
    ctx->lr = 0x80112404u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F13A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80112408:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_80112450;
    }
}

loc_8011240C:
{
    r3 = MemoryInline::FlatRead32((r30 + 76));
    // inline leaf 0x800F151C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26796));
    // end of inlined leaf 0x800F151C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-6));
}

loc_80112418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011242C;
    }
}

loc_8011241C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-26));
}

loc_80112420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011242C;
    }
}

loc_80112424:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-76));
}

loc_80112428:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112434;
    }
}

loc_8011242C:
{
    r3 = 0;
    goto loc_80112474;
}

loc_80112434:
{
    r4 = 1;
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 80), r3);
    r3 = -1;
    MemoryInline::FlatWrite32((r30 + 288), r4);
    MemoryInline::FlatWrite32((r30 + 60), r0);
    goto loc_80112474;
}

loc_80112450:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80112458:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112474;
    }
}

loc_8011245C:
{
    r0 = MemoryInline::FlatRead32((r30 + 380));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80112464:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112474;
    }
}

loc_80112468:
{
    r0 = MemoryInline::FlatRead32((r30 + 364));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r30 + 364), r0);
}

loc_80112474:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80112348 func_80112348 preserves=true fpr_mask=0x00000000
