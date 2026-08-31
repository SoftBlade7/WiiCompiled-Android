#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019159C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
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

    goto loc_8019159C;

loc_8019159C:
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
}

loc_801915B4:
{
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80191788;
    }
}

loc_801915C8:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0 = (r0_rot_0 & 130560);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r31 = (r31_rot_0 & 1020);
    r3 = (r3 + r0);
    r30 = (r3 + 1032);
    r30_addr_0 = (r30 + r31);
    r3 = MemoryInline::FlatRead32(r30_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801915E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801915F0;
    }
}

loc_801915E4:
{
    // inline leaf 0x801925D8 (3 guest instruction(s))
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    // end of inlined leaf 0x801925D8
    r0 = 0;
    r30_addr_1 = (r30 + r31);
    MemoryInline::FlatWrite32(r30_addr_1, r0);
}

loc_801915F0:
{
    r4 = 0x80190000u;
    r5 = r23;
    r4 = (r4 + 9524);
    r3 = 31;
    ctx->lr = 0x80191604u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80125178u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80191608:
{
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801917B0;
    }
}

loc_80191610:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80190FA8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8019161C:
{
    r28 = r3;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8019177C;
    }
}

loc_80191624:
{
    r5 = 0x80340000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r4 = (r3 * 76);
    r5 = MemoryInline::FlatRead32((r5 + 20700));
    r3 = (r23 + r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 510);
    r27 = (r5 + r4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 4), 0, 28u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r27 + 4), r29);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r27 + 8), r23);
    }
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r27 + 12), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r27 + 13), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r27 + 14), static_cast<uint8_t>(r26));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
}

loc_80191660:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8019166C;
    }
}

loc_80191664:
{
    r5 = 0;
    goto loc_801916BC;
}

loc_8019166C:
{
    r0 = (r0 * 24);
    r3 = MemoryInline::FlatRead32((r23 + 12));
    r5 = 1;
    r4 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r27 + 16), r4);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r3 = MemoryInline::FlatRead32((r23 + 16));
    r0 = (r0 * 80);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r27 + 20), r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r3 = MemoryInline::FlatRead32((r23 + 20));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r27 + 24), r3);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r3 = MemoryInline::FlatRead32((r23 + 24));
    r0 = (r0 * 46);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r27 + 28), r0);
}

loc_801916BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801916C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80191758;
    }
}

loc_801916C4:
{
    r30_addr_3 = (r30 + r31);
    MemoryInline::FlatWrite32(r30_addr_3, r27);
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r23 + 1028));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r23 + 1028), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x80191F64u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = r27;
    // inline leaf 0x80191D3C (10 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 14));
    r4 = 0x80290000u;
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r4 + -7784);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    // end of inlined leaf 0x80191D3C
    r3 = r27;
    // inline leaf 0x80191D64 (6 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 236));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80191D64
    r3 = r27;
    ctx->lr = 0x801916F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80191958u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r27;
    // inline leaf 0x80191D90 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 104));
    r0 = MemoryInline::FlatRead32((r3 + 108));
    r0 = (r4 + r0);
    r3 = (static_cast<int32_t>(r0) >> 16);
    // end of inlined leaf 0x80191D90
    r25 = r3;
    r3 = r27;
    // inline leaf 0x80191D7C (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 44));
    r0 = MemoryInline::FlatRead32((r3 + 52));
    r0 = (r4 + r0);
    r3 = (static_cast<int32_t>(r0) >> 16);
    // end of inlined leaf 0x80191D7C
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
    r4 = r3;
    r6 = (r23 + r0);
    r5 = (r23 + r24);
    r0 = MemoryInline::FlatRead32((r6 + 172));
    r3 = r29;
    r6 = MemoryInline::FlatRead8((r5 + 236));
    r7 = r25;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r0) >> 16);
    ctx->lr = 0x80191730u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8018FA08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801924F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r3 = r27;
    ctx->lr = 0x80191740u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80191FCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWriteRam16((r29 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 28));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam32((r29 + 28), r0);
    goto loc_801917B0;
}

loc_80191758:
{
    r0 = 0;
    r3 = r29;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r27 + 8), r0);
    // inline leaf 0x80190358 (11 guest instruction(s))
    r4 = 0x80340000u;
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r4 = (r4 + 18984);
    r3 = 0x80340000u;
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 19084));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 100);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_2, r4);
    // end of inlined leaf 0x80190358
    r3 = r28;
    // inline leaf 0x80191010 (10 guest instruction(s))
    r5 = 0x80340000u;
    r4 = 0x80340000u;
    r5 = (r5 + 18968);
    r0 = -1;
    r5_addr_1 = (r5 + r3);
    r6 = MemoryInline::FlatRead8(r5_addr_1);
    r4 = (r4 + 18984);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r5_addr_2 = (r5 + r3);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r0));
    r4_addr_3 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80191010
    r3 = r29;
    ctx->lr = 0x80191778u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801250FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_801917B0;
}

loc_8019177C:
{
    r3 = r29;
    ctx->lr = 0x80191784u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801250FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_801917B0;
}

loc_80191788:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r4 = (r4_rot_1 & 130560);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 1020);
    r3 = (r3 + r4);
    r23 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r23 + 1032));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801917A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801917B0;
    }
}

loc_801917A4:
{
    // inline leaf 0x801925D8 (3 guest instruction(s))
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    // end of inlined leaf 0x801925D8
    r0 = 0;
    MemoryInline::FlatWrite32((r23 + 1032), r0);
}

loc_801917B0:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8019159C func_8019159C preserves=true fpr_mask=0x00000000
