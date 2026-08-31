#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014E520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014E520;

loc_8014E520:
{
    r4 = 0x80340000u;
    r4 = (r4 + -27840);
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8014E530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014E548;
    }
}

loc_8014E534:
{
    r0 = MemoryInline::FlatRead16((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8014E53C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014E548;
    }
}

loc_8014E540:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8014E548:
{
    r4 = (r4 + 92);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8014E550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014E568;
    }
}

loc_8014E554:
{
    r0 = MemoryInline::FlatRead16((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8014E55C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014E568;
    }
}

loc_8014E560:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8014E568:
{
    r4 = (r4 + 92);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8014E570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014E588;
    }
}

loc_8014E574:
{
    r0 = MemoryInline::FlatRead16((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8014E57C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014E588;
    }
}

loc_8014E580:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8014E588:
{
    r4 = (r4 + 92);
    r0 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014E590:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014E5A8;
    }
}

loc_8014E594:
{
    r0 = MemoryInline::FlatRead16((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8014E59C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014E5A8;
    }
}

loc_8014E5A0:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8014E5A8:
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
// RECOMP_REGISTRATION base 0x8014E520 func_8014E520 preserves=true fpr_mask=0x00000000
