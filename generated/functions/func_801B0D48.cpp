#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B0D48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B0D48;

loc_801B0D48:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r0 = MemoryInline::FlatRead32((r13 + -25132));
    r31 = 0x80350000u;
    r7 = 0x802A0000u;
    r23 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801B0D70:
{
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r31 = (r31 + -31744);
    r7 = (r7 + -12952);
    r29 = 1;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B0FA4;
    }
}

loc_801B0D8C:
{
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_801B0D94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0FA4;
    }
}

loc_801B0D98:
{
    r0 = MemoryInline::FlatRead32((r13 + -25136));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801B0DA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B0FA4;
    }
}

loc_801B0DA4:
{
    r0 = MemoryInline::FlatRead32((r13 + -25128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B0DAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0FA4;
    }
}

loc_801B0DB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(160));
}

loc_801B0DB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0E08;
    }
}

loc_801B0DB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B0DE0;
    }
}

loc_801B0DBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(96));
}

loc_801B0DC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0DF8;
    }
}

loc_801B0DC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B0DD4;
    }
}

loc_801B0DC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(64));
}

loc_801B0DCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0E18;
    }
}

loc_801B0DD0:
{
    goto loc_801B0FA4;
}

loc_801B0DD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(128));
}

loc_801B0DD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0E00;
    }
}

loc_801B0DDC:
{
    goto loc_801B0FA4;
}

loc_801B0DE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(224));
}

loc_801B0DE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0DF8;
    }
}

loc_801B0DE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B0FA4;
    }
}

loc_801B0DEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(192));
}

loc_801B0DF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0E10;
    }
}

loc_801B0DF4:
{
    goto loc_801B0FA4;
}

loc_801B0DF8:
{
    r26 = 1;
    goto loc_801B0E44;
}

loc_801B0E00:
{
    r26 = 2;
    goto loc_801B0E44;
}

loc_801B0E08:
{
    r26 = 4;
    goto loc_801B0E44;
}

loc_801B0E10:
{
    r26 = 8;
    goto loc_801B0E44;
}

loc_801B0E18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801B0E1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0FA4;
    }
}

loc_801B0E20:
{
    r0 = 65536;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_801B0E28:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B0FA4;
    }
}

loc_801B0E2C:
{
}

loc_801B0E30:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(256))) {
        goto loc_801B0E40;
    }
}

loc_801B0E34:
{
    r24 = 32;
    r29 = 3;
    goto loc_801B0E44;
}

loc_801B0E40:
{
    r29 = 2;
}

loc_801B0E44:
{
    r29 = (r29 + r26);
    r0 = 0;
    goto loc_801B0E60;
}

loc_801B0E50:
{
    r4 = MemoryInline::FlatRead32((r7 + 4));
}

loc_801B0E58:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r3))) {
        goto loc_801B0E6C;
    }
}

loc_801B0E5C:
{
    r7 = (r7 + 8);
}

loc_801B0E60:
{
    r28 = MemoryInline::FlatRead32(r7);
}

loc_801B0E68:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_801B0E50;
    }
}

loc_801B0E6C:
{
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_801B0E74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0FA4;
    }
}

loc_801B0E78:
{
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(32));
}

loc_801B0E84:
{
    r30 = r3;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B0FA4;
    }
}

loc_801B0E8C:
{
    r29 = (r29 + r3);
    r3 = MemoryInline::FlatRead32((r13 + -25140));
    r0 = (r29 + 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801B0E9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801B0FA4;
    }
}

loc_801B0EA0:
{
    r3 = MemoryInline::FlatRead32((r13 + -25136));
    r22 = (r31 + 6);
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    r22_addr_0 = (r22 + r3);
    r5 = MemoryInline::FlatRead16(r22_addr_0);
    r4 = (r0 + r31);
    r27 = (r22 + r3);
    r3 = (r4 + 2);
    r5 = (r5 - r0);
    ctx->lr = 0x801B0EC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801B0EC8:
{
    r3 = MemoryInline::FlatRead16(r22);
    r0 = (r3 + 2);
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r0));
    r22 = (r22 + 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r27));
}

loc_801B0EDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801B0EC8;
    }
}

loc_801B0EE0:
{
    r5 = MemoryInline::FlatRead16(r27);
    r0 = (r30 + -1);
    r4 = r28;
    r28 = (r31 + r5);
    r0 = (r24 | r0);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r5 = r30;
    r3 = (r28 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(64));
}

loc_801B0F08:
{
    r3 = (r30 + r28);
    r28 = (r3 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B0F24;
    }
}

loc_801B0F14:
{
    r0 = (r26 + -1);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r28 = (r28 + 1);
    goto loc_801B0F40;
}

loc_801B0F24:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(32));
}

loc_801B0F28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B0F40;
    }
}

loc_801B0F2C:
{
    r3 = (r26 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r3));
    r28 = (r28 + 2);
}

loc_801B0F40:
{
    r3 = r28;
    r4 = r25;
    r5 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r13 + -25128));
    r0 = 1;
    r4 = (0 - r23);
    r6 = (r27 - r31);
    r7 = (r31 + r5);
    r3 = MemoryInline::FlatRead32((r13 + -25136));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    MemoryInline::FlatWrite8((r13 + -25123), static_cast<uint8_t>(r0));
    r4 = (r3 + 1);
    r3 = 1;
    r7_addr_0 = (r7 + r5);
    MemoryInline::FlatWrite16(r7_addr_0, static_cast<uint16_t>(r6));
    r6 = (r29 + 2);
    r5 = MemoryInline::FlatRead32((r13 + -25140));
    r7 = MemoryInline::FlatRead16(r27);
    r5 = (r5 - r6);
    MemoryInline::FlatWrite32((r13 + -25136), r4);
    r6 = (r7 + r29);
    MemoryInline::FlatWrite16((r27 + 2), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r13 + -25140), r5);
    MemoryInline::FlatWriteRam16((r31 + 4), static_cast<uint16_t>(r4));
    goto loc_801B0FA8;
}

loc_801B0FA4:
{
    r3 = 0;
}

loc_801B0FA8:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC03FFB gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B0D48 func_801B0D48 preserves=true fpr_mask=0x00000000
