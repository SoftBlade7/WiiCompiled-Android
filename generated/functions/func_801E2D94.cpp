#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E2D94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r22_rot_4 = 0;
    uint32_t r22_rot_5 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r24_rot_5 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_15 = 0;
    uint32_t r5_rot_16 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801E2D94;

loc_801E2D94:
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
    r7 = MemoryInline::FlatRead8((r3 + 201));
    r31 = 0;
    r30 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801E2DB8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_801E3028;
    }
}

loc_801E2DBC:
{
}

loc_801E2DC0:
{
    r9 = (r7 + -8);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_801E2FC0;
    }
}

loc_801E2DC8:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801E2DE4;
    }
}

loc_801E2DD0:
{
    r5 = 0x80000000u;
    r0 = (r5 + -2);
}

loc_801E2DDC:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_801E2DE4;
    }
}

loc_801E2DE0:
{
    r6 = 1;
}

loc_801E2DE4:
{
}

loc_801E2DE8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801E2FC0;
    }
}

loc_801E2DEC:
{
    r5 = (r9 + 7);
    r6 = -1431633920;
    r8 = 527433728;
    r7 = r3;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & 536870911);
    r6 = (r6 + -21845);
    r0 = (r8 + 18397);
    ctr = r5;
}

loc_801E2E10:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(0))) {
        goto loc_801E2FC0;
    }
}

loc_801E2E14:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r7 + 120), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r7 + 120));
            r8 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r7 + 124));
        }
    }
    r23 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r25)) >> 32));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r7 + 136));
    r22 = (r5 + 2);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r7 + 128));
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_4 & -4);
    r26 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r8)) >> 32));
    r24 = (r5 + 2);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r28 = (r28_rot_2 & -4);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r7 + 140));
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r5 = (r5_rot_5 & -4);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r7 + 132));
    r27 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r22)) >> 32));
    r22 = (r25 - r23);
    r25 = (r5 + 2);
    r22_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(31));
    r22 = (r22_rot_2 & 2147483647);
    r8 = (r8 - r26);
    r22 = (r22 + r23);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(31));
    r5 = (r5_rot_6 & 2147483647);
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r27 = (r27_rot_2 & -4);
    r23 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r24)) >> 32));
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(31));
    r24 = (r24_rot_2 & 2147483647);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & -4);
    r24 = (r24 + r26);
    r29 = (r8 + 2);
    r27 = (r27 + 2);
    r26 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r9)) >> 32));
    r22_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(28));
    r22 = (r22_rot_3 & 268435454);
    r5 = (r31 + r5);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(31));
    r8 = (r8_rot_3 & 2147483647);
    r31 = (r5 + r22);
    r24_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(28));
    r24 = (r24_rot_3 & 268435454);
    r5 = (r9 - r26);
    r31 = (r31 + 4);
    r9 = (r31 + r8);
    r28 = (r28 + 2);
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_7 & 2147483647);
    r31 = (r9 + r24);
    r25 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r25)) >> 32));
    r5 = (r5 + r26);
    r31 = (r31 + 4);
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r26 = (r26_rot_2 & 268435454);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r10)) >> 32));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(31));
    r9 = (r9_rot_2 & 2147483647);
    r9 = (r31 + r9);
    r31 = (r9 + r26);
    r5 = (r10 - r8);
    r27 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r27)) >> 32));
    r31 = (r31 + 4);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_8 & 2147483647);
    r5 = (r5 + r8);
    r9 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r11)) >> 32));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(31));
    r10 = (r10_rot_2 & 2147483647);
    r8 = (r31 + r10);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r31 = (r31_rot_2 & 268435454);
    r31 = (r8 + r31);
    r10 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r28)) >> 32));
    r5 = (r11 - r9);
    r31 = (r31 + 4);
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_9 & 2147483647);
    r5 = (r5 + r9);
    r9 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r29)) >> 32));
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(31));
    r10 = (r10_rot_3 & 2147483647);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r11 = (r11_rot_2 & 268435454);
    r10 = (r31 + r10);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r12)) >> 32));
    r31 = (r10 + r11);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r9 = (r9_rot_3 & 2147483647);
    r31 = (r31 + 4);
    r5 = (r12 - r8);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_10 & 2147483647);
    r5 = (r5 + r8);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r8 = (r8_rot_4 & 268435454);
    r5 = (r31 + r9);
    r31 = (r5 + r8);
    r31 = (r31 + 4);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r7 + 144));
    r30 = (r30 + 8);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r7 + 148));
    r7 = (r7 + 32);
    r10 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r9)) >> 32));
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r8 = (r8_rot_5 & -4);
    r5_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r5 = (r5_rot_11 & -4);
    r8 = (r8 + 2);
    r5 = (r5 + 2);
    r11 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r8)) >> 32));
    r8 = (r9 - r10);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(31));
    r9 = (r9_rot_4 & 2147483647);
    r9 = (r9 + r10);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(31));
    r10 = (r10_rot_4 & 2147483647);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r11 = (r11_rot_3 & 268435454);
    r9 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r5)) >> 32));
    r10 = (r31 + r10);
    r31 = (r10 + r11);
    r31 = (r31 + 4);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r12)) >> 32));
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r9 = (r9_rot_5 & 2147483647);
    r5 = (r12 - r8);
    r5_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_12 & 2147483647);
    r5 = (r5 + r8);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r8 = (r8_rot_6 & 268435454);
    r5 = (r31 + r9);
    r31 = (r5 + r8);
    r31 = (r31 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E2E14;
    }
}

