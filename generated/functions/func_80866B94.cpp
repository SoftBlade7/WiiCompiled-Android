#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80866B94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80866B94;

loc_80866B94:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_80866BA4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80866BB0;
    }
}

loc_80866BA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80866BAC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80866BB0:
{
    r3 = 0x808B0000u;
    r6 = 0x808B0000u;
    r0 = MemoryInline::FlatRead32((r3 + 228));
    r6 = (r6 + 232);
    r3 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80866BCC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80866BD0:
{
    r0 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80866BD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866BF8;
    }
}

loc_80866BDC:
{
    r0 = (r3 * 28);
    r3 = 0x808B0000u;
    r3 = (r3 + 232);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32(r5, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80866BF8:
{
    r6 = (r6 + 28);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80866BD0;
    }
}

loc_80866C04:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80866B94 func_80866B94 preserves=true fpr_mask=0x00000000
