#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071FC5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071FC5C;

loc_8071FC5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(207));
}

loc_8071FC60:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071FC78;
    }
}

loc_8071FC68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(219));
}

loc_8071FC6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071FC78;
    }
}

loc_8071FC70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(413));
}

loc_8071FC74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8071FC78:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071FC5C func_8071FC5C preserves=true fpr_mask=0x00000000
