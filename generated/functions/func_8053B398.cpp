#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053B398(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8053B398;

loc_8053B398:
{
    r3 = 0x809C0000u;
    r4 = 0x80010000u;
    r5 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = 65536;
    r4 = (r4 + -32767);
    r5 = MemoryInline::FlatRead32((r5 + 32));
    r0 = (r3 + -1);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r5)) >> 32));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 131071);
    r0 = (r3 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8053B398 func_8053B398 preserves=true fpr_mask=0x00000000
