#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B917C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801B917C;

loc_801B917C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(34));
}

loc_801B9180:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B928C;
    }
}

loc_801B9184:
{
    r4 = 0x802A0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -9692);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801B919Cu:
        goto loc_801B919C;
        break;
    case 0x801B91A8u:
        goto loc_801B91A8;
        break;
    case 0x801B9214u:
        goto loc_801B9214;
        break;
    case 0x801B9224u:
        goto loc_801B9224;
        break;
    case 0x801B91B8u:
        goto loc_801B91B8;
        break;
    case 0x801B91C8u:
        goto loc_801B91C8;
        break;
    case 0x801B9274u:
        goto loc_801B9274;
        break;
    case 0x801B928Cu:
        goto loc_801B928C;
        break;
    case 0x801B91F4u:
        goto loc_801B91F4;
        break;
    case 0x801B9204u:
        goto loc_801B9204;
        break;
    case 0x801B9234u:
        goto loc_801B9234;
        break;
    case 0x801B9244u:
        goto loc_801B9244;
        break;
    case 0x801B91D8u:
        goto loc_801B91D8;
        break;
    case 0x801B91E4u:
        goto loc_801B91E4;
        break;
    case 0x801B9254u:
        goto loc_801B9254;
        break;
    case 0x801B9264u:
        goto loc_801B9264;
        break;
    case 0x801B9284u:
        goto loc_801B9284;
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

loc_801B919C:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B91A8:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 38);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B91B8:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 76);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B91C8:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 114);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B91D8:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B91E4:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 38);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B91F4:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 152);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B9204:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 190);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B9214:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 228);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B9224:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 266);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B9234:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 76);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B9244:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 114);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B9254:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B9264:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 342);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B9274:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -10400);
    r3 = (r3 + 380);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B9284:
{
    r3 = MemoryInline::FlatRead32((r13 + -24692));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B928C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B917C func_801B917C preserves=true fpr_mask=0x00000000
