#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015B338(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8015B338;

loc_8015B338:
{
    r9 = MemoryInline::FlatRead8(r8);
    r7 = MemoryInline::FlatRead8((r8 + 1));
    r6 = MemoryInline::FlatRead8((r8 + 2));
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r10 = (r10_rot_0 & -16777216);
    r9 = MemoryInline::FlatRead8((r8 + 3));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r7 = (r7_rot_0 & -65536);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r6 = (r6_rot_0 & -256);
    r8 = (r8 + 4);
    r7 = (r10 + r7);
    r6 = (r9 + r6);
    r6 = (r7 + r6);
}

loc_8015B370:
{
}

loc_8015B374:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(2))) {
        goto loc_8015B388;
    }
}

loc_8015B378:
{
}

loc_8015B37C:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(4))) {
        goto loc_8015B388;
    }
}

loc_8015B380:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
}

loc_8015B384:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015B4F4;
    }
}

loc_8015B388:
{
    r9 = MemoryInline::FlatRead16(r5);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8015B390:
{
    r7 = 0;
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    MemoryInline::FlatWrite16((r9 + 2), static_cast<uint16_t>(r6));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8015B4E4;
    }
}

loc_8015B3A4:
{
}

loc_8015B3A8:
{
    r10 = (r6 + -8);
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_8015B4B0;
    }
}

loc_8015B3B0:
{
    r11 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8015B3C8;
    }
}

loc_8015B3B8:
{
    r9 = (r3 + -2);
}

loc_8015B3C0:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r9))) {
        goto loc_8015B3C8;
    }
}

loc_8015B3C4:
{
    r11 = 1;
}

loc_8015B3C8:
{
}

loc_8015B3CC:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8015B4B0;
    }
}

loc_8015B3D0:
{
    r9 = (r10 + 7);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_1 & 536870911);
    ctr = r9;
}

loc_8015B3E0:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(0))) {
        goto loc_8015B4B0;
    }
}

loc_8015B3E4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 2u, true, false);
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 8u, true, false);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 0u, r8);
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 4), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r8 + 1));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 5), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r8 + 2));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 6), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r8 + 3));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 7), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r8 + 4));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 8), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r8 + 5));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 9), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r8 + 6));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 10), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r8 + 7));
    r8 = (r8 + 8);
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r9 + 11), static_cast<uint8_t>(r10));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015B3E4;
    }
}

loc_8015B4B0:
{
    r9 = (r6 - r7);
    ctr = r9;
}

loc_8015B4BC:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r6))) {
        goto loc_8015B4E4;
    }
}

loc_8015B4C0:
{
    r6 = MemoryInline::FlatRead16(r5);
    r9 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    r6 = (r6 * 18);
    r6 = (r5 + r6);
    r6 = (r6 + r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r9));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015B4C0;
    }
}

loc_8015B4E4:
{
    r6 = MemoryInline::FlatRead16(r5);
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    goto loc_8015B4FC;
}

loc_8015B4F4:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8015B4FC:
{
    r6 = (r6 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
}

loc_8015B504:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015B510;
    }
}

loc_8015B508:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8015B510:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_8015B514:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015B2BC;
    }
}

loc_8015B518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015B524;
    }
}

loc_8015B51C:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8015B524:
{
    r3 = r8;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8015B2BC:
{
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8015B2BCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0x00000FC8 gpr_return=0x00000008 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8015B338 func_8015B338 preserves=true fpr_mask=0x00000000
