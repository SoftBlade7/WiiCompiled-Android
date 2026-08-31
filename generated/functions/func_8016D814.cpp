#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016D814(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_subfic_ra_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016D814;

loc_8016D814:
{
    r5 = -872349696;
    r6 = 8;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r4 = 80;
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = 96;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 20));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1317));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016D850:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016D85C;
    }
}

loc_8016D854:
{
    r8 = 2;
    goto loc_8016D86C;
}

loc_8016D85C:
{
    r4 = MemoryInline::FlatRead8((r3 + 1316));
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
}

loc_8016D86C:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r6 = -872349696;
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0 = 16;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(19));
    r7 = (r7_rot_0 & 15);
    r5 = 4104;
    r7 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r4 = (r4 & 65535);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r7_subfic_ra_0 = r7;
    r7 = (33 - r7_subfic_ra_0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r0_subfic_ra_0 = r0;
    r0 = (33 - r0_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(33) >= static_cast<uint32_t>(r0_subfic_ra_0) ? 1u : 0u) << 29);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r7 = (r7_rot_1 & 2147483647);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -16);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r5));
    r5 = (r0 | r7);
    r4 = (r5 | r4);
    r0 = 1;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001D gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8016D814 func_8016D814 preserves=true fpr_mask=0x00000000
