#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80014E00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r25_ca_0 = 0;
    uint32_t r25_ca_1 = 0;
    uint32_t r25_ca_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_not_1 = 0;
    uint32_t r4_not_2 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80014E00;

loc_80014E00:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
}

loc_80014E0C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 96u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 100), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 24), r14);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 28), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 32), r16);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 36), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 40), r18);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 44), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 52), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 56), r22);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 60), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 64), r24);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 68), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 72), r26);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 76), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 80), r28);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 84), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 88), r30);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 92), r31);
    }
    r27 = 0;
    r15 = r3;
    r16 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r7);
    r17 = r5;
    r18 = r6;
    r19 = r8;
    r20 = r9;
    r28 = 1;
    r26 = 0;
    r24 = 0;
    r25 = 0;
    r22 = 0;
    r23 = 0;
    MemoryInline::FlatWrite32(r9, r27);
    MemoryInline::FlatWrite32(r8, r27);
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80014E70;
    }
}

loc_80014E58:
{
}

loc_80014E5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80014E70;
    }
}

loc_80014E60:
{
}

loc_80014E64:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(36))) {
        goto loc_80014E70;
    }
}

loc_80014E68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80014E6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80014E78;
    }
}

loc_80014E70:
{
    r28 = 64;
    goto loc_80014E98;
}

loc_80014E78:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = 1;
    ctx->lr = 0x80014E94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
}

loc_80014E98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(0));
}

loc_80014E9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014EBC;
    }
}

loc_80014EA0:
{
    r6 = r15;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r15);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r15) >> 31);
    r3 = -1;
    r4 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021604u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r22 = r4;
    r23 = r3;
}

loc_80014EBC:
{
    r3 = 0x80270000u;
    r30 = 1;
    r14 = 0;
    r31 = -1;
    r29 = (r3 + 4424);
    goto loc_80015230;
}

loc_80014ED4:
{
}

loc_80014ED8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_80014F00;
    }
}

loc_80014EDC:
{
}

loc_80014EE0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_80014FC0;
    }
}

loc_80014EE4:
{
}

loc_80014EE8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(4))) {
        goto loc_80015008;
    }
}

loc_80014EEC:
{
}

loc_80014EF0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(8))) {
        goto loc_80015058;
    }
}

loc_80014EF4:
{
}

loc_80014EF8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(16))) {
        goto loc_80015058;
    }
}

loc_80014EFC:
{
    goto loc_80015230;
}

loc_80014F00:
{
}

loc_80014F04:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r21) > static_cast<uint32_t>(255))) {
        goto loc_80014F10;
    }
}

loc_80014F0C:
{
    r0 = 0;
}

loc_80014F10:
{
}

loc_80014F14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80014F20;
    }
}

loc_80014F18:
{
    r0 = 0;
    goto loc_80014F34;
}

loc_80014F20:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_12 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_12);
    r0 = (r0 & 256);
}

loc_80014F34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80014F38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014F60;
    }
}

loc_80014F3C:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x80014F54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
    r26 = (r26 + 1);
    goto loc_80015230;
}

loc_80014F60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(43));
}

loc_80014F64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80014F8C;
    }
}

loc_80014F68:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x80014F84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
    goto loc_80014FB8;
}

loc_80014F8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(45));
}

loc_80014F90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80014FB8;
    }
}

loc_80014F94:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x80014FB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
    MemoryInline::FlatWrite32(r19, r30);
}

loc_80014FB8:
{
    r28 = 2;
    goto loc_80015230;
}

loc_80014FC0:
{
}

loc_80014FC4:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(0))) {
        goto loc_80014FD0;
    }
}

loc_80014FC8:
{
}

loc_80014FCC:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(16))) {
        goto loc_80015000;
    }
}

loc_80014FD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(48));
}

loc_80014FD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015000;
    }
}

loc_80014FD8:
{
    r12 = r17;
    r3 = r18;
    r28 = 4;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x80014FF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
    goto loc_80015230;
}

loc_80015000:
{
    r28 = 8;
    goto loc_80015230;
}

loc_80015008:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(88));
}

loc_8001500C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80015018;
    }
}

loc_80015010:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(120));
}

loc_80015014:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015044;
    }
}

loc_80015018:
{
    r12 = r17;
    r3 = r18;
    r15 = 16;
    r28 = 8;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x8001503Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
    goto loc_80015230;
}

loc_80015044:
{
}

loc_80015048:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(0))) {
        goto loc_80015050;
    }
}

loc_8001504C:
{
    r15 = 8;
}

loc_80015050:
{
    r28 = 16;
    goto loc_80015230;
}

loc_80015058:
{
}

loc_8001505C:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(0))) {
        goto loc_80015064;
    }
}

loc_80015060:
{
    r15 = 10;
}

loc_80015064:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r14);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r14) >> 31);
    r0 = (r23 ^ r0);
    r0 = (r22 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015090;
    }
}

loc_80015074:
{
    r6 = r15;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r15);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r15) >> 31);
    r3 = -1;
    r4 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021604u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r22 = r4;
    r23 = r3;
}

loc_80015090:
{
}

loc_80015094:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r21) > static_cast<uint32_t>(255))) {
        goto loc_800150A0;
    }
}

loc_8001509C:
{
    r0 = 0;
}

loc_800150A0:
{
}

