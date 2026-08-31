#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EACE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800EACE8;

loc_800EACE8:
{
}

loc_800EACEC:
{
    r7 = 20;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_800EAD50;
    }
}

loc_800EACF4:
{
    r6 = 0x80280000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = (r6 + -24504);
    r6_addr_0 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_0);
    ctr = r6;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800EAD0Cu:
        goto loc_800EAD0C;
        break;
    case 0x800EAD18u:
        goto loc_800EAD18;
        break;
    case 0x800EAD20u:
        goto loc_800EAD20;
        break;
    case 0x800EAD28u:
        goto loc_800EAD28;
        break;
    case 0x800EAD30u:
        goto loc_800EAD30;
        break;
    case 0x800EAD38u:
        goto loc_800EAD38;
        break;
    case 0x800EAD40u:
        goto loc_800EAD40;
        break;
    case 0x800EAD48u:
        goto loc_800EAD48;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800EAD0C:
{
    r7 = 0;
    r6 = 1;
    goto loc_800EAD54;
}

loc_800EAD18:
{
    r6 = 23;
    goto loc_800EAD54;
}

loc_800EAD20:
{
    r6 = 24;
    goto loc_800EAD54;
}

loc_800EAD28:
{
    r6 = 25;
    goto loc_800EAD54;
}

loc_800EAD30:
{
    r6 = 26;
    goto loc_800EAD54;
}

loc_800EAD38:
{
    r6 = 27;
    goto loc_800EAD54;
}

loc_800EAD40:
{
    r6 = 31;
    goto loc_800EAD54;
}

loc_800EAD48:
{
    r6 = 28;
    goto loc_800EAD54;
}

loc_800EAD50:
{
    r6 = 28;
}

loc_800EAD54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_800EAD58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EAD80;
    }
}

loc_800EAD5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800EAD60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EAD80;
    }
}

loc_800EAD64:
{
    r4 = (r3 * 100);
    r3 = -65536;
    r0 = (r3 + 25536);
    r3 = (r6 + r4);
    r3 = (r3 + 50);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_800EAD80:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EACE8 func_800EACE8 preserves=true fpr_mask=0x00000000
