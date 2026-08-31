#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DD3D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DD3D4;

loc_801DD3D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r6 = 1717960704;
    r0 = 0;
    r8 = (0 - r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 4u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    r0 = (r6 + 26215);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r6 = (static_cast<int32_t>(r3) >> 2);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 1);
    r3 = (static_cast<int32_t>(r3) >> 2);
    r6 = (r6 + r7);
    r7 = (r6 * 10);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r7 = (r8 - r7);
    r8 = (r3 + r6);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r7 = (static_cast<int32_t>(r6) >> 2);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r6 = (static_cast<int32_t>(r6) >> 2);
    r7 = (r7 + r9);
    r9 = (r7 * 10);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r9 = (r8 - r9);
    r8 = (r6 + r7);
    r7 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    r9 = (static_cast<int32_t>(r7) >> 2);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_0 & 1);
    r7 = (static_cast<int32_t>(r7) >> 2);
    r9 = (r9 + r10);
    r10 = (r9 * 10);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
    r10 = (r8 - r10);
    r8 = (r7 + r9);
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r10 = (static_cast<int32_t>(r9) >> 2);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r11 = (r11_rot_0 & 1);
    r9 = (static_cast<int32_t>(r9) >> 2);
    r10 = (r10 + r11);
    r11 = (r10 * 10);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & 1);
    r11 = (r8 - r11);
    r8 = (r9 + r10);
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    r11 = (static_cast<int32_t>(r9) >> 2);
    r9 = (static_cast<int32_t>(r9) >> 2);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 1);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r12 = (r12_rot_0 & 1);
    r10 = (r9 + r10);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    r11 = (r11 + r12);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r0 = (r0 + r9);
    r0 = (r0 * 10);
    r0 = (r10 - r0);
    r9 = (r11 * 10);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r8 - r9);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_801DD4F0;
    }
}

loc_801DD4D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(5));
}

loc_801DD4DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD4F0;
    }
}

loc_801DD4E0:
{
    r0 = 60;
    r3 = -31;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    goto loc_801DD760;
}

loc_801DD4F0:
{
}

loc_801DD4F4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(7))) {
        goto loc_801DD508;
    }
}

loc_801DD4F8:
{
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DD4FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD518;
    }
}

loc_801DD500:
{
    r3 = 0;
    goto loc_801DD760;
}

loc_801DD508:
{
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DD50C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD518;
    }
}

loc_801DD510:
{
    r3 = 0;
    goto loc_801DD760;
}

loc_801DD518:
{
}

loc_801DD51C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(1))) {
        goto loc_801DD580;
    }
}

loc_801DD520:
{
}

loc_801DD524:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(1))) {
        goto loc_801DD580;
    }
}

loc_801DD528:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_801DD52C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD538;
    }
}

loc_801DD530:
{
    r3 = 0;
    goto loc_801DD760;
}

loc_801DD538:
{
}

loc_801DD53C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(4))) {
        goto loc_801DD560;
    }
}

loc_801DD540:
{
}

loc_801DD544:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801DD560;
    }
}

loc_801DD548:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_801DD54C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD560;
    }
}

loc_801DD550:
{
    r0 = 60;
    r3 = -31;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    goto loc_801DD760;
}

loc_801DD560:
{
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DD564:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD570;
    }
}

loc_801DD568:
{
    r3 = 0;
    goto loc_801DD760;
}

loc_801DD570:
{
    r0 = 30;
    r3 = -32;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    goto loc_801DD760;
}

loc_801DD580:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(1));
}

loc_801DD584:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD75C;
    }
}

loc_801DD588:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_801DD58C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD75C;
    }
}

loc_801DD590:
{
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DD594:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD5A0;
    }
}

loc_801DD598:
{
    r3 = 0;
    goto loc_801DD760;
}

loc_801DD5A0:
{
    r0 = (r6 * 10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(2));
}

loc_801DD5A8:
{
    r3 = (r3 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD634;
    }
}

loc_801DD5B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD5C0;
    }
}

loc_801DD5B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801DD5B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD5D0;
    }
}

loc_801DD5BC:
{
    goto loc_801DD75C;
}

loc_801DD5C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(4));
}

loc_801DD5C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD728;
    }
}

