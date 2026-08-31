#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D29D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800D29D0;

loc_800D29D0:
{
    r4 = 0x802F0000u;
    r0 = 4;
    r4 = (r4 + 4960);
    r3 = 0;
    ctr = r0;
}

loc_800D29E4:
{
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D29EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800D29F0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D29FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800D2A00:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D2A0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800D2A10:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D2A1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800D2A20:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D2A2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800D2A30:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D2A3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800D2A40:
{
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D2A4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800D2A50:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D2A5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800D2A60:
{
    r4 = (r4 + 32);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D29E4;
    }
}

loc_800D2A6C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D29D0 func_800D29D0 preserves=true fpr_mask=0x00000000
