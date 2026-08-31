#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80619C70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80619C70;

loc_80619C70:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 64), r0);
    r6 = 0;
    r5 = 0;
    goto loc_80619CAC;
}

loc_80619C84:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r4_addr_2 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 388));
}

loc_80619C94:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80619CA4;
    }
}

loc_80619C98:
{
    r4 = MemoryInline::FlatRead32((r3 + 64));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 64), r0);
}

loc_80619CA4:
{
    r5 = (r5 + 4);
    r6 = (r6 + 1);
}

loc_80619CAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_80619CB4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80619C84;
    }
}

loc_80619CB8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80619C70 func_80619C70 preserves=true fpr_mask=0x00000000
