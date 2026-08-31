#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014CBBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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

    goto loc_8014CBBC;

loc_8014CBBC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
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
    r3 = 0x80340000u;
    r26 = 0;
    r3 = (r3 + -27840);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 1970u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_1, 1968u, (r3 + 1976));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8014CBE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014CD3C;
    }
}

loc_8014CBE8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 8));
}

loc_8014CBF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014CC04;
    }
}

loc_8014CBF4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 90u, (r3 + 98));
}

loc_8014CBFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8014CC04;
    }
}

loc_8014CC00:
{
    r26 = 1;
}

loc_8014CC04:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 92u, (r3 + 100));
}

loc_8014CC0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014CC20;
    }
}

loc_8014CC10:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 182u, (r3 + 190));
}

loc_8014CC18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8014CC20;
    }
}

loc_8014CC1C:
{
    r26 = (r26 + 1);
}

loc_8014CC20:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 184u, (r3 + 192));
}

loc_8014CC28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014CC3C;
    }
}

loc_8014CC2C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 274u, (r3 + 282));
}

loc_8014CC34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8014CC3C;
    }
}

loc_8014CC38:
{
    r26 = (r26 + 1);
}

loc_8014CC3C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 276u, (r3 + 284));
}

loc_8014CC44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014CC58;
    }
}

loc_8014CC48:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 366u, (r3 + 374));
}

loc_8014CC50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8014CC58;
    }
}

loc_8014CC54:
{
    r26 = (r26 + 1);
}

loc_8014CC58:
{
    r30 = 0x80340000u;
    r29 = 0;
    r3 = (r30 + -27840);
    r31 = 3;
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r28 = (r3 + 8);
    r24 = 524288;
    r25 = 0x80280000u;
    r3 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r23 = 1374420992;
    r0 = (r3 + 1);
    r27 = (r0 & 65535);
}

loc_8014CC88:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_8014CC90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014CD2C;
    }
}

loc_8014CC94:
{
}

loc_8014CC98:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8014CCA8;
    }
}

loc_8014CC9C:
{
    r0 = MemoryInline::FlatRead8((r28 + 90));
}

loc_8014CCA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8014CCB4;
    }
}

loc_8014CCA8:
{
    MemoryInline::FlatWrite16((r28 + 52), static_cast<uint16_t>(r27));
    MemoryInline::FlatWrite16((r28 + 54), static_cast<uint16_t>(r27));
    goto loc_8014CCBC;
}

loc_8014CCB4:
{
    MemoryInline::FlatWrite16((r28 + 52), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r28 + 54), static_cast<uint16_t>(r31));
}

loc_8014CCBC:
{
    r0 = MemoryInline::FlatRead16((r28 + 52));
    r3 = (r23 + -31457);
    r0 = (r0 * 120);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r4 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 58), static_cast<uint16_t>(r0));
    r0 = (r31 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_2 = ~(r0);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r0);
    r3 = (r3 + r3_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r4 + -3);
    r3 = (r0 & r3);
    MemoryInline::FlatWrite16((r28 + 60), static_cast<uint16_t>(r3));
    r0 = (r4 + 2);
    MemoryInline::FlatWrite16((r28 + 62), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + -27840));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8014CD04:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014CD2C;
    }
}

loc_8014CD08:
{
    r6 = MemoryInline::FlatRead8((r28 + 90));
    r3 = (r24 + 4);
    r7 = MemoryInline::FlatRead16((r28 + 54));
    r4 = (r25 + 26136);
    r8 = MemoryInline::FlatRead16((r28 + 58));
    r5 = (r29 & 65535);
    r9 = MemoryInline::FlatRead16((r28 + 60));
    r10 = MemoryInline::FlatRead16((r28 + 62));
    ctx->lr = 0x8014CD2Cu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x801317D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8014CD2C:
{
    r29 = (r29 + 1);
    r28 = (r28 + 92);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(4));
}

loc_8014CD38:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014CC88;
    }
}

loc_8014CD3C:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014CBBC func_8014CBBC preserves=true fpr_mask=0x00000000
