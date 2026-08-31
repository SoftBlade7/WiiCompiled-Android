#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80073470(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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

    goto loc_80073470;

loc_80073470:
{
    MemoryInline::FlatWriteRam32((r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 340), r0);
    r11 = (r1 + 336);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r8 = MemoryInline::FlatRead32(r5);
    r28 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r29 = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80073498:
{
    r30 = r6;
    r31 = r7;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800734AC;
    }
}

loc_800734A4:
{
    r3 = 0;
    goto loc_80073FE0;
}

loc_800734AC:
{
}

loc_800734B0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800734BC;
    }
}

loc_800734B4:
{
    r31 = 1;
    goto loc_800734C8;
}

loc_800734BC:
{
}

loc_800734C0:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(16))) {
        goto loc_800734C8;
    }
}

loc_800734C4:
{
    r31 = 16;
}

loc_800734C8:
{
    r0 = MemoryInline::FlatRead32((r8 + 112));
    r4 = (r8 + 76);
    r27 = MemoryInline::FlatRead32((r8 + 104));
    r3 = r29;
    r4_addr_1 = (r4 + r0);
    r15 = MemoryInline::FlatRead32(r4_addr_1);
    r16 = 0;
    // inline leaf 0x8004EA50 (13 guest instruction(s))
}

loc_inl1_0x8004EA50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_inl1_0x8004EA5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004EA68;
    }
}

loc_inl1_0x8004EA60:
{
    r3 = (r3 + r0);
    goto loc_inl1_0x8004EA6C;
}

loc_inl1_0x8004EA68:
{
    r3 = 0;
}

loc_inl1_0x8004EA6C:
{
}

loc_inl1_0x8004EA70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004EA7C;
    }
}

loc_inl1_0x8004EA74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl1_cont_8004EA50;
}

loc_inl1_0x8004EA7C:
{
    r3 = 0;
}

loc_inl1_cont_8004EA50:
{
    // end of inlined leaf 0x8004EA50
    r14 = r3;
    r3 = r29;
    // inline leaf 0x8004E400 (13 guest instruction(s))
}

loc_inl2_0x8004E400:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_inl2_0x8004E40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x8004E418;
    }
}

loc_inl2_0x8004E410:
{
    r3 = (r3 + r0);
    goto loc_inl2_0x8004E41C;
}

loc_inl2_0x8004E418:
{
    r3 = 0;
}

loc_inl2_0x8004E41C:
{
}

loc_inl2_0x8004E420:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x8004E42C;
    }
}

loc_inl2_0x8004E424:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl2_cont_8004E400;
}

loc_inl2_0x8004E42C:
{
    r3 = 0;
}

loc_inl2_cont_8004E400:
{
    // end of inlined leaf 0x8004E400
    r5 = (r27 * 48);
    r6 = MemoryInline::FlatRead32(r29);
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r26 = (r26_rot_1 & -4);
    r0 = MemoryInline::FlatRead8((r6 + 108));
    r5 = (r5 + 31);
    r4 = (r5 & -32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8007350C:
{
    r23 = (r31 * r4);
    r0 = (r15 * 48);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    r4 = (r27 * 36);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073534;
    }
}

loc_80073520:
{
    r0 = (r4 + 31);
    r0 = (r0 & -32);
    r0 = (r31 * r0);
    MemoryInline::FlatWriteRam32((r1 + 248), r0);
    goto loc_8007353C;
}

loc_80073534:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 248), r0);
}

loc_8007353C:
{
    r0 = (r30 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80073540:
{
    r4 = MemoryInline::FlatRead8((r6 + 109));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r23 & r0);
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073570;
    }
}

loc_80073564:
{
    r0 = (r14 * 260);
    MemoryInline::FlatWriteRam32((r1 + 240), r0);
    goto loc_80073578;
}

loc_80073570:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 240), r0);
}

loc_80073578:
{
    r0 = (r30 & 2);
}

loc_8007357C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007358C;
    }
}

loc_80073580:
{
    r0 = (r14 * 100);
    MemoryInline::FlatWriteRam32((r1 + 236), r0);
    goto loc_80073594;
}

loc_8007358C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 236), r0);
}

loc_80073594:
{
    r0 = (r30 & 4);
}

loc_80073598:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800735A8;
    }
}

loc_8007359C:
{
    r0 = (r14 * 584);
    MemoryInline::FlatWriteRam32((r1 + 232), r0);
    goto loc_800735B0;
}

loc_800735A8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 232), r0);
}

loc_800735B0:
{
    r0 = (r30 & 8);
}

loc_800735B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800735C4;
    }
}

loc_800735B8:
{
    r0 = (r14 * 40);
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    goto loc_800735CC;
}

loc_800735C4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
}

