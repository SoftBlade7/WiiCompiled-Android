#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80830C3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;

    goto loc_80830C3C;

loc_80830C3C:
{
    r0 = (r4 * 12);
    r6 = (r3 + r0);
    r0 = (r4 * 40);
    MemoryInline::FlatWrite8((r6 + 20), static_cast<uint8_t>(r5));
    r4 = r5;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3_addr_0 = (r3 + r0);
    r12 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = r3_addr_0;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFBE gpr_write=0x00001059 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80830C3C func_80830C3C preserves=true fpr_mask=0x00000000
