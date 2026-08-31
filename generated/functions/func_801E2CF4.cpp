#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E2CF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E2CF4;

loc_801E2CF4:
{
    r0 = MemoryInline::FlatRead8((r3 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E2CFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E2D08;
    }
}

loc_801E2D00:
{
    r3 = -5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801E2D08:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_801E2D0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E2D18;
    }
}

loc_801E2D10:
{
    r3 = -3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801E2D18:
{
    r5 = MemoryInline::FlatRead32((r3 + 64));
}

loc_801E2D20:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801E2D78;
    }
}

loc_801E2D24:
{
    goto loc_801E2D6C;
}

loc_801E2D28:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_801E2D30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_801E2D48;
    }
}

loc_801E2D34:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_801E2D3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E2D48;
    }
}

loc_801E2D40:
{
    r3 = -24;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801E2D48:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_801E2D50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_801E2D68;
    }
}

loc_801E2D54:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_801E2D5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E2D68;
    }
}

loc_801E2D60:
{
    r3 = -24;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801E2D68:
{
    r5 = (r5 + 1);
}

loc_801E2D6C:
{
    r4 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E2D28;
    }
}

loc_801E2D78:
{
    r0 = MemoryInline::FlatRead8((r3 + 201));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801E2D80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E2D8C;
    }
}

loc_801E2D84:
{
    r3 = -3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801E2D8C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E2CF4 func_801E2CF4 preserves=true fpr_mask=0x00000000
