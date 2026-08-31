#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800609E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    goto loc_800609E0;

loc_800609E0:
{
    r5 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r4 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r0 = 4120;
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(6));
    r7 = (r7_rot_0 & -64);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(18));
    r8 = (r8_rot_0 & -262144);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r4 = (r4_rot_0 & -4096);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
    r7 = (r7 | r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    r8 = (r8 | r7);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r9 = (r9_rot_0 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
    r8 = (r9 | r8);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r0 = (r3 | r0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r4 = (r4_rot_1 & -4096);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(18));
    r3 = (r3_rot_0 & -262144);
    r0 = (r4 | r0);
    r0 = (r3 | r0);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800609E0 func_800609E0 preserves=true fpr_mask=0x00000000
