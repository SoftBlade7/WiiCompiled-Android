#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015182C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015182C;

loc_8015182C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80151830:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015183C;
    }
}

loc_80151834:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8015183C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(61));
}

loc_80151840:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8015184C;
    }
}

loc_80151844:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8015184C:
{
    r3 = (r3 + r4);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80151858:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80151864;
    }
}

loc_8015185C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80151864:
{
    r0 = (r3 + -1);
    r3 = 0x80340000u;
    r0 = (r0 * 164);
    r3 = (r3 + -25816);
    r3 = (r3 + r0);
    r3 = (r3 + 104);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015182C func_8015182C preserves=true fpr_mask=0x00000000
