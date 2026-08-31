#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061907C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8061907C;

loc_8061907C:
{
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 384), r4);
    r5 = MemoryInline::FlatRead32((r3 + 392));
    MemoryInline::FlatWrite8((r3 + 433), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r3 + 380));
    r3 = (r5 + 372);
    r5 = MemoryInline::FlatRead32((r5 + 3132));
    r0 = (r5 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x805FA580u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFCE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8061907C func_8061907C preserves=true fpr_mask=0x00000000
