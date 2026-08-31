#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016F9C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    goto loc_8016F9C8;

loc_8016F9C8:
{
    r6 = MemoryInline::FlatRead8(r3);
    r7 = -872349696;
    r8 = 97;
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r10 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r10_mrot_0 = (r6 & 255);
    r10_mdest_0 = (r10 & -256);
    r10 = (r10_mdest_0 | r10_mrot_0);
    r9 = 79;
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r10_mrot_1 = (r10_rot_0 & 65280);
    r10_mdest_1 = (r10 & -65281);
    r10 = (r10_mdest_1 | r10_mrot_1);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r10_mrot_2 = (r10_rot_1 & -16777216);
    r10_mdest_2 = (r10 & 16777215);
    r10 = (r10_mdest_2 | r10_mrot_2);
    r6 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r10));
    r6_mrot_0 = (r0 & 255);
    r6_mdest_0 = (r6 & -256);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r3 = MemoryInline::FlatRead8((r3 + 1));
    r0 = 80;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r5 = 0;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r6_mrot_1 = (r6_rot_0 & 65280);
    r6_mdest_1 = (r6 & -65281);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6_mrot_2 = (r6_rot_1 & -16777216);
    r6_mdest_2 = (r6 & 16777215);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r0 = 81;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r5_mrot_0 = (r4 & 16777215);
    r5_mdest_0 = (r5 & -16777216);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5_mrot_1 = (r5_rot_0 & -16777216);
    r5_mdest_1 = (r5 & 16777215);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r5));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x000007E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016F9C8 func_8016F9C8 preserves=true fpr_mask=0x00000000
