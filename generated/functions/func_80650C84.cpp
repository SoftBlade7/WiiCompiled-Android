#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80650C84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80650C84;

loc_80650C84:
{
}

loc_80650C88:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(98))) {
        goto loc_80650C94;
    }
}

loc_80650C8C:
{
}

loc_80650C90:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(99))) {
        goto loc_80650CB4;
    }
}

loc_80650C94:
{
}

loc_80650C98:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(102))) {
        goto loc_80650CA4;
    }
}

loc_80650C9C:
{
}

loc_80650CA0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(103))) {
        goto loc_80650CB4;
    }
}

loc_80650CA4:
{
}

loc_80650CA8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(89))) {
        goto loc_80650CB4;
    }
}

loc_80650CAC:
{
}

loc_80650CB0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(95))) {
        goto loc_80650CBC;
    }
}

loc_80650CB4:
{
    r0 = MemoryInline::FlatRead32((r3 + 652));
    goto loc_80650CC0;
}

loc_80650CBC:
{
    r0 = 2;
}

loc_80650CC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80650CC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650CD4;
    }
}

loc_80650CC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80650CCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650CDC;
    }
}

loc_80650CD0:
{
    // inline leaf 0x80650DD4 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80650DD4
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80650CD4:
{
    r3 = 4323;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80650CDC:
{
    r3 = 4324;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000029 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80650C84 func_80650C84 preserves=true fpr_mask=0x00000000
