#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E8750(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];

    goto loc_800E8750;

loc_800E8750:
{
    r7 = MemoryInline::FlatRead32((r13 + -26856));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r3 = (r3_rot_0 & 16320);
    r6 = 1;
    r0 = 0;
    r7 = (r7 + r3);
    r3 = 1;
    MemoryInline::FlatWrite32((r7 + 4), r4);
    MemoryInline::FlatWrite32((r7 + 8), r5);
    MemoryInline::FlatWrite8((r7 + 29), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r7 + 16), r0);
    MemoryInline::FlatWrite32((r7 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002038 gpr_write=0x000000C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E8750 func_800E8750 preserves=true fpr_mask=0x00000000
