#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EB6E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800EB6E8;

loc_800EB6E8:
{
    r0 = 20;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(22));
}

loc_800EB6F0:
{
    MemoryInline::FlatWrite32(r4, r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800EB7D8;
    }
}

loc_800EB6F8:
{
    r5 = 0x80280000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r5 + -23728);
    r5_addr_0 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_0);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800EB710u:
        goto loc_800EB710;
        break;
    case 0x800EB720u:
        goto loc_800EB720;
        break;
    case 0x800EB728u:
        goto loc_800EB728;
        break;
    case 0x800EB730u:
        goto loc_800EB730;
        break;
    case 0x800EB738u:
        goto loc_800EB738;
        break;
    case 0x800EB740u:
        goto loc_800EB740;
        break;
    case 0x800EB748u:
        goto loc_800EB748;
        break;
    case 0x800EB758u:
        goto loc_800EB758;
        break;
    case 0x800EB760u:
        goto loc_800EB760;
        break;
    case 0x800EB768u:
        goto loc_800EB768;
        break;
    case 0x800EB770u:
        goto loc_800EB770;
        break;
    case 0x800EB778u:
        goto loc_800EB778;
        break;
    case 0x800EB780u:
        goto loc_800EB780;
        break;
    case 0x800EB788u:
        goto loc_800EB788;
        break;
    case 0x800EB790u:
        goto loc_800EB790;
        break;
    case 0x800EB798u:
        goto loc_800EB798;
        break;
    case 0x800EB7A0u:
        goto loc_800EB7A0;
        break;
    case 0x800EB7A8u:
        goto loc_800EB7A8;
        break;
    case 0x800EB7B0u:
        goto loc_800EB7B0;
        break;
    case 0x800EB7B8u:
        goto loc_800EB7B8;
        break;
    case 0x800EB7C0u:
        goto loc_800EB7C0;
        break;
    case 0x800EB7C8u:
        goto loc_800EB7C8;
        break;
    case 0x800EB7D0u:
        goto loc_800EB7D0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800EB710:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB720:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB728:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB730:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB738:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB740:
{
    r3 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB748:
{
    r0 = 9;
    r3 = 7;
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB758:
{
    r3 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB760:
{
    r3 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB768:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB770:
{
    r3 = 11;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB778:
{
    r3 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB780:
{
    r3 = 13;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB788:
{
    r3 = 14;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB790:
{
    r3 = 15;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB798:
{
    r3 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB7A0:
{
    r3 = 17;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB7A8:
{
    r3 = 18;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB7B0:
{
    r3 = 19;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB7B8:
{
    r3 = 20;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB7C0:
{
    r3 = 21;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB7C8:
{
    r3 = 30;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB7D0:
{
    r3 = 22;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800EB7D8:
{
    r3 = 22;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EB6E8 func_800EB6E8 preserves=true fpr_mask=0x00000000
