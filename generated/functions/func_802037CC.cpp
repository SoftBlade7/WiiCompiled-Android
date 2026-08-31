#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802037CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r7_addic_src_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_802037CC;

loc_802037CC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 11u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    r7 = -1;
}

loc_802037D8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r6));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_802037E4;
    }
}

loc_802037E0:
{
    r7 = 0;
}

loc_802037E4:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
}

loc_802037EC:
{
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r6));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_802037F8;
    }
}

loc_802037F4:
{
    r7 = 1;
}

loc_802037F8:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
}

loc_80203800:
{
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r6));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_8020380C;
    }
}

loc_80203808:
{
    r7 = 2;
}

loc_8020380C:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
}

loc_80203814:
{
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_80203820;
    }
}

loc_8020381C:
{
    r7 = 3;
}

loc_80203820:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
}

loc_80203828:
{
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r6));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_80203834;
    }
}

loc_80203830:
{
    r7 = 4;
}

loc_80203834:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
}

loc_8020383C:
{
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r6));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_80203848;
    }
}

loc_80203844:
{
    r7 = 5;
}

loc_80203848:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
}

loc_80203850:
{
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_8020385C;
    }
}

loc_80203858:
{
    r7 = 6;
}

loc_8020385C:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
}

loc_80203864:
{
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r6));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_80203870;
    }
}

loc_8020386C:
{
    r7 = 7;
}

loc_80203870:
{
    r7_addic_src_0 = r7;
    r7 = (r7_addic_src_0 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addic_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80203874:
{
    r7 = (r3 + r7);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80203884;
    }
}

loc_8020387C:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_80203884:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
    r6 = 7;
}

loc_80203890:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32))) {
        goto loc_80203898;
    }
}

loc_80203894:
{
    r6 = 8;
}

loc_80203898:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 9));
}

loc_802038A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32))) {
        goto loc_802038A8;
    }
}

loc_802038A4:
{
    r6 = 9;
}

loc_802038A8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r4 + 10));
}

loc_802038B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32))) {
        goto loc_802038B8;
    }
}

loc_802038B4:
{
    r6 = 10;
}

loc_802038B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(7));
}

loc_802038BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80203A18;
    }
}

loc_802038C0:
{
    r0 = (r5 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802038C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802038D4;
    }
}

loc_802038C8:
{
    r0 = 46;
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
}

loc_802038D4:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(8));
}

loc_802038D8:
{
    r3 = 8;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80203A18;
    }
}

loc_802038E0:
{
    r0 = (r6 + -7);
    r8 = (r6 + -8);
}

loc_802038EC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_802039EC;
    }
}

loc_802038F0:
{
    r9 = 0;
    r10 = 0;
    r11 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80203914;
    }
}

loc_80203900:
{
    r5 = 0x80000000u;
    r0 = (r5 + -2);
}

loc_8020390C:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_80203914;
    }
}

loc_80203910:
{
    r11 = 1;
}

loc_80203914:
{
}

loc_80203918:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80203950;
    }
}

loc_8020391C:
{
    r11 = (r6 & -2147483648);
    r5 = 1;
    r0 = (r11 + -2147483648);
}

loc_8020392C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80203944;
    }
}

loc_80203930:
{
    r0 = (r6 + -8);
    r0 = (r0 & -2147483648);
}

loc_8020393C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(r0))) {
        goto loc_80203944;
    }
}

loc_80203940:
{
    r5 = 0;
}

loc_80203944:
{
}

loc_80203948:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80203950;
    }
}

loc_8020394C:
{
    r10 = 1;
}

loc_80203950:
{
}

loc_80203954:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80203984;
    }
}

loc_80203958:
{
    r0 = (r6 + -8);
    r5 = 1;
    r0 = (r0 & -2147483648);
}

loc_80203964:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80203978;
    }
}

loc_80203968:
{
    r0 = (r6 + -7);
    r0 = (r0 & -2147483648);
}

loc_80203970:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80203978;
    }
}

loc_80203974:
{
    r5 = 0;
}

loc_80203978:
{
}

loc_8020397C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80203984;
    }
}

loc_80203980:
{
    r9 = 1;
}

loc_80203984:
{
}

loc_80203988:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_802039EC;
    }
}

loc_8020398C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_80203998:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(8))) {
        goto loc_802039EC;
    }
}

loc_8020399C:
{
    r4_addr_2 = (r4 + r3);
    r5 = MemoryInline::FlatRead8(r4_addr_2);
    r8 = (r4 + r3);
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r3 = (r3 + 8);
    guest_range_2 = MemoryInline::ResolveRangeHost(r7, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r7, static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r8 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r7 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r7 + 2), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r8 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r7 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r7 + 4), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r8 + 6));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r7 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 7));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r7 + 6), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r7 + 7), static_cast<uint8_t>(r0));
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8020399C;
    }
}

loc_802039EC:
{
    r0 = (r6 + 1);
    r4 = (r4 + r3);
    r0 = (r0 - r3);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r6));
}

loc_80203A00:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80203A18;
    }
}

loc_80203A04:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80203A04;
    }
}

loc_80203A18:
{
    r0 = 0;
    r3 = 0;
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802037CC func_802037CC preserves=true fpr_mask=0x00000000
