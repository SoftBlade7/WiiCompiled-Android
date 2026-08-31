#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053B910(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8053B910;

loc_8053B910:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r6 = (r6_rot_0 & 2040);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 68));
    r4_addr_0 = (r4 + r6);
    r5 = MemoryInline::FlatRead32(r4_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8053B928:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053B934;
    }
}

loc_8053B92C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8053B934:
{
    r3 = MemoryInline::FlatRead32((r3 + 116));
    r3_addr_0 = (r3 + r6);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_8053B940:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053B97C;
    }
}

loc_8053B944:
{
    r5 = (r3 + r6);
    r4 = (r4 + r6);
    r3 = MemoryInline::FlatRead16((r5 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8053B958:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053B97C;
    }
}

loc_8053B95C:
{
    r3 = MemoryInline::FlatRead8((r5 + 6));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8053B968:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053B97C;
    }
}

loc_8053B96C:
{
    r3 = MemoryInline::FlatRead8((r5 + 7));
    r0 = MemoryInline::FlatRead8((r4 + 7));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8053B978:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053B984;
    }
}

loc_8053B97C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8053B984:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8053B910 func_8053B910 preserves=true fpr_mask=0x00000000
