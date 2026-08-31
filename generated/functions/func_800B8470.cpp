#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B8470(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r1_addr_0 = 0;
    uint32_t r1_addr_1 = 0;
    uint32_t r1_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B8470;

loc_800B8470:
{
    MemoryInline::FlatWriteRam32((r1 + -400), r1);
    r1 = (r1 + -400);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 404), r0);
    r11 = (r1 + 400);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r31 = r1;
    r29 = r3;
    r14 = r4;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_800B84B4;
    }
}

loc_800B8494:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 40), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 0u, (r31 + 40), f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 8u, (r31 + 48), f2.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 16u, (r31 + 56), f3.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 24u, (r31 + 64), f4.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 32u, (r31 + 72), f5.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 40u, (r31 + 80), f6.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 48u, (r31 + 88), f7.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 56u, (r31 + 96), f8.d);
}

loc_800B84B4:
{
    r30 = MemoryInline::FlatRead32((r13 + -27000));
    r11 = (r31 + 408);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27804));
    r0 = (r31 + 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800B84C8:
{
    r12 = 33554432;
    guest_range_4 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, (r31 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r31 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r31 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r31 + 20), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r31 + 24), r7);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r31 + 28), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r31 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r31 + 36), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 112u, (r31 + 120), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 116u, (r31 + 124), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 120u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 120u, (r31 + 128), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 124u, (r31 + 132), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_4, 96u, (r31 + 104), r12);
        MemoryInline::WriteResolved32(guest_range_4, 100u, (r31 + 108), r11);
    }
    MemoryInline::WriteResolved32(guest_range_4, 104u, (r31 + 112), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B8510;
    }
}

loc_800B850C:
{
    goto loc_800B8528;
}

loc_800B8510:
{
    r3 = MemoryInline::FlatRead32((r13 + -32300));
    r0 = MemoryInline::FlatRead32(r1);
    r30 = (0 - r3);
    r30 = (r30 & -8);
    r1_addr_1 = (r1 + r30);
    MemoryInline::FlatWrite32(r1_addr_1, r0);
    r1 = r1_addr_1;
    r30 = (r1 + 8);
}

loc_800B8528:
{
    r4 = MemoryInline::FlatRead32((r13 + -32300));
    r3 = r30;
    r5 = r14;
    r6 = (r31 + 104);
    ctx->lr = 0x800B853Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001790Cu>(ctx);
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
    r13 = ctx->gpr[13];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -32300));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_800B8548:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B8550;
    }
}

loc_800B854C:
{
    r3 = r0;
}

