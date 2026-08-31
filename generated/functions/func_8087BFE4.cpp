#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8087BFE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r0_addc_right_4 = 0;
    uint32_t r0_addc_right_5 = 0;
    uint32_t r0_addc_right_6 = 0;
    uint32_t r0_addc_right_7 = 0;
    uint32_t r0_addc_right_8 = 0;
    uint32_t r0_addc_right_9 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_adde_left_3 = 0;
    uint32_t r0_adde_left_4 = 0;
    uint32_t r0_adde_left_5 = 0;
    uint32_t r0_adde_left_6 = 0;
    uint32_t r0_adde_left_7 = 0;
    uint32_t r0_adde_left_8 = 0;
    uint32_t r0_adde_left_9 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_ca_9 = 0;
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
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_8087BFE4;

loc_8087BFE4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r24);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r26);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r28);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r30);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r31);
    }
    r28 = 0x808E0000u;
    r24 = r3;
    r28 = (r28 + -14040);
    r0 = MemoryInline::FlatRead8((r3 + 17277));
}

loc_8087C008:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087C01C;
    }
}

loc_8087C00C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // inline leaf 0x80555578 (21 guest instruction(s))
    r4 = -1293680640;
    r10 = MemoryInline::FlatRead32((r3 + 12));
    r7 = (r4 + -11215);
    r9 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 5308416;
    r5 = 1761804288;
    r0 = (r4 + -28995);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r10) * static_cast<uint64_t>(r7)) >> 32));
    r8 = (r5 + 31154);
    r5 = 0;
    r4 = (r9 * r7);
    r7 = (r10 * r7);
    r6 = (r6 + r4);
    r0_addc_right_1 = r0;
    r0 = (r7 + r0_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r4 = (r10 * r8);
    r0 = (r6 + r4);
    r0_adde_left_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_1 + r5);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = r0;
    // end of inlined leaf 0x80555578
}

loc_8087C01C:
{
    r27 = 0;
    r30 = 0x809C0000u;
    r25 = 1;
    r29 = 0;
    goto loc_8087C0FC;
}

loc_8087C030:
{
    r0 = (r27 & 255);
    r0 = (r0 * 28);
    r31 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r31 + 16));
}

loc_8087C044:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8087C0F8;
    }
}

loc_8087C048:
{
    r3 = MemoryInline::FlatRead32((r30 + -10448));
    r26 = MemoryInline::FlatRead8((r31 + 25));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead8((r24 + 2812));
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_4 = r0;
    r0 = (r8 + r0_addc_right_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_4)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_4 = r0;
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_4 + r6);
    r0 = (r0 + r0_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r4 = MemoryInline::FlatRead8(r24);
    r5 = (r3 & 255);
    r6 = 0;
    goto loc_8087C088;
}

loc_8087C06C:
{
    r0 = (r6 & 255);
    r0 = (r0 * 28);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 25));
}

loc_8087C080:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8087C094;
    }
}

loc_8087C084:
{
    r6 = (r6 + 1);
}

loc_8087C088:
{
    r0 = (r6 & 255);
}

loc_8087C090:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8087C06C;
    }
}

loc_8087C094:
{
    r0 = (r6 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8087C09C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087C0C0;
    }
}

loc_8087C0A0:
{
    r3 = (r5 * 20);
    MemoryInline::FlatWrite8((r31 + 25), static_cast<uint8_t>(r5));
    r3 = (r24 + r3);
    r0 = (r26 * 20);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r25));
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r29));
    goto loc_8087C0F8;
}

loc_8087C0C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087C0F8;
    }
}

loc_8087C0C4:
{
    r0 = (r0 * 28);
    r4 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_8087C0D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8087C0F8;
    }
}

loc_8087C0D8:
{
    r0 = (r5 * 20);
    MemoryInline::FlatWrite8((r31 + 25), static_cast<uint8_t>(r5));
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r25));
    r0 = (r26 * 20);
    MemoryInline::FlatWrite8((r4 + 25), static_cast<uint8_t>(r26));
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r25));
}

