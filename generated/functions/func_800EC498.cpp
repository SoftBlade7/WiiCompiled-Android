#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EC498(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mdest_6 = 0;
    uint32_t r3_mdest_7 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_mrot_6 = 0;
    uint32_t r3_mrot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mdest_5 = 0;
    uint32_t r4_mdest_6 = 0;
    uint32_t r4_mdest_7 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_mrot_5 = 0;
    uint32_t r4_mrot_6 = 0;
    uint32_t r4_mrot_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mdest_4 = 0;
    uint32_t r5_mdest_5 = 0;
    uint32_t r5_mdest_6 = 0;
    uint32_t r5_mdest_7 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_mrot_4 = 0;
    uint32_t r5_mrot_5 = 0;
    uint32_t r5_mrot_6 = 0;
    uint32_t r5_mrot_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800EC498;

loc_800EC498:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -784), 0, 792u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -784), r1);
    r1 = (r1 + -784);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 788u, (r1 + 788), r0);
    r11 = (r1 + 784);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 756u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 756u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 760u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 764u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 764u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 768u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 772u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 772u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 776u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 780u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = MemoryInline::FlatRead32(r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_0 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800EC4B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EC4D8;
    }
}

loc_800EC4BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EC4CC;
    }
}

loc_800EC4C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800EC4C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EC698;
    }
}

loc_800EC4C8:
{
    goto loc_800EC6A0;
}

loc_800EC4CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_800EC4D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EC6A0;
    }
}

loc_800EC4D4:
{
    goto loc_800EC690;
}

loc_800EC4D8:
{
    r31 = MemoryInline::FlatRead32((r4 + 4));
    r0 = -1;
    r30 = MemoryInline::FlatRead32((r4 + 8));
    r27 = 0;
    r29 = MemoryInline::FlatRead32((r3 + 36));
    r26 = (r31 & r0);
}

loc_800EC4F0:
{
}

loc_800EC4F4:
{
    if ((static_cast<int32_t>(r26) > static_cast<int32_t>(0))) {
        goto loc_800EC500;
    }
}

loc_800EC4F8:
{
    r0 = 0;
    goto loc_800EC66C;
}

loc_800EC500:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r5 = (r5_rot_2 & 16711680);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -16777216);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(24));
    r3 = (r3_rot_2 & 16711680);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -16777216);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r5_mrot_2 = (r5_rot_3 & 255);
    r5_mdest_2 = (r5 & -256);
    r5 = (r5_mdest_2 | r5_mrot_2);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
    r4_mrot_2 = (r4_rot_3 & 65280);
    r4_mdest_2 = (r4 & -65281);
    r4 = (r4_mdest_2 | r4_mrot_2);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(24));
    r3_mrot_2 = (r3_rot_3 & 255);
    r3_mdest_2 = (r3 & -256);
    r3 = (r3_mdest_2 | r3_mrot_2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_3 & 65280);
    r0_mdest_2 = (r0 & -65281);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0 = (r3 | r0);
    r4 = (r5 | r4);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r3 = (r3_rot_4 & -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(1));
}

loc_800EC530:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & -1);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EC574;
    }
}

loc_800EC540:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EC5A0;
    }
}

loc_800EC544:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_800EC548:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EC550;
    }
}

loc_800EC54C:
{
    goto loc_800EC5A0;
}

loc_800EC550:
{
    r3 = (r1 + 488);
    r4 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E9F0Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = (r1 + 488);
    r4 = (r1 + 16);
    r5 = 8;
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
    InvokeDirectCpu<0x800EA04Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r28 = (r3 & 127);
    goto loc_800EC5A0;
}

loc_800EC574:
{
    r3 = (r1 + 144);
    // inline leaf 0x801D1DD4 (16 guest instruction(s))
    r7 = 1732575232;
    r6 = -271712256;
    r0 = 0;
    r5 = -1732575232;
    r4 = 271712256;
    r7 = (r7 + 8961);
    r6 = (r6 + -21623);
    r5 = (r5 + -8962);
    r4 = (r4 + 21622);
    MemoryInline::FlatWriteRam32(r3, r7);
    MemoryInline::FlatWriteRam32((r3 + 4), r6);
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r4);
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    // end of inlined leaf 0x801D1DD4
    r3 = (r1 + 144);
    r4 = (r1 + 16);
    r5 = 8;
    ctx->lr = 0x800EC58Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D1E14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 144);
    r4 = (r1 + 40);
    ctx->lr = 0x800EC598u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D1F04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 40));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r28 = (static_cast<int32_t>(r0) >> 1);
}