loc_800735CC:
{
    r0 = (r30 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800735D0:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(28));
    r4 = (r4_rot_1 & 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r4 = (0 - r4);
    r0 = (r0 & r4);
    MemoryInline::FlatWriteRam32((r1 + 224), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800735F4;
    }
}

loc_800735E8:
{
    r0 = (r14 * 12);
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    goto loc_800735FC;
}

loc_800735F4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
}

loc_800735FC:
{
    r0 = (r30 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80073600:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(26));
    r6 = (r6_rot_1 & 1);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(25));
    r5 = (r5_rot_1 & 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(24));
    r4 = (r4_rot_2 & 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(23));
    r0 = (r0_rot_3 & 1);
    r10 = (0 - r6);
    r9 = (0 - r5);
    r7 = (0 - r4);
    r5 = (0 - r0);
    r0 = (r3 & r10);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(5));
    r8 = (r8_rot_1 & -32);
    MemoryInline::FlatWriteRam32((r1 + 216), r0);
    r0 = (r8 & r9);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(7));
    r6 = (r6_rot_2 & -128);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r0 = (r6 & r7);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(6));
    r4 = (r4_rot_3 & -64);
    MemoryInline::FlatWriteRam32((r1 + 208), r0);
    r0 = (r4 & r5);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007365C;
    }
}

loc_80073650:
{
    r0 = (r14 * 160);
    MemoryInline::FlatWriteRam32((r1 + 200), r0);
    goto loc_80073664;
}

loc_8007365C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 200), r0);
}

loc_80073664:
{
    r0 = (r30 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80073668:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(9));
    r3 = (r3_rot_1 & -512);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(21));
    r0 = (r0_rot_4 & 1);
    r22 = 0;
    r4 = (0 - r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r0 = (r3 & r4);
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007371C;
    }
}

loc_8007368C:
{
    r3 = r29;
    // inline leaf 0x8004E550 (13 guest instruction(s))
}

loc_inl3_0x8004E550:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl3_0x8004E55C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x8004E568;
    }
}

loc_inl3_0x8004E560:
{
    r3 = (r3 + r0);
    goto loc_inl3_0x8004E56C;
}

loc_inl3_0x8004E568:
{
    r3 = 0;
}

loc_inl3_0x8004E56C:
{
}

loc_inl3_0x8004E570:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x8004E57C;
    }
}

loc_inl3_0x8004E574:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl3_cont_8004E550;
}

loc_inl3_0x8004E57C:
{
    r3 = 0;
}

loc_inl3_cont_8004E550:
{
    // end of inlined leaf 0x8004E550
    r17 = r3;
    r3 = r29;
    // inline leaf 0x8004EB50 (13 guest instruction(s))
}

loc_inl4_0x8004EB50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_inl4_0x8004EB5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x8004EB68;
    }
}

loc_inl4_0x8004EB60:
{
    r3 = (r3 + r0);
    goto loc_inl4_0x8004EB6C;
}

loc_inl4_0x8004EB68:
{
    r3 = 0;
}

loc_inl4_0x8004EB6C:
{
}

loc_inl4_0x8004EB70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x8004EB7C;
    }
}

loc_inl4_0x8004EB74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl4_cont_8004EB50;
}

loc_inl4_0x8004EB7C:
{
    r3 = 0;
}

loc_inl4_cont_8004EB50:
{
    // end of inlined leaf 0x8004EB50
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r15 = r3;
    r18 = 0;
    goto loc_80073714;
}

loc_800736B4:
{
    r3 = r29;
    r4 = r18;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004E4F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r14 = r3;
    r19 = 0;
    goto loc_800736F0;
}

loc_800736CC:
{
    r3 = r29;
    r4 = r19;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004EAF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    r3 = (r1 + 56);
    ctx->lr = 0x800736E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004F3D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800736E8:
{
    if ((static_cast<uint32_t>(r14) == static_cast<uint32_t>(r3))) {
        goto loc_800736F8;
    }
}

loc_800736EC:
{
    r19 = (r19 + 1);
}

loc_800736F0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r19), static_cast<uint32_t>(r15));
}

loc_800736F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800736CC;
    }
}

loc_800736F8:
{
}

loc_800736FC:
{
    if ((static_cast<uint32_t>(r19) == static_cast<uint32_t>(r15))) {
        goto loc_80073710;
    }
}

loc_80073700:
{
    r3 = MemoryInline::FlatRead32(r14);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r22 = (r22 + r0);
}

loc_80073710:
{
    r18 = (r18 + 1);
}

loc_80073714:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r18), static_cast<uint32_t>(r17));
}

loc_80073718:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800736B4;
    }
}

loc_8007371C:
{
    r0 = (r30 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80073720:
{
    r21 = 0;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800737C0;
    }
}

loc_80073730:
{
    r3 = r29;
    // inline leaf 0x8004E6A0 (13 guest instruction(s))
}

loc_inl5_0x8004E6A0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_inl5_0x8004E6AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x8004E6B8;
    }
}

loc_inl5_0x8004E6B0:
{
    r3 = (r3 + r0);
    goto loc_inl5_0x8004E6BC;
}

