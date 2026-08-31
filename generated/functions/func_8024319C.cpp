#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8024319C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8024319C;

loc_8024319C:
{
    r0 = (r4 & 31);
    r5 = MemoryInline::FlatRead32((r13 + -23704));
    r0_subfic_ra_0 = r0;
    r0 = (32 - r0_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r0_subfic_ra_0) ? 1u : 0u) << 29);
    r7 = (r4 + r0);
    goto loc_80243278;
}

loc_802431B0:
{
    r0 = MemoryInline::FlatRead32((r5 + 44));
}

loc_802431B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80243274;
    }
}

loc_802431BC:
{
    r0 = MemoryInline::FlatRead32((r5 + 40));
}

loc_802431C4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r7))) {
        goto loc_80243274;
    }
}

loc_802431C8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r7);
    r0 = (r0 & -3);
    r6 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r3 + 12), r6);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 48), r5);
    r4 = MemoryInline::FlatRead32((r5 + 52));
    MemoryInline::FlatWrite32((r3 + 52), r4);
}

loc_802431F8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80243204;
    }
}

loc_802431FC:
{
    MemoryInline::FlatWrite32((r4 + 48), r3);
    goto loc_80243208;
}

loc_80243204:
{
    MemoryInline::FlatWrite32((r13 + -23704), r3);
}

loc_80243208:
{
    r0 = MemoryInline::FlatRead32((r5 + 40));
    r0 = (r0 - r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWrite32((r5 + 40), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80243258;
    }
}

loc_80243218:
{
    r4 = MemoryInline::FlatRead32((r5 + 48));
}

loc_80243220:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80243228;
    }
}

loc_80243224:
{
    MemoryInline::FlatWrite32((r4 + 52), r3);
}

loc_80243228:
{
    r0 = MemoryInline::FlatRead32((r5 + 48));
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r3 = MemoryInline::FlatRead32((r13 + -23700));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80243238:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80243240;
    }
}

loc_8024323C:
{
    MemoryInline::FlatWrite32((r3 + 48), r5);
}

loc_80243240:
{
    r3 = MemoryInline::FlatRead32((r13 + -23700));
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 52), r3);
    MemoryInline::FlatWrite32((r5 + 48), r0);
    MemoryInline::FlatWrite32((r13 + -23700), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80243258:
{
    r0 = (r6 + r7);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r0 = MemoryInline::FlatRead8((r5 + 4));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r5 + 52), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80243274:
{
    r5 = MemoryInline::FlatRead32((r5 + 48));
}

loc_80243278:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8024327C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802431B0;
    }
}

loc_80243280:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8024319C func_8024319C preserves=true fpr_mask=0x00000000
