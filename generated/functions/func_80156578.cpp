#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80156578(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80156578;

loc_80156578:
{
    r4 = MemoryInline::FlatRead32((r3 + 108));
    r0 = MemoryInline::FlatRead8((r4 + 114));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80156584:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80156588:
{
    r4 = MemoryInline::FlatRead16((r3 + 152));
}

loc_80156590:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8015659C;
    }
}

loc_80156594:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 152), static_cast<uint16_t>(r0));
}

loc_8015659C:
{
    r0 = MemoryInline::FlatRead16((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801565A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_801565A8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80156578 func_80156578 preserves=true fpr_mask=0x00000000
