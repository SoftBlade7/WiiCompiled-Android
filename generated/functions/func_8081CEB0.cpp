#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081CEB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8081CEB0;

loc_8081CEB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081CEB4:
{
    r4 = 0x808B0000u;
    r4 = (r4 + -19104);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081CED4;
    }
}

loc_8081CEC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8081CEC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081CEDC;
    }
}

loc_8081CEC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8081CECC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081CEE4;
    }
}

loc_8081CED0:
{
    goto loc_8081CEEC;
}

loc_8081CED4:
{
    r3 = (r4 + 528);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8081CEDC:
{
    r3 = (r4 + 576);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8081CEE4:
{
    r3 = (r4 + 624);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8081CEEC:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081CEB0 func_8081CEB0 preserves=true fpr_mask=0x00000000
