#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80650CE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80650CE4;

loc_80650CE4:
{
}

loc_80650CE8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(96))) {
        goto loc_80650CF4;
    }
}

loc_80650CEC:
{
}

loc_80650CF0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(97))) {
        goto loc_80650D14;
    }
}

loc_80650CF4:
{
}

loc_80650CF8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(100))) {
        goto loc_80650D04;
    }
}

loc_80650CFC:
{
}

loc_80650D00:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(101))) {
        goto loc_80650D14;
    }
}

loc_80650D04:
{
}

loc_80650D08:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(88))) {
        goto loc_80650D14;
    }
}

loc_80650D0C:
{
}

loc_80650D10:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(94))) {
        goto loc_80650D1C;
    }
}

loc_80650D14:
{
    r0 = MemoryInline::FlatRead32((r3 + 648));
    goto loc_80650D20;
}

loc_80650D1C:
{
    r0 = 0;
}

loc_80650D20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80650D24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650D3C;
    }
}

loc_80650D28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80650D2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650D44;
    }
}

loc_80650D30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80650D34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650D4C;
    }
}

loc_80650D38:
{
    // inline leaf 0x80650DD4 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80650DD4
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80650D3C:
{
    r3 = 4325;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80650D44:
{
    r3 = 4326;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80650D4C:
{
    r3 = 4327;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000029 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80650CE4 func_80650CE4 preserves=true fpr_mask=0x00000000
