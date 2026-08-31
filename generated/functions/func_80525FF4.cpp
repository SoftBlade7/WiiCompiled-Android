#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80525FF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80525FF4;

loc_80525FF4:
{
    r0 = (150 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(150) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80526000:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052600C;
    }
}

loc_80526004:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8052600C:
{
    r0 = (104 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(104) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80526014:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80526018:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000030 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80525FF4 func_80525FF4 preserves=true fpr_mask=0x00000000
