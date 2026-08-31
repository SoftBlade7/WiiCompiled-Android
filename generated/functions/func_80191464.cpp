#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80191464(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80191464;

loc_80191464:
{
    r0 = MemoryInline::FlatRead8(r4);
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r4 = MemoryInline::FlatRead32((r3 + 1024));
    r5 = (r5 + 1);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    MemoryInline::FlatWrite32((r3 + 1024), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80191464 func_80191464 preserves=true fpr_mask=0x00000000
