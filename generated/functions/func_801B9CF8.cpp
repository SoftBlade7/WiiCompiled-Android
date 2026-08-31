#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B9CF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B9CF8;

loc_801B9CF8:
{
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r9 = 0x80350000u;
    r6 = 0x80350000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 26), 0, 8u, true, false);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 26));
    r8 = MemoryInline::FlatRead32((r13 + -24716));
    r9 = (r9 + 2024);
    r7 = (r0 | 268435456);
    r6 = (r6 + 2144);
    MemoryInline::FlatWrite32((r13 + -24716), r8);
    r0 = MemoryInline::FlatRead32((r6 + 40));
    MemoryInline::FlatWriteRam16((r9 + 6), static_cast<uint16_t>(r10));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_801B9D28:
{
    MemoryInline::FlatWrite32((r13 + -24720), r7);
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 29));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 30));
    r0 = (r0 | 536870912);
    r6 = MemoryInline::FlatRead32((r13 + -24716));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r7_mrot_0 = (r7_rot_0 & 65280);
    r7_mdest_0 = (r7 & -65281);
    r7 = (r7_mdest_0 | r7_mrot_0);
    MemoryInline::FlatWriteRam16((r9 + 4), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r13 + -24716), r6);
    MemoryInline::FlatWrite32((r13 + -24720), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B9D64;
    }
}

loc_801B9D54:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 31));
    r10 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 32));
    r9 = (r4 + 172);
    goto loc_801B9D84;
}

loc_801B9D64:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 32));
    r6 = (720 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(720) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 31));
    r5 = (r4 + r0);
    r4 = (r4 + r7);
    r0 = (r5 + 40);
    r9 = (r4 + -40);
    r10 = (r0 - r6);
}

loc_801B9D84:
{
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r6 = 0x80350000u;
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 28));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(7));
    r7 = (r7_rot_1 & 65408);
    r4 = MemoryInline::FlatRead32((r13 + -24716));
    r5 = (r0 | 67108864);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(23));
    r3 = (r3_rot_0 & 8388607);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    MemoryInline::FlatWrite32((r13 + -24716), r4);
    r4 = (r3 | r0);
    r6 = (r6 + 2024);
    r7 = (r8 | r7);
    MemoryInline::FlatWrite32((r13 + -24720), r5);
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r3 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWriteRam16((r6 + 10), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r13 + -24716), r3);
    MemoryInline::FlatWriteRam16((r6 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r13 + -24720), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000022B8 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B9CF8 func_801B9CF8 preserves=true fpr_mask=0x00000000
