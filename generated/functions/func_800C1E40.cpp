#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C1E40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_10 = 0;
    uint32_t r10_addr_11 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r10_addr_6 = 0;
    uint32_t r10_addr_7 = 0;
    uint32_t r10_addr_8 = 0;
    uint32_t r10_addr_9 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_10 = 0;
    uint32_t r8_addr_11 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;
    uint32_t r8_addr_8 = 0;
    uint32_t r8_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800C1E40;

loc_800C1E40:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
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
    // end of inlined leaf 0x80021594
    r4 = MemoryInline::FlatRead32(r3);
    r28 = r3;
    r31 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
}

loc_800C1E64:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800C1E7C;
    }
}

loc_800C1E68:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r0 & 43);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C1E74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C1E7C;
    }
}

loc_800C1E78:
{
    r31 = 1;
}

loc_800C1E7C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead16((r28 + 4));
    ctx->lr = 0x800C1E88u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800BD430u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x800C1E8Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800BC3B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
    r3 = MemoryInline::FlatRead32(r28);
    r4 = MemoryInline::FlatRead16((r28 + 4));
    r5 = r30;
    ctx->lr = 0x800C1EA0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800BD5A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r28);
    r29 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800C1EAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C1EE4;
    }
}

loc_800C1EB0:
{
    r3 = MemoryInline::FlatRead32((r28 + 56));
    r4 = r29;
    r5 = 12;
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
    r3 = MemoryInline::FlatRead32((r28 + 60));
    r4 = (r29 + 12);
    r5 = 12;
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
    r3 = MemoryInline::FlatRead32((r28 + 64));
    r4 = (r29 + 24);
    r5 = 12;
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
    r29 = (r29 + 36);
}

loc_800C1EE4:
{
    r4 = MemoryInline::FlatRead16(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800C1EEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C1F10;
    }
}

loc_800C1EF0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r28 + 40), static_cast<uint16_t>(r0));
    r3 = r30;
    MemoryInline::FlatWrite16((r28 + 42), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r28 + 46), static_cast<uint16_t>(r0));
    ctx->lr = 0x800C1F0Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800BC3D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800C2418;
}

loc_800C1F10:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r4 * 6);
    MemoryInline::FlatWrite16((r28 + 40), static_cast<uint16_t>(r4));
    r29 = (r29 + 2);
}

loc_800C1F24:
{
    r4 = r29;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C2074;
    }
}

loc_800C1F2C:
{
    r3 = MemoryInline::FlatRead32((r28 + 52));
    r26 = 0x80270000u;
    f4.d = MemoryInline::FlatReadFloat32((r2 + -27720));
    r12 = (r26 + 20568);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 48));
    r5 = 0;
    f2.d = MemoryInline::FlatReadFloat32(r3);
    r10 = 0;
    f3.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f3.d = PPC_Fctiwz(f3.d);
    f2.d = PPC_Fctiwz(f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f3.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f2.d);
    r6 = fctiwzword0;
    fctiwzword2 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f1.d);
    r7 = fctiwzword1;
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r8 = fctiwzword2;
    r9 = fctiwzword3;
    goto loc_800C2064;
}

loc_800C1F98:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
}

loc_800C1FA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C1FC0;
    }
}

loc_800C1FA4:
{
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (0 - r3);
    r3 = (r3 * r6);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 8);
    r3 = (r7 + r3);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    goto loc_800C1FD4;
}

loc_800C1FC0:
{
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 * r6);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 8);
    r3 = (r7 + r3);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_800C1FD4:
{
    r3 = MemoryInline::FlatRead16((r4 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r27 = MemoryInline::FlatRead16((r4 + 4));
    r27 = (r27 << 16);
    r27 = (static_cast<int32_t>(r27) >> 16);
    r25 = (r3 * r6);
    r3 = MemoryInline::FlatRead32((r12 + 12));
    r11 = MemoryInline::FlatRead32((r28 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C1FEC:
{
    r3 = (r11 + r10);
    r11 = (r27 * r6);
    r25 = (static_cast<int32_t>(r25) >> 8);
    r27 = (r8 + r25);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r11);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r11 = (static_cast<int32_t>(r11) >> 8);
    r25 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r11 = (r9 + r11);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r11)));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C2014;
    }
}

loc_800C2010:
{
    r24 = (0 - r24);
}