loc_8087C0F8:
{
    r27 = (r27 + 1);
}

loc_8087C0FC:
{
    r0 = MemoryInline::FlatRead8(r24);
    r3 = (r27 & 255);
}

loc_8087C108:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087C030;
    }
}

loc_8087C10C:
{
    r0 = 254;
    r6 = 1;
    ctr = r0;
}

loc_8087C118:
{
    r5 = MemoryInline::FlatRead8(r24);
    r4 = (r6 & 255);
    r7 = 0;
    r8 = 0;
    goto loc_8087C150;
}

loc_8087C12C:
{
    r0 = (r8 & 255);
    r0 = (r0 * 28);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_8087C140:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8087C14C;
    }
}

loc_8087C144:
{
    r0 = (r7 + 1);
    r7 = (r0 & 255);
}

loc_8087C14C:
{
    r8 = (r8 + 1);
}

loc_8087C150:
{
    r0 = (r8 & 255);
}

loc_8087C158:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_8087C12C;
    }
}

loc_8087C15C:
{
    r4 = 0;
    r5 = 0;
    goto loc_8087C1A0;
}

loc_8087C168:
{
    r0 = (r4 & 255);
    r3 = MemoryInline::FlatRead8((r24 + 3));
    r0 = (r7 + r0);
}

loc_8087C178:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8087C1B0;
    }
}

loc_8087C17C:
{
    r0 = (r5 & 255);
    r0 = (r0 * 28);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_8087C190:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8087C19C;
    }
}

loc_8087C194:
{
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r6));
    r4 = (r4 + 1);
}

loc_8087C19C:
{
    r5 = (r5 + 1);
}

loc_8087C1A0:
{
    r0 = MemoryInline::FlatRead8(r24);
    r3 = (r5 & 255);
}

loc_8087C1AC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087C168;
    }
}

loc_8087C1B0:
{
    r0 = (r4 & 255);
    r0 = (r7 + r0);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8087C1C0;
    }
}

loc_8087C1BC:
{
    MemoryInline::FlatWrite8((r24 + 8441), static_cast<uint8_t>(r6));
}

loc_8087C1C0:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087C118;
    }
}

loc_8087C1C8:
{
    r7 = 0;
    MemoryInline::FlatWrite8((r24 + 8440), static_cast<uint8_t>(r7));
    r0 = (r7 * 136);
    r8 = 0;
    MemoryInline::FlatWrite32((r24 + 8444), r7);
    r4 = 1;
    MemoryInline::FlatWrite32((r24 + 17172), r7);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite32((r24 + 17176), r7);
    MemoryInline::FlatWrite32((r3 + 8468), r7);
    MemoryInline::FlatWrite32((r24 + 17180), r7);
    MemoryInline::FlatWrite32((r24 + 17184), r7);
    goto loc_8087C230;
}

loc_8087C1FC:
{
    r6 = MemoryInline::FlatRead8((r24 + 17278));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r0 = (r8 & 255);
    r8 = (r8 + 1);
    r5 = (0 - r6);
    r3 = (r24 + r3);
    r5 = (r5 | r6);
    r6 = (r24 + r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r5) >> 31);
    r0 = (r0 & 4);
    MemoryInline::FlatWrite32((r3 + 17188), r0);
    MemoryInline::FlatWrite8((r6 + 17236), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r6 + 17249), static_cast<uint8_t>(r7));
}

loc_8087C230:
{
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r3 = (r8 & 255);
}

loc_8087C23C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087C1FC;
    }
}

loc_8087C240:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r24 + 17261), static_cast<uint8_t>(r0));
    r4 = 0;
    goto loc_8087C260;
}

loc_8087C250:
{
    r0 = (r4 & 255);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 7942), static_cast<uint8_t>(r4));
    r4 = (r4 + 1);
}

loc_8087C260:
{
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r3 = (r4 & 255);
}

