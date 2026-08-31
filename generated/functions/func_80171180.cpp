#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80171180(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80171180;

loc_80171180:
{
    r9 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = 1;
    r7 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80171190:
{
    r8 = MemoryInline::FlatRead32((r9 + 1508));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r4 = (r8 & ~r7);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r9 + 1508), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801711A8:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r5 + -1);
    r8 = (r9 + r0);
    r5 = (r6 + -1);
    r0 = MemoryInline::FlatRead32((r8 + 264));
    r0_mrot_0 = (r3 & 65535);
    r0_mdest_0 = (r0 & -65536);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r4 = -872349696;
    r7 = 97;
    MemoryInline::FlatWrite32((r8 + 264), r0);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r8 + 296));
    r3_mrot_0 = (r5 & 65535);
    r3_mdest_0 = (r3 & -65536);
    r3 = (r3_mdest_0 | r3_mrot_0);
    MemoryInline::FlatWrite32((r8 + 296), r3);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r7));
    r3 = MemoryInline::FlatRead32((r8 + 264));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r7));
    r3 = MemoryInline::FlatRead32((r8 + 296));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite16((r9 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000002FC gpr_write=0x000003B9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80171180 func_80171180 preserves=true fpr_mask=0x00000000