loc_800C2014:
{
    r11 = MemoryInline::FlatRead8((r12 + 2));
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_2 & -2);
    r3_addr_2 = (r3 + r11);
    MemoryInline::FlatWrite16(r3_addr_2, static_cast<uint16_t>(r24));
    r11 = MemoryInline::FlatRead32((r12 + 4));
}

loc_800C2028:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_800C2030;
    }
}

loc_800C202C:
{
    r25 = (0 - r25);
}

loc_800C2030:
{
    r11 = MemoryInline::FlatRead8((r26 + 20568));
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_3 & -2);
    r3_addr_3 = (r3 + r11);
    MemoryInline::FlatWrite16(r3_addr_3, static_cast<uint16_t>(r25));
    r11 = MemoryInline::FlatRead32((r12 + 8));
}

loc_800C2044:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_800C204C;
    }
}

loc_800C2048:
{
    r27 = (0 - r27);
}

loc_800C204C:
{
    r11 = MemoryInline::FlatRead8((r12 + 1));
    r4 = (r4 + 6);
    r10 = (r10 + 6);
    r5 = (r5 + 1);
    r11_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_4 & -2);
    r3_addr_4 = (r3 + r11);
    MemoryInline::FlatWrite16(r3_addr_4, static_cast<uint16_t>(r27));
}

loc_800C2064:
{
    r3 = MemoryInline::FlatRead16((r28 + 40));
}

loc_800C206C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r3))) {
        goto loc_800C1F98;
    }
}

loc_800C2070:
{
    goto loc_800C21D0;
}

loc_800C2074:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
}

loc_800C207C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C2120;
    }
}

loc_800C2080:
{
    r7 = 0x80270000u;
    r12 = 0;
    r6 = (r7 + 20568);
    r3 = 0;
    goto loc_800C2110;
}

loc_800C2094:
{
    r8 = MemoryInline::FlatRead16(r4);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r5 = MemoryInline::FlatRead32((r6 + 12));
    r9 = (0 - r8);
    r8 = MemoryInline::FlatRead32((r28 + 16));
}

loc_800C20A8:
{
    r10 = MemoryInline::FlatRead16((r4 + 2));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r11 = MemoryInline::FlatRead16((r4 + 4));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r8 = (r8 + r3);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C20C0;
    }
}

loc_800C20BC:
{
    r9 = (0 - r9);
}

loc_800C20C0:
{
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    r8_addr_2 = (r8 + r5);
    MemoryInline::FlatWrite16(r8_addr_2, static_cast<uint16_t>(r9));
    r5 = MemoryInline::FlatRead32((r6 + 4));
}

loc_800C20D4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C20DC;
    }
}

loc_800C20D8:
{
    r10 = (0 - r10);
}

loc_800C20DC:
{
    r5 = MemoryInline::FlatRead8((r7 + 20568));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
    r8_addr_3 = (r8 + r5);
    MemoryInline::FlatWrite16(r8_addr_3, static_cast<uint16_t>(r10));
    r5 = MemoryInline::FlatRead32((r6 + 8));
}

loc_800C20F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C20F8;
    }
}

loc_800C20F4:
{
    r11 = (0 - r11);
}

loc_800C20F8:
{
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r4 = (r4 + 6);
    r3 = (r3 + 6);
    r12 = (r12 + 1);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & -2);
    r8_addr_4 = (r8 + r5);
    MemoryInline::FlatWrite16(r8_addr_4, static_cast<uint16_t>(r11));
}

loc_800C2110:
{
    r5 = MemoryInline::FlatRead16((r28 + 40));
}

loc_800C2118:
{
    if ((static_cast<int32_t>(r12) < static_cast<int32_t>(r5))) {
        goto loc_800C2094;
    }
}

loc_800C211C:
{
    goto loc_800C21D0;
}

loc_800C2120:
{
    r9 = 0x80270000u;
    r3 = 0;
    r8 = (r9 + 20568);
    r5 = 0;
    goto loc_800C21C4;
}

loc_800C2138:
{
    r6 = MemoryInline::FlatRead32((r8 + 12));
    r7 = MemoryInline::FlatRead32((r28 + 16));
}

loc_800C2144:
{
    r10 = (r7 + r5);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800C2158;
    }
}

loc_800C214C:
{
    r6 = MemoryInline::FlatRead16(r4);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = (0 - r6);
    goto loc_800C215C;
}

