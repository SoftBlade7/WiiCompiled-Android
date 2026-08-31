#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80654758(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80654758;

loc_80654758:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8432));
}

loc_8065B8D4:
{
    r0 = 3;
    r3 = (r3 + 4);
    r4 = 0;
    ctr = r0;
}

loc_8065B8E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 25));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B8EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B8F8;
    }
}

loc_8065B8F0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8065B8F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 57));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B900:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B90C;
    }
}

loc_8065B904:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8065B90C:
{
    r0 = MemoryInline::FlatRead8((r3 + 89));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B914:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B920;
    }
}

loc_8065B918:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8065B920:
{
    r0 = MemoryInline::FlatRead8((r3 + 121));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B928:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B934;
    }
}

loc_8065B92C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8065B934:
{
    r0 = MemoryInline::FlatRead8((r3 + 153));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B93C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B948;
    }
}

loc_8065B940:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8065B948:
{
    r0 = MemoryInline::FlatRead8((r3 + 185));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B950:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B95C;
    }
}

loc_8065B954:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8065B95C:
{
    r0 = MemoryInline::FlatRead8((r3 + 217));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B964:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B970;
    }
}

loc_8065B968:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8065B970:
{
    r0 = MemoryInline::FlatRead8((r3 + 249));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B978:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B984;
    }
}

loc_8065B97C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8065B984:
{
    r3 = (r3 + 256);
    r4 = (r4 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8065B8E4;
    }
}

loc_8065B990:
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
// RECOMP_REGISTRATION base 0x80654758 func_80654758 preserves=true fpr_mask=0x00000000
