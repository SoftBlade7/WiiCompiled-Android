#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072A300(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4 = ctx->gpr[4];

    goto loc_8072A300;

loc_8072A300:
{
    r4 = MemoryInline::FlatRead32((r4 + 56));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 20));
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8073CB7Cu>(ctx);
    r4 = ctx->gpr[4];
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8072A300 func_8072A300 preserves=true fpr_mask=0x00000000
