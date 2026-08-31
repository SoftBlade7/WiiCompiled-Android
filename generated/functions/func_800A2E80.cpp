#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A2E80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A2E80;

loc_800A2E80:
{
    r4 = MemoryInline::FlatRead32(r3);
}

loc_800A2E88:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800A2EB8;
    }
}

loc_800A2E8C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_800A2E94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800A2EA0;
    }
}

loc_800A2E98:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 8), r0);
}

loc_800A2EA0:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_800A2EAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800A2EB8;
    }
}

loc_800A2EB0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_800A2EB8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A2EC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800A2EC4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
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
// RECOMP_REGISTRATION base 0x800A2E80 func_800A2E80 preserves=true fpr_mask=0x00000000