loc_800C2158:
{
    r7 = MemoryInline::FlatRead16(r4);
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_800C215C:
{
    r6 = MemoryInline::FlatRead8((r8 + 2));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r10_addr_2 = (r10 + r6);
    MemoryInline::FlatWrite16(r10_addr_2, static_cast<uint16_t>(r7));
    r6 = MemoryInline::FlatRead32((r8 + 4));
}

loc_800C2170:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800C2180;
    }
}

loc_800C2174:
{
    r6 = MemoryInline::FlatRead16((r4 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = (0 - r6);
    goto loc_800C2184;
}

loc_800C2180:
{
    r7 = MemoryInline::FlatRead16((r4 + 2));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_800C2184:
{
    r6 = MemoryInline::FlatRead8((r9 + 20568));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_3 & -2);
    r10_addr_3 = (r10 + r6);
    MemoryInline::FlatWrite16(r10_addr_3, static_cast<uint16_t>(r7));
    r6 = MemoryInline::FlatRead32((r8 + 8));
}

loc_800C2198:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800C21A8;
    }
}

loc_800C219C:
{
    r6 = MemoryInline::FlatRead16((r4 + 4));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = (0 - r6);
    goto loc_800C21AC;
}

loc_800C21A8:
{
    r7 = MemoryInline::FlatRead16((r4 + 4));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_800C21AC:
{
    r6 = MemoryInline::FlatRead8((r8 + 1));
    r4 = (r4 + 6);
    r5 = (r5 + 6);
    r3 = (r3 + 1);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_4 & -2);
    r10_addr_4 = (r10 + r6);
    MemoryInline::FlatWrite16(r10_addr_4, static_cast<uint16_t>(r7));
}

loc_800C21C4:
{
    r6 = MemoryInline::FlatRead16((r28 + 40));
}

loc_800C21CC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r6))) {
        goto loc_800C2138;
    }
}

loc_800C21D0:
{
    r29 = (r29 + r0);
    r0 = MemoryInline::FlatRead32((r28 + 12));
    r3 = MemoryInline::FlatRead16(r29);
    r29 = (r29 + 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C21E4:
{
    MemoryInline::FlatWrite16((r28 + 42), static_cast<uint16_t>(r3));
    r0 = (r3 * 6);
    r3 = r29;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C2294;
    }
}

loc_800C21F4:
{
    r7 = 0x80270000u;
    r12 = 0;
    r6 = (r7 + 20568);
    r4 = 0;
    goto loc_800C2284;
}

loc_800C2208:
{
    r8 = MemoryInline::FlatRead16(r3);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r5 = MemoryInline::FlatRead32((r6 + 12));
    r9 = (0 - r8);
    r8 = MemoryInline::FlatRead32((r28 + 20));
}

loc_800C221C:
{
    r10 = MemoryInline::FlatRead16((r3 + 2));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r11 = MemoryInline::FlatRead16((r3 + 4));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r8 = (r8 + r4);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C2234;
    }
}

loc_800C2230:
{
    r9 = (0 - r9);
}

loc_800C2234:
{
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_7 & -2);
    r8_addr_7 = (r8 + r5);
    MemoryInline::FlatWrite16(r8_addr_7, static_cast<uint16_t>(r9));
    r5 = MemoryInline::FlatRead32((r6 + 4));
}

loc_800C2248:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C2250;
    }
}

loc_800C224C:
{
    r10 = (0 - r10);
}

loc_800C2250:
{
    r5 = MemoryInline::FlatRead8((r7 + 20568));
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_8 & -2);
    r8_addr_8 = (r8 + r5);
    MemoryInline::FlatWrite16(r8_addr_8, static_cast<uint16_t>(r10));
    r5 = MemoryInline::FlatRead32((r6 + 8));
}

loc_800C2264:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C226C;
    }
}

loc_800C2268:
{
    r11 = (0 - r11);
}

loc_800C226C:
{
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r3 = (r3 + 6);
    r4 = (r4 + 6);
    r12 = (r12 + 1);
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_9 & -2);
    r8_addr_9 = (r8 + r5);
    MemoryInline::FlatWrite16(r8_addr_9, static_cast<uint16_t>(r11));
}

loc_800C2284:
{
    r5 = MemoryInline::FlatRead16((r28 + 42));
}

loc_800C228C:
{
    if ((static_cast<int32_t>(r12) < static_cast<int32_t>(r5))) {
        goto loc_800C2208;
    }
}

loc_800C2290:
{
    goto loc_800C2340;
}

loc_800C2294:
{
    r9 = 0x80270000u;
    r4 = 0;
    r8 = (r9 + 20568);
    r5 = 0;
    goto loc_800C2334;
}

