#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B144C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_805B144C;

loc_805B144C:
{
    r0 = (r5 * 12);
    r5 = 0x808B0000u;
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r7 = 0;
    r5 = (r5 + 28368);
    r6 = (r5 + r0);
    r5_addr_0 = (r5 + r0);
    r5 = MemoryInline::FlatRead8(r5_addr_0);
    r6 = MemoryInline::FlatRead8((r6 + 2));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8023C400u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000013A gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805B144C func_805B144C preserves=true fpr_mask=0x00000000
