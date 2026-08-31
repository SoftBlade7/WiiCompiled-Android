#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80514D88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80514D88;

loc_80514D88:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r3 = 0;
}

loc_80514D94:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80514DA8;
    }
}

loc_80514D98:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
}

loc_80514DA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80514DA8;
    }
}

loc_80514DA4:
{
    r3 = 1;
}

loc_80514DA8:
{
}

loc_80514DAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80514DB8;
    }
}

loc_80514DB0:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    goto loc_80514DBC;
}

loc_80514DB8:
{
    r0 = 0;
}

loc_80514DBC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80514DC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80514DE8;
    }
}

loc_80514DC4:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80514DCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80514DE0;
    }
}

loc_80514DD0:
{
    r3 = MemoryInline::FlatRead32(r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 262140);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80514DE0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80514DE8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80514D88 func_80514D88 preserves=true fpr_mask=0x00000000
