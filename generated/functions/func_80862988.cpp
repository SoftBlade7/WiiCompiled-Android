#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80862988(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80862988;

loc_80862988:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(52));
}

loc_8086298C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80862AB0;
    }
}

loc_80862990:
{
    r4 = 0x808E0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -19340);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x808629B0u:
        goto loc_808629B0;
        break;
    case 0x808629B8u:
        goto loc_808629B8;
        break;
    case 0x808629C0u:
        goto loc_808629C0;
        break;
    case 0x808629C8u:
        goto loc_808629C8;
        break;
    case 0x808629D0u:
        goto loc_808629D0;
        break;
    case 0x808629D8u:
        goto loc_808629D8;
        break;
    case 0x808629E0u:
        goto loc_808629E0;
        break;
    case 0x808629E8u:
        goto loc_808629E8;
        break;
    case 0x808629F8u:
        goto loc_808629F8;
        break;
    case 0x80862A08u:
        goto loc_80862A08;
        break;
    case 0x80862A00u:
        goto loc_80862A00;
        break;
    case 0x808629F0u:
        goto loc_808629F0;
        break;
    case 0x80862A10u:
        goto loc_80862A10;
        break;
    case 0x80862A18u:
        goto loc_80862A18;
        break;
    case 0x80862AB0u:
        goto loc_80862AB0;
        break;
    case 0x80862A20u:
        goto loc_80862A20;
        break;
    case 0x80862A28u:
        goto loc_80862A28;
        break;
    case 0x80862A30u:
        goto loc_80862A30;
        break;
    case 0x80862A38u:
        goto loc_80862A38;
        break;
    case 0x80862A40u:
        goto loc_80862A40;
        break;
    case 0x80862A48u:
        goto loc_80862A48;
        break;
    case 0x80862A50u:
        goto loc_80862A50;
        break;
    case 0x80862A58u:
        goto loc_80862A58;
        break;
    case 0x80862A60u:
        goto loc_80862A60;
        break;
    case 0x80862A68u:
        goto loc_80862A68;
        break;
    case 0x80862A70u:
        goto loc_80862A70;
        break;
    case 0x80862A78u:
        goto loc_80862A78;
        break;
    case 0x80862A80u:
        goto loc_80862A80;
        break;
    case 0x80862A88u:
        goto loc_80862A88;
        break;
    case 0x80862A90u:
        goto loc_80862A90;
        break;
    case 0x80862A98u:
        goto loc_80862A98;
        break;
    case 0x80862AA0u:
        goto loc_80862AA0;
        break;
    case 0x80862AA8u:
        goto loc_80862AA8;
        break;
    case 0x808629A8u:
        goto loc_808629A8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_808629A8:
{
    r3 = 4800;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808629B0:
{
    r3 = 1050;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808629B8:
{
    r3 = 2550;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808629C0:
{
    r3 = 1950;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808629C8:
{
    r3 = 3150;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808629D0:
{
    r3 = 450;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808629D8:
{
    r3 = 3450;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808629E0:
{
    r3 = 2850;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808629E8:
{
    r3 = 1350;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808629F0:
{
    r3 = 4950;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808629F8:
{
    r3 = 4350;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A00:
{
    r3 = 2250;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A08:
{
    r3 = 750;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A10:
{
    r3 = 1650;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A18:
{
    r3 = 5100;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A20:
{
    r3 = 1800;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A28:
{
    r3 = 1200;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A30:
{
    r3 = 4200;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A38:
{
    r3 = 300;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A40:
{
    r3 = 2700;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A48:
{
    r3 = 4650;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A50:
{
    r3 = 600;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A58:
{
    r3 = 4500;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A60:
{
    r3 = 3000;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A68:
{
    r3 = 2400;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A70:
{
    r3 = 900;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A78:
{
    r3 = 3900;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A80:
{
    r3 = 2100;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A88:
{
    r3 = 3300;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A90:
{
    r3 = 3750;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862A98:
{
    r3 = 1500;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862AA0:
{
    r3 = 3600;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862AA8:
{
    r3 = 4050;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80862AB0:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80862988 func_80862988 preserves=true fpr_mask=0x00000000
