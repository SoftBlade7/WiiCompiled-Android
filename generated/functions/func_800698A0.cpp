#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800698A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
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
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800698A0;

loc_800698A0:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
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
    r23 = 715849728;
    r6 = 1717960704;
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r31 = (r6 + 26215);
    r30 = (r23 + -21845);
}

loc_800698D0:
{
    r0 = (r25 - r24);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r7 = (r0 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_800698E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80069E44;
    }
}

loc_800698EC:
{
}

loc_800698F0:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(20))) {
        goto loc_800699C4;
    }
}

loc_800698F4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(r25));
}

loc_800698F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80069E44;
    }
}

loc_800698FC:
{
    r23 = (r25 + -12);
    goto loc_800699B8;
}

loc_80069904:
{
}

loc_80069908:
{
    r27 = r24;
    if ((static_cast<uint32_t>(r24) == static_cast<uint32_t>(r25))) {
        goto loc_80069944;
    }
}

loc_80069910:
{
    r28 = (r24 + 12);
    goto loc_8006993C;
}

loc_80069918:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r28;
    r4 = r27;
    ctr = r12;
    ctx->lr = 0x8006992Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80069930:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80069938;
    }
}

loc_80069934:
{
    r27 = r28;
}

loc_80069938:
{
    r28 = (r28 + 12);
}

loc_8006993C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r25));
}

loc_80069940:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80069918;
    }
}

loc_80069944:
{
}

loc_80069948:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r24))) {
        goto loc_800699B4;
    }
}

loc_8006994C:
{
    r5 = MemoryInline::FlatRead32(r27);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r4 = MemoryInline::FlatRead32((r27 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r24);
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    r0 = MemoryInline::FlatRead16((r24 + 4));
    MemoryInline::FlatWrite16((r27 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r24 + 6));
    MemoryInline::FlatWrite16((r27 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r24 + 8));
    MemoryInline::FlatWriteRam32((r1 + 68), r5);
    MemoryInline::FlatWrite16((r27 + 8), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 72), r3);
    r3 = MemoryInline::FlatRead16((r24 + 10));
    MemoryInline::FlatWrite16((r27 + 10), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r1 + 72));
    MemoryInline::FlatWriteRam32((r1 + 76), r4);
    r4 = MemoryInline::FlatRead16((r1 + 74));
    MemoryInline::FlatWriteFloat32(r24, f0.d);
    r3 = MemoryInline::FlatRead16((r1 + 76));
    MemoryInline::FlatWrite16((r24 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 78));
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r24 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r24 + 10), static_cast<uint16_t>(r0));
}

loc_800699B4:
{
    r24 = (r24 + 12);
}

loc_800699B8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(r23));
}

loc_800699BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80069904;
    }
}

loc_800699C0:
{
    goto loc_80069E44;
}

loc_800699C4:
{
    r4 = MemoryInline::FlatRead32((r13 + -32452));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r7) >> 2);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r0 + r5_ca_2);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r6 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(5));
}

loc_800699DC:
{
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 5);
    r0 = (r4 - r0);
    r0 = (r5 + r0);
    r0 = (r0 * 12);
    r3 = (r24 + r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80069A04;
    }
}

loc_80069A00:
{
    r6 = -4;
}

loc_80069A04:
{
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r0 = (r6 + 1);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    MemoryInline::FlatWrite32((r13 + -32452), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80069A18:
{
    r0 = (r5 - r7);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r5_ca_3 = (xer >> 29) & 1u;
    r5 = (r0 + r5_ca_3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 5);
    r0 = (r6 - r0);
    r0 = (r5 + r0);
    r0 = (r0 * 12);
    r4 = (r24 + r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80069A50;
    }
}

loc_80069A48:
{
    r6 = -4;
    MemoryInline::FlatWrite32((r13 + -32452), r6);
}

loc_80069A50:
{
    r27 = (r25 + -12);
    r6 = r26;
    r5 = r27;
    ctx->lr = 0x80069A60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80069E60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = r24;
    r28 = r27;
    goto loc_80069A70;
}

loc_80069A6C:
{
    r29 = (r29 + 12);
}

loc_80069A70:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r29;
    r4 = r27;
    ctr = r12;
    ctx->lr = 0x80069A84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80069A88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80069A6C;
    }
}

loc_80069A8C:
{
    r28 = (r28 + -12);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r28));
}

loc_80069A94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80069AB4;
    }
}

loc_80069A98:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r28;
    r4 = r27;
    ctr = r12;
    ctx->lr = 0x80069AACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80069AB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80069A8C;
    }
}

loc_80069AB4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r28));
}

loc_80069AB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80069BE4;
    }
}

loc_80069ABC:
{
    r5 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = MemoryInline::FlatRead32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r0 = MemoryInline::FlatRead16((r28 + 4));
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 6));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 8));
    MemoryInline::FlatWriteRam32((r1 + 56), r5);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r3 = MemoryInline::FlatRead16((r28 + 10));
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r3));
    r29 = (r29 + 12);
    r0 = MemoryInline::FlatRead16((r1 + 60));
    MemoryInline::FlatWriteRam32((r1 + 64), r4);
    r4 = MemoryInline::FlatRead16((r1 + 62));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    r3 = MemoryInline::FlatRead16((r1 + 64));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 66));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r0));
    goto loc_80069B30;
}