loc_800C22A8:
{
    r6 = MemoryInline::FlatRead32((r8 + 12));
    r7 = MemoryInline::FlatRead32((r28 + 20));
}

loc_800C22B4:
{
    r10 = (r7 + r5);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800C22C8;
    }
}

loc_800C22BC:
{
    r6 = MemoryInline::FlatRead16(r3);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = (0 - r6);
    goto loc_800C22CC;
}

loc_800C22C8:
{
    r7 = MemoryInline::FlatRead16(r3);
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_800C22CC:
{
    r6 = MemoryInline::FlatRead8((r8 + 2));
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_7 & -2);
    r10_addr_7 = (r10 + r6);
    MemoryInline::FlatWrite16(r10_addr_7, static_cast<uint16_t>(r7));
    r6 = MemoryInline::FlatRead32((r8 + 4));
}

loc_800C22E0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800C22F0;
    }
}

loc_800C22E4:
{
    r6 = MemoryInline::FlatRead16((r3 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = (0 - r6);
    goto loc_800C22F4;
}

loc_800C22F0:
{
    r7 = MemoryInline::FlatRead16((r3 + 2));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_800C22F4:
{
    r6 = MemoryInline::FlatRead8((r9 + 20568));
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_8 & -2);
    r10_addr_8 = (r10 + r6);
    MemoryInline::FlatWrite16(r10_addr_8, static_cast<uint16_t>(r7));
    r6 = MemoryInline::FlatRead32((r8 + 8));
}

loc_800C2308:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800C2318;
    }
}

loc_800C230C:
{
    r6 = MemoryInline::FlatRead16((r3 + 4));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = (0 - r6);
    goto loc_800C231C;
}

loc_800C2318:
{
    r7 = MemoryInline::FlatRead16((r3 + 4));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_800C231C:
{
    r6 = MemoryInline::FlatRead8((r8 + 1));
    r3 = (r3 + 6);
    r5 = (r5 + 6);
    r4 = (r4 + 1);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_9 & -2);
    r10_addr_9 = (r10 + r6);
    MemoryInline::FlatWrite16(r10_addr_9, static_cast<uint16_t>(r7));
}

loc_800C2334:
{
    r6 = MemoryInline::FlatRead16((r28 + 42));
}

loc_800C233C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r6))) {
        goto loc_800C22A8;
    }
}

loc_800C2340:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800C2344:
{
    r29 = (r29 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C2358;
    }
}

loc_800C234C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    goto loc_800C237C;
}

loc_800C2358:
{
    r0 = MemoryInline::FlatRead16(r29);
    r29 = (r29 + 2);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    r4 = r29;
    r24_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r24 = (r24_rot_1 & -4);
    r3 = MemoryInline::FlatRead32((r28 + 24));
    r5 = r24;
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
    r29 = (r29 + r24);
}

loc_800C237C:
{
    r26 = MemoryInline::FlatRead8(r29);
    r29 = (r29 + 1);
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r4 = MemoryInline::FlatRead16((r28 + 38));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r4 = MemoryInline::FlatRead16((r28 + 38));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80172E00u>(ctx);
    r24 = 0;
    r27 = -872349696;
    goto loc_800C2400;
}

loc_800C23A8:
{
    r25 = MemoryInline::FlatRead8(r29);
    r4 = 0;
    r3 = MemoryInline::FlatRead8((r29 + 1));
    r29 = (r29 + 2);
    r5 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    ctr = r25;
}

loc_800C23C8:
{
    if ((static_cast<int32_t>(r25) <= static_cast<int32_t>(0))) {
        goto loc_800C23FC;
    }
}

loc_800C23CC:
{
    // nop
}

loc_800C23D0:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_800C23D8:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r29 = (r29 + 2);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800C23F8;
    }
}

loc_800C23EC:
{
    r0 = MemoryInline::FlatRead8(r29);
    r29 = (r29 + 1);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
}

loc_800C23F8:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800C23D0;
    }
}

loc_800C23FC:
{
    r24 = (r24 + 1);
}

loc_800C2400:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r26));
}

loc_800C2404:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800C23A8;
    }
}

loc_800C2408:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x80172EB4u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite16((r28 + 46), static_cast<uint16_t>(r3));
    r3 = r30;
    ctx->lr = 0x800C2418u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800BC3D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800C2418:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800C1E40 func_800C1E40 preserves=true fpr_mask=0x00000000
