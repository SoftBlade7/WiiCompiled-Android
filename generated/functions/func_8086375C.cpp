#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086375C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8086375C;

loc_8086375C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80863768:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808637FC;
    }
}

loc_80863778:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
}

loc_80863780:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80863814;
    }
}

loc_80863784:
{
    r4 = 0x808E0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -18164);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x808637E4u:
        goto loc_808637E4;
        break;
    case 0x808637F0u:
        goto loc_808637F0;
        break;
    case 0x80863814u:
        goto loc_80863814;
        break;
    case 0x808637CCu:
        goto loc_808637CC;
        break;
    case 0x808637A8u:
        goto loc_808637A8;
        break;
    case 0x8086379Cu:
        goto loc_8086379C;
        break;
    case 0x808637B4u:
        goto loc_808637B4;
        break;
    case 0x808637C0u:
        goto loc_808637C0;
        break;
    case 0x808637D8u:
        goto loc_808637D8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8086379C:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863814;
}

loc_808637A8:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863814;
}

loc_808637B4:
{
    r0 = 11;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863814;
}

loc_808637C0:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863814;
}

loc_808637CC:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863814;
}

loc_808637D8:
{
    r0 = 26;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863814;
}

loc_808637E4:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863814;
}

loc_808637F0:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863814;
}

loc_808637FC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8086382Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_80863808:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80863814;
    }
}

loc_8086380C:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_80863814:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x80000013 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8086375C func_8086375C preserves=true fpr_mask=0x00000000