loc_8087C26C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087C250;
    }
}

loc_8087C270:
{
    r26 = 0;
    r25 = 0x809C0000u;
    goto loc_8087C2A8;
}

loc_8087C27C:
{
    r3 = MemoryInline::FlatRead32((r25 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_7 = r0;
    r0 = (r8 + r0_addc_right_7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_7)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_7 = r0;
    r0_ca_7 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_7 + r6);
    r0 = (r0 + r0_ca_7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_7)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_7)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r0 = (r26 & 255);
    r3 = (r24 + r3);
    r5 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 7942));
    r4 = MemoryInline::FlatRead8((r5 + 7942));
    r26 = (r26 + 1);
    MemoryInline::FlatWrite8((r5 + 7942), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 7942), static_cast<uint8_t>(r4));
}

loc_8087C2A8:
{
    r4 = MemoryInline::FlatRead8((r24 + 7916));
    r0 = (r26 & 255);
}

loc_8087C2B4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8087C27C;
    }
}

loc_8087C2B8:
{
    r4 = MemoryInline::FlatRead8((r24 + 8456));
    r6 = 0;
    r0 = MemoryInline::FlatRead8(r24);
    r5 = MemoryInline::FlatRead8((r24 + 17277));
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r24 + 8448), r6);
    r0 = (r3 + -1);
}

loc_8087C2D8:
{
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    MemoryInline::FlatWrite8((r24 + 8457), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8087C2EC;
    }
}

loc_8087C2E4:
{
    r6 = 16;
    goto loc_8087C2F0;
}

loc_8087C2EC:
{
    r6 = 32;
}

loc_8087C2F0:
{
}

loc_8087C2F4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8087C300;
    }
}

loc_8087C2F8:
{
    r6 = (r6 + 19);
    goto loc_8087C304;
}

loc_8087C300:
{
    r6 = (r6 + 35);
}

loc_8087C304:
{
    r4 = MemoryInline::FlatRead8((r24 + 7917));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r24 + 8448));
}

loc_8087C314:
{
    MemoryInline::FlatWrite32((r24 + 8460), r6);
    r0 = (r6 - r0);
    r6 = (r6 + 4);
    MemoryInline::FlatWrite32((r24 + 8452), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8087C370;
    }
}

loc_8087C328:
{
}

loc_8087C32C:
{
    r0 = (r4 + 248);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_8087C364;
    }
}

loc_8087C334:
{
    r3 = (r0 & 255);
    r0 = (r3 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8087C348:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_8087C364;
    }
}

loc_8087C34C:
{
    r5 = (r5 + 8);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087C34C;
    }
}

loc_8087C358:
{
    goto loc_8087C364;
}

loc_8087C35C:
{
    r6 = (r6 + 4);
    r5 = (r5 + 1);
}

loc_8087C364:
{
    r0 = (r5 & 255);
}

loc_8087C36C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8087C35C;
    }
}

loc_8087C370:
{
}

loc_8087C374:
{
    r5 = 0;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8087C3C4;
    }
}

loc_8087C37C:
{
}

loc_8087C380:
{
    r0 = (r4 + 248);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_8087C3B8;
    }
}

loc_8087C388:
{
    r3 = (r0 & 255);
    r0 = (r3 + 7);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    ctr = r0;
}

loc_8087C39C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_8087C3B8;
    }
}

loc_8087C3A0:
{
    r5 = (r5 + 8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087C3A0;
    }
}

loc_8087C3AC:
{
    goto loc_8087C3B8;
}

loc_8087C3B0:
{
    r6 = (r6 + 1);
    r5 = (r5 + 1);
}

loc_8087C3B8:
{
    r0 = (r5 & 255);
}

loc_8087C3C0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8087C3B0;
    }
}

loc_8087C3C4:
{
    r4 = MemoryInline::FlatRead8((r24 + 8457));
    r5 = 0;
    r6 = (r6 + 3);
}

loc_8087C3D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8087C420;
    }
}