loc_80069B2C:
{
    r29 = (r29 + 12);
}

loc_80069B30:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r29;
    r4 = r27;
    ctr = r12;
    ctx->lr = 0x80069B44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80069B48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80069B2C;
    }
}

loc_80069B4C:
{
    r12 = MemoryInline::FlatRead32(r26);
    r28 = (r28 + -12);
    r3 = r28;
    r4 = r27;
    ctr = r12;
    ctx->lr = 0x80069B64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80069B68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80069B4C;
    }
}

loc_80069B6C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r28));
}

loc_80069B70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80069BE4;
    }
}

loc_80069B74:
{
    r5 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = MemoryInline::FlatRead32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r0 = MemoryInline::FlatRead16((r28 + 4));
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 6));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 8));
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    r3 = MemoryInline::FlatRead16((r28 + 10));
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r3));
    r29 = (r29 + 12);
    r0 = MemoryInline::FlatRead16((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    r4 = MemoryInline::FlatRead16((r1 + 50));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    r3 = MemoryInline::FlatRead16((r1 + 52));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 54));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r0));
    goto loc_80069B30;
}

loc_80069BE4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r24));
}

loc_80069BE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80069DE0;
    }
}

loc_80069BEC:
{
    r7 = MemoryInline::FlatRead32(r29);
    r28 = (r25 + -12);
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = r24;
    r6 = MemoryInline::FlatRead32((r29 + 8));
    r4 = r28;
    f0.d = MemoryInline::FlatReadFloat32(r27);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r0 = MemoryInline::FlatRead16((r27 + 4));
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r27 + 6));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r27 + 8));
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    r5 = MemoryInline::FlatRead16((r27 + 10));
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead16((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 40), r6);
    r6 = MemoryInline::FlatRead16((r1 + 38));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    r5 = MemoryInline::FlatRead16((r1 + 40));
    MemoryInline::FlatWrite16((r27 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 42));
    MemoryInline::FlatWrite16((r27 + 6), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r27 + 8), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r27 + 10), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead32(r26);
    ctr = r12;
    r29 = (r29 + 12);
    ctx->lr = 0x80069C70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80069C74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80069D14;
    }
}

loc_80069C78:
{
    goto loc_80069C80;
}

loc_80069C7C:
{
    r29 = (r29 + 12);
}

loc_80069C80:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r25));
}

loc_80069C84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80069CA4;
    }
}

loc_80069C88:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r24;
    r4 = r29;
    ctr = r12;
    ctx->lr = 0x80069C9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80069CA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80069C7C;
    }
}

loc_80069CA4:
{
}

loc_80069CA8:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r28))) {
        goto loc_80069D14;
    }
}

loc_80069CAC:
{
    r5 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = MemoryInline::FlatRead32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r0 = MemoryInline::FlatRead16((r28 + 4));
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 6));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = MemoryInline::FlatRead16((r28 + 10));
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    r4 = MemoryInline::FlatRead16((r1 + 26));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    r3 = MemoryInline::FlatRead16((r1 + 28));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 30));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r0));
}

loc_80069D14:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r28));
}

loc_80069D18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80069DD8;
    }
}

loc_80069D1C:
{
    goto loc_80069D24;
}

loc_80069D20:
{
    r29 = (r29 + 12);
}

loc_80069D24:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r24;
    r4 = r29;
    ctr = r12;
    ctx->lr = 0x80069D38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80069D3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80069D20;
    }
}

loc_80069D40:
{
    r12 = MemoryInline::FlatRead32(r26);
    r28 = (r28 + -12);
    r3 = r24;
    r4 = r28;
    ctr = r12;
    ctx->lr = 0x80069D58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80069D5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80069D40;
    }
}

loc_80069D60:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r28));
}

loc_80069D64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80069DD8;
    }
}

loc_80069D68:
{
    r5 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = MemoryInline::FlatRead32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r0 = MemoryInline::FlatRead16((r28 + 4));
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 6));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = MemoryInline::FlatRead16((r28 + 10));
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r3));
    r29 = (r29 + 12);
    r0 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r4 = MemoryInline::FlatRead16((r1 + 14));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    r3 = MemoryInline::FlatRead16((r1 + 16));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 18));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r0));
    goto loc_80069D24;
}

loc_80069DD8:
{
    r24 = r29;
    goto loc_800698D0;
}

loc_80069DE0:
{
    r0 = (r29 - r24);
    r4 = (r23 + -21845);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r25 - r29);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r3 = (static_cast<int32_t>(r3) >> 1);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4 = (r3 + r4);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80069E10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80069E2C;
    }
}

loc_80069E14:
{
    r3 = r24;
    r4 = r29;
    r5 = r26;
    ctx->lr = 0x80069E24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800698A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r24 = r29;
    goto loc_800698D0;
}

loc_80069E2C:
{
    r3 = r29;
    r4 = r25;
    r5 = r26;
    ctx->lr = 0x80069E3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800698A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r25 = r29;
    goto loc_800698D0;
}

loc_80069E44:
{
    r11 = (r1 + 128);
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
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800698A0 func_800698A0 preserves=true fpr_mask=0x00000000
