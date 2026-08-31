#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80664944(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80664944;

loc_80664944:
{
    r0 = 3;
    r5 = 0;
    ctr = r0;
}

loc_80664950:
{
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664964:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_8066496C;
    }
}

loc_80664968:
{
    goto loc_80664970;
}

loc_8066496C:
{
    r4 = -1;
}

loc_80664970:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664974:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664984;
    }
}

loc_80664978:
{
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 60));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664984:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_8066499C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_806649A4;
    }
}

loc_806649A0:
{
    goto loc_806649A8;
}

loc_806649A4:
{
    r4 = -1;
}

loc_806649A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_806649AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806649BC;
    }
}

loc_806649B0:
{
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 60));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806649BC:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_806649D4:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_806649DC;
    }
}

loc_806649D8:
{
    goto loc_806649E0;
}

loc_806649DC:
{
    r4 = -1;
}

loc_806649E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_806649E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806649F4;
    }
}

loc_806649E8:
{
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 60));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806649F4:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664A0C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_80664A14;
    }
}

loc_80664A10:
{
    goto loc_80664A18;
}

loc_80664A14:
{
    r4 = -1;
}

loc_80664A18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664A1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664A2C;
    }
}

loc_80664A20:
{
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 60));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664A2C:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80664950;
    }
}

loc_80664A34:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80664944 func_80664944 preserves=true fpr_mask=0x00000000
