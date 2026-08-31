#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010F354(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8010F354;

loc_8010F354:
{
    r5 = MemoryInline::FlatRead32((r3 + 256));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(254));
}

loc_8010F35C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8010F368;
    }
}

loc_8010F360:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8010F368:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8010F36C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8010F378;
    }
}

loc_8010F370:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(254));
}

loc_8010F374:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8010F380;
    }
}

loc_8010F378:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8010F380:
{
    r3_addr_0 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r4));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 256), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8010F354 func_8010F354 preserves=true fpr_mask=0x00000000
