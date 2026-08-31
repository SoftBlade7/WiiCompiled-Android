#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80511110(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80511110;

loc_80511110:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r0 = (r10 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80511128:
{
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r22 = r7;
    r28 = r8;
    r29 = r9;
    r30 = r10;
    r0 = 6;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80511154;
    }
}

loc_80511150:
{
    r0 = 12;
}

loc_80511154:
{
}

loc_80511158:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_8051116C;
    }
}

loc_8051115C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_80511160:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051116C;
    }
}

loc_80511164:
{
    r3 = -1;
    goto loc_805114E8;
}

loc_8051116C:
{
    r3 = 1;
    r0 = MemoryInline::FlatRead16((r8 + 24));
    r31 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r0 = (r0 & r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r3 = 1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80511194;
    }
}

loc_80511184:
{
    r3 = r28;
    r4 = r26;
    r5 = r29;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80510D7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80511194:
{
    r0 = MemoryInline::FlatRead16((r28 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8051119C:
{
    r0 = (r0 | r31);
    MemoryInline::FlatWrite16((r28 + 24), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805111B4;
    }
}

loc_805111A8:
{
    r0 = MemoryInline::FlatRead16((r28 + 26));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_805114E8;
}

loc_805111B4:
{
}

loc_805111B8:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_80511354;
    }
}

loc_805111BC:
{
    r0 = (r30 & 1);
}

loc_805111C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805111F0;
    }
}

loc_805111C4:
{
}

loc_805111C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_805111F0;
    }
}

loc_805111CC:
{
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -1840));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805111DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805111F0;
    }
}

loc_805111E0:
{
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r0 = MemoryInline::FlatRead16((r28 + 26));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_805114E8;
}

loc_805111F0:
{
    r0 = (r30 & 2);
}

loc_805111F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80511210;
    }
}

loc_805111F8:
{
    r4 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead8((r4 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80511210;
    }
}

loc_80511208:
{
    r3 = -1;
    goto loc_805114E8;
}

loc_80511210:
{
}

loc_80511214:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80511234;
    }
}

loc_80511218:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -1836));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80511228:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80511234;
    }
}

loc_8051122C:
{
    r30 = (r30 | 1);
    goto loc_80511238;
}

loc_80511234:
{
    r30 = (r30 & -2);
}

loc_80511238:
{
}

loc_8051123C:
{
    r3 = -1;
    r0 = -1;
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(0))) {
        goto loc_8051124C;
    }
}

loc_80511248:
{
    r0 = (r27 + 1);
}

loc_8051124C:
{
    r22 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r23 = 0;
    goto loc_805112A8;
}

loc_80511258:
{
    r0 = (r23 & 65535);
    r3 = r24;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80511264:
{
    r4 = r25;
    r5 = r26;
    r6 = r22;
    r7 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80511288;
    }
}

loc_80511278:
{
    r0 = (r0 * 24);
    r8 = (r28 + r0);
    r8 = MemoryInline::FlatRead32((r8 + 56));
    goto loc_8051128C;
}

loc_80511288:
{
    r8 = 0;
}

loc_8051128C:
{
    r9 = r29;
    r10 = r30;
    ctx->lr = 0x80511298u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_805112A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_805112B8;
    }
}

loc_805112A4:
{
    r23 = (r23 + 1);
}

loc_805112A8:
{
    r4 = MemoryInline::FlatRead16((r28 + 4));
    r0 = (r23 & 65535);
}

loc_805112B4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_80511258;
    }
}

loc_805112B8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_805112C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805114E8;
    }
}

loc_805112C4:
{
}

loc_805112C8:
{
    r3 = -1;
    r0 = -1;
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(0))) {
        goto loc_805112D8;
    }
}

loc_805112D4:
{
    r0 = (r27 + 1);
}

loc_805112D8:
{
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r22 = 0;
    goto loc_80511340;
}

loc_805112E4:
{
    r0 = (r22 & 65535);
}

loc_805112EC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_80511300;
    }
}

loc_805112F0:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r4 = (r28 + r0);
    r8 = MemoryInline::FlatRead32((r4 + 32));
    goto loc_80511304;
}

loc_80511300:
{
    r8 = 0;
}

loc_80511304:
{
    r0 = MemoryInline::FlatRead16((r8 + 24));
    r0 = (r0 & r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051133C;
    }
}

