#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80650D54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80650D54;

loc_80650D54:
{
}

loc_80650D58:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(96))) {
        goto loc_80650D64;
    }
}

loc_80650D5C:
{
}

loc_80650D60:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(97))) {
        goto loc_80650D84;
    }
}

loc_80650D64:
{
}

loc_80650D68:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(100))) {
        goto loc_80650D74;
    }
}

loc_80650D6C:
{
}

loc_80650D70:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(101))) {
        goto loc_80650D84;
    }
}

loc_80650D74:
{
}

loc_80650D78:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(88))) {
        goto loc_80650D84;
    }
}

loc_80650D7C:
{
}

loc_80650D80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(94))) {
        goto loc_80650D8C;
    }
}

loc_80650D84:
{
    r0 = MemoryInline::FlatRead32((r3 + 648));
    goto loc_80650D90;
}

loc_80650D8C:
{
    r0 = 0;
}

loc_80650D90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80650D94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650DAC;
    }
}

loc_80650D98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80650D9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650DB4;
    }
}

loc_80650DA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80650DA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650DBC;
    }
}

loc_80650DA8:
{
    // inline leaf 0x80650DD4 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80650DD4
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80650DAC:
{
    r3 = 4328;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80650DB4:
{
    r3 = 4329;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80650DBC:
{
    r3 = 4330;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000029 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80650D54 func_80650D54 preserves=true fpr_mask=0x00000000
