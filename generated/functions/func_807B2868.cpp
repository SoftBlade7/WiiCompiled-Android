#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B2868(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_807B2868;

loc_807B2868:
{
    r4 = 12;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x8055CCF8 (6 guest instruction(s))
    r0 = 65536;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r5 & ~r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x8055CCF8
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B2868 func_807B2868 preserves=true fpr_mask=0x00000000