loc_80511310:
{
    r3 = r24;
    r4 = r25;
    r5 = r26;
    r6 = r23;
    r9 = r29;
    r10 = r30;
    r7 = 1;
    ctx->lr = 0x80511330u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80511338:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805114E8;
    }
}

loc_8051133C:
{
    r22 = (r22 + 1);
}

loc_80511340:
{
    r4 = MemoryInline::FlatRead16((r28 + 6));
    r0 = (r22 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8051134C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805112E4;
    }
}

loc_80511350:
{
    goto loc_805114E8;
}

loc_80511354:
{
    r0 = (r30 & 1);
}

loc_80511358:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80511388;
    }
}

loc_8051135C:
{
}

loc_80511360:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80511388;
    }
}

loc_80511364:
{
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -1836));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80511374:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80511388;
    }
}

loc_80511378:
{
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r0 = MemoryInline::FlatRead16((r28 + 26));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_805114E8;
}

loc_80511388:
{
    r0 = (r30 & 2);
}

loc_8051138C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805113A8;
    }
}

loc_80511390:
{
    r4 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead8((r4 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805113A8;
    }
}

loc_805113A0:
{
    r3 = -1;
    goto loc_805114E8;
}

loc_805113A8:
{
}

loc_805113AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_805113CC;
    }
}

loc_805113B0:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -1840));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805113C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805113CC;
    }
}

loc_805113C4:
{
    r30 = (r30 | 1);
    goto loc_805113D0;
}

loc_805113CC:
{
    r30 = (r30 & -2);
}

loc_805113D0:
{
}

loc_805113D4:
{
    r3 = -1;
    r0 = -1;
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(0))) {
        goto loc_805113E4;
    }
}

loc_805113E0:
{
    r0 = (r27 + 1);
}

loc_805113E4:
{
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r22 = 0;
    goto loc_80511440;
}

loc_805113F0:
{
    r0 = (r22 & 65535);
    r3 = r24;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_805113FC:
{
    r4 = r25;
    r5 = r26;
    r6 = r23;
    r7 = 1;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80511420;
    }
}

loc_80511410:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 262140);
    r8 = (r28 + r0);
    r8 = MemoryInline::FlatRead32((r8 + 32));
    goto loc_80511424;
}

loc_80511420:
{
    r8 = 0;
}

loc_80511424:
{
    r9 = r29;
    r10 = r30;
    ctx->lr = 0x80511430u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80511438:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511450;
    }
}

loc_8051143C:
{
    r22 = (r22 + 1);
}

loc_80511440:
{
    r4 = MemoryInline::FlatRead16((r28 + 6));
    r0 = (r22 & 65535);
}

loc_8051144C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_805113F0;
    }
}

loc_80511450:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80511458:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805114E8;
    }
}

loc_8051145C:
{
}

loc_80511460:
{
    r3 = -1;
    r0 = -1;
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(0))) {
        goto loc_80511470;
    }
}

loc_8051146C:
{
    r0 = (r27 + 1);
}

loc_80511470:
{
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r22 = 0;
    goto loc_805114D8;
}

loc_8051147C:
{
    r0 = (r22 & 65535);
}

loc_80511484:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_80511498;
    }
}

loc_80511488:
{
    r0 = (r0 * 24);
    r4 = (r28 + r0);
    r8 = MemoryInline::FlatRead32((r4 + 56));
    goto loc_8051149C;
}

loc_80511498:
{
    r8 = 0;
}

loc_8051149C:
{
    r0 = MemoryInline::FlatRead16((r8 + 24));
    r0 = (r0 & r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805114D4;
    }
}

loc_805114A8:
{
    r3 = r24;
    r4 = r25;
    r5 = r26;
    r6 = r23;
    r9 = r29;
    r10 = r30;
    r7 = 0;
    ctx->lr = 0x805114C8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_805114D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805114E8;
    }
}

loc_805114D4:
{
    r22 = (r22 + 1);
}

loc_805114D8:
{
    r4 = MemoryInline::FlatRead16((r28 + 4));
    r0 = (r22 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_805114E4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8051147C;
    }
}

loc_805114E8:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC007FB gpr_write=0xFFC00FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80511110 func_80511110 preserves=true fpr_mask=0x00000000
