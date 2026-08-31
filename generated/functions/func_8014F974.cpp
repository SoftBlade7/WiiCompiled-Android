#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014F974(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014F974;

loc_8014F974:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(64));
}

loc_8014F978:
{
    r5 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014F9C8;
    }
}

loc_8014F980:
{
    r0 = (r4 + -64);
    r4 = 0x80340000u;
    r0 = (r0 & 65535);
    r0 = (r0 * 124);
    r4 = (r4 + -27840);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 376));
    r5 = (r4 + 376);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014F9A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014F9B0;
    }
}

loc_8014F9A8:
{
    r5 = 0;
    goto loc_8014F9C8;
}

loc_8014F9B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014F9B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014F9C8;
    }
}

loc_8014F9B8:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8014F9C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014F9C8;
    }
}

loc_8014F9C4:
{
    r5 = 0;
}

loc_8014F9C8:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8014F974 func_8014F974 preserves=true fpr_mask=0x00000000
