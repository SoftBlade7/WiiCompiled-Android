#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004BE30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_8004BE30;

loc_8004BE30:
{
    r6 = MemoryInline::FlatRead8((r3 + 2));
    r0 = 97;
    r5 = MemoryInline::FlatRead8((r3 + 3));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r8 = (r8_rot_0 & -65536);
    r7 = MemoryInline::FlatRead8((r3 + 1));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r6 = (r6_rot_0 & -256);
    r5 = MemoryInline::FlatRead8((r3 + 4));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_0 = (r8_rot_1 & -16777216);
    r8_mdest_0 = (r8 & 16777215);
    r8 = (r8_mdest_0 | r8_mrot_0);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r8 = (r8 | r6);
    r8 = (r8 | r5);
    r0 = (r8 | r4);
    r0 = (r0 | -33554432);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_0 & 255);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4 = (r4_rot_0 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_8004BE30_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;
    uint32_t cached_r6 = 0;
    uint32_t cached_r7 = 0;
    uint32_t cached_r8 = 0;

    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;

    goto loc_8004BE30;

loc_8004BE30:
{
    cached_r6 = MemoryInline::FlatRead8((cached_r3 + 2));
    cached_r0 = 97;
    cached_r5 = MemoryInline::FlatRead8((cached_r3 + 3));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r6), static_cast<uint32_t>(16));
    cached_r8 = (r8_rot_0 & -65536);
    cached_r7 = MemoryInline::FlatRead8((cached_r3 + 1));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(8));
    cached_r6 = (r6_rot_0 & -256);
    cached_r5 = MemoryInline::FlatRead8((cached_r3 + 4));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(cached_r7), static_cast<uint32_t>(24));
    r8_mrot_0 = (r8_rot_1 & -16777216);
    r8_mdest_0 = (cached_r8 & 16777215);
    cached_r8 = (r8_mdest_0 | r8_mrot_0);
    MemoryInline::FlatWrite8(cached_r3, static_cast<uint8_t>(cached_r0));
    cached_r8 = (cached_r8 | cached_r6);
    cached_r8 = (cached_r8 | cached_r5);
    cached_r0 = (cached_r8 | cached_r4);
    cached_r0 = (cached_r0 | -33554432);
    MemoryInline::FlatWrite8((cached_r3 + 4), static_cast<uint8_t>(cached_r0));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(8));
    cached_r5 = (r5_rot_0 & 255);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(16));
    cached_r4 = (r4_rot_0 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(24));
    cached_r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWrite8((cached_r3 + 1), static_cast<uint8_t>(cached_r5));
    MemoryInline::FlatWrite8((cached_r3 + 2), static_cast<uint8_t>(cached_r4));
    MemoryInline::FlatWrite8((cached_r3 + 3), static_cast<uint8_t>(cached_r0));



    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8004BE30 symbol=func_8004BE30_statefree gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004BE30 func_8004BE30 preserves=true fpr_mask=0x00000000

