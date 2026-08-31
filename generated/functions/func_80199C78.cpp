#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80199C78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80199C78;

loc_80199C78:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r6 = (r4 + r5);
    r4_addr_0 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
}

loc_80199C88:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80199C98;
    }
}

loc_80199C8C:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80199CA4;
}

loc_80199C98:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r4 = (r4 + r5);
    MemoryInline::FlatWrite32((r4 + 4), r0);
}

loc_80199CA4:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80199CAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80199CBC;
    }
}

loc_80199CB0:
{
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80199CC8;
}

loc_80199CBC:
{
    r4 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5_addr_1 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_1, r4);
}

loc_80199CC8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r6, r0);
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80199C78 func_80199C78 preserves=true fpr_mask=0x00000000
