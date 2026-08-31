#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80650C14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80650C14;

loc_80650C14:
{
}

loc_80650C18:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(96))) {
        goto loc_80650C24;
    }
}

loc_80650C1C:
{
}

loc_80650C20:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(97))) {
        goto loc_80650C44;
    }
}

loc_80650C24:
{
}

loc_80650C28:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(100))) {
        goto loc_80650C34;
    }
}

loc_80650C2C:
{
}

loc_80650C30:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(101))) {
        goto loc_80650C44;
    }
}

loc_80650C34:
{
}

loc_80650C38:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(88))) {
        goto loc_80650C44;
    }
}

loc_80650C3C:
{
}

loc_80650C40:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(94))) {
        goto loc_80650C4C;
    }
}

loc_80650C44:
{
    r0 = MemoryInline::FlatRead32((r3 + 648));
    goto loc_80650C50;
}

loc_80650C4C:
{
    r0 = 0;
}

loc_80650C50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80650C54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650C6C;
    }
}

loc_80650C58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80650C5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650C74;
    }
}

loc_80650C60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80650C64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650C7C;
    }
}

loc_80650C68:
{
    // inline leaf 0x80650DD4 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80650DD4
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80650C6C:
{
    r3 = 4320;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80650C74:
{
    r3 = 4321;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80650C7C:
{
    r3 = 4322;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000029 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80650C14 func_80650C14 preserves=true fpr_mask=0x00000000
