#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80598BE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_80598BE4;

loc_80598BE4:
{
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8059A02Cu>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000A gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0xC0000001 fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80598BE4 func_80598BE4 preserves=true fpr_mask=0x00000000
