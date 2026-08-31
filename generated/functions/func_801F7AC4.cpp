#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F7AC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F7AC4;

loc_801F7AC4:
{
    r5 = (r3 & 127);
}

loc_801F7AC8:
{
    r3 = 0;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801F7AD4;
    }
}

loc_801F7AD0:
{
    r5 = 64;
}

loc_801F7AD4:
{
    r0 = (r5 & 16);
}

loc_801F7AD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F7AE0;
    }
}

loc_801F7ADC:
{
    r5 = (r5 | 256);
}

loc_801F7AE0:
{
    r0 = (r4 & 128);
}

loc_801F7AE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F7B00;
    }
}

loc_801F7AE8:
{
    r4 = (r4 & -129);
    r0 = (r4 & r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801F7AF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_801F7AF8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801F7B00:
{
    r0 = (r4 & 4096);
}

loc_801F7B04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F7B28;
    }
}

loc_801F7B08:
{
    r0 = (r4 & 256);
}

loc_801F7B0C:
{
    r4 = (r4 & -4097);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F7B18;
    }
}

loc_801F7B14:
{
    r5 = (r5 & -257);
}

loc_801F7B18:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_801F7B1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_801F7B20:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801F7B28:
{
    r0 = (r5 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801F7B30:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F7AC4 func_801F7AC4 preserves=true fpr_mask=0x00000000
