#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80831E1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80831E1C;

loc_80831E1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80831E20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831E30;
    }
}

loc_80831E24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80831E28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831E40;
    }
}

loc_80831E2C:
{
    // inline leaf 0x80831E50 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80831E50
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80831E30:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -13920);
    r3 = (r3 + 77);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80831E40:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -13920);
    r3 = (r3 + 81);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80831E1C func_80831E1C preserves=true fpr_mask=0x00000000
