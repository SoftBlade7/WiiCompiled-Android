#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004BDC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_8004BDC0;

loc_8004BDC0:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r7 = (r7_rot_0 & 255);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r6 = (r6_rot_0 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 255);
    r8 = 8;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000001C1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004BDC0 func_8004BDC0 preserves=true fpr_mask=0x00000000