loc_8087C3D8:
{
}

loc_8087C3DC:
{
    r0 = (r4 + 248);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_8087C414;
    }
}

loc_8087C3E4:
{
    r3 = (r0 & 255);
    r0 = (r3 + 7);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    ctr = r0;
}

loc_8087C3F8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_8087C414;
    }
}

loc_8087C3FC:
{
    r5 = (r5 + 8);
    r6 = (r6 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087C3FC;
    }
}

loc_8087C408:
{
    goto loc_8087C414;
}

loc_8087C40C:
{
    r6 = (r6 + 8);
    r5 = (r5 + 1);
}

loc_8087C414:
{
    r0 = (r5 & 255);
}

loc_8087C41C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8087C40C;
    }
}

loc_8087C420:
{
    r0 = MemoryInline::FlatRead32((r24 + 8460));
    r4 = 0;
    MemoryInline::FlatWrite32((r24 + 17264), r6);
    r5 = 0;
    r0 = (r6 - r0);
    MemoryInline::FlatWrite32((r24 + 8464), r0);
    MemoryInline::FlatWrite32((r24 + 17268), r4);
    goto loc_8087C44C;
}

loc_8087C440:
{
    r3 = (r24 + r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 8120), static_cast<uint8_t>(r4));
}

loc_8087C44C:
{
    r0 = MemoryInline::FlatRead32((r24 + 8380));
}

loc_8087C454:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_8087C440;
    }
}

loc_8087C458:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r24 + 8376), r0);
    r25 = 0;
    goto loc_8087C48C;
}

loc_8087C468:
{
    r0 = (r25 & 255);
    r0 = (r0 * 28);
    r3 = (r24 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8087C488u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    r25 = (r25 + 1);
}

loc_8087C48C:
{
    r0 = MemoryInline::FlatRead8(r24);
    r3 = (r25 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087C498:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087C468;
    }
}

loc_8087C49C:
{
    r25 = 0;
    goto loc_8087C4CC;
}

loc_8087C4A4:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & 1020);
    r3 = (r24 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8052));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8087C4B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087C4C8;
    }
}

loc_8087C4B8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8087C4C8u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
}

loc_8087C4C8:
{
    r25 = (r25 + 1);
}

loc_8087C4CC:
{
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r3 = (r25 & 255);
}

loc_8087C4D8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087C4A4;
    }
}

loc_8087C4DC:
{
    r25 = 0;
    goto loc_8087C50C;
}

loc_8087C4E4:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & 1020);
    r3 = (r24 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8104));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8087C4F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087C508;
    }
}

loc_8087C4F8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8087C508u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
}

loc_8087C508:
{
    r25 = (r25 + 1);
}

loc_8087C50C:
{
    r0 = MemoryInline::FlatRead8((r24 + 8100));
    r3 = (r25 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8087C51C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8087C4E4;
    }
}

loc_8087C520:
{
    r5 = 0;
    r4 = 0;
    goto loc_8087C53C;
}

loc_8087C52C:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 8016), static_cast<uint8_t>(r4));
}

loc_8087C53C:
{
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r3 = (r5 & 255);
}

loc_8087C548:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087C52C;
    }
}

loc_8087C54C:
{
    r5 = 0;
    r4 = 0;
    goto loc_8087C568;
}

loc_8087C558:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 8028), static_cast<uint8_t>(r4));
}

loc_8087C568:
{
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r3 = (r5 & 255);
}

loc_8087C574:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087C558;
    }
}

loc_8087C578:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r4 + 2932));
    r0 = (r3 + -2);
}

loc_8087C58C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8087C59C;
    }
}

loc_8087C590:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r24 + 17280), r0);
    goto loc_8087C5D8;
}

loc_8087C59C:
{
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    r3 = 0;
}

loc_8087C5A8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_8087C5B8;
    }
}

loc_8087C5AC:
{
}

loc_8087C5B0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_8087C5B8;
    }
}

loc_8087C5B4:
{
    r3 = 1;
}

