#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051ED14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8051ED14;

loc_8051ED14:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r11 = (r1 + 176);
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
    r8 = 0x80890000u;
    r0 = MemoryInline::FlatRead8((r3 + 76));
    r4 = MemoryInline::FlatRead8((r3 + 76));
    r7 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r8 + -832));
    r19 = 0x808B0000u;
    r8 = MemoryInline::FlatRead32((r3 + 64));
    r4 = (r4 & -129);
    r22 = MemoryInline::FlatRead32((r3 + 12));
    r29 = 0x808B0000u;
    r23 = MemoryInline::FlatRead32((r3 + 16));
    r15 = 0;
    r20 = MemoryInline::FlatRead16((r3 + 8));
    r18 = (r4 & -65);
    r21 = MemoryInline::FlatRead16((r3 + 10));
    r16 = 7;
    r26 = MemoryInline::FlatRead8((r3 + 22));
    r19 = (r19 + 12076);
    r27 = MemoryInline::FlatRead8((r3 + 23));
    r29 = (r29 + 12064);
    r30 = MemoryInline::FlatRead16((r3 + 32));
    r31 = r3;
    r24 = MemoryInline::FlatRead8((r3 + 20));
    r5 = (r3 + 28);
    r25 = MemoryInline::FlatRead8((r3 + 21));
    r11 = MemoryInline::FlatRead16((r3 + 34));
    r6 = MemoryInline::FlatRead8((r3 + 52));
    MemoryInline::FlatWrite8((r3 + 76), static_cast<uint8_t>(r4));
    r4 = (r3 + 4);
    r10 = MemoryInline::FlatRead32((r3 + 36));
    r9 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 72));
    MemoryInline::FlatWriteRam32((r1 + 84), r8);
    r8 = MemoryInline::FlatRead32((r3 + 68));
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = MemoryInline::FlatRead8((r3 + 53));
    MemoryInline::FlatWriteRam32((r1 + 88), r8);
    r28 = MemoryInline::FlatRead8((r3 + 24));
    r14 = MemoryInline::FlatRead32((r3 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r7 + -828));
    r8 = MemoryInline::FlatRead32((r3 + 60));
    r17 = MemoryInline::FlatRead8((r3 + 24));
    MemoryInline::FlatWriteRam32((r1 + 100), r8);
    r17 = (r17 & -129);
    r12 = MemoryInline::FlatRead8((r3 + 80));
    MemoryInline::FlatWriteRam8((r1 + 57), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r0 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = MemoryInline::FlatRead32((r1 + 88));
    r8 = MemoryInline::FlatRead32((r3 + 44));
    r7 = MemoryInline::FlatRead32((r3 + 48));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r0 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r15));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r15));
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r16));
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r16));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r15));
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r15));
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r17));
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r15));
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r15));
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r16));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r16));
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
    MemoryInline::FlatWrite8((r3 + 76), static_cast<uint8_t>(r18));
    MemoryInline::FlatWriteRam32((r1 + 96), r12);
    r12 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r19);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r20));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r21));
    MemoryInline::FlatWriteRam32((r1 + 16), r22);
    MemoryInline::FlatWriteRam32((r1 + 20), r23);
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r24));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam32((r1 + 32), r29);
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r30));
    MemoryInline::FlatWriteRam16((r1 + 38), static_cast<uint16_t>(r11));
    MemoryInline::FlatWriteRam32((r1 + 40), r10);
    MemoryInline::FlatWriteRam32((r1 + 44), r9);
    MemoryInline::FlatWriteRam32((r1 + 48), r8);
    MemoryInline::FlatWriteRam32((r1 + 52), r7);
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 60), r14);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f2.d);
    MemoryInline::FlatWriteRam8((r1 + 80), static_cast<uint8_t>(r0));
    ctr = r12;
    ctx->lr = 0x8051EEC0u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 96));
}

loc_8051EEC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051EEEC;
    }
}

loc_8051EECC:
{
    r0 = MemoryInline::FlatRead8((r31 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051EED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051EEEC;
    }
}

loc_8051EED8:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x8051EEECu;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8051EEEC:
{
    r0 = MemoryInline::FlatRead8((r31 + 24));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_0 & 1);
}

loc_8051EEF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051EF40;
    }
}

loc_8051EEF8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 17u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_2, 0u, (r1 + 12));
            r7 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r1 + 14));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 4u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 16));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 20));
        }
    }
    r6 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r1 + 24));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 13u, (r1 + 25));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 14u, (r1 + 26));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 15u, (r1 + 27));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 16u, (r1 + 28));
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 17u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_3, 0u, (r31 + 8), r8);
        MemoryInline::WriteResolved16(guest_range_3, 2u, (r31 + 10), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r31 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r31 + 16), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r31 + 20), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r31 + 21), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 14u, (r31 + 22), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r31 + 23), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 16u, (r31 + 24), static_cast<uint8_t>(r0));
}

loc_8051EF40:
{
    r0 = MemoryInline::FlatRead8((r31 + 76));
    r6 = MemoryInline::FlatRead16((r1 + 36));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051EF4C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 38), 0, 43u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_4, 0u, (r1 + 38));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 2u);
        if (resolved_pair.valid) {
            f8.d = PpcBitCastToFloatInline(resolved_pair.first);
            f7.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 2u, (r1 + 40));
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 6u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 10u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 10u, (r1 + 48));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 14u, (r1 + 52));
        }
    }
    r4 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r1 + 56));
    r3 = MemoryInline::ReadResolved8(guest_range_4, 19u, (r1 + 57));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 22u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 22u, (r1 + 60));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 26u, (r1 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 30u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 30u, (r1 + 68));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 34u, (r1 + 72));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 38u, (r1 + 76));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 42u, (r1 + 80));
    guest_range_5 = MemoryInline::ResolveRangeHost((r31 + 96), 0, 45u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_5, 0u, (r31 + 96), r6);
        MemoryInline::WriteResolved16(guest_range_5, 2u, (r31 + 98), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r31 + 100), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r31 + 104), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r31 + 108), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r31 + 112), f5.d);
    }
    MemoryInline::WriteResolved8(guest_range_5, 20u, (r31 + 116), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_5, 21u, (r31 + 117), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 24u, (r31 + 120), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r31 + 124), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r31 + 128), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r31 + 132), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r31 + 136), f0.d);
    MemoryInline::WriteResolved8(guest_range_5, 44u, (r31 + 140), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051EFF4;
    }
}

loc_8051EFBC:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r31 + 32), 0, 45u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_6, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_6, 0u, (r31 + 32), r6);
        MemoryInline::WriteResolved16(guest_range_6, 2u, (r31 + 34), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 4u, (r31 + 36), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 8u, (r31 + 40), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 12u, (r31 + 44), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 16u, (r31 + 48), f5.d);
    }
    MemoryInline::WriteResolved8(guest_range_6, 20u, (r31 + 52), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_6, 21u, (r31 + 53), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 24u, (r31 + 56), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 28u, (r31 + 60), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 32u, (r31 + 64), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 36u, (r31 + 68), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_6, 40u, (r31 + 72), f0.d);
    MemoryInline::WriteResolved8(guest_range_6, 44u, (r31 + 76), static_cast<uint8_t>(r0));
}

loc_8051EFF4:
{
    r11 = (r1 + 176);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8051ED14 func_8051ED14 preserves=true fpr_mask=0x00000000
