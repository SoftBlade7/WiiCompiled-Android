#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079D76C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079D76C;

loc_8079D76C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8079D770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D7A8;
    }
}

loc_8079D774:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8079D778:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D7B0;
    }
}

loc_8079D77C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_8079D780:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D7D4;
    }
}

loc_8079D784:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_8079D788:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D7DC;
    }
}

loc_8079D78C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_8079D790:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D7E4;
    }
}

loc_8079D794:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_8079D798:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D7EC;
    }
}

loc_8079D79C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(7));
}

loc_8079D7A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D7F4;
    }
}

loc_8079D7A4:
{
    goto loc_8079D7FC;
}

loc_8079D7A8:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8079D7B0:
{
    r0 = (r3 * 116);
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r0 & 255);
    r0 = (r3 + 2);
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8079D7D4:
{
    r3 = 20;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8079D7DC:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8079D7E4:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8079D7EC:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8079D7F4:
{
    r3 = 20;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8079D7FC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079D76C func_8079D76C preserves=true fpr_mask=0x00000000
