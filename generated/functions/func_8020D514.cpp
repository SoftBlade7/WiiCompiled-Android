#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020D514(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r1_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
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
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8020D514;

loc_8020D514:
{
    r11 = (r1 & 63);
    r12 = r1;
    r11_subfic_ra_0 = r11;
    r11 = (-256 - r11_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-256) >= static_cast<uint32_t>(r11_subfic_ra_0) ? 1u : 0u) << 29);
    r1_addr_0 = (r1 + r11);
    MemoryInline::FlatWrite32(r1_addr_0, r1);
    r1 = r1_addr_0;
    r0 = ctx->lr;
    r11 = r12;
    MemoryInline::FlatWriteRam32((r12 + 4), r0);
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
    r26 = r3;
    r28 = r4;
    r27 = r5;
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8020C400u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    // inline leaf 0x80208ED8 (11 guest instruction(s))
}

loc_inl1_0x80208ED8:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_inl1_0x80208EE0:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x80208EFC;
    }
}

loc_inl1_0x80208EE4:
{
    r4 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_inl1_0x80208EEC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80208EFC;
    }
}

loc_inl1_0x80208EF0:
{
    r0 = (r3 * 320);
    r3 = (r4 + r0);
    goto loc_inl1_cont_80208ED8;
}

loc_inl1_0x80208EFC:
{
    r3 = 0;
}

loc_inl1_cont_80208ED8:
{
    // end of inlined leaf 0x80208ED8
    r0 = (r27 & 31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020D550:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020D55C;
    }
}

loc_8020D554:
{
    r3 = 0;
    goto loc_8020D768;
}

loc_8020D55C:
{
    r3 = r28;
    r4 = r27;
    r5 = (r1 + 72);
    r6 = (r1 + 80);
    r7 = (r1 + 68);
    r8 = (r1 + 76);
    r9 = (r1 + 64);
    // inline leaf 0x8020BA14 (26 guest instruction(s))
}

loc_inl2_0x8020BA14:
{
    r0 = 0;
    r11 = (r3 & 31);
}

loc_inl2_0x8020BA1C:
{
    MemoryInline::FlatWriteRam32(r8, r0);
    MemoryInline::FlatWriteRam32(r6, r0);
    MemoryInline::FlatWriteRam32(r9, r0);
    MemoryInline::FlatWriteRam32(r7, r0);
    MemoryInline::FlatWriteRam32(r5, r0);
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8020BA4C;
    }
}

loc_inl2_0x8020BA34:
{
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32(r6, r3);
    MemoryInline::FlatWriteRam32(r7, r4);
    MemoryInline::FlatWriteRam32(r8, r0);
    MemoryInline::FlatWriteRam32(r9, r0);
    goto loc_inl2_cont_8020BA14;
}

loc_inl2_0x8020BA4C:
{
    r10 = (r4 + -32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_inl2_0x8020BA50:
{
    r0 = (32 - r11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r11) ? 1u : 0u) << 29);
    MemoryInline::FlatWriteRam32(r5, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x8020BA68;
    }
}

loc_inl2_0x8020BA5C:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam32(r6, r0);
    MemoryInline::FlatWriteRam32(r7, r10);
}

loc_inl2_0x8020BA68:
{
    r0 = (r3 + r4);
    MemoryInline::FlatWriteRam32(r9, r11);
    r0 = (r0 - r11);
    MemoryInline::FlatWriteRam32(r8, r0);
}

loc_inl2_cont_8020BA14:
{
    // end of inlined leaf 0x8020BA14
    r5 = MemoryInline::FlatRead32((r1 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8020D584:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020D61C;
    }
}

loc_8020D588:
{
    r3 = 274857984;
    r30 = MemoryInline::FlatRead32((r13 + -24200));
    r25 = (r3 + 19923);
    r31 = 0;
    r24 = 0x80000000u;
    r23 = 0;
    goto loc_8020D600;
}

loc_8020D5A4:
{
    r3 = r26;
    r4 = r28;
    r5 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x8019B884u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_8020D5B8:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020D5CC;
    }
}

loc_8020D5C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-2));
}

loc_8020D5C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020D5CC;
    }
}

loc_8020D5C8:
{
    goto loc_8020D60C;
}

