#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80105CC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80105CC0;

loc_80105CC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80105CC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80105CC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80105CCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80105CD4;
    }
}

loc_80105CD0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80105CD4:
{
    r0 = MemoryInline::FlatRead32((r3 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80105CDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80105CE0:
{
    r5 = MemoryInline::FlatRead32((r3 + 76));
    r0 = MemoryInline::FlatRead32((r3 + 80));
}

loc_80105CEC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80105D0C;
    }
}

loc_80105CF0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_80105CF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80105D0C;
    }
}

loc_80105CF8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + 80), r0);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    MemoryInline::FlatWrite32((r3 + 72), r0);
    goto loc_80105D48;
}

loc_80105D0C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_80105D10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80105D34;
    }
}

loc_80105D14:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r3 + 76), r0);
    MemoryInline::FlatWrite32((r3 + 72), r0);
    goto loc_80105D48;
}

loc_80105D28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80105D2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80105D30:
{
    r5 = r0;
}

loc_80105D34:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80105D3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80105D28;
    }
}

loc_80105D40:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r5 + 12), r0);
}

loc_80105D48:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x00001039 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80105CC0 func_80105CC0 preserves=true fpr_mask=0x00000000
