#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020BCD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r21 = ctx->gpr[21];
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

    goto loc_8020BCD0;

loc_8020BCD0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r21 = r3;
    r22 = r4;
    r29 = MemoryInline::FlatRead32((r1 + 72));
    r30 = MemoryInline::FlatRead32((r1 + 76));
    r26 = r8;
    r31 = MemoryInline::FlatRead8((r1 + 83));
    r27 = r9;
    r28 = r10;
    r4 = r23;
    r5 = r24;
    r6 = r25;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020BC18u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWrite32(r22, r3);
    r3 = r21;
    r4 = 0;
    r5 = 512;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    r0 = 65536;
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(24));
    r9 = (r9_rot_0 & 255);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(24));
    r6 = (r6_rot_0 & 255);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(24));
    r5 = (r5_rot_0 & 255);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & 255);
    r11 = 85;
    r10 = 170;
    r8 = 255;
    r7 = 0;
    r4 = 2;
}

loc_8020BD64:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r21, 0, 512u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r21, static_cast<uint8_t>(r26));
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(24));
    r12 = (r12_rot_0 & 16777215);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r21 + 2), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 510u, (r21 + 510), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 511u, (r21 + 511), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r21 + 24), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r21 + 25), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r21 + 26), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r21 + 27), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r21 + 11), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r21 + 12), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r21 + 13), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r21 + 14), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r21 + 15), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r21 + 16), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r21 + 17), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r21 + 18), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r21 + 21), static_cast<uint8_t>(r31));
    if ((static_cast<uint32_t>(r23) >= static_cast<uint32_t>(r0))) {
        goto loc_8020BDD0;
    }
}

loc_8020BDB0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r21 + 19), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r21 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r21 + 32), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r21 + 33), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r21 + 34), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r21 + 35), static_cast<uint8_t>(r7));
    goto loc_8020BDF4;
}

loc_8020BDD0:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r21 + 19), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r21 + 20), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r21 + 32), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r21 + 33), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r21 + 34), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r21 + 35), static_cast<uint8_t>(r0));
}

loc_8020BDF4:
{
    r0 = MemoryInline::FlatRead32(r22);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8020BDFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020BEB0;
    }
}

loc_8020BE00:
{
    r10 = 0;
    r0 = 32;
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r21 + 14), static_cast<uint8_t>(r0));
    r8 = 2;
    r7 = 1;
    r6 = 41;
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r21 + 15), static_cast<uint8_t>(r10));
    r5 = 52;
    r4 = 18;
    r3 = 128;
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r21 + 17), static_cast<uint8_t>(r10));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r21 + 18), static_cast<uint8_t>(r10));
    r9 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r21 + 36), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead32((r1 + 8));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r9 = (r9_rot_1 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r21 + 37), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead32((r1 + 8));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r9 = (r9_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r21 + 38), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead32((r1 + 8));
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r9 = (r9_rot_3 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r21 + 40), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r21 + 39), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r21 + 41), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r21 + 42), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r21 + 43), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r21 + 44), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r21 + 45), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r21 + 46), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r21 + 47), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 48u, (r21 + 48), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 49u, (r21 + 49), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 65u, (r21 + 65), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 66u, (r21 + 66), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 67u, (r21 + 67), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 68u, (r21 + 68), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 69u, (r21 + 69), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 70u, (r21 + 70), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 64u, (r21 + 64), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 50u, (r21 + 50), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 51u, (r21 + 51), static_cast<uint8_t>(r10));
    goto loc_8020BEFC;
}

loc_8020BEB0:
{
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r21 + 17), static_cast<uint8_t>(r30));
    r6 = 0;
    r5 = 41;
    r4 = 52;
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r21 + 18), static_cast<uint8_t>(r12));
    r3 = 18;
    r0 = 128;
    r7 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r21 + 22), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead32((r1 + 8));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r7 = (r7_rot_1 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r21 + 37), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r21 + 23), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r21 + 38), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r21 + 39), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r21 + 40), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r21 + 41), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r21 + 42), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r21 + 36), static_cast<uint8_t>(r0));
}

loc_8020BEFC:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->gpr[21] = r21;
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

// RECOMP_GUEST_ABI gpr_read=0xFFE01FFA gpr_write=0xFFE01FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020BCD0 func_8020BCD0 preserves=true fpr_mask=0x00000000
