#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800773E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800773E0;

loc_800773E0:
{
    r3 = 0x80250000u;
    r0 = MemoryInline::FlatRead32(r4);
    r3 = (r3 + -32768);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_800773F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800773FC;
    }
}

loc_800773F4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800773FC:
{
    r3 = 0x80240000u;
    r0 = MemoryInline::FlatRead32(r4);
    r3 = (r3 + 32640);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8007740C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80077418;
    }
}

loc_80077410:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80077418:
{
    r3 = 0x80240000u;
    r3 = (r3 + 32624);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80077424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80077430;
    }
}

loc_80077428:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80077430:
{
    r3 = 0x80240000u;
    r3 = (r3 + 30408);
    r0 = (r3 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000011 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800773E0 func_800773E0 preserves=true fpr_mask=0x00000000
