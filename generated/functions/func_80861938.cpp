#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80861938(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80861938;

loc_80861938:
{
    r3 = 21;
    r4 = 0;
    ctx->lr = 0x80861944u;
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

loc_80861948:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861954;
    }
}

loc_8086194C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861954:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80861964:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861984;
    }
}

loc_80861968:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_80861988;
}

loc_80861984:
{
    r3 = 0;
}

loc_80861988:
{
    r0 = MemoryInline::FlatRead8((r3 + 1910));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808619A0;
    }
}

loc_80861994:
{
    r0 = MemoryInline::FlatRead32((r3 + 1920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8086199C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808619A8;
    }
}

loc_808619A0:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808619A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 2022));
    r4 = (r3 + 1936);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808619B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808619C4;
    }
}

loc_808619B8:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808619C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808619CC;
    }
}

loc_808619C4:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808619CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 2134));
    r4 = (r3 + 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808619D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808619E8;
    }
}

loc_808619DC:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808619E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808619F0;
    }
}

loc_808619E8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808619F0:
{
    r0 = MemoryInline::FlatRead8((r3 + 2246));
    r4 = (r3 + 2160);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808619FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861A0C;
    }
}

loc_80861A00:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861A08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861A14;
    }
}

loc_80861A0C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861A14:
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
// RECOMP_REGISTRATION base 0x80861938 func_80861938 preserves=true fpr_mask=0x00000000
