#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055F2B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8055F2B4;

loc_8055F2B4:
{
    MemoryInline::FlatWrite32((r3 + 64), r4);
    r4 = MemoryInline::FlatRead8((r4 + 16));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8055D920u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800007B gpr_write=0xF800007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055F2B4 func_8055F2B4 preserves=true fpr_mask=0x00000000