loc_inl5_0x8004E6B8:
{
    r3 = 0;
}

loc_inl5_0x8004E6BC:
{
}

loc_inl5_0x8004E6C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x8004E6CC;
    }
}

loc_inl5_0x8004E6C4:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl5_cont_8004E6A0;
}

loc_inl5_0x8004E6CC:
{
    r3 = 0;
}

loc_inl5_cont_8004E6A0:
{
    // end of inlined leaf 0x8004E6A0
    r17 = r3;
    r3 = r29;
    // inline leaf 0x8004EB50 (13 guest instruction(s))
}

loc_inl6_0x8004EB50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_inl6_0x8004EB5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x8004EB68;
    }
}

loc_inl6_0x8004EB60:
{
    r3 = (r3 + r0);
    goto loc_inl6_0x8004EB6C;
}

loc_inl6_0x8004EB68:
{
    r3 = 0;
}

loc_inl6_0x8004EB6C:
{
}

loc_inl6_0x8004EB70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x8004EB7C;
    }
}

loc_inl6_0x8004EB74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl6_cont_8004EB50;
}

loc_inl6_0x8004EB7C:
{
    r3 = 0;
}

loc_inl6_cont_8004EB50:
{
    // end of inlined leaf 0x8004EB50
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    r15 = r3;
    r18 = 0;
    goto loc_800737B8;
}

loc_80073758:
{
    r3 = r29;
    r4 = r18;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004E640u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r14 = r3;
    r19 = 0;
    goto loc_80073794;
}

loc_80073770:
{
    r3 = r29;
    r4 = r19;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004EAF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    r3 = (r1 + 52);
    ctx->lr = 0x80073788u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004F420u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8007378C:
{
    if ((static_cast<uint32_t>(r14) == static_cast<uint32_t>(r3))) {
        goto loc_8007379C;
    }
}

loc_80073790:
{
    r19 = (r19 + 1);
}

loc_80073794:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r19), static_cast<uint32_t>(r15));
}

loc_80073798:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80073770;
    }
}

loc_8007379C:
{
}

loc_800737A0:
{
    if ((static_cast<uint32_t>(r19) == static_cast<uint32_t>(r15))) {
        goto loc_800737B4;
    }
}

loc_800737A4:
{
    r3 = MemoryInline::FlatRead32(r14);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r21 = (r21 + r0);
}

loc_800737B4:
{
    r18 = (r18 + 1);
}

loc_800737B8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r18), static_cast<uint32_t>(r17));
}

loc_800737BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80073758;
    }
}

loc_800737C0:
{
    r0 = (r30 & 16384);
}

loc_800737C4:
{
    r20 = 0;
    r19 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073884;
    }
}

loc_800737D0:
{
    r3 = r29;
    // inline leaf 0x8004E7F0 (13 guest instruction(s))
}

loc_inl7_0x8004E7F0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_inl7_0x8004E7FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl7_0x8004E808;
    }
}

loc_inl7_0x8004E800:
{
    r3 = (r3 + r0);
    goto loc_inl7_0x8004E80C;
}

loc_inl7_0x8004E808:
{
    r3 = 0;
}

loc_inl7_0x8004E80C:
{
}

loc_inl7_0x8004E810:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl7_0x8004E81C;
    }
}

loc_inl7_0x8004E814:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl7_cont_8004E7F0;
}

loc_inl7_0x8004E81C:
{
    r3 = 0;
}

loc_inl7_cont_8004E7F0:
{
    // end of inlined leaf 0x8004E7F0
    r17 = r3;
    r3 = r29;
    // inline leaf 0x8004EB50 (13 guest instruction(s))
}

loc_inl8_0x8004EB50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_inl8_0x8004EB5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl8_0x8004EB68;
    }
}

loc_inl8_0x8004EB60:
{
    r3 = (r3 + r0);
    goto loc_inl8_0x8004EB6C;
}

loc_inl8_0x8004EB68:
{
    r3 = 0;
}

loc_inl8_0x8004EB6C:
{
}

loc_inl8_0x8004EB70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl8_0x8004EB7C;
    }
}

loc_inl8_0x8004EB74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl8_cont_8004EB50;
}

loc_inl8_0x8004EB7C:
{
    r3 = 0;
}

loc_inl8_cont_8004EB50:
{
    // end of inlined leaf 0x8004EB50
    r15 = r3;
    r20_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r20 = (r20_rot_1 & -4);
    r24 = 0;
    goto loc_8007387C;
}

loc_800737F4:
{
    r3 = r29;
    r4 = r24;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004E790u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r14 = r3;
    r25 = 0;
    goto loc_80073858;
}

loc_8007380C:
{
    r3 = r29;
    r4 = r25;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004EAF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    r3 = (r1 + 48);
    r18 = 1;
    r4 = 0;
    ctx->lr = 0x8007382Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004F480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r14), static_cast<uint32_t>(r3));
}

