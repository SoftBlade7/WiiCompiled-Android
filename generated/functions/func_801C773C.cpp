#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C773C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
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
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C773C;

loc_801C773C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r26 = r3;
    r27 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80350000u;
    r28 = r3;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & 1020);
    r0 = 2;
    r4 = (r4 + 2352);
    r3 = 0;
    r4_addr_0 = (r4 + r5);
    r31 = MemoryInline::FlatRead32(r4_addr_0);
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r31 + 2248));
    r4 = (r4 * 96);
    r4 = (r31 + r4);
    r30 = (r4 + 160);
    ctr = r0;
}

loc_801C7790:
{
    r30_addr_2 = (r30 + r5);
    MemoryInline::FlatWrite8(r30_addr_2, static_cast<uint8_t>(r3));
    r4 = (r30 + r5);
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r30 + r5);
    r30_addr_3 = (r30 + r5);
    MemoryInline::FlatWrite8(r30_addr_3, static_cast<uint8_t>(r3));
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r30 + r5);
    r30_addr_4 = (r30 + r5);
    MemoryInline::FlatWrite8(r30_addr_4, static_cast<uint8_t>(r3));
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r30 + r5);
    r30_addr_5 = (r30 + r5);
    MemoryInline::FlatWrite8(r30_addr_5, static_cast<uint8_t>(r3));
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r30 + r5);
    r30_addr_6 = (r30 + r5);
    MemoryInline::FlatWrite8(r30_addr_6, static_cast<uint8_t>(r3));
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r30 + r5);
    r30_addr_7 = (r30 + r5);
    MemoryInline::FlatWrite8(r30_addr_7, static_cast<uint8_t>(r3));
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C7790;
    }
}

loc_801C7884:
{
    r3 = MemoryInline::FlatRead8((r27 + 2));
    r0 = MemoryInline::FlatRead8((r27 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0 = (r0 & 40735);
}

loc_801C7894:
{
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 2232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C78A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C78B4;
    }
}

loc_801C78A4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_801C78A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C78B4;
    }
}

loc_801C78AC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_801C78B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C78C0;
    }
}

loc_801C78B4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r0));
    goto loc_801C78C8;
}

loc_801C78C0:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r0));
}

loc_801C78C8:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
    r3 = 0x80350000u;
    r3 = (r3 + 16504);
    r4 = (r27 + 3);
    MemoryInline::FlatWrite8((r30 + 40), static_cast<uint8_t>(r0));
    r5 = 8;
    r0 = MemoryInline::FlatRead8((r27 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite32((r31 + 2120), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r26;
    r4 = (r27 + 3);
    r5 = 8;
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB0A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r31 + 2112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C790C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C7EE8;
    }
}

loc_801C7910:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
}

loc_801C7918:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801C7A98;
    }
}

loc_801C791C:
{
    r3 = MemoryInline::FlatRead8((r31 + 2248));
    guest_range_2 = MemoryInline::ResolveRangeHost((r27 + 3), 0, 6u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r27 + 3));
    r3 = (r3 * 96);
    r3 = (r31 + r3);
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r27 + 4));
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r27 + 5));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r27 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6 = MemoryInline::FlatRead16((r31 + 2190));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = (r5 & -4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 3);
    r4 = (static_cast<int32_t>(r4) >> 2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r4 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r3 + 202), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r27 + 6));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r27 + 8));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r6 = MemoryInline::FlatRead16((r31 + 2192));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & 3);
    r4 = (static_cast<int32_t>(r4) >> 4);
    r5 = (r5 & -4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r4 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r3 + 204), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r27 + 7));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r27 + 8));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r5 = MemoryInline::FlatRead16((r31 + 2194));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 6);
    r4 = (r4 & -4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r4 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r5);
    MemoryInline::FlatWrite16((r3 + 206), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r27 + 8));
    r4 = MemoryInline::FlatRead16((r3 + 160));
    r0 = ~(r0 | r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_6 & 24576);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 160), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2321));
}

loc_801C79F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C7A14;
    }
}

loc_801C79F4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 2321), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 208));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r31 + 2178), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 209));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r31 + 2184), static_cast<uint16_t>(r0));
}

loc_801C7A14:
{
    r4 = MemoryInline::FlatRead16((r31 + 2178));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 208));
    r5 = (r4 & 255);
    r4 = MemoryInline::FlatRead16((r31 + 2184));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = (r0 - r5);
    r0 = MemoryInline::FlatRead8((r3 + 209));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r4 = (r4 & 255);
}

loc_801C7A38:
{
    r0 = (r0 - r4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(-128))) {
        goto loc_801C7A50;
    }
}

loc_801C7A44:
{
    r0 = -128;
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
    goto loc_801C7A68;
}

loc_801C7A50:
{
}

