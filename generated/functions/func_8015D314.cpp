#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015D314(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    goto loc_8015D314;

loc_8015D314:
{
    r4 = 0x80000000u;
    r3 = 0x80160000u;
    r5 = (r4 + 64);
    r0 = 1;
    r3 = (r3 + -11388);
    MemoryInline::FlatWrite32((r13 + -26112), r5);
    r3 = (r3 + -2147483648);
    MemoryInline::FlatWriteRam32((r4 + 72), r3);
    MemoryInline::FlatWrite32((r13 + -26108), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015D314 func_8015D314 preserves=true fpr_mask=0x00000000
