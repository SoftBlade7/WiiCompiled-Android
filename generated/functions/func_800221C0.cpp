#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800221C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r11_addr_4 = 0;
    uint32_t r11_addr_5 = 0;
    uint32_t r11_addr_6 = 0;
    uint32_t r11_ca_0 = 0;
    uint32_t r11_not_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r30_rot_6 = 0;
    uint32_t r30_rot_7 = 0;
    uint32_t r30_rot_8 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_10 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r31_rot_6 = 0;
    uint32_t r31_rot_7 = 0;
    uint32_t r31_rot_8 = 0;
    uint32_t r31_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_subfc_sub_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800221C0;

loc_800221C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
}

loc_800221D8:
{
    r8 = r5;
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(100))) {
        goto loc_800221E4;
    }
}

loc_800221E0:
{
    r8 = (r5 + -100);
}

loc_800221E4:
{
    r7 = 1717960704;
    r6 = 0x80240000u;
    r0 = (r7 + 26215);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(100));
}

loc_800221F4:
{
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r6 = (r6 + 29256);
    r5 = (static_cast<int32_t>(r0) >> 1);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 1);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r5 = (r5 + r7);
    r7 = (r5 * 5);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    r5 = (r0 + r5);
    r7 = (r8 - r7);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r0 = (r0 - r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r9 = (r7 * 6);
    r10 = (r6 + r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80022240;
    }
}

loc_80022234:
{
    r5 = 0x80240000u;
    r5 = (r5 + 29000);
    r10 = (r5 + r0);
}

loc_80022240:
{
    r12 = 0x802A0000u;
    r6 = 400;
    r5 = (r12 + 27768);
    r0 = 300;
    r28 = MemoryInline::FlatRead16((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80022258:
{
    r7 = MemoryInline::FlatRead16((r5 + 10));
    r6_subfc_sub_0 = r6;
    r6 = (r28 - r6_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r6_subfc_sub_0) ? 1u : 0u) << 29);
    r8 = MemoryInline::FlatRead16((r5 + 12));
    r11_not_0 = ~(r6);
    r11_ca_0 = (xer >> 29) & 1u;
    r11 = (r11_not_0 + r6);
    r11 = (r11 + r11_ca_0);
    r12 = MemoryInline::FlatRead32((r12 + 27768));
    r0_subfc_sub_0 = r0;
    r0 = (r7 - r0_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r0_subfc_sub_0) ? 1u : 0u) << 29);
    r6_not_0 = ~(r0);
    r6_ca_0 = (xer >> 29) & 1u;
    r6 = (r6_not_0 + r0);
    r6 = (r6 + r6_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6 = (r6 + 2);
    r0 = (r11 + 2);
    r11 = (r6 * r4);
    r8 = (r11 * r8);
    r11 = (r3 * r0);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r8 = (r12 + r8);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_0 & -2);
    r11 = (r11 + r8);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80022468;
    }
}

loc_8002229C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800222A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800222A8;
    }
}

loc_800222A4:
{
    goto loc_80022468;
}

loc_800222A8:
{
    r3 = (r3 + 6);
    r3 = (r0 * r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r3));
}

loc_800222B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80022468;
    }
}

loc_800222B8:
{
    r3 = (r4 + 7);
    r3 = (r6 * r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r3));
}

loc_800222C4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800222CC;
    }
}

loc_800222C8:
{
    goto loc_80022468;
}

loc_800222CC:
{
    r7 = (r0 * 6);
    r3 = 0x802A0000u;
    r4 = 0x80270000u;
    r3 = (r3 + 27784);
    r4 = (r4 + 7096);
    r12 = 0;
    // nop
}

loc_800222E8:
{
    r8 = MemoryInline::FlatRead32(r10);
}

loc_800222F0:
{
    r10 = (r10 + 4);
    r26 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r9));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80022304;
    }
}

loc_800222FC:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(31));
    r8 = (r8_rot_2 & 2113929216);
    goto loc_80022330;
}

loc_80022304:
{
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(6));
    r8 = (r8_rot_3 & 12);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(4));
    r31 = (r31_rot_2 & 12);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
    r30 = (r30_rot_2 & 12);
    r4_addr_2 = (r4 + r8);
    r8 = MemoryInline::FlatRead32(r4_addr_2);
    r4_addr_3 = (r4 + r31);
    r31 = MemoryInline::FlatRead32(r4_addr_3);
    r4_addr_4 = (r4 + r30);
    r30 = MemoryInline::FlatRead32(r4_addr_4);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r8 = (r8_rot_4 & -16);
    r31_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(8));
    r31 = (r31_rot_3 & -256);
    r8 = (r30 | r8);
    r8 = (r31 | r8);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(19));
    r8 = (r8_rot_5 & -524288);
}