loc_801C7A54:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(127))) {
        goto loc_801C7A64;
    }
}

loc_801C7A58:
{
    r0 = 127;
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
    goto loc_801C7A68;
}

loc_801C7A64:
{
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r5));
}

loc_801C7A68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-128));
}

loc_801C7A6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C7A7C;
    }
}

loc_801C7A70:
{
    r0 = -128;
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r0));
    goto loc_801C7EB4;
}

loc_801C7A7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(127));
}

loc_801C7A80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801C7A90;
    }
}

loc_801C7A84:
{
    r0 = 127;
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r0));
    goto loc_801C7EB4;
}

loc_801C7A90:
{
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r4));
    goto loc_801C7EB4;
}

loc_801C7A98:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801C7A9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C7EB4;
    }
}

loc_801C7AA0:
{
    r0 = MemoryInline::FlatRead8((r31 + 2242));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801C7AA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C7B8C;
    }
}

loc_801C7AAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C7ABC;
    }
}

loc_801C7AB0:
{
}

loc_801C7AB4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_801C7AC8;
    }
}

loc_801C7AB8:
{
    goto loc_801C7D10;
}

loc_801C7ABC:
{
}

loc_801C7AC0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_801C7D10;
    }
}

loc_801C7AC4:
{
    goto loc_801C7C7C;
}

loc_801C7AC8:
{
    r3 = MemoryInline::FlatRead8((r31 + 2248));
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 3), 0, 6u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r27 + 3));
    r3 = (r3 * 96);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_7 & 1008);
    r4 = (r31 + r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    r29 = (r4 + 160);
    MemoryInline::FlatWrite16((r4 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r27 + 4));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & 1008);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 206), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r27 + 4));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r27 + 5));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r27 + 3));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_9 & 6);
    r5 = (static_cast<int32_t>(r5) >> 7);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0_mrot_1 = (r0_rot_10 & 24);
    r0_mdest_1 = (r0 & -25);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r4 = (static_cast<int32_t>(r4) >> 3);
    r0 = (r5 | r0);
    r3 = (static_cast<int32_t>(r3) >> 5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_11 & -32);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r27 + 5));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_12 & 992);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r27 + 5));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r27 + 6));
    r3 = (static_cast<int32_t>(r3) >> 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r0_mrot_2 = (r3 & 24);
    r0_mdest_2 = (r0 & -25);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_13 & 248);
    MemoryInline::FlatWrite8((r29 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r27 + 6));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & 248);
    MemoryInline::FlatWrite8((r29 + 53), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r27 + 7));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r27 + 8));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_15 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0 = (r0 ^ 65535);
    MemoryInline::FlatWrite16((r29 + 42), static_cast<uint16_t>(r0));
    goto loc_801C7D10;
}

loc_801C7B8C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 3), 0, 9u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r27 + 3));
    r4 = MemoryInline::FlatRead8((r31 + 2248));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r27 + 7));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 & -4);
    r0 = (r0 & 3);
    r4 = (r4 * 96);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 | r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = (r31 + r4);
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 204), static_cast<uint16_t>(r0));
    r29 = (r4 + 160);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r27 + 7));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 4));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_21 & 3);
    r3 = (static_cast<int32_t>(r3) >> 2);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 | r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r27 + 7));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r27 + 5));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r0 = (r0_rot_22 & 3);
    r3 = (static_cast<int32_t>(r3) >> 4);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 | r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r29 + 46), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r27 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r27 + 7));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 6);
    r3 = (r3 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 | r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r27 + 8));
    MemoryInline::FlatWrite8((r29 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r27 + 9));
    MemoryInline::FlatWrite8((r29 + 53), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r27 + 10));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r27 + 11));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_5 = (r0_rot_23 & 65280);
    r0_mdest_5 = (r0 & -65281);
    r0 = (r0_mdest_5 | r0_mrot_5);
    r0 = (r0 ^ 65535);
    MemoryInline::FlatWrite16((r29 + 42), static_cast<uint16_t>(r0));
    goto loc_801C7D10;
}

loc_801C7C7C:
{
    r3 = MemoryInline::FlatRead8((r31 + 2248));
    guest_range_3 = MemoryInline::ResolveRangeHost((r27 + 3), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r27 + 3));
    r3 = (r3 * 96);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = (r31 + r3);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    r29 = (r4 + 160);
    MemoryInline::FlatWrite16((r4 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r27 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 208), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r27 + 5));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 206), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r27 + 6));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 210), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r27 + 7));
    MemoryInline::FlatWrite8((r4 + 212), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r27 + 8));
    MemoryInline::FlatWrite8((r4 + 213), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r27 + 9));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r27 + 10));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_4 = (r0_rot_20 & 65280);
    r0_mdest_4 = (r0 & -65281);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r0 = (r0 ^ 65535);
    MemoryInline::FlatWrite16((r4 + 202), static_cast<uint16_t>(r0));
}