loc_800B8550:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 100u, true, false);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r29 + 24));
    MemoryInline::FlatWriteRam32((r31 + 316), r16);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r29 + 25));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r29 + 21));
    MemoryInline::FlatWriteRam32((r31 + 236), r16);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r29 + 26));
    MemoryInline::FlatWriteRam32((r31 + 240), r16);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 27u, (r29 + 27));
    MemoryInline::FlatWriteRam8((r31 + 157), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 316));
    MemoryInline::FlatWriteRam32((r31 + 244), r16);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r29 + 28));
    MemoryInline::FlatWriteRam8((r31 + 160), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 236));
    MemoryInline::FlatWriteRam32((r31 + 248), r16);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 29u, (r29 + 29));
    MemoryInline::FlatWriteRam8((r31 + 161), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 240));
    MemoryInline::FlatWriteRam32((r31 + 252), r16);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 30u, (r29 + 30));
    MemoryInline::FlatWriteRam8((r31 + 162), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 244));
    MemoryInline::FlatWriteRam32((r31 + 256), r16);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 31u, (r29 + 31));
    MemoryInline::FlatWriteRam8((r31 + 163), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 248));
    MemoryInline::FlatWriteRam32((r31 + 260), r16);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r29 + 32));
    MemoryInline::FlatWriteRam8((r31 + 164), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 252));
    MemoryInline::FlatWriteRam32((r31 + 264), r16);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r29 + 36));
    MemoryInline::FlatWriteRam8((r31 + 165), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 256));
    MemoryInline::FlatWriteRam32((r31 + 268), r16);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r29 + 40));
    MemoryInline::FlatWriteRam8((r31 + 166), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 260));
    MemoryInline::FlatWriteRam32((r31 + 272), r16);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r29 + 44));
    MemoryInline::FlatWriteRam8((r31 + 167), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 264));
    MemoryInline::FlatWriteRam32((r31 + 276), r16);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r29 + 48));
    MemoryInline::FlatWriteRam32((r31 + 168), r0);
    r0 = MemoryInline::FlatRead32((r31 + 268));
    MemoryInline::FlatWriteRam32((r31 + 280), r16);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r29 + 52));
    MemoryInline::FlatWriteRam32((r31 + 172), r0);
    r0 = MemoryInline::FlatRead32((r31 + 272));
    MemoryInline::FlatWriteRam32((r31 + 284), r16);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r29 + 56));
    MemoryInline::FlatWriteRam32((r31 + 176), r0);
    r0 = MemoryInline::FlatRead32((r31 + 276));
    MemoryInline::FlatWriteRam32((r31 + 288), r16);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r29 + 60));
    MemoryInline::FlatWriteRam32((r31 + 180), r0);
    r0 = MemoryInline::FlatRead32((r31 + 280));
    MemoryInline::FlatWriteRam32((r31 + 292), r16);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 64u, (r29 + 64));
    MemoryInline::FlatWriteRam32((r31 + 184), r0);
    r0 = MemoryInline::FlatRead32((r31 + 284));
    MemoryInline::FlatWriteRam32((r31 + 296), r16);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 65u, (r29 + 65));
    MemoryInline::FlatWriteRam32((r31 + 188), r0);
    r0 = MemoryInline::FlatRead32((r31 + 288));
    MemoryInline::FlatWriteRam32((r31 + 300), r16);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 66u, (r29 + 66));
    MemoryInline::FlatWriteRam32((r31 + 192), r0);
    r0 = MemoryInline::FlatRead32((r31 + 292));
    MemoryInline::FlatWriteRam32((r31 + 304), r16);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 67u, (r29 + 67));
    MemoryInline::FlatWriteRam32((r31 + 196), r0);
    r0 = MemoryInline::FlatRead32((r31 + 296));
    MemoryInline::FlatWriteRam32((r31 + 308), r16);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r29 + 72));
    MemoryInline::FlatWriteRam8((r31 + 200), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 300));
    MemoryInline::FlatWriteRam8((r31 + 201), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 304));
    r17 = MemoryInline::ReadResolved8(guest_range_1, 0u, r29);
    r18 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r29 + 1));
    r19 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 2));
    r20 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r29 + 3));
    r21 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r29 + 4));
    r22 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r29 + 5));
    r23 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r29 + 6));
    r24 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r29 + 7));
    r25 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r29 + 8));
    r26 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r29 + 9));
    r27 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r29 + 10));
    r28 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r29 + 11));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r29 + 12));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r29 + 13));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r29 + 14));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r29 + 15));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r29 + 16));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r29 + 17));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r29 + 18));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r29 + 19));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r29 + 20));
    r15 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r29 + 22));
    r14 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r29 + 23));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r29 + 68));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 76u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r29 + 76));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r29 + 80));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 84u, (r29 + 84));
    MemoryInline::FlatWriteRam8((r31 + 202), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 308));
    MemoryInline::FlatWriteRam8((r31 + 203), static_cast<uint8_t>(r0));
    r0 = r16;
    MemoryInline::FlatWriteRam32((r31 + 312), r16);
    MemoryInline::FlatWriteRam8((r31 + 136), static_cast<uint8_t>(r17));
    MemoryInline::FlatWriteRam8((r31 + 137), static_cast<uint8_t>(r18));
    MemoryInline::FlatWriteRam8((r31 + 138), static_cast<uint8_t>(r19));
    MemoryInline::FlatWriteRam8((r31 + 139), static_cast<uint8_t>(r20));
    MemoryInline::FlatWriteRam8((r31 + 140), static_cast<uint8_t>(r21));
    MemoryInline::FlatWriteRam8((r31 + 141), static_cast<uint8_t>(r22));
    MemoryInline::FlatWriteRam8((r31 + 142), static_cast<uint8_t>(r23));
    MemoryInline::FlatWriteRam8((r31 + 143), static_cast<uint8_t>(r24));
    MemoryInline::FlatWriteRam8((r31 + 144), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRam8((r31 + 145), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam8((r31 + 146), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r31 + 147), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r31 + 148), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r31 + 149), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r31 + 150), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r31 + 151), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r31 + 152), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r31 + 153), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r31 + 154), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r31 + 155), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r31 + 156), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r31 + 158), static_cast<uint8_t>(r15));
    MemoryInline::FlatWriteRam8((r31 + 159), static_cast<uint8_t>(r14));
    MemoryInline::FlatWriteRamFloat32((r31 + 204), f3.d);
    MemoryInline::FlatWriteRam32((r31 + 208), r0);
    MemoryInline::FlatWriteRamFloat32((r31 + 212), f2.d);
    MemoryInline::FlatWriteRamFloat32((r31 + 216), f1.d);
    MemoryInline::FlatWriteRamFloat32((r31 + 220), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r29 + 88));
    r6 = r3;
    r7 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r29 + 92));
    r5 = r30;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r29 + 96));
    r3 = (r31 + 136);
    MemoryInline::FlatWriteRam32((r31 + 224), r4);
    r4 = (r31 + 120);
    MemoryInline::FlatWriteRam32((r31 + 228), r7);
    MemoryInline::FlatWriteRam32((r31 + 232), r0);
    ctx->lr = 0x800B87ACu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BA830u>(ctx);
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
    r13 = ctx->gpr[13];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 136);
    r4 = 0;
    ctx->lr = 0x800B87B8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B2EB0u>(ctx);
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
    r13 = ctx->gpr[13];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r10 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 124));
    r11 = (r10 + 400);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r1 = r10;
    ctx->lr = r0;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800B8470 func_800B8470 preserves=true fpr_mask=0x00000000
