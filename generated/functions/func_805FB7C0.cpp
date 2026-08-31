#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FB7C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805FB7C0;

loc_805FB7C0:
{
    r3 = (r31 + 456);
    r4 = 0;
    // inline leaf 0x805F2E84 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 372));
    MemoryInline::FlatWrite32((r3 + 376), r4);
    r5 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r5 | r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r3 + 382), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805F2E84
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x805FB7ECu>(ctx);
    r0 = ctx->gpr[0];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80000002 gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805FB7C0 func_805FB7C0 preserves=true fpr_mask=0x00000000
