#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80572544(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80572544;

loc_80572544:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 17200));
    r0 = (r5 * 12);
    r4 = MemoryInline::FlatRead32((r4 + 68));
    r5 = (r4 + r0);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32(r3, r4);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000002E gpr_write=0x80000033 gpr_return=0x00000010 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80572544 func_80572544 preserves=true fpr_mask=0x00000000
