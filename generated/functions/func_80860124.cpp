#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80860124(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80860124;

loc_80860124:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (r3 + -25);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
}

loc_8086013C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8086026C;
    }
}

loc_80860140:
{
    r3 = 0x808E0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + -20664);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80860158u:
        goto loc_80860158;
        break;
    case 0x80860160u:
        goto loc_80860160;
        break;
    case 0x80860204u:
        goto loc_80860204;
        break;
    case 0x8086025Cu:
        goto loc_8086025C;
        break;
    case 0x80860264u:
        goto loc_80860264;
        break;
    case 0x80860254u:
        goto loc_80860254;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80860158:
{
    r3 = 30;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

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
    ctx->ctr = ctr;
    return;
}

loc_808601A4:
{
    r3 = 37;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808601AC:
{
    r3 = 38;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808601B4:
{
    r3 = 39;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    ctx->ctr = ctr;
    return;
}

loc_808601EC:
{
    r3 = 33;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808601F4:
{
    r3 = 34;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808601FC:
{
    r3 = 35;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80860204:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 38));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80860214:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80860234;
    }
}

loc_80860218:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8086021C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086023C;
    }
}

loc_80860220:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80860224:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860244;
    }
}

loc_80860228:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8086022C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086024C;
    }
}

loc_80860230:
{
    goto loc_80860274;
}

loc_80860234:
{
    r3 = 40;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8086023C:
{
    r3 = 41;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80860244:
{
    r3 = 42;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8086024C:
{
    r3 = 43;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80860254:
{
    r3 = 31;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8086025C:
{
    r3 = 44;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80860264:
{
    r3 = 45;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8086026C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80860274:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80860124 func_80860124 preserves=true fpr_mask=0x00000000
