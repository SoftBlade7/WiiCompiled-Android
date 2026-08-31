#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071DC60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071DC60;

loc_8071DC60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8071DC64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071DC70;
    }
}

loc_8071DC68:
{
    r4 = (r4 + 128);
    goto loc_8071DC7C;
}

loc_8071DC70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(128));
}

loc_8071DC74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8071DC7C;
    }
}

loc_8071DC78:
{
    r4 = (r4 + -128);
}

loc_8071DC7C:
{
    r0 = (r4 * 12);
    r4 = MemoryInline::FlatRead32((r3 + 36));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071DC60 func_8071DC60 preserves=true fpr_mask=0x00000000
