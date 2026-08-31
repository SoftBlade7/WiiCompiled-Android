#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80097CA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80097CA0;

loc_80097CA0:
{
}

loc_80097CA4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80097CBC;
    }
}

loc_80097CA8:
{
}

loc_80097CAC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(1))) {
        goto loc_80097CC8;
    }
}

loc_80097CB0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
}

loc_80097CB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80097CD4;
    }
}

loc_80097CB8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80097CBC:
{
    r0 = MemoryInline::FlatRead32((r3 + 368));
    r4 = (r4 + r0);
    goto loc_80097CEC;
}

loc_80097CC8:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r4 = (r4 + r0);
    goto loc_80097CEC;
}

loc_80097CD4:
{
    r5 = MemoryInline::FlatRead32((r3 + 368));
    r0 = MemoryInline::FlatRead32((r3 + 372));
    r0 = (r5 + r0);
    r4 = (r0 - r4);
}

loc_80097CEC:
{
    r5 = MemoryInline::FlatRead32((r3 + 368));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_80097CF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80097D00;
    }
}

loc_80097CF8:
{
    r4 = r5;
    goto loc_80097D14;
}

loc_80097D00:
{
    r0 = MemoryInline::FlatRead32((r3 + 372));
    r0 = (r5 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80097D0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80097D14;
    }
}

loc_80097D10:
{
    r4 = r0;
}

loc_80097D14:
{
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B1750u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80097CA0 func_80097CA0 preserves=true fpr_mask=0x00000000
