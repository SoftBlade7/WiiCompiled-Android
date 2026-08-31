#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081CF70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8081CF70;

loc_8081CF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081CF74:
{
    r4 = 0x808B0000u;
    r4 = (r4 + -19104);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081CF94;
    }
}

loc_8081CF80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8081CF84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081CF9C;
    }
}

loc_8081CF88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8081CF8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081CFA4;
    }
}

loc_8081CF90:
{
    // inline leaf 0x8081CFAC (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x8081CFAC
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8081CF94:
{
    r3 = (r4 + 672);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8081CF9C:
{
    r3 = (r4 + 732);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8081CFA4:
{
    r3 = (r4 + 800);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081CF70 func_8081CF70 preserves=true fpr_mask=0x00000000
