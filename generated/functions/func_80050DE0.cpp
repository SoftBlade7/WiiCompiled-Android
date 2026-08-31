#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050DE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80050DE0;

loc_80050DE0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = (r0 * 20);
    r3 = MemoryInline::FlatRead32(r3);
    r11 = (r3 + r0);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80050DFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80050E08;
    }
}

loc_80050E00:
{
    r3 = 0;
    goto loc_80050E94;
}

loc_80050E08:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + 1), 0, 9u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r11 + 3));
    r3 = 1;
    r6 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r11 + 2));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r11 + 7));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r7 = (r7_rot_1 & -256);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r11 + 1));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r9 = (r9_rot_1 & -65536);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r11 + 8));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r10 = (r10_rot_1 & -65536);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r11 + 6));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r9_mrot_1 = (r9_rot_2 & -16777216);
    r9_mdest_1 = (r9 & 16777215);
    r9 = (r9_mdest_1 | r9_mrot_1);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r11 + 4));
    r9 = (r9 | r7);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r10_mrot_1 = (r10_rot_2 & -16777216);
    r10_mdest_1 = (r10 & 16777215);
    r10 = (r10_mdest_1 | r10_mrot_1);
    r9 = (r9 | r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r11 + 9));
    r10 = (r10 | r4);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r9));
    r10 = (r10 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r0 = (r0_rot_1 & 255);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r4 = (r4_rot_2 & 255);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r7 = MemoryInline::FlatRead8((r1 + 12));
    r6 = MemoryInline::FlatRead8((r1 + 13));
    r4 = MemoryInline::FlatRead8((r1 + 14));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r0));
}

loc_80050E94:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FDB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80050DE0 func_80050DE0 preserves=true fpr_mask=0x00000000
