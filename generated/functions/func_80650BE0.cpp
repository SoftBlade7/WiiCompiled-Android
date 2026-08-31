#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80650BE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80650BE0;

loc_80650BE0:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (r5 + -88);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
}

loc_80650BF8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80650DD4;
    }
}

loc_80650BFC:
{
    r4 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + 1372);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80650C14u:
        goto loc_80650C14;
        break;
    case 0x80650C84u:
        goto loc_80650C84;
        break;
    case 0x80650DD4u:
        goto loc_80650DD4;
        break;
    case 0x80650CE4u:
        goto loc_80650CE4;
        break;
    case 0x80650D54u:
        goto loc_80650D54;
        break;
    case 0x80650DC4u:
        goto loc_80650DC4;
        break;
    case 0x80650DCCu:
        goto loc_80650DCC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

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
    goto loc_80650DD4;
}

loc_80650C6C:
{
    r3 = 4320;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80650C74:
{
    r3 = 4321;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80650C7C:
{
    r3 = 4322;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

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
    goto loc_80650DD4;
}

loc_80650CD4:
{
    r3 = 4323;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80650CDC:
{
    r3 = 4324;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

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
    goto loc_80650DD4;
}

loc_80650D3C:
{
    r3 = 4325;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80650D44:
{
    r3 = 4326;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80650D4C:
{
    r3 = 4327;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

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
    goto loc_80650DD4;
}

loc_80650DAC:
{
    r3 = 4328;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80650DB4:
{
    r3 = 4329;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80650DBC:
{
    r3 = 4330;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80650DC4:
{
    r3 = 4323;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80650DCC:
{
    r3 = 4324;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80650DD4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80650BE0 func_80650BE0 preserves=true fpr_mask=0x00000000
