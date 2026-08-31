#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AAB88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_807AAB88;

loc_807AAB88:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 23220));
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x807B54F4u>(ctx);
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807AAB88 func_807AAB88 preserves=true fpr_mask=0x00000000
