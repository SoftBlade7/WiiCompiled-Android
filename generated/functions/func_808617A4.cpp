#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808617A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808617A4;

loc_808617A4:
{
    r3 = 23;
    r4 = 0;
    ctx->lr = 0x808617B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808617B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808617C0;
    }
}

loc_808617B8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808617C0:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808617D0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808617F0;
    }
}

loc_808617D4:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_808617F4;
}

loc_808617F0:
{
    r3 = 0;
}

loc_808617F4:
{
    r0 = 2;
    r6 = (r3 + 2720);
    r4 = 0;
    r3 = 0;
    ctr = r0;
}

loc_80861808:
{
    r5 = (r6 + r3);
    r0 = MemoryInline::FlatRead8((r5 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861814:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861824;
    }
}

loc_80861818:
{
    r0 = MemoryInline::FlatRead32((r5 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861820:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086182C;
    }
}

loc_80861824:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086182C:
{
    r3 = (r3 + 112);
    r5 = (r6 + r3);
    r0 = MemoryInline::FlatRead8((r5 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086183C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086184C;
    }
}

loc_80861840:
{
    r0 = MemoryInline::FlatRead32((r5 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861848:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861854;
    }
}

loc_8086184C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861854:
{
    r3 = (r3 + 112);
    r5 = (r6 + r3);
    r0 = MemoryInline::FlatRead8((r5 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861864:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861874;
    }
}

loc_80861868:
{
    r0 = MemoryInline::FlatRead32((r5 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861870:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086187C;
    }
}

loc_80861874:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086187C:
{
    r3 = (r3 + 112);
    r5 = (r6 + r3);
    r0 = MemoryInline::FlatRead8((r5 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086188C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086189C;
    }
}

loc_80861890:
{
    r0 = MemoryInline::FlatRead32((r5 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861898:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808618A4;
    }
}

loc_8086189C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808618A4:
{
    r4 = (r4 + 3);
    r3 = (r3 + 112);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80861808;
    }
}

loc_808618B0:
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
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808617A4 func_808617A4 preserves=true fpr_mask=0x00000000
