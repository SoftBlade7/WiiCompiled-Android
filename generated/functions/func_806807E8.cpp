#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806807E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_806807E8;

loc_806807E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 172));
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x807C4DC8u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF7E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFF0C2 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806807E8 func_806807E8 preserves=true fpr_mask=0x00000000
