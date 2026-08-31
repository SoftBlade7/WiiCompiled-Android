#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80790E3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80790E3C;

loc_80790E3C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80790E4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80790E58;
    }
}

loc_80790E50:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80790E58:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80790E3C func_80790E3C preserves=true fpr_mask=0x00000000