loc_800150A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800150B0;
    }
}

loc_800150A8:
{
    r0 = 0;
    goto loc_800150C4;
}

loc_800150B0:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 & 8);
}

loc_800150C4:
{
}

loc_800150C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800150F0;
    }
}

loc_800150CC:
{
    r21 = (r21 + -48);
}

loc_800150D4:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r15))) {
        goto loc_800151A8;
    }
}

loc_800150D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(16));
}

loc_800150DC:
{
    r28 = 64;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800150E8;
    }
}

loc_800150E4:
{
    r28 = 32;
}

loc_800150E8:
{
    r21 = (r21 + 48);
    goto loc_80015230;
}

loc_800150F0:
{
}

loc_800150F4:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r21) > static_cast<uint32_t>(255))) {
        goto loc_80015100;
    }
}

loc_800150FC:
{
    r0 = 0;
}

loc_80015100:
{
}

loc_80015104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80015110;
    }
}

loc_80015108:
{
    r0 = 0;
    goto loc_80015124;
}

loc_80015110:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_4);
    r0 = (r0 & 1);
}

loc_80015124:
{
}

loc_80015128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80015164;
    }
}

loc_8001512C:
{
}

loc_80015130:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r21) > static_cast<uint32_t>(255))) {
        goto loc_8001513C;
    }
}

loc_80015138:
{
    r0 = 0;
}

loc_8001513C:
{
}

loc_80015140:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001514C;
    }
}

loc_80015144:
{
    r3 = r21;
    goto loc_80015158;
}

loc_8001514C:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_6 = (r3 + r21);
    r3 = MemoryInline::FlatRead8(r3_addr_6);
}

loc_80015158:
{
    r0 = (r3 + -55);
}

loc_80015160:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r15))) {
        goto loc_8001517C;
    }
}

loc_80015164:
{
}

loc_80015168:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(16))) {
        goto loc_80015174;
    }
}

loc_8001516C:
{
    r28 = 32;
    goto loc_80015230;
}

loc_80015174:
{
    r28 = 64;
    goto loc_80015230;
}

loc_8001517C:
{
}

loc_80015180:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r21) > static_cast<uint32_t>(255))) {
        goto loc_8001518C;
    }
}

loc_80015188:
{
    r0 = 0;
}

loc_8001518C:
{
}

loc_80015190:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80015198;
    }
}

loc_80015194:
{
    goto loc_800151A4;
}

loc_80015198:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_8 = (r3 + r21);
    r21 = MemoryInline::FlatRead8(r3_addr_8);
}

loc_800151A4:
{
    r21 = (r21 + -55);
}

loc_800151A8:
{
    r0 = (r22 - r24);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r22) >= static_cast<uint32_t>(r24) ? 1u : 0u) << 29);
    r0_not_2 = ~(r25);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r23);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r23)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_3 = ~(r22);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r22);
    r0 = (r0 + r0_ca_3);
    r0 = (0 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800151C0;
    }
}

loc_800151BC:
{
    MemoryInline::FlatWrite32(r20, r30);
}

loc_800151C0:
{
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r24) * static_cast<uint64_t>(r15)) >> 32));
    r5 = (static_cast<int32_t>(r15) >> 31);
    r6 = (static_cast<int32_t>(r21) >> 31);
    r4 = (r25 * r15);
    r4 = (r3 + r4);
    r3 = (r24 * r5);
    r0 = (r24 * r15);
    r7 = (r4 + r3);
    r5 = (r31 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r4_not_2 = ~(r7);
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r4_not_2 + r31);
    r4 = (r4 + r4_ca_2);
    r3 = (r5 - r21);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r21) ? 1u : 0u) << 29);
    r3_not_2 = ~(r6);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r4);
    r3 = (r3 + r3_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_3 = ~(r5);
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r3_not_3 + r5);
    r3 = (r3 + r3_ca_3);
    r3 = (0 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80015200;
    }
}

loc_800151FC:
{
    MemoryInline::FlatWrite32(r20, r30);
}

loc_80015200:
{
    r4 = (static_cast<int32_t>(r21) >> 31);
    r12 = r17;
    r24 = (r0 + r21);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(r21)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = r18;
    r25_ca_2 = (xer >> 29) & 1u;
    r25 = (r7 + r4);
    r25 = (r25 + r25_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r25_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r28 = 16;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x8001522Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
}

loc_80015230:
{
}

loc_80015234:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(r16))) {
        goto loc_80015248;
    }
}

loc_80015238:
{
}

loc_8001523C:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(-1))) {
        goto loc_80015248;
    }
}

loc_80015240:
{
    r0 = (r28 & 96);
}

loc_80015244:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80014ED4;
    }
}

loc_80015248:
{
    r0 = (r28 & 52);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001524C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015264;
    }
}

loc_80015250:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r24 = 0;
    r25 = 0;
    MemoryInline::FlatWrite32(r3, r24);
    goto loc_80015274;
}

loc_80015264:
{
    r3 = (r27 + r26);
    r0 = (r3 + -1);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80015274:
{
    r12 = r17;
    r3 = r18;
    r4 = r21;
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x8001528Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r24;
    r3 = r25;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 24));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 32));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 40));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 56));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 64));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 72));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 80));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 88));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r1 + 92));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80014E00 func_80014E00 preserves=true fpr_mask=0x00000000
