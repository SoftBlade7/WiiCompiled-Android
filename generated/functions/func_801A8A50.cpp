#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A8A50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A8A50;

loc_801A8A50:
{
    r3 = 0x80340000u;
    r0 = MemoryInline::FlatRead32((r3 + 28800));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A8A5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A8A70;
    }
}

loc_801A8A60:
{
    r3 = (r3 + 28800);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r0 | -2147483648);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_801A8A70:
{
    r3 = -872415232;
    r0 = MemoryInline::FlatRead32((r3 + 12324));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r3 = (r3_rot_0 & 536870911);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A8A50 func_801A8A50 preserves=true fpr_mask=0x00000000
