#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A0FC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A0FC8;

loc_801A0FC8:
{
    r7 = (r5 * 12);
    MemoryInline::FlatWrite32((r13 + -25420), r3);
    r8 = 0;
    MemoryInline::FlatWrite32((r13 + -25424), r5);
    r6 = 0;
    r5 = -1;
    r3 = 0;
    goto loc_801A1004;
}

loc_801A0FE8:
{
    r0 = MemoryInline::FlatRead32((r13 + -25420));
    r8 = (r8 + 1);
    r6_addr_2 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_2, r5);
    r9 = (r0 + r6);
    r6 = (r6 + 12);
    MemoryInline::FlatWrite32((r9 + 8), r3);
    MemoryInline::FlatWrite32((r9 + 4), r3);
}

loc_801A1004:
{
    r0 = MemoryInline::FlatRead32((r13 + -25424));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_801A100C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A0FE8;
    }
}

loc_801A1010:
{
    r3 = MemoryInline::FlatRead32((r13 + -25420));
    r0 = (r4 & -32);
    r4 = -1;
    MemoryInline::FlatWrite32((r13 + -25432), r0);
    r3 = (r3 + r7);
    r0 = (r3 + 31);
    MemoryInline::FlatWrite32((r13 + -29032), r4);
    r3 = (r0 & -32);
    MemoryInline::FlatWrite32((r13 + -25428), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000023F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A0FC8 func_801A0FC8 preserves=true fpr_mask=0x00000000
