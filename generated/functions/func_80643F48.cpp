#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80643F48(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80643F48;

loc_80643F48:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 7736));
    r5 = MemoryInline::FlatRead32(r5);
    r5 = MemoryInline::FlatRead32(r5);
    r0 = (r5 + -88);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
}

loc_80643F60:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80643F64:
{
    r5 = 0x808C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r5 + -2612);
    r5_addr_0 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_0);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80643F7Cu:
        goto loc_80643F7C;
        break;
    case 0x80643F84u:
        goto loc_80643F84;
        break;
    case 0x80643F88u:
        goto loc_80643F88;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80643F7C:
{
    MemoryInline::FlatWrite32((r3 + 104), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80643F84:
{
    MemoryInline::FlatWrite32((r3 + 104), r4);
}

loc_80643F88:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80643F48 func_80643F48 preserves=true fpr_mask=0x00000000
