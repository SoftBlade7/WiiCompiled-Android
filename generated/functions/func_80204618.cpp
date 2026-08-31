#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80204618(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80204618;

loc_80204618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8020461C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020462C;
    }
}

loc_80204624:
{
    r3 = 0;
    goto loc_802047EC;
}

loc_8020462C:
{
    r6 = (r3 + 1);
    r5 = 1;
    goto loc_80204640;
}

loc_80204638:
{
    r5 = (r5 + 1);
    r6 = (r6 + 1);
}

loc_80204640:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80204648:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(126))) {
        goto loc_80204638;
    }
}

loc_8020464C:
{
    r6 = (r5 + 1);
    r7 = (r3 + r6);
    goto loc_80204660;
}

loc_80204658:
{
    r6 = (r6 + 1);
    r7 = (r7 + 1);
}

loc_80204660:
{
    r8 = MemoryInline::FlatRead8(r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
}

loc_8020466C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(46))) {
        goto loc_80204678;
    }
}

loc_80204670:
{
}

loc_80204674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80204658;
    }
}

loc_80204678:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r11 = (r6 + 1);
}

loc_80204684:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_802046B8;
    }
}

loc_80204688:
{
    r3_addr_1 = (r3 + r11);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802046B8;
    }
}

loc_80204694:
{
    r12 = (r11 + 1);
    r7 = (r3 + r12);
    goto loc_802046A8;
}

loc_802046A0:
{
    r12 = (r12 + 1);
    r7 = (r7 + 1);
}

loc_802046A8:
{
    r0 = MemoryInline::FlatRead8(r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802046A0;
    }
}

loc_802046B4:
{
    goto loc_802046BC;
}

loc_802046B8:
{
    r12 = r11;
}

loc_802046BC:
{
    r7 = -858980352;
    r9 = (r1 + 8);
    r8 = (r7 + -13107);
    r10 = 0;
    goto loc_802046F8;
}

loc_802046D0:
{
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r8) * static_cast<uint64_t>(r4)) >> 32));
    r10 = (r10 + 1);
    r0 = r7;
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_2 & 536870911);
    r7 = (r7 * 10);
    r7 = (r4 - r7);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_2 & 536870911);
    r0 = (r7 + 48);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r0));
    r9 = (r9 + 1);
}

loc_802046F8:
{
}

loc_802046FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802046D0;
    }
}

loc_80204700:
{
    r8 = (r5 + r10);
}

loc_80204708:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r11))) {
        goto loc_8020474C;
    }
}

loc_8020470C:
{
    r9 = (r8 + 1);
}

loc_80204714:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(8))) {
        goto loc_8020471C;
    }
}

loc_80204718:
{
    r9 = 8;
}

loc_8020471C:
{
    r3_addr_4 = (r3 + r12);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    r7 = (r3 + r9);
    r4 = (r3 + r11);
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r0));
    r3_addr_5 = (r3 + r11);
    r0 = MemoryInline::FlatRead8(r3_addr_5);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r0));
    r3_addr_6 = (r3 + r6);
    r0 = MemoryInline::FlatRead8(r3_addr_6);
    r3_addr_7 = (r3 + r9);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r0));
}

loc_8020474C:
{
}

loc_80204750:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(8))) {
        goto loc_80204758;
    }
}

loc_80204754:
{
    r5 = (7 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(7) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
}

loc_80204758:
{
    r0 = 126;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_80204760:
{
    r3_addr_9 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_9, static_cast<uint8_t>(r0));
    r4 = (r1 + 8);
    r5 = (r5 + 1);
    r4 = (r4 + r10);
    r3 = (r3 + r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802047E8;
    }
}

loc_80204778:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020477C:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802047D4;
    }
}

loc_80204784:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + -8), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r4 + -1));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r4 + -2));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r4 + -3));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r4 + -4));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r4 + -5));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r4 + -6));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r4 + -7));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r4 = (r4 + -8);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r4);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80204784;
    }
}

loc_802047CC:
{
    r10 = (r10 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_802047D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802047E8;
    }
}

loc_802047D4:
{
    ctr = r10;
}

loc_802047D8:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802047D8;
    }
}

loc_802047E8:
{
    r3 = 0;
}

loc_802047EC:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80204618 func_80204618 preserves=true fpr_mask=0x00000000