loc_801C7D10:
{
    r0 = MemoryInline::FlatRead8((r31 + 2321));
}

loc_801C7D18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C7D54;
    }
}

loc_801C7D1C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 2321), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2178), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2184), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2196), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 52));
    MemoryInline::FlatWrite8((r31 + 2202), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    MemoryInline::FlatWrite8((r31 + 2203), static_cast<uint8_t>(r0));
}

loc_801C7D54:
{
    r4 = MemoryInline::FlatRead16((r31 + 2178));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead16((r31 + 2184));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = (r0 - r4);
    r0 = MemoryInline::FlatRead16((r29 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 - r3);
}

loc_801C7D74:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(-512))) {
        goto loc_801C7D88;
    }
}

loc_801C7D7C:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    goto loc_801C7DA0;
}

loc_801C7D88:
{
}

loc_801C7D8C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(511))) {
        goto loc_801C7D9C;
    }
}

loc_801C7D90:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    goto loc_801C7DA0;
}

loc_801C7D9C:
{
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r4));
}

loc_801C7DA0:
{
}

loc_801C7DA4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-512))) {
        goto loc_801C7DB4;
    }
}

loc_801C7DA8:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r29 + 46), static_cast<uint16_t>(r0));
    goto loc_801C7DCC;
}

loc_801C7DB4:
{
}

loc_801C7DB8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(511))) {
        goto loc_801C7DC8;
    }
}

loc_801C7DBC:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r29 + 46), static_cast<uint16_t>(r0));
    goto loc_801C7DCC;
}

loc_801C7DC8:
{
    MemoryInline::FlatWrite16((r29 + 46), static_cast<uint16_t>(r3));
}

loc_801C7DCC:
{
    r4 = MemoryInline::FlatRead16((r31 + 2190));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead16((r31 + 2196));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = (r0 - r4);
    r0 = MemoryInline::FlatRead16((r29 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 - r3);
}

loc_801C7DEC:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(-512))) {
        goto loc_801C7E00;
    }
}

loc_801C7DF4:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    goto loc_801C7E18;
}

loc_801C7E00:
{
}

loc_801C7E04:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(511))) {
        goto loc_801C7E14;
    }
}

loc_801C7E08:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    goto loc_801C7E18;
}

loc_801C7E14:
{
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r4));
}

loc_801C7E18:
{
}

loc_801C7E1C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-512))) {
        goto loc_801C7E2C;
    }
}

loc_801C7E20:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r0));
    goto loc_801C7E44;
}

loc_801C7E2C:
{
}

loc_801C7E30:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(511))) {
        goto loc_801C7E40;
    }
}

loc_801C7E34:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r0));
    goto loc_801C7E44;
}

loc_801C7E40:
{
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r3));
}

loc_801C7E44:
{
    r4 = MemoryInline::FlatRead8((r31 + 2202));
    r0 = MemoryInline::FlatRead8((r29 + 52));
    r3 = MemoryInline::FlatRead8((r31 + 2203));
    r4 = (r0 - r4);
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 - r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_801C7E74;
    }
}

loc_801C7E68:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 52), static_cast<uint8_t>(r0));
    goto loc_801C7E78;
}

loc_801C7E74:
{
    MemoryInline::FlatWrite8((r29 + 52), static_cast<uint8_t>(r4));
}

loc_801C7E78:
{
}

loc_801C7E7C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801C7E8C;
    }
}

loc_801C7E80:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 53), static_cast<uint8_t>(r0));
    goto loc_801C7E90;
}

loc_801C7E8C:
{
    MemoryInline::FlatWrite8((r29 + 53), static_cast<uint8_t>(r3));
}

loc_801C7E90:
{
    r3 = (r13 + -24500);
    r3_addr_1 = (r3 + r26);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C7E9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C7EB4;
    }
}

loc_801C7EA0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r29 + 52), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 53), static_cast<uint8_t>(r0));
}

loc_801C7EB4:
{
    r3 = 0x80350000u;
    r4 = 0x802A0000u;
    r3 = (r3 + 16504);
    r5 = 8;
    r4 = (r4 + -6696);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801C7ED0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C7EE8;
    }
}

loc_801C7ED4:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C7EE8;
    }
}

loc_801C7EE0:
{
    r0 = -7;
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r0));
}

loc_801C7EE8:
{
    r0 = MemoryInline::FlatRead8((r31 + 2248));
    r3 = r28;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_27 & 255);
    MemoryInline::FlatWrite8((r31 + 2248), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC003FFB gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C773C func_801C773C preserves=true fpr_mask=0x00000000
