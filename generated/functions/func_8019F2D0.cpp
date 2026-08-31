#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019F2D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    goto loc_8019F2D0;

loc_8019F2D0:
{
    r4 = -1073741824;
    r10 = MemoryInline::FlatRead32((r4 + 12612));
    r9 = MemoryInline::FlatRead32((r4 + 12608));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r0 = (r0_rot_0 & 15);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r6 = (r6_rot_0 & 15);
    r4 = (r0 * 10);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r7 = (r7_rot_0 & 255);
    r0 = (r10 & 15);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r8 = (r8_rot_0 & 255);
    r4 = (r0 + r4);
    r0 = (r4 + 2000);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r5 = (r5_rot_0 & 15);
    r4 = (r5 * 10);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r8));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r5 = (r5_rot_1 & 15);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r8 = (r8_rot_1 & 255);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r9));
    r4 = (r5 + r4);
    r6 = (r6 * 10);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & 15);
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r8));
    r6 = (r7 + r6);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019F2D0 func_8019F2D0 preserves=true fpr_mask=0x00000000
