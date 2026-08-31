#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80726E78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80726E78;

loc_80726E78:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r5 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r3 + 276));
    r30 = MemoryInline::FlatRead32((r5 + 11240));
    r27 = r3;
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r28 = r4;
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r29 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r25 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    r26 = 0x808D0000u;
    r24 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    r31 = MemoryInline::FlatRead32((r30 + 20));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r23 = MemoryInline::FlatRead32((r3 + 340));
}

loc_80726ED0:
{
    r3 = r30;
    r4 = r23;
    // inline leaf 0x80739300 (4 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    // end of inlined leaf 0x80739300
}

loc_80726EE0:
{
    if ((static_cast<uint32_t>(r24) == static_cast<uint32_t>(r3))) {
        goto loc_80726FAC;
    }
}

loc_80726EE4:
{
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f3.d = MemoryInline::FlatReadFloat32((r25 + -26372));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = (-(f3.d));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80726F14:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80726F24;
    }
}

loc_80726F1C:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80726F20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80726F2C;
    }
}

loc_80726F24:
{
    r0 = 0;
    goto loc_80726F80;
}

loc_80726F2C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80726F3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80726F48;
    }
}

loc_80726F40:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80726F44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80726F50;
    }
}

loc_80726F48:
{
    r0 = 0;
    goto loc_80726F80;
}

loc_80726F50:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + -26368));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = (-(f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80726F68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80726F74;
    }
}

loc_80726F6C:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80726F70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80726F7C;
    }
}

loc_80726F74:
{
    r0 = 0;
    goto loc_80726F80;
}

loc_80726F7C:
{
    r0 = 1;
}

loc_80726F80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80726F84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80726FAC;
    }
}

loc_80726F88:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r0 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 24), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 32), f0.d);
    MemoryInline::FlatWrite32((r28 + 44), r0);
    goto loc_80726FC8;
}

loc_80726FAC:
{
    r23 = (r23 + 1);
    r29 = (r29 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r23), static_cast<int32_t>(r31));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(2));
}

loc_80726FBC:
{
    r0 = (r0 * r31);
    r23 = (r23 - r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80726ED0;
    }
}

loc_80726FC8:
{
    r3 = MemoryInline::FlatRead32((r27 + 340));
    r11 = (r1 + 80);
    r3 = (r3 + 2);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r31));
    r0 = (r0 * r31);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r27 + 340), r0);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF80001B gpr_write=0xFF8008FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80726E78 func_80726E78 preserves=true fpr_mask=0x00000000