loc_80073830:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007384C;
    }
}

loc_80073834:
{
    r3 = (r1 + 48);
    r4 = 1;
    ctx->lr = 0x80073840u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004F480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80073844:
{
    if ((static_cast<uint32_t>(r14) == static_cast<uint32_t>(r3))) {
        goto loc_8007384C;
    }
}

loc_80073848:
{
    r18 = 0;
}

loc_8007384C:
{
}

loc_80073850:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_80073860;
    }
}

loc_80073854:
{
    r25 = (r25 + 1);
}

loc_80073858:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(r15));
}

loc_8007385C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8007380C;
    }
}

loc_80073860:
{
}

loc_80073864:
{
    if ((static_cast<uint32_t>(r25) == static_cast<uint32_t>(r15))) {
        goto loc_80073878;
    }
}

loc_80073868:
{
    r3 = MemoryInline::FlatRead32(r14);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r19 = (r19 + r0);
}

loc_80073878:
{
    r24 = (r24 + 1);
}

loc_8007387C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(r17));
}

loc_80073880:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800737F4;
    }
}

loc_80073884:
{
    r3 = MemoryInline::FlatRead32((r1 + 140));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r3 + 447);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80073894:
{
    r0 = (r3 & -32);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 144), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 192), r0);
    r3 = (r0 + r26);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 188), r0);
    r3 = (r0 + r23);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 184), r0);
    r3 = r0;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 128), 0, 124u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 120u, (r1 + 248));
    r3 = (r3 + r0);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 180), r0);
    r3 = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_4, 116u, (r1 + 244));
    r3 = (r3 + r0);
    r0 = (r3 + 3);
    r0 = (r0 & -4);
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 176), r0);
    r3 = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r1 + 136));
    r3 = (r3 + r0);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 172), r0);
    r3 = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_4, 112u, (r1 + 240));
    r3 = (r3 + r0);
    r0 = (r3 + 3);
    r0 = (r0 & -4);
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 168), r0);
    r3 = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_4, 108u, (r1 + 236));
    r3 = (r3 + r0);
    r0 = (r3 + 3);
    r0 = (r0 & -4);
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 164), r0);
    r3 = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_4, 104u, (r1 + 232));
    r3 = (r3 + r0);
    r0 = (r3 + 3);
    r0 = (r0 & -4);
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 160), r0);
    r3 = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_4, 100u, (r1 + 228));
    r3 = (r3 + r0);
    r0 = (r3 + 3);
    r0 = (r0 & -4);
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 156), r0);
    r3 = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r1 + 224));
    r3 = (r3 + r0);
    r0 = (r3 + 3);
    r0 = (r0 & -4);
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 152), r0);
    r3 = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_4, 92u, (r1 + 220));
    r3 = (r3 + r0);
    r0 = (r3 + 3);
    r0 = (r0 & -4);
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 148), r0);
    r3 = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r1 + 216));
    r3 = (r3 + r0);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 144), r0);
    r3 = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_4, 84u, (r1 + 212));
    r3 = (r3 + r0);
    r0 = (r3 + 31);
    r14 = (r0 & -32);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 80u, (r1 + 208));
    r3 = (r14 + r0);
    r0 = (r3 + 31);
    r26 = (r0 & -32);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 76u, (r1 + 204));
    r3 = (r26 + r0);
    r0 = (r3 + 31);
    r25 = (r0 & -32);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r1 + 200));
    r3 = (r25 + r0);
    r0 = (r3 + 31);
    r24 = (r0 & -32);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 68u, (r1 + 196));
    r3 = (r24 + r0);
    r0 = (r3 + 31);
    r23 = (r0 & -32);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r1 + 132));
    r18 = (r23 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r1 + 128));
    r17 = (r18 + r0);
    r3 = (r17 + r20);
    r0 = (r3 + 31);
    r15 = (r0 & -32);
    r3 = (r15 + r22);
    r0 = (r3 + 31);
    r22 = (r0 & -32);
    r3 = (r22 + r21);
    r0 = (r3 + 31);
    r21 = (r0 & -32);
    r3 = (r21 + r19);
    r0 = (r3 + 31);
    r4 = (r0 & -32);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073A4C;
    }
}

loc_80073A44:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32(r3, r4);
}

loc_80073A4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80073A50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073FDC;
    }
}

loc_80073A54:
{
    r3 = r28;
    ctx->lr = 0x80073A5Cu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80199B98u>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
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
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80073A60:
{
    r16 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80073A70;
    }
}

loc_80073A68:
{
    r3 = 0;
    goto loc_80073FE0;
}

loc_80073A70:
{
    r19 = (r30 & 16777216);
}

loc_80073A74:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_80073A88;
    }
}

loc_80073A80:
{
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
}

loc_80073A88:
{
    r0 = MemoryInline::FlatRead32((r1 + 216));
}