loc_801DD5C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD75C;
    }
}

loc_801DD5CC:
{
    goto loc_801DD6C4;
}

loc_801DD5D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(70));
}

loc_801DD5D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DD5E0;
    }
}

loc_801DD5D8:
{
    r3 = 0;
    goto loc_801DD760;
}

loc_801DD5E0:
{
    r0 = 60;
}

loc_801DD5E8:
{
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(30))) {
        goto loc_801DD604;
    }
}

loc_801DD5F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_801DD5F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD62C;
    }
}

loc_801DD5F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DD5FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD614;
    }
}

loc_801DD600:
{
    goto loc_801DD62C;
}

loc_801DD604:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(32));
}

loc_801DD608:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD624;
    }
}

loc_801DD60C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD62C;
    }
}

loc_801DD610:
{
    goto loc_801DD61C;
}

loc_801DD614:
{
    r3 = -1;
    goto loc_801DD760;
}

loc_801DD61C:
{
    r3 = -31;
    goto loc_801DD760;
}

loc_801DD624:
{
    r3 = -32;
    goto loc_801DD760;
}

loc_801DD62C:
{
    r3 = 0;
    goto loc_801DD760;
}

loc_801DD634:
{
    r0 = (0 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-31));
}

loc_801DD63C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD69C;
    }
}

loc_801DD640:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD66C;
    }
}

loc_801DD644:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-44));
}

loc_801DD648:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD69C;
    }
}

loc_801DD64C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD65C;
    }
}

loc_801DD650:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-45));
}

loc_801DD654:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD694;
    }
}

loc_801DD658:
{
    goto loc_801DD6BC;
}

loc_801DD65C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-33));
}

loc_801DD660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD69C;
    }
}

loc_801DD664:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD6AC;
    }
}

loc_801DD668:
{
    goto loc_801DD6BC;
}

loc_801DD66C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_801DD670:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD684;
    }
}

loc_801DD674:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD6BC;
    }
}

loc_801DD678:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-11));
}

loc_801DD67C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD694;
    }
}

loc_801DD680:
{
    goto loc_801DD6BC;
}

loc_801DD684:
{
    r0 = 60;
    r3 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    goto loc_801DD760;
}

loc_801DD694:
{
    r3 = 0;
    goto loc_801DD760;
}

loc_801DD69C:
{
    r0 = 60;
    r3 = -31;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    goto loc_801DD760;
}

loc_801DD6AC:
{
    r0 = 20;
    r3 = -32;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    goto loc_801DD760;
}

loc_801DD6BC:
{
    r3 = 0;
    goto loc_801DD760;
}

loc_801DD6C4:
{
}

loc_801DD6C8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(9))) {
        goto loc_801DD6E4;
    }
}

loc_801DD6CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DD6D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD700;
    }
}

loc_801DD6D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD710;
    }
}

loc_801DD6D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_801DD6DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD6F0;
    }
}

loc_801DD6E0:
{
    goto loc_801DD720;
}

loc_801DD6E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(13));
}

loc_801DD6E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD700;
    }
}

loc_801DD6EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD720;
    }
}

loc_801DD6F0:
{
    r0 = 30;
    r3 = -31;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    goto loc_801DD760;
}

loc_801DD700:
{
    r0 = 30;
    r3 = -32;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    goto loc_801DD760;
}

loc_801DD710:
{
    r0 = 20;
    r3 = -32;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    goto loc_801DD760;
}

loc_801DD720:
{
    r3 = 0;
    goto loc_801DD760;
}

loc_801DD728:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(13));
}

loc_801DD72C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD74C;
    }
}

loc_801DD730:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(9));
}

loc_801DD734:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD73C;
    }
}

loc_801DD738:
{
    goto loc_801DD74C;
}

loc_801DD73C:
{
    r0 = 60;
    r3 = -32;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    goto loc_801DD760;
}

loc_801DD74C:
{
    r0 = 20;
    r3 = -31;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    goto loc_801DD760;
}

loc_801DD75C:
{
    r3 = 0;
}

loc_801DD760:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800005FB gpr_write=0x80001FCB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801DD3D4 func_801DD3D4 preserves=true fpr_mask=0x00000000
