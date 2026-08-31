#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D5C80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r10_addr_6 = 0;
    uint32_t r10_addr_7 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D5C80;

loc_801D5C80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r28 = r3;
    r29 = r4;
    r31 = 0x802A0000u;
    r30 = r28;
    r3 = r29;
    r31 = (r31 + 5240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = (r3 + 2);
    r0 = 3;
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801D5CC0:
{
    r27 = 0;
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_801D5E04;
    }
}

loc_801D5CC8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
}

loc_801D5CCC:
{
    r27 = (r4 * 3);
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D5D9C;
    }
}

loc_801D5CD8:
{
    r12 = MemoryInline::FlatRead8(r29);
    r10 = MemoryInline::FlatRead8((r29 + 1));
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r12)));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(4));
    r9 = (r9_rot_2 & 48);
    r11 = (static_cast<int32_t>(r11) >> 2);
    r7 = MemoryInline::FlatRead8((r29 + 2));
    r31_addr_2 = (r31 + r11);
    r11 = MemoryInline::FlatRead8(r31_addr_2);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & 60);
    r9 = (r31 + r9);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r30, static_cast<uint8_t>(r11));
    r10 = (static_cast<int32_t>(r5) >> 4);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (r7 & 63);
    r10_addr_2 = (r10 + r9);
    r9 = MemoryInline::FlatRead8(r10_addr_2);
    r5 = (r31 + r8);
    r12 = MemoryInline::FlatRead8((r29 + 3));
    r6 = (static_cast<int32_t>(r6) >> 6);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 1), static_cast<uint8_t>(r9));
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r12)));
    r10 = MemoryInline::FlatRead8((r29 + 4));
    r6_addr_2 = (r6 + r5);
    r5 = MemoryInline::FlatRead8(r6_addr_2);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(4));
    r9 = (r9_rot_3 & 48);
    r7 = MemoryInline::FlatRead8((r29 + 5));
    r11 = (static_cast<int32_t>(r11) >> 2);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 2), static_cast<uint8_t>(r5));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & 60);
    r9 = (r31 + r9);
    r31_addr_3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31_addr_3);
    r10 = (static_cast<int32_t>(r5) >> 4);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5 = (r31 + r8);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 3), static_cast<uint8_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0 = (r7 & 63);
    r29 = (r29 + 6);
    r31_addr_4 = (r31 + r11);
    r11 = MemoryInline::FlatRead8(r31_addr_4);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 4), static_cast<uint8_t>(r11));
    r10_addr_3 = (r10 + r9);
    r9 = MemoryInline::FlatRead8(r10_addr_3);
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 5), static_cast<uint8_t>(r9));
    r6_addr_3 = (r6 + r5);
    r5 = MemoryInline::FlatRead8(r6_addr_3);
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 6), static_cast<uint8_t>(r5));
    r31_addr_5 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31_addr_5);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 7), static_cast<uint8_t>(r0));
    r30 = (r30 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D5CD8;
    }
}

loc_801D5D94:
{
    r4 = (r4 & 1);
}

loc_801D5D98:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801D5E04;
    }
}

loc_801D5D9C:
{
    ctr = r4;
}

loc_801D5DA0:
{
    r12 = MemoryInline::FlatRead8(r29);
    r10 = MemoryInline::FlatRead8((r29 + 1));
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r12)));
    r7 = MemoryInline::FlatRead8((r29 + 2));
    r11 = (static_cast<int32_t>(r11) >> 2);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(4));
    r9 = (r9_rot_6 & 48);
    r31_addr_8 = (r31 + r11);
    r11 = MemoryInline::FlatRead8(r31_addr_8);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r8 = (r8_rot_6 & 60);
    r9 = (r31 + r9);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r11));
    r10 = (static_cast<int32_t>(r5) >> 4);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5 = (r31 + r8);
    r10_addr_6 = (r10 + r9);
    r9 = MemoryInline::FlatRead8(r10_addr_6);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0 = (r7 & 63);
    r29 = (r29 + 3);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r9));
    r6_addr_6 = (r6 + r5);
    r5 = MemoryInline::FlatRead8(r6_addr_6);
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r5));
    r31_addr_9 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31_addr_9);
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    r30 = (r30 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D5DA0;
    }
}

loc_801D5E04:
{
    r0 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_801D5E0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D5E1C;
    }
}

loc_801D5E10:
{
    r0 = 61;
    MemoryInline::FlatWrite8((r30 + -1), static_cast<uint8_t>(r0));
    goto loc_801D5E34;
}

loc_801D5E1C:
{
    r0 = (r3 + 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_801D5E24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D5E34;
    }
}

loc_801D5E28:
{
    r0 = 61;
    MemoryInline::FlatWrite8((r30 + -2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + -1), static_cast<uint8_t>(r0));
}

loc_801D5E34:
{
    r0 = 0;
    r3 = r28;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

// RECOMP_GUEST_ABI gpr_read=0xF8001FFB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D5C80 func_801D5C80 preserves=true fpr_mask=0x00000000
