#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80214350(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80214350;

loc_80214350:
{
    MemoryInline::FlatWrite32((r13 + -24132), r3);
    MemoryInline::FlatWrite32((r13 + -27800), r5);
    MemoryInline::FlatWrite32((r13 + -24124), r4);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002038 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80214350 func_80214350 preserves=true fpr_mask=0x00000000
