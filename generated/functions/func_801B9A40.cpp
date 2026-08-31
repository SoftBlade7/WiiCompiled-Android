#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B9A40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B9A40;

loc_801B9A40:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 10), 0, 66u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 34u, (r3 + 44));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 14));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(5));
    r31 = (r31_rot_0 & -32);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 22u, (r3 + 32));
    r8 = (r31 * r0);
    r9 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 22));
    r10 = MemoryInline::ReadResolved32(guest_range_0, 38u, (r3 + 48));
}

loc_801B9A68:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -32);
    r12 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 10));
    r0 = (r10 + r0);
    r9 = (r8 + r0);
    MemoryInline::FlatWrite32(r4, r9);
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_801B9A84;
    }
}

loc_801B9A80:
{
    goto loc_801B9A88;
}

loc_801B9A84:
{
    r9 = (r9 + r31);
}

loc_801B9A88:
{
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 1);
    r0 = (r12 & 1);
    r0 = (r0 ^ r8);
    MemoryInline::FlatWrite32(r5, r9);
    r0 = (r0 - r8);
}

loc_801B9AA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801B9AB0;
    }
}

loc_801B9AA4:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r4, r9);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_801B9AB0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & 1073741823);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 & 1073741823);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 58u, (r3 + 68));
}

loc_801B9AD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9B54;
    }
}

loc_801B9AD4:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 34u, (r3 + 44));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 14));
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(5));
    r31 = (r31_rot_1 & -32);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 22u, (r3 + 32));
    r8 = (r31 * r0);
    r9 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 22));
    r10 = MemoryInline::ReadResolved32(guest_range_0, 62u, (r3 + 72));
}

loc_801B9AF4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -32);
    r12 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 10));
    r0 = (r10 + r0);
    r9 = (r8 + r0);
    MemoryInline::FlatWrite32(r6, r9);
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_801B9B10;
    }
}

loc_801B9B0C:
{
    goto loc_801B9B14;
}

loc_801B9B10:
{
    r9 = (r9 + r31);
}

loc_801B9B14:
{
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    r0 = (r12 & 1);
    r0 = (r0 ^ r8);
    MemoryInline::FlatWrite32(r7, r9);
    r0 = (r0 - r8);
}

loc_801B9B2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801B9B3C;
    }
}

loc_801B9B30:
{
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32(r6, r9);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_801B9B3C:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 & 1073741823);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32(r7);
    r0 = (r0 & 1073741823);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_801B9B54:
{
    r0 = MemoryInline::FlatRead32(r4);
    r8 = 16777216;
}

loc_801B9B60:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_801B9B90;
    }
}

loc_801B9B64:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_801B9B6C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_801B9B90;
    }
}

loc_801B9B70:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_801B9B78:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_801B9B90;
    }
}

loc_801B9B7C:
{
    r0 = MemoryInline::FlatRead32(r7);
}

loc_801B9B84:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_801B9B90;
    }
}

loc_801B9B88:
{
    r11 = 0;
    goto loc_801B9B94;
}

loc_801B9B90:
{
    r11 = 1;
}

loc_801B9B94:
{
}

loc_801B9B98:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_801B9BCC;
    }
}

loc_801B9B9C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32(r5);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32(r6);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32(r7);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_801B9BCC:
{
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r8 = 0x80350000u;
    r10 = MemoryInline::FlatRead32(r4);
    r8 = (r8 + 2024);
    r9 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = (r0 | 65536);
    guest_range_1 = MemoryInline::ResolveRangeHost((r8 + 28), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r8 + 30), static_cast<uint16_t>(r10));
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(12));
    r11 = (r11_rot_0 & -4096);
    MemoryInline::FlatWrite32((r13 + -24716), r9);
    MemoryInline::FlatWrite32((r13 + -24720), r0);
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r10 = (r10_rot_0 & 65535);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 50u, (r3 + 60));
    r4 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = (r0 | 131072);
    r10 = (r11 | r10);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r9 = (r9_rot_0 & -256);
    MemoryInline::FlatWrite32((r13 + -24716), r4);
    r4 = (r10 | r9);
    MemoryInline::FlatWrite32((r13 + -24720), r0);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r8 + 28), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r9 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = (r0 | 4096);
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r8 + 38), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite32((r13 + -24716), r4);
    MemoryInline::FlatWrite32((r13 + -24720), r0);
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r5 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = (r0 | 8192);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r5 = (r5_rot_0 & 65535);
    MemoryInline::FlatWrite32((r13 + -24716), r4);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r8 + 36), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r13 + -24720), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 58u, (r3 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B9C68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B9CEC;
    }
}

loc_801B9C6C:
{
    r4 = MemoryInline::FlatRead32((r13 + -24720));
    r3 = 65536;
    r9 = MemoryInline::FlatRead32(r6);
    r0 = (r3 + -32768);
    r5 = MemoryInline::FlatRead32((r13 + -24716));
    r3 = (r4 | 16384);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r8 + 34), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite32((r13 + -24716), r5);
    MemoryInline::FlatWrite32((r13 + -24720), r3);
    r3 = MemoryInline::FlatRead32((r13 + -24720));
    r5 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = (r3 | r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 65535);
    MemoryInline::FlatWrite32((r13 + -24716), r4);
    MemoryInline::FlatWrite32((r13 + -24720), r0);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r8 + 32), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r4 = MemoryInline::FlatRead32(r7);
    r3 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = (r0 | 1024);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r8 + 42), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r13 + -24716), r3);
    MemoryInline::FlatWrite32((r13 + -24720), r0);
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r4 = MemoryInline::FlatRead32(r7);
    r3 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = (r0 | 2048);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_1 & 65535);
    MemoryInline::FlatWrite32((r13 + -24716), r3);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r8 + 40), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r13 + -24720), r0);
}

loc_801B9CEC:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80003FFB gpr_write=0x80001F3B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B9A40 func_801B9A40 preserves=true fpr_mask=0x00000000