loc_8087C5B8:
{
}

loc_8087C5BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8087C5D0;
    }
}

loc_8087C5C0:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 18792));
    MemoryInline::FlatWrite32((r24 + 17280), r0);
    goto loc_8087C5D8;
}

loc_8087C5D0:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
    MemoryInline::FlatWrite32((r24 + 17280), r0);
}

loc_8087C5D8:
{
    r29 = 0;
    MemoryInline::FlatWrite32((r24 + 8436), r29);
    r26 = 0;
    r30 = 255;
    r31 = 1;
    goto loc_8087C8D8;
}

loc_8087C5F0:
{
    r0 = (r26 & 255);
    r0 = (r0 * 28);
    r27 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r27 + 16));
}

loc_8087C604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087C8D4;
    }
}

loc_8087C608:
{
    r0 = MemoryInline::FlatRead8((r24 + 17278));
}

loc_8087C610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087C708;
    }
}

loc_8087C614:
{
    r3 = MemoryInline::FlatRead8((r27 + 25));
    r0 = MemoryInline::FlatRead8((r24 + 2812));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087C620:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087C630;
    }
}

loc_8087C624:
{
    r0 = (r3 * 20);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r29));
}

loc_8087C630:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874244u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r4 = 0;
    MemoryInline::FlatWrite8((r27 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    MemoryInline::FlatWrite8((r27 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r24 + 8436));
    MemoryInline::FlatWrite32((r27 + 20), r0);
    MemoryInline::FlatWrite8((r27 + 24), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r27 + 25), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r24 + 7916));
}

loc_8087C664:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8087C700;
    }
}

loc_8087C668:
{
}

loc_8087C66C:
{
    r5 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8087C6D8;
    }
}

loc_8087C674:
{
    r0 = (r5 + 7);
    r6 = r27;
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_15 & 536870911);
    ctr = r0;
}

loc_8087C688:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_8087C6D8;
    }
}

loc_8087C68C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r28 + 17), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 17));
    r4 = (r4 + 8);
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 17));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 17));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 17));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 17));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 17));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 17));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 17));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087C68C;
    }
}

loc_8087C6D8:
{
    r0 = (r3 - r4);
    r5 = (r27 + r4);
    ctr = r0;
}

loc_8087C6E8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_8087C700;
    }
}

loc_8087C6EC:
{
    r0 = MemoryInline::FlatRead8((r28 + 17));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087C6EC;
    }
}

loc_8087C700:
{
    MemoryInline::FlatWrite8((r24 + 8458), static_cast<uint8_t>(r31));
    goto loc_8087C8D4;
}

loc_8087C708:
{
    r25 = MemoryInline::FlatRead8((r27 + 25));
    r0 = (r25 * 20);
    r4 = (r24 + r0);
    MemoryInline::FlatWrite8((r4 + 2832), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r4 + 2828));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087C720:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087C75C;
    }
}

loc_8087C724:
{
    r3 = MemoryInline::FlatRead32((r4 + 2816));
    r5 = (r1 + 44);
    r0 = MemoryInline::FlatRead32((r4 + 2820));
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r7 = 1;
    r8 = 1;
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r0 = MemoryInline::FlatRead32((r4 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r4 = MemoryInline::FlatRead32((r24 + 17280));
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
    ctx->xer = xer;
    InvokeDirectCpu<0x808743A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8087C808;
}

loc_8087C75C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8087C760:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087C79C;
    }
}

loc_8087C764:
{
    r3 = MemoryInline::FlatRead32((r4 + 2816));
    r5 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r4 + 2820));
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = 1;
    r8 = 1;
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r0 = MemoryInline::FlatRead32((r4 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r4 = MemoryInline::FlatRead32((r24 + 17280));
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
    ctx->xer = xer;
    InvokeDirectCpu<0x808743A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8087C808;
}

loc_8087C79C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8087C7A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087C7D8;
    }
}

