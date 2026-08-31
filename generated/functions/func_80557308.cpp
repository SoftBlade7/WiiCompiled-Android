#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80557308(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_80557308;

loc_80557308:
{
    r6 = MemoryInline::FlatRead32((r3 + 36));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r7 = (r7_rot_0 & -4);
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r6_addr_0 = (r6 + r7);
    r0 = MemoryInline::FlatRead32(r6_addr_0);
    r4_addr_0 = (r4 + r7);
    MemoryInline::FlatWrite32(r4_addr_0, r0);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r3_addr_0 = (r3 + r7);
    MemoryInline::FlatWrite32(r3_addr_0, r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000000D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80557308 func_80557308 preserves=true fpr_mask=0x00000000
