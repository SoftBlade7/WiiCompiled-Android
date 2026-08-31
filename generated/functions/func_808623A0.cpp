#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808623A0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_808623A0;

loc_808623A0:
{
    r3 = 31;
    r4 = 0;
    ctx->lr = 0x808623ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805500CCu>(ctx);
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

loc_808623B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808623BC;
    }
}

loc_808623B4:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808623BC:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808623CC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808623EC;
    }
}

loc_808623D0:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_808623F0;
}

loc_808623EC:
{
    r3 = 0;
}

loc_808623F0:
{
    r0 = MemoryInline::FlatRead8((r3 + 1014));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808623F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862408;
    }
}

loc_808623FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 1024));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80862404:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80862410;
    }
}

loc_80862408:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862410:
{
    r0 = MemoryInline::FlatRead8((r3 + 1126));
    r4 = (r3 + 1040);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086241C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086242C;
    }
}

loc_80862420:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80862428:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80862434;
    }
}

loc_8086242C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862434:
{
    r0 = MemoryInline::FlatRead8((r3 + 1238));
    r4 = (r3 + 1152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862450;
    }
}

loc_80862444:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8086244C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80862458;
    }
}

loc_80862450:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862458:
{
    r0 = MemoryInline::FlatRead8((r3 + 1350));
    r4 = (r3 + 1264);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862464:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862474;
    }
}

loc_80862468:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80862470:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086247C;
    }
}

loc_80862474:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086247C:
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
// RECOMP_REGISTRATION base 0x808623A0 func_808623A0 preserves=true fpr_mask=0x00000000