loc_8087C7A4:
{
    r3 = MemoryInline::FlatRead32((r4 + 2816));
    r5 = (r1 + 20);
    r0 = MemoryInline::FlatRead32((r4 + 2820));
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r0 = MemoryInline::FlatRead32((r4 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r4 = MemoryInline::FlatRead32((r24 + 17280));
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8087C808;
}

loc_8087C7D8:
{
    r3 = MemoryInline::FlatRead32((r4 + 2816));
    r5 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r4 + 2820));
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = MemoryInline::FlatRead32((r4 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r4 = MemoryInline::FlatRead32((r24 + 17280));
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8087C808:
{
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r4 = 0;
    MemoryInline::FlatWrite8((r27 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    MemoryInline::FlatWrite8((r27 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r24 + 17280));
    MemoryInline::FlatWrite32((r27 + 20), r0);
    MemoryInline::FlatWrite8((r27 + 24), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r27 + 25), static_cast<uint8_t>(r25));
    r3 = MemoryInline::FlatRead8((r24 + 7916));
}

loc_8087C834:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8087C8D0;
    }
}

loc_8087C838:
{
}

loc_8087C83C:
{
    r5 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8087C8A8;
    }
}

loc_8087C844:
{
    r0 = (r5 + 7);
    r6 = r27;
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_18 & 536870911);
    ctr = r0;
}

loc_8087C858:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_8087C8A8;
    }
}

loc_8087C85C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r28 + 18), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 18));
    r4 = (r4 + 8);
    guest_range_4 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 18));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 18));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 18));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 18));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 18));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 18));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 18));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087C85C;
    }
}

loc_8087C8A8:
{
    r0 = (r3 - r4);
    r5 = (r27 + r4);
    ctr = r0;
}

loc_8087C8B8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_8087C8D0;
    }
}

loc_8087C8BC:
{
    r0 = MemoryInline::FlatRead8((r28 + 18));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087C8BC;
    }
}

loc_8087C8D0:
{
    MemoryInline::FlatWrite8((r24 + 8458), static_cast<uint8_t>(r31));
}

loc_8087C8D4:
{
    r26 = (r26 + 1);
}

loc_8087C8D8:
{
    r0 = MemoryInline::FlatRead8(r24);
    r3 = (r26 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087C8E4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087C5F0;
    }
}

loc_8087C8E8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r24 + 8458), static_cast<uint8_t>(r0));
    r3 = r24;
    MemoryInline::FlatWrite8((r24 + 17261), static_cast<uint8_t>(r0));
    ctx->lr = 0x8087C8FCu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8087CCF4u>(ctx);
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
    r5 = 0;
    r4 = 0;
    goto loc_8087C918;
}

loc_8087C908:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & 1020);
    r5 = (r5 + 1);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite32((r3 + 7968), r4);
}

loc_8087C918:
{
    r0 = MemoryInline::FlatRead8((r24 + 7917));
    r3 = (r5 & 255);
}

loc_8087C924:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087C908;
    }
}

loc_8087C928:
{
    r5 = 0;
    r4 = 0;
    goto loc_8087C944;
}

loc_8087C934:
{
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & 1020);
    r5 = (r5 + 1);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite32((r3 + 8384), r4);
}

loc_8087C944:
{
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r3 = (r5 & 255);
}

loc_8087C950:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087C934;
    }
}

loc_8087C954:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r24 + 5), static_cast<uint8_t>(r0));
    r5 = 0;
    goto loc_8087C9D0;
}

loc_8087C964:
{
    r0 = (r5 & 255);
    r4 = MemoryInline::FlatRead8((r24 + 7916));
    r0 = (r0 * 28);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_8087C97C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8087C9CC;
    }
}

loc_8087C980:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_8087C988:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8087C9CC;
    }
}

loc_8087C98C:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_27 & -16);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_8087C9A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8087C9B8;
    }
}

loc_8087C9AC:
{
}

loc_8087C9B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8087C9B8;
    }
}

