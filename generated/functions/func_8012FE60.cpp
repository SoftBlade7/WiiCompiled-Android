#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012FE60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012FE60;

loc_8012FE60:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8012FE68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_8012FE6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8012FE74:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8012FEC8;
    }
}

loc_8012FE78:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012FE80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012FE8C;
    }
}

loc_8012FE84:
{
    MemoryInline::FlatWrite32(r3, r4);
    goto loc_8012FEA4;
}

loc_8012FE8C:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8012FE94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012FE9C;
    }
}

loc_8012FE98:
{
    MemoryInline::FlatWrite32(r5, r4);
}

loc_8012FE9C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
}

loc_8012FEA4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 - r0);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    goto loc_8012FF40;
}

loc_8012FEC8:
{
    r6 = MemoryInline::FlatRead32(r3);
    goto loc_8012FEE8;
}

loc_8012FED0:
{
}

loc_8012FED4:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8012FEE4;
    }
}

loc_8012FED8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 - r5);
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_8012FEE4:
{
    r6 = MemoryInline::FlatRead32(r6);
}

loc_8012FEE8:
{
    r5 = MemoryInline::FlatRead32((r6 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8012FEF4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r5))) {
        goto loc_8012FED0;
    }
}

loc_8012FEF8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_8012FF00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012FF18;
    }
}

loc_8012FF04:
{
    MemoryInline::FlatWrite32(r4, r0);
    r5 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32(r3, r4);
    goto loc_8012FF30;
}

loc_8012FF18:
{
    r3 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32(r3, r4);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWrite32((r6 + 4), r4);
    MemoryInline::FlatWrite32(r4, r6);
}

loc_8012FF30:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r6 + 12), r0);
}

loc_8012FF40:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r4 + 22), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012FE60 func_8012FE60 preserves=true fpr_mask=0x00000000