loc_801E2FC0:
{
    r10 = MemoryInline::FlatRead8((r3 + 201));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r6 = -1431633920;
    r5 = 527433728;
    r0 = (r10 - r30);
    r9 = (r3 + r7);
    r8 = (r6 + -21845);
    r6 = (r5 + 18397);
    ctr = r0;
}

loc_801E2FE8:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r10))) {
        goto loc_801E3028;
    }
}

loc_801E2FEC:
{
    r10 = MemoryInline::FlatRead32((r9 + 120));
    r9 = (r9 + 4);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r7 = (r7_rot_3 & -4);
    r0 = (r7 + 2);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r8) * static_cast<uint64_t>(r0)) >> 32));
    r5 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r10)) >> 32));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r7 = (r7_rot_4 & 2147483647);
    r0 = (r10 - r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r5);
    r5_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r5 = (r5_rot_15 & 268435454);
    r0 = (r31 + r7);
    r31 = (r0 + r5);
    r31 = (r31 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E2FEC;
    }
}

loc_801E3028:
{
    r0 = MemoryInline::FlatRead32((r3 + 100));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801E3030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E3058;
    }
}

loc_801E3034:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E3044;
    }
}

loc_801E3038:
{
}

loc_801E303C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801E3050;
    }
}

loc_801E3040:
{
    goto loc_801E30B8;
}

loc_801E3044:
{
}

loc_801E3048:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_801E30B8;
    }
}

loc_801E304C:
{
    goto loc_801E309C;
}

loc_801E3050:
{
    r0 = MemoryInline::FlatRead32((r3 + 76));
    goto loc_801E30BC;
}

loc_801E3058:
{
    r7 = MemoryInline::FlatRead32((r3 + 76));
    r3 = 527433728;
    r0 = (r3 + 18397);
    r5 = -1431633920;
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r7)) >> 32));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r5 = (r5 + -21845);
    r0 = (r6 + 2);
    r5 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r0)) >> 32));
    r0 = (r7 - r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_6 & 2147483647);
    r0 = (r0 + r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 2147483647);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_7 & 268435454);
    r3 = (r0 + r3);
    r0 = (r3 + 4);
    goto loc_801E30BC;
}

loc_801E309C:
{
    r0 = MemoryInline::FlatRead32((r3 + 76));
    r3 = -1431633920;
    r3 = (r3 + -21845);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    goto loc_801E30BC;
}

loc_801E30B8:
{
    r0 = 0;
}

loc_801E30BC:
{
    r3 = 196608;
    r31 = (r31 + r0);
    r0 = (r3 + 7168);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_801E30CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E30D8;
    }
}

loc_801E30D0:
{
    r3 = -8;
    goto loc_801E30F8;
}

loc_801E30D8:
{
    r3 = r4;
    r4 = (r31 + 1024);
    ctx->lr = 0x801E30E4u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801DF5F8u>(ctx);
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
    r12 = ctx->gpr[12];
    r22 = ctx->gpr[22];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E30E8:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E30F4;
    }
}

loc_801E30F0:
{
    r0 = r3;
}

loc_801E30F4:
{
    r3 = r0;
}

loc_801E30F8:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -4));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E2D94 func_801E2D94 preserves=true fpr_mask=0x00000000