loc_80073A90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073AA0;
    }
}

loc_80073A94:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    r4 = (r3 + r0);
    goto loc_80073AA4;
}

loc_80073AA0:
{
    r4 = 0;
}

loc_80073AA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 240));
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
}

loc_80073AB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073AC0;
    }
}

loc_80073AB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 172));
    r4 = (r3 + r0);
    goto loc_80073AC4;
}

loc_80073AC0:
{
    r4 = 0;
}

loc_80073AC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 236));
    MemoryInline::FlatWriteRam32((r1 + 72), r4);
}

loc_80073AD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073AE0;
    }
}

loc_80073AD4:
{
    r0 = MemoryInline::FlatRead32((r1 + 168));
    r4 = (r3 + r0);
    goto loc_80073AE4;
}

loc_80073AE0:
{
    r4 = 0;
}

loc_80073AE4:
{
    r0 = MemoryInline::FlatRead32((r1 + 232));
    MemoryInline::FlatWriteRam32((r1 + 76), r4);
}

loc_80073AF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073B00;
    }
}

loc_80073AF4:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    r4 = (r3 + r0);
    goto loc_80073B04;
}

loc_80073B00:
{
    r4 = 0;
}

loc_80073B04:
{
    r0 = MemoryInline::FlatRead32((r1 + 228));
    MemoryInline::FlatWriteRam32((r1 + 80), r4);
}

loc_80073B10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073B20;
    }
}

loc_80073B14:
{
    r0 = MemoryInline::FlatRead32((r1 + 160));
    r4 = (r3 + r0);
    goto loc_80073B24;
}

loc_80073B20:
{
    r4 = 0;
}

loc_80073B24:
{
    r0 = MemoryInline::FlatRead32((r1 + 224));
    MemoryInline::FlatWriteRam32((r1 + 84), r4);
}

loc_80073B30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073B40;
    }
}

loc_80073B34:
{
    r0 = MemoryInline::FlatRead32((r1 + 156));
    r4 = (r3 + r0);
    goto loc_80073B44;
}

loc_80073B40:
{
    r4 = 0;
}

loc_80073B44:
{
    r0 = MemoryInline::FlatRead32((r1 + 220));
    MemoryInline::FlatWriteRam32((r1 + 88), r4);
}

loc_80073B50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073B60;
    }
}

loc_80073B54:
{
    r0 = MemoryInline::FlatRead32((r1 + 152));
    r4 = (r3 + r0);
    goto loc_80073B64;
}

loc_80073B60:
{
    r4 = 0;
}

loc_80073B64:
{
    r0 = MemoryInline::FlatRead32((r1 + 212));
    MemoryInline::FlatWriteRam32((r1 + 92), r4);
}

loc_80073B70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073B80;
    }
}

loc_80073B74:
{
    r0 = MemoryInline::FlatRead32((r1 + 144));
    r4 = (r3 + r0);
    goto loc_80073B84;
}

loc_80073B80:
{
    r4 = 0;
}

loc_80073B84:
{
    r0 = MemoryInline::FlatRead32((r1 + 208));
    MemoryInline::FlatWriteRam32((r1 + 96), r4);
}

loc_80073B90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073B9C;
    }
}

loc_80073B94:
{
    r4 = (r3 + r14);
    goto loc_80073BA0;
}

loc_80073B9C:
{
    r4 = 0;
}

loc_80073BA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 204));
    MemoryInline::FlatWriteRam32((r1 + 100), r4);
}

loc_80073BAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073BB8;
    }
}

loc_80073BB0:
{
    r4 = (r3 + r26);
    goto loc_80073BBC;
}

loc_80073BB8:
{
    r4 = 0;
}

loc_80073BBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 200));
    MemoryInline::FlatWriteRam32((r1 + 104), r4);
}

loc_80073BC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073BD4;
    }
}

loc_80073BCC:
{
    r4 = (r3 + r25);
    goto loc_80073BD8;
}

loc_80073BD4:
{
    r4 = 0;
}

loc_80073BD8:
{
    r0 = MemoryInline::FlatRead32((r1 + 196));
    MemoryInline::FlatWriteRam32((r1 + 108), r4);
}

loc_80073BE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073BF0;
    }
}

loc_80073BE8:
{
    r4 = (r3 + r24);
    goto loc_80073BF4;
}

loc_80073BF0:
{
    r4 = 0;
}

loc_80073BF4:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    MemoryInline::FlatWriteRam32((r1 + 112), r4);
}

loc_80073C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073C0C;
    }
}

loc_80073C04:
{
    r4 = (r3 + r23);
    goto loc_80073C10;
}

loc_80073C0C:
{
    r4 = 0;
}

loc_80073C10:
{
    r0 = MemoryInline::FlatRead32((r1 + 128));
    MemoryInline::FlatWriteRam32((r1 + 116), r4);
}

loc_80073C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073C28;
    }
}

