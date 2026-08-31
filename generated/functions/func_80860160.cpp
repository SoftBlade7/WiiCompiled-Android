#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80860160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80860160;

loc_80860160:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 2);
}

loc_80860170:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808601BC;
    }
}

loc_80860174:
{
    r0 = MemoryInline::FlatRead8((r3 + 38));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8086017C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086019C;
    }
}

loc_80860180:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80860184:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808601A4;
    }
}

loc_80860188:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8086018C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808601AC;
    }
}

loc_80860190:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80860194:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808601B4;
    }
}

loc_80860198:
{
    goto loc_80860274;
}

loc_8086019C:
{
    r3 = 36;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808601A4:
{
    r3 = 37;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808601AC:
{
    r3 = 38;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808601B4:
{
    r3 = 39;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808601BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 38));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_808601C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808601E4;
    }
}

loc_808601C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808601CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808601EC;
    }
}

loc_808601D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_808601D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808601F4;
    }
}

loc_808601D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_808601DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808601FC;
    }
}

loc_808601E0:
{
    goto loc_80860274;
}

loc_808601E4:
{
    r3 = 32;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808601EC:
{
    r3 = 33;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808601F4:
{
    r3 = 34;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808601FC:
{
    r3 = 35;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80860274:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80860160 func_80860160 preserves=true fpr_mask=0x00000000
