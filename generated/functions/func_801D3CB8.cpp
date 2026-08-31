#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D3CB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r10_ca_0 = 0;
    uint32_t r10_ca_1 = 0;
    uint32_t r10_ca_2 = 0;
    uint32_t r10_ca_3 = 0;
    uint32_t r10_ca_4 = 0;
    uint32_t r10_ca_5 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r27_ca_0 = 0;
    uint32_t r27_ca_1 = 0;
    uint32_t r27_ca_2 = 0;
    uint32_t r27_ca_3 = 0;
    uint32_t r27_ca_4 = 0;
    uint32_t r30_ca_0 = 0;
    uint32_t r30_ca_1 = 0;
    uint32_t r30_ca_2 = 0;
    uint32_t r30_ca_3 = 0;
    uint32_t r30_ca_4 = 0;
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

    goto loc_801D3CB8;

loc_801D3CB8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_801D3CD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D3E8C;
    }
}

loc_801D3CD4:
{
}

loc_801D3CD8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1024))) {
        goto loc_801D3CE8;
    }
}

loc_801D3CDC:
{
    r9 = r4;
    r8 = 0;
    goto loc_801D3D44;
}

loc_801D3CE8:
{
    r0 = (r4 + -1024);
    r8 = MemoryInline::FlatRead32((r3 + 52));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(9) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r0) >> 9);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801D3D3C;
    }
}

loc_801D3CF8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_801D3CFC:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D3D30;
    }
}

loc_801D3D04:
{
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D3D04;
    }
}

loc_801D3D28:
{
    r9 = (r9 & 7);
}

loc_801D3D2C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801D3D3C;
    }
}

loc_801D3D30:
{
    ctr = r9;
}

loc_801D3D34:
{
    r8 = MemoryInline::FlatRead32(r8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D3D34;
    }
}

loc_801D3D3C:
{
    r0 = (r4 + -1024);
    r9 = (r0 & 511);
}

loc_801D3D44:
{
}

loc_801D3D48:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_801D3D74;
    }
}

loc_801D3D4C:
{
}

loc_801D3D50:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(1024))) {
        goto loc_801D3D68;
    }
}

loc_801D3D54:
{
    r10 = (r3 + r9);
    r9 = (r9 + 1);
    r0 = MemoryInline::FlatRead8((r10 + 56));
    r25 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_801D3D90;
}

loc_801D3D68:
{
    r8 = MemoryInline::FlatRead32((r3 + 52));
    r9 = 0;
    goto loc_801D3D84;
}

loc_801D3D74:
{
}

loc_801D3D78:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(512))) {
        goto loc_801D3D84;
    }
}

loc_801D3D7C:
{
    r9 = 0;
    r8 = MemoryInline::FlatRead32(r8);
}

loc_801D3D84:
{
    r10 = (r8 + r9);
    r9 = (r9 + 1);
    r25 = MemoryInline::FlatRead8((r10 + 4));
}

loc_801D3D90:
{
    r28 = 65;
    r31 = 90;
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (r5 + -1);
    r29 = 0;
    goto loc_801D3E24;
}

loc_801D3DA8:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D3DC8;
    }
}

loc_801D3DB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(32));
}

loc_801D3DB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D3DC8;
    }
}

loc_801D3DB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r7));
}

loc_801D3DBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D3DC8;
    }
}

loc_801D3DC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_801D3DC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D3DD0;
    }
}

loc_801D3DC8:
{
    r3 = 0;
    goto loc_801D3E90;
}

loc_801D3DD0:
{
}

loc_801D3DD4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_801D3E00;
    }
}

loc_801D3DD8:
{
}

loc_801D3DDC:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(1024))) {
        goto loc_801D3DF4;
    }
}

loc_801D3DE0:
{
    r5 = (r3 + r9);
    r9 = (r9 + 1);
    r5 = MemoryInline::FlatRead8((r5 + 56));
    r25 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    goto loc_801D3E1C;
}

loc_801D3DF4:
{
    r8 = MemoryInline::FlatRead32((r3 + 52));
    r9 = 0;
    goto loc_801D3E10;
}

loc_801D3E00:
{
}

loc_801D3E04:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(512))) {
        goto loc_801D3E10;
    }
}

loc_801D3E08:
{
    r9 = 0;
    r8 = MemoryInline::FlatRead32(r8);
}

loc_801D3E10:
{
    r5 = (r8 + r9);
    r9 = (r9 + 1);
    r25 = MemoryInline::FlatRead8((r5 + 4));
}

loc_801D3E1C:
{
    r4 = (r4 + 1);
    r6 = (r6 + 1);
}

loc_801D3E24:
{
    r5 = MemoryInline::FlatRead8(r6);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r12 = (static_cast<int32_t>(r30) >> 31);
    r10 = (r30 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r11 = (r11_rot_2 & 1);
    r27_ca_2 = (xer >> 29) & 1u;
    r27 = (r12 + r29);
    r27 = (r27 + r27_ca_2);
    r26 = (r30 + 32);
    r12 = (static_cast<int32_t>(r31) >> 31);
    r10 = (r31 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    r10_ca_2 = (xer >> 29) & 1u;
    r10 = (r12 + r11);
    r10 = (r10 + r10_ca_2);
    r10 = (r27 & r10);
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_801D3E58;
    }
}

loc_801D3E54:
{
    r26 = r30;
}

loc_801D3E58:
{
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
    r12 = (static_cast<int32_t>(r27) >> 31);
    r10 = (r27 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r11 = (r11_rot_3 & 1);
    r30_ca_2 = (xer >> 29) & 1u;
    r30 = (r12 + r29);
    r30 = (r30 + r30_ca_2);
    r12 = (static_cast<int32_t>(r31) >> 31);
    r10 = (r31 - r27);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r27) ? 1u : 0u) << 29);
    r10_ca_3 = (xer >> 29) & 1u;
    r10 = (r12 + r11);
    r10 = (r10 + r10_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r12)) + static_cast<uint64_t>(static_cast<uint32_t>(r11)) + (static_cast<uint64_t>(static_cast<uint32_t>(r10_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r10 = (r30 & r10);
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_801D3E84;
    }
}

loc_801D3E80:
{
    r27 = (r27 + 32);
}

loc_801D3E84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r26));
}

loc_801D3E88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D3DA8;
    }
}

loc_801D3E8C:
{
    r3 = -1;
}

loc_801D3E90:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0xFE001FFB gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D3CB8 func_801D3CB8 preserves=true fpr_mask=0x00000000