loc_80073C20:
{
    r0 = (r3 + r18);
    goto loc_80073C2C;
}

loc_80073C28:
{
    r0 = 0;
}

loc_80073C2C:
{
}

loc_80073C30:
{
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80073C40;
    }
}

loc_80073C38:
{
    r0 = (r3 + r17);
    goto loc_80073C44;
}

loc_80073C40:
{
    r0 = 0;
}

loc_80073C44:
{
    r18 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
}

loc_80073C50:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80073D04;
    }
}

loc_80073C54:
{
    r3 = r29;
    // inline leaf 0x8004E550 (13 guest instruction(s))
}

loc_inl9_0x8004E550:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl9_0x8004E55C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x8004E568;
    }
}

loc_inl9_0x8004E560:
{
    r3 = (r3 + r0);
    goto loc_inl9_0x8004E56C;
}

loc_inl9_0x8004E568:
{
    r3 = 0;
}

loc_inl9_0x8004E56C:
{
}

loc_inl9_0x8004E570:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x8004E57C;
    }
}

loc_inl9_0x8004E574:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl9_cont_8004E550;
}

loc_inl9_0x8004E57C:
{
    r3 = 0;
}

loc_inl9_cont_8004E550:
{
    // end of inlined leaf 0x8004E550
    r17 = r3;
    r3 = r29;
    // inline leaf 0x8004EB50 (13 guest instruction(s))
}

loc_inl10_0x8004EB50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_inl10_0x8004EB5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl10_0x8004EB68;
    }
}

loc_inl10_0x8004EB60:
{
    r3 = (r3 + r0);
    goto loc_inl10_0x8004EB6C;
}

loc_inl10_0x8004EB68:
{
    r3 = 0;
}

loc_inl10_0x8004EB6C:
{
}

loc_inl10_0x8004EB70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl10_0x8004EB7C;
    }
}

loc_inl10_0x8004EB74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl10_cont_8004EB50;
}

loc_inl10_0x8004EB7C:
{
    r3 = 0;
}

loc_inl10_cont_8004EB50:
{
    // end of inlined leaf 0x8004EB50
    r14 = r3;
    r20 = 0;
    goto loc_80073CFC;
}

loc_80073C74:
{
    r3 = r29;
    r4 = r20;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004E4F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r23 = 0;
    goto loc_80073CB4;
}

loc_80073C8C:
{
    r3 = r29;
    r4 = r23;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004EAF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = (r1 + 40);
    ctx->lr = 0x80073CA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004F3D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 44));
}

loc_80073CAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80073CBC;
    }
}

loc_80073CB0:
{
    r23 = (r23 + 1);
}

loc_80073CB4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(r14));
}

loc_80073CB8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80073C8C;
    }
}

loc_80073CBC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(r14));
}

loc_80073CC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073CEC;
    }
}

loc_80073CC4:
{
    r4 = (r16 + r15);
    MemoryInline::FlatWrite32(r18, r4);
    r3 = (r1 + 44);
    r5 = MemoryInline::FlatRead32((r1 + 44));
    r5 = MemoryInline::FlatRead32(r5);
    r0 = (r5 + 31);
    r0 = (r0 & -32);
    r15 = (r15 + r0);
    ctx->lr = 0x80073CE8u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80052540u>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
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
    xer = ctx->xer;
    goto loc_80073CF4;
}

loc_80073CEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWrite32(r18, r0);
}

loc_80073CF4:
{
    r18 = (r18 + 4);
    r20 = (r20 + 1);
}

loc_80073CFC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(r17));
}

loc_80073D00:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80073C74;
    }
}

loc_80073D04:
{
    r17 = MemoryInline::FlatRead32((r1 + 120));
}

loc_80073D0C:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_80073DC0;
    }
}

loc_80073D10:
{
    r3 = r29;
    // inline leaf 0x8004E6A0 (13 guest instruction(s))
}

loc_inl11_0x8004E6A0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_inl11_0x8004E6AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl11_0x8004E6B8;
    }
}

loc_inl11_0x8004E6B0:
{
    r3 = (r3 + r0);
    goto loc_inl11_0x8004E6BC;
}

loc_inl11_0x8004E6B8:
{
    r3 = 0;
}

loc_inl11_0x8004E6BC:
{
}

loc_inl11_0x8004E6C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl11_0x8004E6CC;
    }
}

loc_inl11_0x8004E6C4:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl11_cont_8004E6A0;
}

loc_inl11_0x8004E6CC:
{
    r3 = 0;
}

loc_inl11_cont_8004E6A0:
{
    // end of inlined leaf 0x8004E6A0
    r15 = r3;
    r3 = r29;
    // inline leaf 0x8004EB50 (13 guest instruction(s))
}

loc_inl12_0x8004EB50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_inl12_0x8004EB5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl12_0x8004EB68;
    }
}

loc_inl12_0x8004EB60:
{
    r3 = (r3 + r0);
    goto loc_inl12_0x8004EB6C;
}

