#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A4CDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A4CDC;

loc_807A4CDC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = MemoryInline::FlatRead32((r3 + 428));
    r31 = 0x808A0000u;
    r30 = r3;
}

loc_807A4D00:
{
    r31 = (r31 + 21600);
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_807A4D58;
    }
}

loc_807A4D08:
{
    r5 = -1;
    r6 = 0;
    MemoryInline::FlatWrite16((r3 + 424), static_cast<uint16_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 131070);
    r4 = MemoryInline::FlatRead32((r3 + 440));
    MemoryInline::FlatWrite32((r3 + 428), r5);
    r5 = MemoryInline::FlatRead32((r3 + 444));
    MemoryInline::FlatWrite32((r3 + 432), r6);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_0);
    r0 = (r0 * 28);
    r28 = (r5 + r0);
    r3 = (r28 + 4);
    // inline leaf 0x800213E4 (12 guest instruction(s))
}

loc_inl1_0x800213E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_inl1_0x800213F8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl1_0x800213FC:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_inl1_0x80021400:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80021404:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80021408:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8002140C:
{
    r3 = 0;
    goto loc_inl1_cont_800213E4;
}

loc_inl1_return:
{
}

loc_inl1_cont_800213E4:
{
    // end of inlined leaf 0x800213E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807A4D40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A4D80;
    }
}

loc_807A4D44:
{
    r3 = MemoryInline::FlatRead32((r30 + 448));
    r12 = (r28 + 4);
    ctx->lr = 0x807A4D50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    // nop
    goto loc_807A4D80;
}

loc_807A4D58:
{
    r4 = MemoryInline::FlatRead32((r3 + 432));
    r0 = MemoryInline::FlatRead16((r3 + 424));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 432), r4);
    r4 = MemoryInline::FlatRead32((r3 + 440));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 444));
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_1);
    r0 = (r0 * 28);
    r28 = (r3 + r0);
}

loc_807A4D80:
{
    r3 = (r28 + 16);
    // inline leaf 0x800213E4 (12 guest instruction(s))
}

loc_inl2_0x800213E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_inl2_0x800213F8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl2_0x800213FC:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_inl2_0x80021400:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80021404:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80021408:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8002140C:
{
    r3 = 0;
    goto loc_inl2_cont_800213E4;
}

loc_inl2_return:
{
}

loc_inl2_cont_800213E4:
{
    // end of inlined leaf 0x800213E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807A4D8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A4DA0;
    }
}

loc_807A4D90:
{
    r3 = MemoryInline::FlatRead32((r30 + 448));
    r12 = (r28 + 16);
    ctx->lr = 0x807A4D9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    // nop
}

loc_807A4DA0:
{
    r0 = MemoryInline::FlatRead32((r30 + 120));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A4DA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A4DB8;
    }
}

loc_807A4DAC:
{
    r0 = MemoryInline::FlatRead32((r30 + 476));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A4DB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A4DC4;
    }
}

loc_807A4DB8:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x807A4DC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807A64F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807A4DC4:
{
    r3 = MemoryInline::FlatRead32((r30 + 492));
    r4 = MemoryInline::FlatRead32((r30 + 476));
}

loc_807A4DD0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r30 + 476), r0);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_807A4DF4;
    }
}

loc_807A4DDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A4DE0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 492), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A4DF4;
    }
}

loc_807A4DEC:
{
    r0 = 16;
    MemoryInline::FlatWrite32((r30 + 476), r0);
}

loc_807A4DF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 416));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 236));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807A4E00:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A4F88;
    }
}

loc_807A4E08:
{
    r3 = MemoryInline::FlatRead32((r30 + 120));
    r0 = (r3 & 33554432);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A4E10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A4E24;
    }
}

loc_807A4E14:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 240));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807A4E1C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A4F88;
    }
}

loc_807A4E24:
{
    r0 = (r3 & 32768);
}

loc_807A4E28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A4F54;
    }
}

loc_807A4E2C:
{
    r3 = 0x809C0000u;
    r27 = 0;
    r26 = MemoryInline::FlatRead8((r3 + 14520));
    r28 = 0x809C0000u;
    r29 = 0x809C0000u;
    goto loc_807A4E80;
}

loc_807A4E44:
{
    r0 = MemoryInline::FlatRead32((r28 + 14528));
    r4 = 0;
}

loc_807A4E50:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807A4E64;
    }
}

loc_807A4E54:
{
    r0 = MemoryInline::FlatRead32((r29 + 14536));
    r3 = (r27 & 3);
}

loc_807A4E60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_807A4E68;
    }
}

loc_807A4E64:
{
    r4 = 1;
}

loc_807A4E68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807A4E6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A4E7C;
    }
}

loc_807A4E70:
{
    r3 = r30;
    r4 = (r27 & 255);
    ctx->lr = 0x807A4E7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807A5D88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_807A4E7C:
{
    r27 = (r27 + 1);
}

loc_807A4E80:
{
    r0 = (r27 & 255);
}

loc_807A4E88:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r26))) {
        goto loc_807A4E44;
    }
}

loc_807A4E8C:
{
    r0 = MemoryInline::FlatRead32((r30 + 492));
}

loc_807A4E94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A4F54;
    }
}

loc_807A4E98:
{
    r3 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 244));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 13880));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 488));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807A4EB0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807A4F54;
    }
}

loc_807A4EB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 248));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807A4EC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A4EE0;
    }
}

loc_807A4EC4:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r30 + 476));
    r3 = MemoryInline::FlatRead32((r3 + 13884));
}

loc_807A4ED4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_807A4F54;
    }
}

loc_807A4ED8:
{
    MemoryInline::FlatWrite32((r30 + 476), r3);
    goto loc_807A4F54;
}

loc_807A4EE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 252));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807A4EEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A4F10;
    }
}

loc_807A4EF0:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r30 + 476));
    r3 = MemoryInline::FlatRead32((r3 + 13884));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 1);
}

loc_807A4F04:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_807A4F54;
    }
}

loc_807A4F08:
{
    MemoryInline::FlatWrite32((r30 + 476), r3);
    goto loc_807A4F54;
}

loc_807A4F10:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_807A4F14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A4F38;
    }
}

loc_807A4F18:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r30 + 476));
    r3 = MemoryInline::FlatRead32((r3 + 13884));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 2);
}

loc_807A4F2C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_807A4F54;
    }
}

loc_807A4F30:
{
    MemoryInline::FlatWrite32((r30 + 476), r3);
    goto loc_807A4F54;
}

loc_807A4F38:
{
    r0 = MemoryInline::FlatRead32((r30 + 476));
}

loc_807A4F40:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(4))) {
        goto loc_807A4F54;
    }
}

loc_807A4F44:
{
    r3 = 4;
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 476), r3);
    MemoryInline::FlatWrite32((r30 + 480), r0);
}

loc_807A4F54:
{
    r4 = MemoryInline::FlatRead32((r30 + 476));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(210));
}

loc_807A4F5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A4F88;
    }
}

loc_807A4F60:
{
    r3 = MemoryInline::FlatRead32((r30 + 480));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A4F68:
{
    MemoryInline::FlatWrite32((r30 + 480), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807A4F88;
    }
}

loc_807A4F70:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 2);
    MemoryInline::FlatWrite32((r30 + 480), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_807A4F7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A4F88;
    }
}

loc_807A4F80:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r30 + 480), r0);
}

loc_807A4F88:
{
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
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A4CDC func_807A4CDC preserves=true fpr_mask=0x00000000
