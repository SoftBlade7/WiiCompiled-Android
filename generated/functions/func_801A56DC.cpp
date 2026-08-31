#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A56DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A56DC;

loc_801A56DC:
{
}

loc_801A56E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801A57F0;
    }
}

loc_801A56E4:
{
}

loc_801A56E8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(32))) {
        goto loc_801A570C;
    }
}

loc_801A56EC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(223));
}

loc_801A56F0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801A570C;
    }
}

loc_801A56F4:
{
    r0 = (r4 + -32);
    r3 = 0x80290000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r3 + -1296);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_801A570C:
{
}

loc_801A5710:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(34974))) {
        goto loc_801A5778;
    }
}

loc_801A5714:
{
}

loc_801A5718:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(39026))) {
        goto loc_801A5778;
    }
}

loc_801A571C:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & 255);
    r4 = (r4 & 255);
    r3 = (r3 + -136);
    r0 = 0;
}

loc_801A5730:
{
    r3 = (r3 * 188);
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(64))) {
        goto loc_801A574C;
    }
}

loc_801A5738:
{
}

loc_801A573C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(252))) {
        goto loc_801A574C;
    }
}

loc_801A5740:
{
}

loc_801A5744:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(127))) {
        goto loc_801A574C;
    }
}

loc_801A5748:
{
    r0 = 1;
}

loc_801A574C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A5750:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A575C;
    }
}

loc_801A5754:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_801A575C:
{
    r4 = (r4 + -64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(64));
}

loc_801A5764:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A576C;
    }
}

loc_801A5768:
{
    r4 = (r4 + -1);
}

loc_801A576C:
{
    r3 = (r3 + r4);
    r3 = (r3 + 702);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_801A5778:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(33088));
}

loc_801A577C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A5808;
    }
}

loc_801A5780:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(34718));
}

loc_801A5784:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A5808;
    }
}

loc_801A5788:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & 255);
    r4 = (r4 & 255);
    r3 = (r3 + -129);
    r0 = 0;
}

loc_801A579C:
{
    r3 = (r3 * 188);
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(64))) {
        goto loc_801A57B8;
    }
}

loc_801A57A4:
{
}

loc_801A57A8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(252))) {
        goto loc_801A57B8;
    }
}

loc_801A57AC:
{
}

loc_801A57B0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(127))) {
        goto loc_801A57B8;
    }
}

loc_801A57B4:
{
    r0 = 1;
}

loc_801A57B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A57BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A57C8;
    }
}

loc_801A57C0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_801A57C8:
{
    r4 = (r4 + -64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(64));
}

loc_801A57D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A57D8;
    }
}

loc_801A57D4:
{
    r4 = (r4 + -1);
}

loc_801A57D8:
{
    r0 = (r3 + r4);
    r3 = 0x80290000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + -912);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_801A57F0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(32));
}

loc_801A57F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A5808;
    }
}

loc_801A57F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_801A57FC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801A5808;
    }
}

loc_801A5800:
{
    r3 = (r4 + -32);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_801A5808:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A56DC func_801A56DC preserves=true fpr_mask=0x00000000
