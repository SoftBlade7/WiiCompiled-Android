#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000C584(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000C584;

loc_8000C584:
{
    r6 = MemoryInline::FlatRead32(r3);
    r7 = (r6 & -8);
    r3_addr_0 = (r3 + r7);
    r5 = MemoryInline::FlatRead32(r3_addr_0);
    r8 = (r3 + r7);
    r0 = (r5 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000C598:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8000C59C:
{
    r5 = (r5 & -8);
    r0 = (r6 & 7);
    r6 = (r7 + r5);
    r0_mrot_0 = (r6 & -8);
    r0_mdest_0 = (r0 & 7);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = (r0 & 2);
}

loc_8000C5B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000C5C0;
    }
}

loc_8000C5B8:
{
    r5 = (r3 + r6);
    MemoryInline::FlatWrite32((r5 + -4), r6);
}

loc_8000C5C0:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 2);
}

loc_8000C5C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000C5DC;
    }
}

loc_8000C5CC:
{
    r3_addr_1 = (r3 + r6);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (r0 & -5);
    r3_addr_2 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_2, r0);
    goto loc_8000C5E8;
}

loc_8000C5DC:
{
    r3_addr_3 = (r3 + r6);
    r0 = MemoryInline::FlatRead32(r3_addr_3);
    r0 = (r0 | 4);
    r3_addr_4 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_4, r0);
}

loc_8000C5E8:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_8000C5F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r8))) {
        goto loc_8000C5FC;
    }
}

loc_8000C5F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8000C5FC:
{
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
}

loc_8000C604:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C610;
    }
}

loc_8000C608:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8000C610:
{
    r3 = MemoryInline::FlatRead32((r8 + 12));
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r8 + 8));
    r0 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000C584 func_8000C584 preserves=true fpr_mask=0x00000000
