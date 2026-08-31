#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013C618(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8013C618;

loc_8013C618:
{
    r3 = 0x80330000u;
    r0 = 2;
    r3 = (r3 + 25208);
    r4 = 0;
    r3 = (r3 + 5860);
    ctr = r0;
}

loc_8013C630:
{
    r0 = MemoryInline::FlatRead8((r3 + 26));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C638:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C644;
    }
}

loc_8013C63C:
{
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8013C644:
{
    r0 = MemoryInline::FlatRead8((r3 + 54));
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C650:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C65C;
    }
}

loc_8013C654:
{
    r3 = (r3 + 36);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8013C65C:
{
    r0 = MemoryInline::FlatRead8((r3 + 82));
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C668:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C674;
    }
}

loc_8013C66C:
{
    r3 = (r3 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8013C674:
{
    r0 = MemoryInline::FlatRead8((r3 + 110));
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C680:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C68C;
    }
}

loc_8013C684:
{
    r3 = (r3 + 92);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8013C68C:
{
    r0 = MemoryInline::FlatRead8((r3 + 138));
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C698:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C6A4;
    }
}

loc_8013C69C:
{
    r3 = (r3 + 120);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8013C6A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 166));
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C6B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C6BC;
    }
}

loc_8013C6B4:
{
    r3 = (r3 + 148);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8013C6BC:
{
    r4 = (r4 + 1);
    r3 = (r3 + 168);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8013C630;
    }
}

loc_8013C6C8:
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

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013C618 func_8013C618 preserves=true fpr_mask=0x00000000
