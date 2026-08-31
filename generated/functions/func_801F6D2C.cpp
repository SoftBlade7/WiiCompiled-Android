#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F6D2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_11 = 0;
    uint32_t r31_addr_12 = 0;
    uint32_t r31_addr_13 = 0;
    uint32_t r31_addr_14 = 0;
    uint32_t r31_addr_15 = 0;
    uint32_t r31_addr_16 = 0;
    uint32_t r31_addr_17 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F6D2C;

loc_801F6D2C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r1 + 196), r0);
    r11 = (r1 + 192);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 164u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 168u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 172u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 176u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 180u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 184u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 188u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r29 = MemoryInline::FlatRead32((r3 + 48));
    r26 = r4;
    r28 = r6;
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r29 + 6216));
    r27 = r5;
    r3 = r28;
    r4 = 0;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 52u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r1 + 40);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    r4 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 48), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 48), r5);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 52), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 56), r5);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r30 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r30 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 64), r5);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 68), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r30 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r30 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 72), r5);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 76), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 80), r5);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 84), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r30 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r30 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 88), r5);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 92), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r30 + 48));
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 96), r0);
    ctx->lr = 0x801F6DDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F9C4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
    r31 = (r1 + 24);
    r25 = 1;
    goto loc_801F7068;
}

loc_801F6DEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801F6DF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F6DFC;
    }
}

loc_801F6DF4:
{
    r3 = r30;
    goto loc_801F707C;
}

loc_801F6DFC:
{
    r0 = MemoryInline::FlatRead8((r1 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F6E04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F7078;
    }
}

loc_801F6E08:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(229));
}

loc_801F6E0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F7058;
    }
}

loc_801F6E10:
{
    r3 = MemoryInline::FlatRead8((r1 + 123));
    r0 = (r3 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(15));
}

loc_801F6E1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F7058;
    }
}

loc_801F6E20:
{
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F6E24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7058;
    }
}

loc_801F6E28:
{
    r3 = (r1 + 24);
    r4 = (r1 + 112);
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802037CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 25);
    r4 = 1;
    goto loc_801F6E4C;
}

loc_801F6E44:
{
    r3 = (r3 + 1);
    r4 = (r4 + 1);
}

loc_801F6E4C:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801F6E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(126))) {
        goto loc_801F6E6C;
    }
}

loc_801F6E5C:
{
}

loc_801F6E60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F6E6C;
    }
}

loc_801F6E64:
{
}

loc_801F6E68:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(7))) {
        goto loc_801F6E44;
    }
}

loc_801F6E6C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
}

loc_801F6E70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F7058;
    }
}

loc_801F6E74:
{
    r31_addr_2 = (r31 + r4);
    r0 = MemoryInline::FlatRead8(r31_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(126));
}

loc_801F6E80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7058;
    }
}

loc_801F6E84:
{
    r7 = (r4 + 1);
    r3 = (r31 + r7);
    goto loc_801F6E98;
}

loc_801F6E90:
{
    r3 = (r3 + 1);
    r7 = (r7 + 1);
}

loc_801F6E98:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801F6EA4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(48))) {
        goto loc_801F6EB0;
    }
}

loc_801F6EA8:
{
}

loc_801F6EAC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(57))) {
        goto loc_801F6E90;
    }
}

loc_801F6EB0:
{
    r31_addr_3 = (r31 + r7);
    r0 = MemoryInline::FlatRead8(r31_addr_3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801F6EBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(46))) {
        goto loc_801F6EC8;
    }
}

loc_801F6EC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F6EC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7058;
    }
}

loc_801F6EC8:
{
    r0 = (r7 - r4);
    r30 = 0;
    r8 = (r0 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_801F6ED4:
{
    r3 = r8;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F6FF8;
    }
}

loc_801F6EDC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F6EE0:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F6FD4;
    }
}

