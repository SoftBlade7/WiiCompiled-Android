#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C7134(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_807C7134;

loc_807C7134:
{
    r5 = 0x809C0000u;
    MemoryInline::FlatWrite32((r3 + 16), r4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r0 = 0;
    r5 = (r5 + 15800);
    r5_addr_0 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_0);
    MemoryInline::FlatWrite32((r3 + 20), r4);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807C7134 func_807C7134 preserves=true fpr_mask=0x00000000
