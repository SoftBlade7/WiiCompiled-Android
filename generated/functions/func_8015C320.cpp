#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015C320(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015C320;

loc_8015C320:
{
    r0 = MemoryInline::FlatRead32((r4 + 24));
    MemoryInline::FlatWrite32((r4 + 8), r3);
}

loc_8015C32C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015C338;
    }
}

loc_8015C330:
{
    r5 = (r3 + 4);
    goto loc_8015C33C;
}

loc_8015C338:
{
    r5 = (r3 + 12);
}

loc_8015C33C:
{
    r3 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015C344:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C360;
    }
}

loc_8015C348:
{
    MemoryInline::FlatWrite32(r5, r4);
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8015C35C:
{
    r3 = r0;
}

loc_8015C360:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015C368:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C35C;
    }
}

loc_8015C36C:
{
    MemoryInline::FlatWrite32(r3, r4);
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015C320 func_8015C320 preserves=true fpr_mask=0x00000000
