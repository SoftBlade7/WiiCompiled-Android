#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80021E30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_80021E30;

loc_80021E30:
{
    r0 = (r4 + 15);
    r8 = 0x802A0000u;
    r6 = (r0 & 65520);
    MemoryInline::FlatWriteRam32((r8 + 27768), r3);
    r0 = (r5 & 65535);
    r7 = (r8 + 27768);
    r0 = (r6 * r0);
    MemoryInline::FlatWriteRam16((r7 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r7 + 10), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r7 + 12), static_cast<uint16_t>(r6));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    MemoryInline::FlatWriteRam32((r7 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000001C1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80021E30 func_80021E30 preserves=true fpr_mask=0x00000000
