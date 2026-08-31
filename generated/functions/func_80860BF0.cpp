#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80860BF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80860BF0;

loc_80860BF0:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 7736));
    r5 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80860C04:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(85))) {
        goto loc_80860C10;
    }
}

loc_80860C08:
{
}

loc_80860C0C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(87))) {
        goto loc_80860C30;
    }
}

loc_80860C10:
{
}

loc_80860C14:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(91))) {
        goto loc_80860C20;
    }
}

loc_80860C18:
{
}

loc_80860C1C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(93))) {
        goto loc_80860C30;
    }
}

loc_80860C20:
{
}

loc_80860C24:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(131))) {
        goto loc_80860CC4;
    }
}

loc_80860C28:
{
}

loc_80860C2C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(132))) {
        goto loc_80860CC4;
    }
}

loc_80860C30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80860C34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860C64;
    }
}

loc_80860C38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80860C3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860C74;
    }
}

loc_80860C40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80860C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860C84;
    }
}

loc_80860C48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(18));
}

loc_80860C4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860C94;
    }
}

loc_80860C50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(19));
}

loc_80860C54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860CA4;
    }
}

loc_80860C58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20));
}

loc_80860C5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860CB4;
    }
}

loc_80860C60:
{
    goto loc_80860CC4;
}

loc_80860C64:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 70);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860C74:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 82);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860C84:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 94);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860C94:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 106);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860CA4:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 118);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860CB4:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 130);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860CC4:
{
}

loc_80860CC8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80860CD8;
    }
}

loc_80860CCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80860CD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860D6C;
    }
}

loc_80860CD4:
{
    goto loc_80860E00;
}

loc_80860CD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80860CDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860D0C;
    }
}

loc_80860CE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80860CE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860D1C;
    }
}

loc_80860CE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80860CEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860D2C;
    }
}

loc_80860CF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(18));
}

loc_80860CF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860D3C;
    }
}

loc_80860CF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(19));
}

loc_80860CFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860D4C;
    }
}

loc_80860D00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20));
}

loc_80860D04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860D5C;
    }
}

loc_80860D08:
{
    goto loc_80860E00;
}

loc_80860D0C:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 142);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860D1C:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 153);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860D2C:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 164);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860D3C:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 175);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860D4C:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 186);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860D5C:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 197);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860D6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80860D70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860DA0;
    }
}

loc_80860D74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80860D78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860DB0;
    }
}

loc_80860D7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80860D80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860DC0;
    }
}

loc_80860D84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(18));
}

loc_80860D88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860DD0;
    }
}

loc_80860D8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(19));
}

loc_80860D90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860DE0;
    }
}

loc_80860D94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20));
}

loc_80860D98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860DF0;
    }
}

loc_80860D9C:
{
    goto loc_80860E00;
}

loc_80860DA0:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860DB0:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 220);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860DC0:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 232);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860DD0:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 244);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860DE0:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860DF0:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 268);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80860E00:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80860BF0 func_80860BF0 preserves=true fpr_mask=0x00000000