loc_inl12_0x8004EB68:
{
    r3 = 0;
}

loc_inl12_0x8004EB6C:
{
}

loc_inl12_0x8004EB70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl12_0x8004EB7C;
    }
}

loc_inl12_0x8004EB74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl12_cont_8004EB50;
}

loc_inl12_0x8004EB7C:
{
    r3 = 0;
}

loc_inl12_cont_8004EB50:
{
    // end of inlined leaf 0x8004EB50
    r14 = r3;
    r18 = 0;
    goto loc_80073DB8;
}

loc_80073D30:
{
    r3 = r29;
    r4 = r18;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004E640u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r20 = 0;
    goto loc_80073D70;
}

loc_80073D48:
{
    r3 = r29;
    r4 = r20;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004EAF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = (r1 + 32);
    ctx->lr = 0x80073D60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004F420u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 36));
}

loc_80073D68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80073D78;
    }
}

loc_80073D6C:
{
    r20 = (r20 + 1);
}

loc_80073D70:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(r14));
}

loc_80073D74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80073D48;
    }
}

loc_80073D78:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(r14));
}

loc_80073D7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073DA8;
    }
}

loc_80073D80:
{
    r4 = (r16 + r22);
    MemoryInline::FlatWrite32(r17, r4);
    r3 = (r1 + 36);
    r5 = MemoryInline::FlatRead32((r1 + 36));
    r5 = MemoryInline::FlatRead32(r5);
    r0 = (r5 + 31);
    r0 = (r0 & -32);
    r22 = (r22 + r0);
    ctx->lr = 0x80073DA4u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80052620u>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
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
    xer = ctx->xer;
    goto loc_80073DB0;
}

loc_80073DA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWrite32(r17, r0);
}

loc_80073DB0:
{
    r17 = (r17 + 4);
    r18 = (r18 + 1);
}

loc_80073DB8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r18), static_cast<uint32_t>(r15));
}

loc_80073DBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80073D30;
    }
}

loc_80073DC0:
{
    r17 = MemoryInline::FlatRead32((r1 + 124));
}

loc_80073DC8:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_80073EA8;
    }
}

loc_80073DCC:
{
    r3 = r29;
    // inline leaf 0x8004E7F0 (13 guest instruction(s))
}

loc_inl13_0x8004E7F0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_inl13_0x8004E7FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl13_0x8004E808;
    }
}

loc_inl13_0x8004E800:
{
    r3 = (r3 + r0);
    goto loc_inl13_0x8004E80C;
}

loc_inl13_0x8004E808:
{
    r3 = 0;
}

loc_inl13_0x8004E80C:
{
}

loc_inl13_0x8004E810:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl13_0x8004E81C;
    }
}

loc_inl13_0x8004E814:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl13_cont_8004E7F0;
}

loc_inl13_0x8004E81C:
{
    r3 = 0;
}

loc_inl13_cont_8004E7F0:
{
    // end of inlined leaf 0x8004E7F0
    r15 = r3;
    r3 = r29;
    // inline leaf 0x8004EB50 (13 guest instruction(s))
}

loc_inl14_0x8004EB50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_inl14_0x8004EB5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl14_0x8004EB68;
    }
}

loc_inl14_0x8004EB60:
{
    r3 = (r3 + r0);
    goto loc_inl14_0x8004EB6C;
}

loc_inl14_0x8004EB68:
{
    r3 = 0;
}

loc_inl14_0x8004EB6C:
{
}

loc_inl14_0x8004EB70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl14_0x8004EB7C;
    }
}

loc_inl14_0x8004EB74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl14_cont_8004EB50;
}

loc_inl14_0x8004EB7C:
{
    r3 = 0;
}

loc_inl14_cont_8004EB50:
{
    // end of inlined leaf 0x8004EB50
    r14 = r3;
    r18 = 0;
    goto loc_80073EA0;
}

loc_80073DEC:
{
    r3 = r29;
    r4 = r18;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004E790u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r22 = 0;
    goto loc_80073E58;
}

loc_80073E04:
{
    r3 = r29;
    r4 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004EAF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 24);
    r20 = 1;
    r4 = 0;
    ctx->lr = 0x80073E24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004F480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80073E2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073E4C;
    }
}

loc_80073E30:
{
    r3 = (r1 + 24);
    r4 = 1;
    ctx->lr = 0x80073E3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004F480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 28));
}

loc_80073E44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80073E4C;
    }
}

loc_80073E48:
{
    r20 = 0;
}

loc_80073E4C:
{
}

loc_80073E50:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_80073E60;
    }
}

loc_80073E54:
{
    r22 = (r22 + 1);
}

loc_80073E58:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r14));
}

loc_80073E5C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80073E04;
    }
}

loc_80073E60:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r14));
}

loc_80073E64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073E90;
    }
}