loc_8020D5CC:
{
    r0 = MemoryInline::FlatRead32((r24 + 248));
    r6 = MemoryInline::FlatRead32((r13 + -24196));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & 1073741823);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r25) * static_cast<uint64_t>(r0)) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r6) >> 31);
    r4 = (r23 * r6);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r5 = (r5_rot_2 & 67108863);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r6)) >> 32));
    r0 = (r5 * r0);
    r3 = (r3 + r4);
    r4 = (r5 * r6);
    r3 = (r3 + r0);
    ctx->lr = 0x8020D600u;
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
    InvokeDirectCpu<0x801AACA8u>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_8020D600:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8020D604:
{
    r30 = (r30 + -1);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8020D5A4;
    }
}

loc_8020D60C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8020D610:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020D764;
    }
}

loc_8020D614:
{
    r3 = r31;
    goto loc_8020D768;
}

loc_8020D61C:
{
    r4 = r28;
    r3 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r3 = 274857984;
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r13 + -24200));
    r25 = (r3 + 19923);
    r31 = 0;
    r24 = 0x80000000u;
    r23 = 0;
    goto loc_8020D6A4;
}

loc_8020D648:
{
    r3 = r26;
    r5 = r30;
    r4 = (r1 + 128);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x8019B884u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_8020D65C:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020D670;
    }
}

loc_8020D664:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-2));
}

loc_8020D668:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020D670;
    }
}

loc_8020D66C:
{
    goto loc_8020D6B0;
}

loc_8020D670:
{
    r0 = MemoryInline::FlatRead32((r24 + 248));
    r6 = MemoryInline::FlatRead32((r13 + -24196));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & 1073741823);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r25) * static_cast<uint64_t>(r0)) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r6) >> 31);
    r4 = (r23 * r6);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r5 = (r5_rot_4 & 67108863);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r6)) >> 32));
    r0 = (r5 * r0);
    r3 = (r3 + r4);
    r4 = (r5 * r6);
    r3 = (r3 + r0);
    ctx->lr = 0x8020D6A4u;
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
    InvokeDirectCpu<0x801AACA8u>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_8020D6A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8020D6A8:
{
    r29 = (r29 + -1);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8020D648;
    }
}

loc_8020D6B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8020D6B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020D6C0;
    }
}

loc_8020D6B8:
{
    r3 = r31;
    goto loc_8020D768;
}

loc_8020D6C0:
{
    r4 = MemoryInline::FlatRead32((r1 + 68));
    r3 = 274857984;
    r0 = MemoryInline::FlatRead32((r1 + 64));
    r23 = (r3 + 19923);
    r29 = MemoryInline::FlatRead32((r1 + 80));
    r31 = 0;
    r28 = MemoryInline::FlatRead32((r13 + -24200));
    r30 = (r4 + r0);
    r24 = 0x80000000u;
    r25 = 0;
    goto loc_8020D748;
}

loc_8020D6EC:
{
    r3 = r26;
    r4 = r29;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x8019B884u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_8020D700:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020D714;
    }
}

loc_8020D708:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-2));
}

loc_8020D70C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020D714;
    }
}

loc_8020D710:
{
    goto loc_8020D754;
}

loc_8020D714:
{
    r0 = MemoryInline::FlatRead32((r24 + 248));
    r6 = MemoryInline::FlatRead32((r13 + -24196));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_6 & 1073741823);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r23) * static_cast<uint64_t>(r0)) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r6) >> 31);
    r4 = (r25 * r6);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r5 = (r5_rot_6 & 67108863);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r6)) >> 32));
    r0 = (r5 * r0);
    r3 = (r3 + r4);
    r4 = (r5 * r6);
    r3 = (r3 + r0);
    ctx->lr = 0x8020D748u;
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
    InvokeDirectCpu<0x801AACA8u>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_8020D748:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8020D74C:
{
    r28 = (r28 + -1);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8020D6EC;
    }
}

loc_8020D754:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8020D758:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020D764;
    }
}

loc_8020D75C:
{
    r3 = r31;
    goto loc_8020D768;
}

loc_8020D764:
{
    r3 = r27;
}

loc_8020D768:
{
    r10 = MemoryInline::FlatRead32(r1);
    r11 = r10;
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
    r0 = MemoryInline::FlatRead32((r10 + 4));
    ctx->lr = r0;
    r1 = r10;
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
// RECOMP_REGISTRATION base 0x8020D514 func_8020D514 preserves=true fpr_mask=0x00000000
