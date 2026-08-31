#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80676548(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80676548;

loc_80676548:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
}

loc_80676550:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80676590;
    }
}

loc_80676554:
{
    r5 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 88));
    r5 = MemoryInline::FlatRead32((r5 + -29952));
}

loc_80676564:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_80676590;
    }
}

loc_80676568:
{
    r0 = MemoryInline::FlatRead8((r3 + 85));
}

loc_80676570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80676580;
    }
}

loc_80676574:
{
}

loc_80676578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80676588;
    }
}

loc_8067657C:
{
    goto loc_80676590;
}

loc_80676580:
{
    r0 = 1;
    goto loc_80676594;
}

loc_80676588:
{
    r0 = 2;
    goto loc_80676594;
}

loc_80676590:
{
    r0 = 3;
}

loc_80676594:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80676598:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806766AC;
    }
}

loc_8067659C:
{
    r5 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r5 + -10424));
    r0 = MemoryInline::FlatRead16((r7 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_806765AC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_806765CC;
    }
}

loc_806765B0:
{
    r5 = 65536;
    r6 = (r0 & 255);
    r0 = (r5 + -27664);
    r0 = (r0 * r6);
    r5 = (r7 + r0);
    r5 = (r5 + 56);
    goto loc_806765D0;
}

loc_806765CC:
{
    r5 = 0;
}

loc_806765D0:
{
    r0 = 5;
    r7 = (r5 + 22816);
    r8 = 0;
    ctr = r0;
}

loc_806765E0:
{
    r5 = MemoryInline::FlatRead32((r7 + 24));
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 88));
}

loc_806765F0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80676604;
    }
}

loc_806765F4:
{
    r0 = MemoryInline::FlatRead8((r7 + 10));
}

loc_806765FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80676604;
    }
}

loc_80676600:
{
    r6 = 1;
}

loc_80676604:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80676608:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80676614;
    }
}

loc_8067660C:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80676614:
{
    r0 = MemoryInline::FlatRead8((r4 + 10));
}

loc_8067661C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80676628;
    }
}

loc_80676620:
{
    r0 = 0;
    goto loc_80676690;
}

loc_80676628:
{
    r0 = MemoryInline::FlatRead8((r7 + 10));
}

loc_80676630:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8067663C;
    }
}

loc_80676634:
{
    r0 = 1;
    goto loc_80676690;
}

loc_8067663C:
{
    r0 = MemoryInline::FlatRead16((r7 + 4));
    r5 = MemoryInline::FlatRead16((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80676648:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80676654;
    }
}

loc_8067664C:
{
    r0 = 1;
    goto loc_80676690;
}

loc_80676654:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067668C;
    }
}

loc_80676658:
{
    r0 = MemoryInline::FlatRead8((r7 + 6));
    r5 = MemoryInline::FlatRead8((r4 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80676664:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80676670;
    }
}

loc_80676668:
{
    r0 = 1;
    goto loc_80676690;
}

loc_80676670:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067668C;
    }
}

loc_80676674:
{
    r5 = MemoryInline::FlatRead16((r4 + 8));
    r0 = MemoryInline::FlatRead16((r7 + 8));
}

loc_80676680:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_8067668C;
    }
}

loc_80676684:
{
    r0 = 1;
    goto loc_80676690;
}

loc_8067668C:
{
    r0 = 0;
}

loc_80676690:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80676694:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806766A0;
    }
}

loc_80676698:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806766A0:
{
    r7 = (r7 + 28);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806765E0;
    }
}

loc_806766AC:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80676548 func_80676548 preserves=true fpr_mask=0x00000000
