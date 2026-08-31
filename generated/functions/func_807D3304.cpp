#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D3304(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r28_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r31 = ctx->gpr[31];

    goto loc_807D3304;

loc_807D3304:
{
    r0 = (r31 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[28] = r28;
    InvokeDirectCpu<0x807D3358u>(ctx);
    r0 = ctx->gpr[0];
    r28 = ctx->gpr[28];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    ctx->gpr[28] = r28;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xA0000002 gpr_write=0xF0000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D3304 func_807D3304 preserves=true fpr_mask=0x00000000
