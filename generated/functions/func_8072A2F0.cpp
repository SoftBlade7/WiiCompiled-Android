#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072A2F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_8072A2F0;

loc_8072A2F0:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8073BAECu>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFCE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072A2F0 func_8072A2F0 preserves=true fpr_mask=0x00000000