loc_80022330:
{
    r31 = (r7 + 1);
    r31_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(31));
    r31 = (r31_rot_5 & 2147483647);
    ctr = r31;
}

loc_80022340:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_80022448;
    }
}

loc_80022344:
{
    // nop
}

loc_80022348:
{
    r27 = (r8 & 1073741824);
}

loc_8002234C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80022358;
    }
}

loc_80022350:
{
    r29 = MemoryInline::FlatRead16((r3 + 8));
    goto loc_8002235C;
}

loc_80022358:
{
    r29 = 64;
}

loc_8002235C:
{
    r30 = (r8 & -2147483648);
}

loc_80022360:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8002236C;
    }
}

loc_80022364:
{
    r30 = MemoryInline::FlatRead16((r3 + 10));
    goto loc_80022370;
}

loc_8002236C:
{
    r30 = 32;
}

loc_80022370:
{
    r26 = (r8 & 536870912);
}

loc_80022374:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80022380;
    }
}

loc_80022378:
{
    r28 = MemoryInline::FlatRead16((r3 + 10));
    goto loc_80022384;
}

loc_80022380:
{
    r28 = 32;
}

loc_80022384:
{
}

loc_80022388:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80022394;
    }
}

loc_8002238C:
{
    r31 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80022398;
}

loc_80022394:
{
    r31 = 0;
}

loc_80022398:
{
    r30 = (r28 + r30);
}

loc_800223A0:
{
    r30 = (r29 + r30);
    r30 = (r31 | r30);
    MemoryInline::FlatWrite16(r11, static_cast<uint16_t>(r30));
    r28 = (r30 & 65535);
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(1))) {
        goto loc_800223C0;
    }
}

loc_800223B4:
{
    r30 = MemoryInline::FlatRead16((r5 + 12));
    r30_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_5 & -2);
    r11_addr_3 = (r11 + r30);
    MemoryInline::FlatWrite16(r11_addr_3, static_cast<uint16_t>(r28));
}

loc_800223C0:
{
}

loc_800223C4:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_800223D0;
    }
}

loc_800223C8:
{
    r28 = MemoryInline::FlatRead16((r3 + 14));
    goto loc_800223D4;
}

loc_800223D0:
{
    r28 = 64;
}

loc_800223D4:
{
}

loc_800223D8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_800223E4;
    }
}

loc_800223DC:
{
    r29 = MemoryInline::FlatRead16((r3 + 16));
    goto loc_800223E8;
}

loc_800223E4:
{
    r29 = 32;
}

loc_800223E8:
{
    r30 = (r8 & 268435456);
}

loc_800223EC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800223F8;
    }
}

loc_800223F0:
{
    r31 = MemoryInline::FlatRead16((r3 + 16));
    goto loc_800223FC;
}

loc_800223F8:
{
    r31 = 32;
}

loc_800223FC:
{
}

loc_80022400:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8002240C;
    }
}

loc_80022404:
{
    r30 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80022410;
}

loc_8002240C:
{
    r30 = 0;
}

loc_80022410:
{
    r31 = (r31 + r29);
}

loc_80022418:
{
    r31 = (r28 + r31);
    r31 = (r30 | r31);
    MemoryInline::FlatWrite16((r11 + 2), static_cast<uint16_t>(r31));
    r26 = (r31 & 65535);
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(1))) {
        goto loc_8002243C;
    }
}

loc_8002242C:
{
    r31 = MemoryInline::FlatRead16((r5 + 12));
    r31_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r31 = (r31_rot_7 & -2);
    r31 = (r11 + r31);
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r26));
}

loc_8002243C:
{
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_8 & -4);
    r11 = (r11 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80022348;
    }
}

loc_80022448:
{
    r8 = MemoryInline::FlatRead16((r5 + 12));
    r12 = (r12 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(7));
}

loc_80022454:
{
    r8 = (r8 * r6);
    r8 = (r8 - r7);
    r8_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_10 & -2);
    r11 = (r11 + r8);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800222E8;
    }
}

loc_80022468:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC001FFB gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800221C0 func_800221C0 preserves=true fpr_mask=0x00000000
