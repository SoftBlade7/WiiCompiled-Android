#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D2064(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D2064;

loc_807D2064:
{
}

loc_807D2068:
{
    r3 = 0;
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(2))) {
        goto loc_807D2078;
    }
}

loc_807D2070:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
}

loc_807D2074:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D2098;
    }
}

loc_807D2078:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
}

loc_807D207C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_807D2080:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(40));
}

loc_807D2084:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_807D2088:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(22));
}

loc_807D208C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807D2090:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
}

loc_807D2094:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807D2098:
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
// RECOMP_REGISTRATION base 0x807D2064 func_807D2064 preserves=true fpr_mask=0x00000000
