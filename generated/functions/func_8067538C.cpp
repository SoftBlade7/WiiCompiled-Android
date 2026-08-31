#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067538C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8067538C;

loc_8067538C:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8067539C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806753D4;
    }
}

loc_806753A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806753A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806753E4;
    }
}

loc_806753A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806753AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806753F4;
    }
}

loc_806753B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_806753B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675404;
    }
}

loc_806753B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_806753BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675414;
    }
}

loc_806753C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_806753C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675424;
    }
}

loc_806753C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_806753CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675434;
    }
}

loc_806753D0:
{
    // inline leaf 0x80675444 (4 guest instruction(s))
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 208);
    // end of inlined leaf 0x80675444
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806753D4:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 187);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806753E4:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 190);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806753F4:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 193);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80675404:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 196);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80675414:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 199);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80675424:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 202);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80675434:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 205);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000001 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8067538C func_8067538C preserves=true fpr_mask=0x00000000
