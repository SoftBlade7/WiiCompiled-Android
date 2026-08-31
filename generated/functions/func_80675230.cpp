#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80675230(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80675230;

loc_80675230:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 174));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80675244:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80675250;
    }
}

loc_80675248:
{
    r3 = 0;
    goto loc_806752F4;
}

loc_80675250:
{
    r0 = MemoryInline::FlatRead8((r3 + 100));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80675258:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675264;
    }
}

loc_8067525C:
{
    r3 = 0;
    goto loc_806752F4;
}

loc_80675264:
{
    r0 = 0;
    r0 = (r0 * 12);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 114));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80675278:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80675284;
    }
}

loc_8067527C:
{
    r3 = 0;
    goto loc_806752F4;
}

loc_80675284:
{
    r0 = 1;
    r0 = (r0 * 12);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 114));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80675298:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806752A4;
    }
}

loc_8067529C:
{
    r3 = 0;
    goto loc_806752F4;
}

loc_806752A4:
{
    r0 = 2;
    r0 = (r0 * 12);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 114));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806752B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806752C4;
    }
}

loc_806752BC:
{
    r3 = 0;
    goto loc_806752F4;
}

loc_806752C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806752CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806752D8;
    }
}

loc_806752D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_806752D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806752E0;
    }
}

loc_806752D8:
{
    r3 = 0;
    goto loc_806752F4;
}

loc_806752E0:
{
    r3 = (r3 + 24);
    ctx->lr = 0x806752E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CB8B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_806752F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80003FB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80675230 func_80675230 preserves=true fpr_mask=0x00000000
