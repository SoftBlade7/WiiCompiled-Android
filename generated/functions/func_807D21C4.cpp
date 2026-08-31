#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D21C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D21C4;

loc_807D21C4:
{
}

loc_807D21C8:
{
    r3 = 0;
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(20))) {
        goto loc_807D21D8;
    }
}

loc_807D21D0:
{
}

loc_807D21D4:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(25))) {
        goto loc_807D21E8;
    }
}

loc_807D21D8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
}

loc_807D21DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D21F0;
    }
}

loc_807D21E0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(40));
}

loc_807D21E4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807D21F0;
    }
}

loc_807D21E8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(40));
}

loc_807D21EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_807D21F0:
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
// RECOMP_REGISTRATION base 0x807D21C4 func_807D21C4 preserves=true fpr_mask=0x00000000
