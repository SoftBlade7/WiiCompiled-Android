#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CCB64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800CCB64;

loc_800CCB64:
{
}

loc_800CCB68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800CCB74;
    }
}

loc_800CCB6C:
{
    r0 = MemoryInline::FlatRead32((r13 + -26964));
    MemoryInline::FlatWrite32(r3, r0);
}

loc_800CCB74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800CCB78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CCC30;
    }
}

loc_800CCB7C:
{
    r0 = MemoryInline::FlatRead32((r13 + -26968));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
}

loc_800CCB84:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800CCC28;
    }
}

loc_800CCB88:
{
    r3 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 22272);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800CCC28u:
        goto loc_800CCC28;
        break;
    case 0x800CCBECu:
        goto loc_800CCBEC;
        break;
    case 0x800CCBA0u:
        goto loc_800CCBA0;
        break;
    case 0x800CCBACu:
        goto loc_800CCBAC;
        break;
    case 0x800CCBD4u:
        goto loc_800CCBD4;
        break;
    case 0x800CCBE0u:
        goto loc_800CCBE0;
        break;
    case 0x800CCBF8u:
        goto loc_800CCBF8;
        break;
    case 0x800CCC04u:
        goto loc_800CCC04;
        break;
    case 0x800CCC10u:
        goto loc_800CCC10;
        break;
    case 0x800CCC1Cu:
        goto loc_800CCC1C;
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

loc_800CCBA0:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_800CCC30;
}

loc_800CCBAC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26964));
    r0 = (r3 + 131072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(50642));
}

loc_800CCBB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CCBC8;
    }
}

loc_800CCBBC:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_800CCC30;
}

loc_800CCBC8:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_800CCC30;
}

loc_800CCBD4:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_800CCC30;
}

loc_800CCBE0:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_800CCC30;
}

loc_800CCBEC:
{
    r0 = 7;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_800CCC30;
}

loc_800CCBF8:
{
    r0 = 5;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_800CCC30;
}

loc_800CCC04:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_800CCC30;
}

loc_800CCC10:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_800CCC30;
}

loc_800CCC1C:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_800CCC30;
}

loc_800CCC28:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_800CCC30:
{
    r3 = MemoryInline::FlatRead32((r13 + -26968));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CCB64 func_800CCB64 preserves=true fpr_mask=0x00000000
