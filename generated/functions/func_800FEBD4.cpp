#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FEBD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800FEBD4;

loc_800FEBD4:
{
    r6 = MemoryInline::FlatRead32((r4 + 8));
}

loc_800FEBDC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800FEBF8;
    }
}

loc_800FEBE0:
{
    r3 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r5));
}

loc_800FEBE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FEBF8;
    }
}

loc_800FEBEC:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32(r6, r0);
    goto loc_800FEC18;
}

loc_800FEBF8:
{
    r4 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800FEC00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FEC18;
    }
}

loc_800FEC04:
{
    r3 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r5));
}

loc_800FEC0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FEC18;
    }
}

loc_800FEC10:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_800FEC18:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800FEBD4 func_800FEBD4 preserves=true fpr_mask=0x00000000