loc_80073E68:
{
    r4 = (r16 + r21);
    MemoryInline::FlatWrite32(r17, r4);
    r3 = (r1 + 28);
    r5 = MemoryInline::FlatRead32((r1 + 28));
    r5 = MemoryInline::FlatRead32(r5);
    r0 = (r5 + 31);
    r0 = (r0 & -32);
    r21 = (r21 + r0);
    ctx->lr = 0x80073E8Cu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80052700u>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
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
    xer = ctx->xer;
    goto loc_80073E98;
}

loc_80073E90:
{
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWrite32(r17, r0);
}

loc_80073E98:
{
    r17 = (r17 + 4);
    r18 = (r18 + 1);
}

loc_80073EA0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r18), static_cast<uint32_t>(r15));
}

loc_80073EA4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80073DEC;
    }
}

loc_80073EA8:
{
}

loc_80073EAC:
{
    r14 = 0;
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_80073EB8;
    }
}

loc_80073EB4:
{
    r14 = (r14 | 1);
}

loc_80073EB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(0));
}

loc_80073EBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073FD4;
    }
}

loc_80073EC0:
{
    r0 = MemoryInline::FlatRead32((r1 + 248));
    r3 = MemoryInline::FlatRead32(r29);
}

loc_80073ECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073EDC;
    }
}

loc_80073ED0:
{
    r0 = MemoryInline::FlatRead32((r1 + 184));
    r9 = (r16 + r0);
    goto loc_80073EE0;
}

loc_80073EDC:
{
    r9 = 0;
}

loc_80073EE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80073EE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073EF8;
    }
}

loc_80073EEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 180));
    r10 = (r16 + r0);
    goto loc_80073EFC;
}

loc_80073EF8:
{
    r10 = 0;
}

loc_80073EFC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = r16;
    r0 = MemoryInline::FlatRead32((r1 + 192));
    r4 = r28;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r5 = (r1 + 20);
    r7 = (r16 + r0);
    r0 = MemoryInline::FlatRead32((r1 + 188));
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    r6 = (r16 + 416);
    r8 = (r16 + r0);
    ctx->lr = 0x80073F2Cu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80072A70u>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
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
    xer = ctx->xer;
    r4 = 0x80270000u;
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 64), 0, 116u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 112u, (r1 + 176));
    r4 = (r4 + 12872);
    guest_range_1 = MemoryInline::ResolveRangeHost(r16, 0, 392u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r16, r4);
    r3 = 0;
    r0 = (r16 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 312u, (r16 + 312), r3);
    r5 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 64));
    MemoryInline::WriteResolved32(guest_range_1, 316u, (r16 + 316), r3);
    r4 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 68));
    MemoryInline::WriteResolved32(guest_range_1, 320u, (r16 + 320), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 324u, (r16 + 324), r5);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 76));
    MemoryInline::WriteResolved32(guest_range_1, 328u, (r16 + 328), r4);
    r5 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r1 + 80));
    MemoryInline::WriteResolved32(guest_range_1, 332u, (r16 + 332), r3);
    r4 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r1 + 84));
    MemoryInline::WriteResolved32(guest_range_1, 336u, (r16 + 336), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r1 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 340u, (r16 + 340), r5);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r1 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 344u, (r16 + 344), r4);
    r5 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r1 + 96));
    MemoryInline::WriteResolved32(guest_range_1, 348u, (r16 + 348), r3);
    r4 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r1 + 100));
    MemoryInline::WriteResolved32(guest_range_1, 352u, (r16 + 352), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r1 + 104));
    MemoryInline::WriteResolved32(guest_range_1, 356u, (r16 + 356), r5);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r1 + 108));
    MemoryInline::WriteResolved32(guest_range_1, 360u, (r16 + 360), r4);
    r5 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r1 + 112));
    MemoryInline::WriteResolved32(guest_range_1, 364u, (r16 + 364), r3);
    r4 = MemoryInline::ReadResolved32(guest_range_5, 52u, (r1 + 116));
    MemoryInline::WriteResolved32(guest_range_1, 368u, (r16 + 368), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r1 + 120));
    MemoryInline::WriteResolved32(guest_range_1, 372u, (r16 + 372), r5);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 60u, (r1 + 124));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 376u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 376u, (r16 + 376), r4);
        MemoryInline::WriteResolved32(guest_range_1, 380u, (r16 + 380), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 384u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_1, 384u, (r16 + 384), r0);
        MemoryInline::WriteResolved32(guest_range_1, 388u, (r16 + 388), r14);
    }
}

loc_80073FD4:
{
    r3 = r16;
    ctx->lr = 0x80073FDCu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80074CA0u>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
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
    xer = ctx->xer;
}

loc_80073FDC:
{
    r3 = r16;
}

loc_80073FE0:
{
    r11 = (r1 + 336);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 340));
    ctx->lr = r0;
    r1 = (r1 + 336);
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80073470 func_80073470 preserves=true fpr_mask=0x00000000
