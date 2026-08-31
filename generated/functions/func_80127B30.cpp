#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80127B30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_80127B30;

loc_80127B30:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_4, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r4 = 0x80000000u;
    r3 = 0x89050000u;
    r4 = MemoryInline::FlatRead32((r4 + 248));
    r5 = (r3 + -687);
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -26224), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r13 + -26212));
    r3 = 0;
    r5 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r4)) >> 32));
    MemoryInline::FlatWrite32((r13 + -26204), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26224));
    r6 = (r0 * 80);
    r0 = (r4 - r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r0 + r5);
}

loc_80127B7C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_1 & 8388607);
    MemoryInline::FlatWrite32((r13 + -26200), r0);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80127BD4;
    }
}

loc_80127B88:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
}

loc_80127B8C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127BC4;
    }
}

loc_80127B94:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r7, r3);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r7 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r7 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r7 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r7 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r7 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r7 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r7 + 28), r3);
    }
    r7 = (r7 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80127B94;
    }
}

loc_80127BBC:
{
    r6 = (r6 & 7);
}

loc_80127BC0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80127BD4;
    }
}

loc_80127BC4:
{
    ctr = r6;
}

loc_80127BC8:
{
    MemoryInline::FlatWrite32(r7, r3);
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80127BC8;
    }
}

loc_80127BD4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r13 + -26212));
    r3 = 0;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r13 + -26220));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r5 = (r5_rot_0 & -16);
}

loc_80127BE4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80127C34;
    }
}

loc_80127BE8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
}

loc_80127BEC:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127C24;
    }
}

loc_80127BF4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r4, r3);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 28), r3);
    }
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80127BF4;
    }
}

loc_80127C1C:
{
    r5 = (r5 & 7);
}

loc_80127C20:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80127C34;
    }
}

loc_80127C24:
{
    ctr = r5;
}

loc_80127C28:
{
    MemoryInline::FlatWrite32(r4, r3);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80127C28;
    }
}

loc_80127C34:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r13 + -26212));
    r3 = 0;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -26216));
    r5 = (r0 * 90);
}

loc_80127C48:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80127C98;
    }
}

loc_80127C4C:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_6 & 536870911);
}

loc_80127C50:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127C88;
    }
}

loc_80127C58:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, r4, r3);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r4 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r4 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r4 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r4 + 28), r3);
    }
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80127C58;
    }
}

loc_80127C80:
{
    r5 = (r5 & 7);
}

loc_80127C84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80127C98;
    }
}

loc_80127C88:
{
    ctr = r5;
}

loc_80127C8C:
{
    MemoryInline::FlatWrite32(r4, r3);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80127C8C;
    }
}

loc_80127C98:
{
    r3 = 413663232;
    r31 = 0;
    r29 = (r3 + 36);
    r27 = 0;
    r26 = 0;
    r25 = 0;
    r28 = 0;
    r30 = 1;
    goto loc_80127D88;
}

loc_80127CBC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -26216));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26224));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r13 + -26220));
        }
    }
    r3 = (r0 + r25);
    r5 = (r5 + r27);
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 294u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r3 + 24), r31);
    r6 = (r4 + r26);
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r3 + 36), r6);
    MemoryInline::WriteResolved16(guest_range_5, 32u, (r3 + 56), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_5, 84u, (r3 + 108), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r3 + 28), r29);
    MemoryInline::WriteResolved16(guest_range_5, 202u, (r3 + 226), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_5, 210u, (r3 + 234), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_5, 230u, (r3 + 254), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_5, 292u, (r3 + 316), static_cast<uint16_t>(r28));
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 282u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_5, 282u, (r3 + 306), r28);
        MemoryInline::WriteResolved16(guest_range_5, 284u, (r3 + 308), r28);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 286u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_5, 286u, (r3 + 310), r28);
        MemoryInline::WriteResolved16(guest_range_5, 288u, (r3 + 312), r28);
    }
    MemoryInline::WriteResolved16(guest_range_5, 290u, (r3 + 314), static_cast<uint16_t>(r28));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r13 + -26212));
    r0 = (r4 + -1);
}

loc_80127D18:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80127D30;
    }
}

loc_80127D1C:
{
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r3 + 40), static_cast<uint16_t>(r28));
    goto loc_80127D48;
}

loc_80127D30:
{
    r0 = (r5 + 320);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4 = (r4_rot_2 & 65535);
    MemoryInline::FlatWrite16((r3 + 40), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
}

loc_80127D48:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r4 = (r4_rot_4 & 65535);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 46), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 112), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 70), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 72), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r3 + 12), r30);
    // inline leaf 0x8012504C (7 guest instruction(s))
    r5 = 0x802F0000u;
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r5 + 16576));
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWriteRam32((r5 + 16576), r3);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x8012504C
    r27 = (r27 + 320);
    r26 = (r26 + 64);
    r25 = (r25 + 360);
    r31 = (r31 + 1);
}

loc_80127D88:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r13 + -26212));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_80127D90:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80127CBC;
    }
}

loc_80127D94:
{
    r4 = (r0 * 320);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26224));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_6 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 52));
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

// RECOMP_GUEST_ABI gpr_read=0xFE0020FB gpr_write=0xFE0008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80127B30 func_80127B30 preserves=true fpr_mask=0x00000000