loc_801F6EE8:
{
    r6 = (r7 - r8);
    r8 = (r8 + -1);
    r31_addr_5 = (r31 + r6);
    r5 = MemoryInline::FlatRead8(r31_addr_5);
    r30 = (r30 * 10);
    r6 = (r7 - r8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r31_addr_6 = (r31 + r6);
    r5 = MemoryInline::FlatRead8(r31_addr_6);
    r4 = (r0 + r30);
    r8 = (r8 + -1);
    r30 = (r4 + -48);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r30 = (r30 * 10);
    r6 = (r7 - r8);
    r31_addr_7 = (r31 + r6);
    r5 = MemoryInline::FlatRead8(r31_addr_7);
    r8 = (r8 + -1);
    r4 = (r0 + r30);
    r6 = (r7 - r8);
    r30 = (r4 + -48);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r30 = (r30 * 10);
    r31_addr_8 = (r31 + r6);
    r5 = MemoryInline::FlatRead8(r31_addr_8);
    r8 = (r8 + -1);
    r4 = (r0 + r30);
    r6 = (r7 - r8);
    r30 = (r4 + -48);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r30 = (r30 * 10);
    r31_addr_9 = (r31 + r6);
    r5 = MemoryInline::FlatRead8(r31_addr_9);
    r8 = (r8 + -1);
    r4 = (r0 + r30);
    r6 = (r7 - r8);
    r30 = (r4 + -48);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r30 = (r30 * 10);
    r31_addr_10 = (r31 + r6);
    r5 = MemoryInline::FlatRead8(r31_addr_10);
    r8 = (r8 + -1);
    r4 = (r0 + r30);
    r6 = (r7 - r8);
    r30 = (r4 + -48);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r30 = (r30 * 10);
    r31_addr_11 = (r31 + r6);
    r5 = MemoryInline::FlatRead8(r31_addr_11);
    r8 = (r8 + -1);
    r4 = (r0 + r30);
    r6 = (r7 - r8);
    r30 = (r4 + -48);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r30 = (r30 * 10);
    r31_addr_12 = (r31 + r6);
    r5 = MemoryInline::FlatRead8(r31_addr_12);
    r8 = (r8 + -1);
    r4 = (r0 + r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r30 = (r4 + -48);
    r30 = (r30 * 10);
    r4 = (r0 + r30);
    r30 = (r4 + -48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F6EE8;
    }
}

loc_801F6FCC:
{
    r3 = (r3 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F6FD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F6FF8;
    }
}

loc_801F6FD4:
{
    ctr = r3;
}

loc_801F6FD8:
{
    r6 = (r7 - r8);
    r8 = (r8 + -1);
    r31_addr_15 = (r31 + r6);
    r5 = MemoryInline::FlatRead8(r31_addr_15);
    r30 = (r30 * 10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r4 = (r0 + r30);
    r30 = (r4 + -48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F6FD8;
    }
}

loc_801F6FF8:
{
    r4 = r27;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801EF618u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = r30;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80204618u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x801F701Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802031E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F7020:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7058;
    }
}

loc_801F7024:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r26));
}

loc_801F7028:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F7058;
    }
}

loc_801F702C:
{
    r0 = MemoryInline::FlatRead32((r29 + 6216));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & -32);
    r0 = (r26 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_801F703C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F7058;
    }
}

loc_801F7040:
{
    r30 = (r30 - r26);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(29));
    r4 = (r4_rot_2 & 536870908);
    r28_addr_2 = (r28 + r4);
    r3 = MemoryInline::FlatRead32(r28_addr_2);
    r0 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r30));
    r0 = (r3 | r0);
    r28_addr_3 = (r28 + r4);
    MemoryInline::FlatWrite32(r28_addr_3, r0);
}

loc_801F7058:
{
    r3 = (r1 + 40);
    r4 = 0;
    ctx->lr = 0x801F7064u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F9E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
}

loc_801F7068:
{
    r3 = (r1 + 40);
    ctx->lr = 0x801F7070u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F9D50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F7074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F6DEC;
    }
}

loc_801F7078:
{
    r3 = 0;
}

loc_801F707C:
{
    r11 = (r1 + 192);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F6D2C func_801F6D2C preserves=true fpr_mask=0x00000000
