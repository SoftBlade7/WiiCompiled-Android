#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80861598(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80861598;

loc_80861598:
{
    r3 = 20;
    r4 = 0;
    ctx->lr = 0x808615A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808615A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808615B4;
    }
}

loc_808615AC:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808615B4:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808615C4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808615E4;
    }
}

loc_808615C8:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_808615E8;
}

loc_808615E4:
{
    r3 = 0;
}

loc_808615E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1462));
    r4 = (r3 + 1376);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808615F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861604;
    }
}

loc_808615F8:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861600:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086160C;
    }
}

loc_80861604:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086160C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1574));
    r4 = (r3 + 1488);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861618:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861628;
    }
}

loc_8086161C:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861624:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861630;
    }
}

loc_80861628:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861630:
{
    r0 = MemoryInline::FlatRead8((r3 + 1686));
    r4 = (r3 + 1600);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086163C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086164C;
    }
}

loc_80861640:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861648:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861654;
    }
}

loc_8086164C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861654:
{
    r0 = MemoryInline::FlatRead8((r3 + 1798));
    r4 = (r3 + 1712);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861670;
    }
}

loc_80861664:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8086166C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861678;
    }
}

loc_80861670:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861678:
{
    r3 = 1;
}

loc_80862738:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80861598 func_80861598 preserves=true fpr_mask=0x00000000
