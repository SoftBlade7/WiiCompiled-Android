#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E1748(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E1748;

loc_805E1748:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 7736));
    r6 = MemoryInline::FlatRead32((r6 + 152));
    r6 = MemoryInline::FlatRead32((r6 + 964));
    r0 = (r6 + -37);
}

loc_805E1760:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_805E1798;
    }
}

loc_805E1764:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805E1768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E1778;
    }
}

loc_805E176C:
{
    r0 = 11;
    MemoryInline::FlatWrite32((r3 + 156), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_805E1778:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805E177C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E178C;
    }
}

loc_805E1780:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r3 + 156), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_805E178C:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 156), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_805E1798:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805E179C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E17AC;
    }
}

loc_805E17A0:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 156), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_805E17AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805E17B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E17C0;
    }
}

loc_805E17B4:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 156), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_805E17C0:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 156), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E1748 func_805E1748 preserves=true fpr_mask=0x00000000
