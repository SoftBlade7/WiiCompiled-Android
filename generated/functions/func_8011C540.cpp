#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011C540(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011C540;

loc_8011C540:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = 0;
    goto loc_8011C5A4;
}

loc_8011C54C:
{
}

loc_8011C550:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_8011C59C;
    }
}

loc_8011C554:
{
}

loc_8011C558:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8011C564;
    }
}

loc_8011C55C:
{
    r0 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r6 + 36), r0);
}

loc_8011C564:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8011C56C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_8011C578;
    }
}

loc_8011C570:
{
    r0 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32(r3, r0);
}

loc_8011C578:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_8011C580:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011C588;
    }
}

loc_8011C584:
{
    MemoryInline::FlatWrite32((r3 + 4), r6);
}

loc_8011C588:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8011C59C:
{
    r6 = r5;
    r5 = MemoryInline::FlatRead32((r5 + 36));
}

loc_8011C5A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8011C5A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011C54C;
    }
}

loc_8011C5AC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011C540 func_8011C540 preserves=true fpr_mask=0x00000000