loc_8087C9B4:
{
    r4 = 0;
}

loc_8087C9B8:
{
}

loc_8087C9BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8087C9CC;
    }
}

loc_8087C9C0:
{
    r3 = MemoryInline::FlatRead8((r24 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r24 + 5), static_cast<uint8_t>(r0));
}

loc_8087C9CC:
{
    r5 = (r5 + 1);
}

loc_8087C9D0:
{
    r0 = MemoryInline::FlatRead8(r24);
    r3 = (r5 & 255);
}

loc_8087C9DC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087C964;
    }
}

loc_8087C9E0:
{
    r5 = 0;
    r4 = 0;
    goto loc_8087C9FC;
}

loc_8087C9EC:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 7954), static_cast<uint8_t>(r4));
}

loc_8087C9FC:
{
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r3 = (r5 & 255);
}

loc_8087CA08:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087C9EC;
    }
}

loc_8087CA0C:
{
    r5 = 0;
    goto loc_8087CA6C;
}

loc_8087CA14:
{
    r3 = (r5 & 255);
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r3 = (r3 * 28);
    r3 = (r24 + r3);
    r4 = MemoryInline::FlatRead8((r3 + 18));
}

loc_8087CA2C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8087CA68;
    }
}

loc_8087CA30:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_8087CA38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8087CA68;
    }
}

loc_8087CA3C:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_30 & -16);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
}

loc_8087CA54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_8087CA68;
    }
}

loc_8087CA58:
{
    r4 = (r24 + r4);
    r3 = MemoryInline::FlatRead8((r4 + 7954));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 7954), static_cast<uint8_t>(r0));
}

loc_8087CA68:
{
    r5 = (r5 + 1);
}

loc_8087CA6C:
{
    r0 = MemoryInline::FlatRead8(r24);
    r3 = (r5 & 255);
}

loc_8087CA78:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087CA14;
    }
}

loc_8087CA7C:
{
    r5 = 0;
    r4 = 0;
    goto loc_8087CA98;
}

loc_8087CA88:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 8040), static_cast<uint8_t>(r4));
}

loc_8087CA98:
{
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r3 = (r5 & 255);
}

loc_8087CAA4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087CA88;
    }
}

loc_8087CAA8:
{
    r0 = MemoryInline::FlatRead8((r24 + 17277));
}

loc_8087CAB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087CAC4;
    }
}

loc_8087CAB4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // inline leaf 0x80555578 (21 guest instruction(s))
    r4 = -1293680640;
    r10 = MemoryInline::FlatRead32((r3 + 12));
    r7 = (r4 + -11215);
    r9 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 5308416;
    r5 = 1761804288;
    r0 = (r4 + -28995);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r10) * static_cast<uint64_t>(r7)) >> 32));
    r8 = (r5 + 31154);
    r5 = 0;
    r4 = (r9 * r7);
    r7 = (r10 * r7);
    r6 = (r6 + r4);
    r0_addc_right_8 = r0;
    r0 = (r7 + r0_addc_right_8);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_8)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r4 = (r10 * r8);
    r0 = (r6 + r4);
    r0_adde_left_8 = r0;
    r0_ca_8 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_8 + r5);
    r0 = (r0 + r0_ca_8);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_8)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_8)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = r0;
    // end of inlined leaf 0x80555578
}

loc_8087CAC4:
{
    r5 = 0;
    r4 = 180;
    goto loc_8087CAE0;
}

loc_8087CAD0:
{
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_33 & 1020);
    r5 = (r5 + 1);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite32((r3 + 17284), r4);
}

loc_8087CAE0:
{
    r0 = MemoryInline::FlatRead8((r24 + 7916));
    r3 = (r5 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087CAEC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087CAD0;
    }
}

loc_8087CAF0:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 64), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 64));
            r25 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 72));
            r27 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r1 + 80));
            r29 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r1 + 88));
            r31 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r1 + 92));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8087BFE4 func_8087BFE4 preserves=true fpr_mask=0x00000000
