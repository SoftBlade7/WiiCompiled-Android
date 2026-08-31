#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073AC98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8073AC98;

loc_8073AC98:
{
    r3 = 0x809C0000u;
    r6 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10440));
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x805411FCu>(ctx);
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFB7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8073AC98 func_8073AC98 preserves=true fpr_mask=0x00000000
