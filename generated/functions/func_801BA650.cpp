#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BA650(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_addze_src_0 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801BA650;

loc_801BA650:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r29 = r3;
    r28 = r4;
    r27 = r5;
    r26 = r6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80350000u;
    r31 = r3;
    r4 = (r4 + 2144);
    r0 = MemoryInline::FlatRead32((r4 + 36));
    MemoryInline::FlatWriteRam16((r4 + 22), static_cast<uint16_t>(r29));
}

loc_801BA690:
{
    MemoryInline::FlatWriteRam16((r4 + 24), static_cast<uint16_t>(r28));
    MemoryInline::FlatWriteRam16((r4 + 26), static_cast<uint16_t>(r27));
    MemoryInline::FlatWriteRam16((r4 + 28), static_cast<uint16_t>(r26));
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801BA6A4;
    }
}

loc_801BA6A0:
{
    goto loc_801BA6C0;
}

loc_801BA6A4:
{
}

loc_801BA6A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_801BA6B0;
    }
}

loc_801BA6AC:
{
    goto loc_801BA6C0;
}

loc_801BA6B0:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_801BA6B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801BA6C0;
    }
}

loc_801BA6BC:
{
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r26 = (r26_rot_1 & 65534);
}

loc_801BA6C0:
{
    r4 = 0x80350000u;
    r3 = MemoryInline::FlatRead16((r13 + -24732));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r5 = (r4 + 2144);
    r4 = MemoryInline::FlatRead16((r4 + 2144));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r26));
    r3 = (r4 + r3);
    r6 = (720 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(720) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r30 = MemoryInline::FlatRead32((r5 + 84));
}

loc_801BA6E8:
{
    r5 = MemoryInline::FlatRead16((r30 + 2));
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r6))) {
        goto loc_801BA6F4;
    }
}

loc_801BA6F0:
{
    goto loc_801BA6FC;
}

loc_801BA6F4:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r3) >> 31);
    r6 = (r3 & ~r0);
}

loc_801BA6FC:
{
    r4 = 0x80350000u;
    r9 = MemoryInline::FlatRead16((r13 + -24730));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r4 = (r4 + 2144);
    r7 = MemoryInline::FlatRead16((r4 + 2));
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r12 = (r7 & 1);
    r7 = (r0 + r9);
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r6));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
}

loc_801BA72C:
{
    r0 = r12;
    r4 = (r3 + 1);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r12))) {
        goto loc_801BA73C;
    }
}

loc_801BA738:
{
    r0 = r7;
}

loc_801BA73C:
{
    r3 = 0x80350000u;
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r3 = (r3 + 2144);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 70u, true, false);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 2));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 6));
    r26 = (r6 - r12);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r8 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 2));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r11 = (r9 + r6);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 6));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r9 = (r8 + r9);
    r6 = (r6 + r11);
    r27 = (r11 - r12);
    r6 = (r6 - r26);
    r7 = (r7 + r11);
    r8 = (0 - r6);
    r12 = (r9 - r12);
    r10 = (r8 & ~r6);
    r26 = (r7 - r26);
    r28 = (static_cast<int32_t>(r10) >> 31);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 66u, (r3 + 68));
    r11 = (static_cast<int32_t>(r27) >> 31);
    r9 = (0 - r26);
    r10 = (static_cast<int32_t>(r12) >> 31);
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r29 = (r27 & r11);
    r9 = (r9 & ~r26);
    r11 = (static_cast<int32_t>(r9) >> 31);
    r12 = (r12 & r10);
    r9 = (static_cast<int32_t>(r27) >> 31);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r3 + 28));
    r9 = (r27 & r9);
    r27 = (r6 & r28);
    r26 = (r26 & r11);
    r0 = (r5 + r29);
    r9 = PPC_Divw(static_cast<int32_t>(r9), static_cast<int32_t>(r4));
    r11 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r3 + 24));
    r0 = (r0 - r27);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 26));
    MemoryInline::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
}

loc_801BA7E8:
{
    r6 = PPC_Divw(static_cast<int32_t>(r12), static_cast<int32_t>(r4));
    r5 = (r10 + r9);
    r28 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 4));
    r0 = r7;
    r4 = PPC_Divw(static_cast<int32_t>(r26), static_cast<int32_t>(r4));
    r6 = (r11 - r6);
    MemoryInline::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r6));
    r4 = (r5 - r4);
    MemoryInline::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r4));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801BA814;
    }
}

