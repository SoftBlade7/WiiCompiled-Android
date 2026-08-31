#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051C530(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8051C530;

loc_8051C530:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (r5 + -1380646912);
}

loc_8051C560:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(18244))) {
        goto loc_8051C56C;
    }
}

loc_8051C564:
{
    r0 = 0;
    goto loc_8051C5DC;
}

loc_8051C56C:
{
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & 63);
}

loc_8051C578:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(36))) {
        goto loc_8051C584;
    }
}

loc_8051C57C:
{
    r0 = 0;
    goto loc_8051C5DC;
}

loc_8051C584:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
    r0 = (r0_rot_2 & 63);
}

loc_8051C58C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(48))) {
        goto loc_8051C598;
    }
}

loc_8051C590:
{
    r0 = 0;
    goto loc_8051C5DC;
}

loc_8051C598:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(19));
    r0 = (r0_rot_3 & 127);
}

loc_8051C5A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8051C5AC;
    }
}

loc_8051C5A4:
{
    r0 = 0;
    goto loc_8051C5DC;
}

loc_8051C5AC:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r0 = (r0_rot_4 & 31);
}

loc_8051C5B4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(31))) {
        goto loc_8051C5C0;
    }
}

loc_8051C5B8:
{
    r0 = 0;
    goto loc_8051C5DC;
}

loc_8051C5C0:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
    r5 = (r5_rot_1 & 15);
    r4 = 12;
    r0 = (12 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4 = (r4 | ~r5);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r4 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_8051C5DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051C5E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051C774;
    }
}

loc_8051C5E4:
{
    r4 = 0;
    r5 = 22;
    r3 = (r3 + 2);
    ctx->lr = 0x8051C5F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r30 + 2);
    r4 = (r31 + 32);
    r5 = 20;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 192));
    r3 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 52u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 8));
}

loc_8051C61C:
{
    MemoryInline::FlatWrite8((r30 + 195), static_cast<uint8_t>(r3));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r7 = (r7_rot_1 & 31);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
    r6 = (r6_rot_1 & 15);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(19));
    r3 = (r3_rot_1 & 127);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8051C638;
    }
}

loc_8051C630:
{
    r0 = 99;
    MemoryInline::FlatWrite8((r30 + 192), static_cast<uint8_t>(r0));
}

loc_8051C638:
{
    r0 = MemoryInline::FlatRead8((r30 + 193));
}

loc_8051C640:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_8051C64C;
    }
}

loc_8051C644:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r30 + 193), static_cast<uint8_t>(r0));
}

loc_8051C64C:
{
    r0 = MemoryInline::FlatRead8((r30 + 194));
}

loc_8051C654:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(31))) {
        goto loc_8051C660;
    }
}

loc_8051C658:
{
    r0 = 31;
    MemoryInline::FlatWrite8((r30 + 194), static_cast<uint8_t>(r0));
}

loc_8051C660:
{
    r0 = 38;
    MemoryInline::FlatWrite8((r30 + 192), static_cast<uint8_t>(r3));
    r5 = (r30 + 23);
    r4 = (r31 + 59);
    MemoryInline::FlatWrite8((r30 + 193), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r30 + 194), static_cast<uint8_t>(r7));
    ctr = r0;
}

loc_8051C67C:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_2 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_2, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051C67C;
    }
}

loc_8051C690:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r31 + 16));
    r7 = 0;
    MemoryInline::FlatWrite8((r30 + 100), static_cast<uint8_t>(r0));
    r4 = 1;
    goto loc_8051C6E0;
}

loc_8051C6A4:
{
    r5 = (r7 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & 1020);
    r3 = (r0 - r5);
    r7 = (r7 + 1);
    r0 = (r5 * 12);
    r3 = (r31 + r3);
    r5 = MemoryInline::FlatRead32((r3 + 17));
    r6 = (r30 + r0);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r0 = (r0_rot_10 & 127);
    MemoryInline::FlatWrite16((r6 + 108), static_cast<uint16_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r3 = (r3_rot_3 & 127);
    MemoryInline::FlatWrite8((r6 + 110), static_cast<uint8_t>(r3));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_11 & 1023);
    MemoryInline::FlatWrite16((r6 + 112), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r6 + 114), static_cast<uint8_t>(r4));
}

loc_8051C6E0:
{
    r0 = MemoryInline::FlatRead8((r30 + 100));
    r3 = (r7 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8051C6EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8051C6A4;
    }
}

loc_8051C6F0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 4));
    r4 = 1;
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5 = (r5_rot_3 & 1023);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r3 = (r3_rot_4 & 127);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_12 & 127);
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 208u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 174u, (r30 + 174), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_1, 168u, (r30 + 168), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 170u, (r30 + 170), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved16(guest_range_1, 172u, (r30 + 172), static_cast<uint16_t>(r5));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 4));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_13 & 63);
    MemoryInline::WriteResolved32(guest_range_1, 184u, (r30 + 184), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 8));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_14 & 63);
    MemoryInline::WriteResolved32(guest_range_1, 176u, (r30 + 176), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 8));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_15 & 63);
    MemoryInline::WriteResolved32(guest_range_1, 180u, (r30 + 180), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 8));
    r0 = (r0 & 15);
    MemoryInline::WriteResolved32(guest_range_1, 188u, (r30 + 188), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r31 + 12));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_16 & 127);
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r30 + 196), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r31 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 204u, (r30 + 204), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r31 + 12));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_5 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r30, static_cast<uint8_t>(r4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_17 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 200u, (r30 + 200), static_cast<uint8_t>(r0));
}

loc_8051C774:
{
    r3 = MemoryInline::FlatRead8(r30);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051C530 func_8051C530 preserves=true fpr_mask=0x00000000
