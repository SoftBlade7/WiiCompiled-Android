#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CFE60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801CFE60;

loc_801CFE60:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
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
    r0 = MemoryInline::FlatRead8(r3);
    r30 = 0x802A0000u;
    r28 = 0x80350000u;
    r26 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801CFE88:
{
    r30 = (r30 + -432);
    r28 = (r28 + 16608);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D00B0;
    }
}

loc_801CFE94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CFEA8;
    }
}

loc_801CFE98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801CFE9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CFEB4;
    }
}

loc_801CFEA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D0080;
    }
}

loc_801CFEA4:
{
    goto loc_801D0120;
}

loc_801CFEA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_801CFEAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D0120;
    }
}

loc_801CFEB0:
{
    goto loc_801D00DC;
}

loc_801CFEB4:
{
    r3 = (r30 + 3076);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r29 = (r26 + 2);
    r27 = 0;
    r23 = 1;
    r24 = 3;
    r25 = 6;
    goto loc_801D0070;
}

loc_801CFED8:
{
    r3 = r29;
    ctx->lr = 0x801CFEE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CEA6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8(r29);
    r31 = r3;
    r5 = MemoryInline::FlatRead8((r29 + 1));
    r3 = (r30 + 3108);
    r6 = MemoryInline::FlatRead8((r29 + 2));
    r7 = MemoryInline::FlatRead8((r29 + 3));
    r8 = MemoryInline::FlatRead8((r29 + 4));
    r9 = MemoryInline::FlatRead8((r29 + 5));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 6), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r29 + 13));
    r3 = (r30 + 3152);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 8), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r29 + 14));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 12), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r29 + 15));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 16), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 10u, (r29 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 20), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r29 + 17));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 24), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r29 + 18));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 28), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 13u, (r29 + 19));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 32), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 14u, (r29 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 36), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 15u, (r29 + 21));
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 40), r0);
    r4 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r29 + 6));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r29 + 7));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r29 + 8));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r29 + 9));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r29 + 10));
    r9 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r29 + 11));
    r10 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r29 + 12));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801CFF7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D0004;
    }
}

loc_801CFF80:
{
    r3 = (r30 + 3244);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    ctx->lr = 0x801CFF90u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801CEB44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_801CFF94:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801CFFD0;
    }
}

loc_801CFF9C:
{
    r3 = r28;
    r27 = 0;
    ctr = r25;
}

loc_801CFFA8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1277));
}

loc_801CFFB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801CFFC4;
    }
}

loc_801CFFB4:
{
    r0 = (r27 * 96);
    r3 = (r28 + r0);
    r31 = (r3 + 1188);
    goto loc_801CFFD0;
}

loc_801CFFC4:
{
    r3 = (r3 + 96);
    r27 = (r27 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801CFFA8;
    }
}

loc_801CFFD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801CFFD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D0068;
    }
}

loc_801CFFD8:
{
    MemoryInline::FlatWrite8((r31 + 92), static_cast<uint8_t>(r23));
    r4 = r29;
    r3 = (r31 + 64);
    r5 = 6;
    MemoryInline::FlatWrite8((r31 + 89), static_cast<uint8_t>(r23));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 70);
    r4 = (r29 + 6);
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801D0068;
}

loc_801D0004:
{
    r4 = r29;
    r3 = (r31 + 64);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 70);
    r4 = (r29 + 6);
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 92));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801D002C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D0034;
    }
}

loc_801D0030:
{
    MemoryInline::FlatWrite8((r31 + 92), static_cast<uint8_t>(r24));
}

loc_801D0034:
{
    r4 = r29;
    r3 = (r28 + 1788);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r28 + 1788));
    r3 = (r30 + 3280);
    r5 = MemoryInline::FlatRead8((r28 + 1789));
    r6 = MemoryInline::FlatRead8((r28 + 1790));
    r7 = MemoryInline::FlatRead8((r28 + 1791));
    r8 = MemoryInline::FlatRead8((r28 + 1792));
    r9 = MemoryInline::FlatRead8((r28 + 1793));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
}

loc_801D0068:
{
    r29 = (r29 + 22);
    r27 = (r27 + 1);
}

loc_801D0070:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_801D0078:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801CFED8;
    }
}

loc_801D007C:
{
    goto loc_801D0134;
}

loc_801D0080:
{
    r3 = (r30 + 3320);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead8((r26 + 1));
    r3 = (r30 + 3356);
    r5 = MemoryInline::FlatRead16((r26 + 2));
    r6 = MemoryInline::FlatRead16((r26 + 4));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r0 = 0;
    MemoryInline::FlatWriteRam8((r28 + 14), static_cast<uint8_t>(r0));
    goto loc_801D0134;
}

loc_801D00B0:
{
    r3 = (r30 + 3400);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead8((r26 + 1));
    r3 = (r30 + 3436);
    r5 = MemoryInline::FlatRead8((r26 + 2));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r0 = 0;
    MemoryInline::FlatWriteRam8((r28 + 14), static_cast<uint8_t>(r0));
    goto loc_801D0134;
}

loc_801D00DC:
{
    r3 = (r30 + 3464);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead8((r26 + 1));
    r3 = (r30 + 3436);
    r5 = MemoryInline::FlatRead16((r26 + 2));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r0 = MemoryInline::FlatRead16((r26 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D0104:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D0114;
    }
}

loc_801D0108:
{
    r3 = (r30 + 3500);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
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
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
}

loc_801D0114:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r28 + 14), static_cast<uint8_t>(r0));
    goto loc_801D0134;
}

loc_801D0120:
{
    r5 = (r30 + 3532);
    r3 = (r13 + -28456);
    r4 = 4498;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801D0134u;
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
    InvokeDirectCpu<0x801A2660u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801D0134:
{
    r11 = (r1 + 96);
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
    r0 = MemoryInline::FlatRead32((r1 + 100));
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801CFE60 func_801CFE60 preserves=true fpr_mask=0x00000000