loc_800EC5A0:
{
    r3 = (r31 ^ r26);
    r0 = (r30 ^ r28);
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r28);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r28) >> 31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EC668;
    }
}

loc_800EC5B4:
{
    r25 = 0;
}

loc_800EC5B8:
{
}

loc_800EC5BC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(r25))) {
        goto loc_800EC654;
    }
}

loc_800EC5C0:
{
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r5 = (r5_rot_5 & 16711680);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
    r4 = (r4_rot_5 & -16777216);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(24));
    r3 = (r3_rot_6 & 16711680);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -16777216);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r5_mrot_4 = (r5_rot_6 & 255);
    r5_mdest_4 = (r5 & -256);
    r5 = (r5_mdest_4 | r5_mrot_4);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
    r4_mrot_4 = (r4_rot_6 & 65280);
    r4_mdest_4 = (r4 & -65281);
    r4 = (r4_mdest_4 | r4_mrot_4);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(24));
    r3_mrot_4 = (r3_rot_7 & 255);
    r3_mdest_4 = (r3 & -256);
    r3 = (r3_mdest_4 | r3_mrot_4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(8));
    r0_mrot_4 = (r0_rot_7 & 65280);
    r0_mdest_4 = (r0 & -65281);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r0 = (r3 | r0);
    r4 = (r5 | r4);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r3 = (r3_rot_8 & -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(1));
}

loc_800EC5F0:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & -1);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EC630;
    }
}

loc_800EC600:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EC654;
    }
}

loc_800EC604:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_800EC608:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EC610;
    }
}

loc_800EC60C:
{
    goto loc_800EC654;
}

loc_800EC610:
{
    r3 = (r1 + 232);
    r4 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E9F0Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = (r1 + 232);
    r4 = (r1 + 8);
    r5 = 8;
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
    InvokeDirectCpu<0x800EA04Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    goto loc_800EC654;
}

loc_800EC630:
{
    r3 = (r1 + 56);
    // inline leaf 0x801D1DD4 (16 guest instruction(s))
    r7 = 1732575232;
    r6 = -271712256;
    r0 = 0;
    r5 = -1732575232;
    r4 = 271712256;
    r7 = (r7 + 8961);
    r6 = (r6 + -21623);
    r5 = (r5 + -8962);
    r4 = (r4 + 21622);
    MemoryInline::FlatWriteRam32(r3, r7);
    MemoryInline::FlatWriteRam32((r3 + 4), r6);
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r4);
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    // end of inlined leaf 0x801D1DD4
    r3 = (r1 + 56);
    r4 = (r1 + 8);
    r5 = 8;
    ctx->lr = 0x800EC648u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D1E14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 56);
    r4 = (r1 + 24);
    ctx->lr = 0x800EC654u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D1F04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800EC654:
{
    r25 = (r25 + 1);
}

loc_800EC65C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(2))) {
        goto loc_800EC5B8;
    }
}

loc_800EC660:
{
    r0 = 0;
    goto loc_800EC66C;
}

loc_800EC668:
{
    r0 = 1;
}

loc_800EC66C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800EC670:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EC678;
    }
}

loc_800EC674:
{
    goto loc_800EC688;
}

loc_800EC678:
{
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(2));
}

loc_800EC680:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800EC4F0;
    }
}

loc_800EC684:
{
    r26 = 0;
}

loc_800EC688:
{
    r3 = r26;
    goto loc_800EC6A4;
}

loc_800EC690:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    goto loc_800EC6A4;
}

loc_800EC698:
{
    r3 = -1;
    goto loc_800EC6A4;
}

loc_800EC6A0:
{
    r3 = 0;
}

loc_800EC6A4:
{
    r11 = (r1 + 784);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 788));
    ctx->lr = r0;
    r1 = (r1 + 784);
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE002FFB gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800EC498 func_800EC498 preserves=true fpr_mask=0x00000000