loc_801BA810:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 131070);
}

loc_801BA814:
{
    r6 = (r0 & 65535);
}

loc_801BA81C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r28))) {
        goto loc_801BA870;
    }
}

loc_801BA820:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 16776960);
    r3 = MemoryInline::FlatRead32((r13 + -24720));
    r4 = (r28 + r0);
    r0 = MemoryInline::FlatRead32((r13 + -24716));
    r5 = (r4 + -1);
    r5 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r28));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r13 + -24716), r0);
    r4 = 0x80350000u;
    MemoryInline::FlatWrite32((r13 + -24720), r3);
    r4 = (r4 + 2024);
    r3 = MemoryInline::FlatRead32((r13 + -24720));
    r5 = (r5 | 4096);
    r0 = MemoryInline::FlatRead32((r13 + -24716));
    MemoryInline::FlatWriteRam16((r4 + 74), static_cast<uint16_t>(r5));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r13 + -24716), r0);
    MemoryInline::FlatWriteRam16((r4 + 112), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r13 + -24720), r3);
    goto loc_801BA894;
}

loc_801BA870:
{
    r3 = MemoryInline::FlatRead32((r13 + -24720));
    r4 = 0x80350000u;
    r0 = MemoryInline::FlatRead32((r13 + -24716));
    r4 = (r4 + 2024);
    r5 = 256;
    r0 = (r0 | 67108864);
    MemoryInline::FlatWriteRam16((r4 + 74), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r13 + -24716), r0);
    MemoryInline::FlatWrite32((r13 + -24720), r3);
}

loc_801BA894:
{
    r4 = 0x80350000u;
    r4 = (r4 + 2144);
    r3 = MemoryInline::FlatRead16((r4 + 18));
    r5 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r3 + 15);
    r3 = MemoryInline::FlatRead16((r4 + 22));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801BA8B4:
{
    r0_addze_src_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_0 + r0_ca_0);
    MemoryInline::FlatWriteRam8((r4 + 44), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BA8C8;
    }
}

loc_801BA8C0:
{
    r9 = (r0 & 255);
    goto loc_801BA8CC;
}

loc_801BA8C8:
{
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 254);
}

loc_801BA8CC:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & -268435456);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 - r3);
    r5 = MemoryInline::FlatRead32((r13 + -24720));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -1);
    r4 = MemoryInline::FlatRead32((r13 + -24716));
    r8 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r13 + -24696));
    r6 = (r8 & 255);
    r3 = 0x80350000u;
    r7 = (r7 + r6);
    r4 = (r4 | 134217728);
    r7 = (r7 + 15);
    r3 = (r3 + 2144);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r7) >> 4);
    MemoryInline::FlatWrite32((r13 + -24716), r4);
    r6 = 0x80350000u;
    r4 = r9;
    r7_addze_src_0 = r7;
    r7_ca_0 = (xer >> 29) & 1u;
    r7 = (r7_addze_src_0 + r7_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addze_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r7_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801BA91C:
{
    r6 = (r6 + 2024);
    MemoryInline::FlatWriteRam8((r3 + 45), static_cast<uint8_t>(r9));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r4_mrot_0 = (r4_rot_0 & 65280);
    r4_mdest_0 = (r4 & -65281);
    r4 = (r4_mdest_0 | r4_mrot_0);
    MemoryInline::FlatWriteRam8((r3 + 60), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 46), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam16((r6 + 72), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r13 + -24720), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BA950;
    }
}

loc_801BA93C:
{
    r4 = (r3 + 52);
    r5 = (r3 + 56);
    r6 = (r3 + 76);
    r7 = (r3 + 80);
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801B9A40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_801BA950:
{
    r4 = 0x80350000u;
    r4 = (r4 + 2144);
    r0 = MemoryInline::FlatRead32((r4 + 64));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead16((r4 + 10));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = MemoryInline::FlatRead8(r30);
    r6 = MemoryInline::FlatRead16((r30 + 2));
    r7 = MemoryInline::FlatRead16((r30 + 4));
    r8 = MemoryInline::FlatRead16((r30 + 6));
    r9 = MemoryInline::FlatRead16((r30 + 8));
    r10 = MemoryInline::FlatRead16((r30 + 10));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801B9DD8u>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 48);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
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

// RECOMP_GUEST_ABI gpr_read=0xFC003FFB gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801BA650 func_801BA650 preserves=true fpr_mask=0x00000000
