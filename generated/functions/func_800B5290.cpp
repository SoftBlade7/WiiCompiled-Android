#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B5290(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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

    goto loc_800B5290;

loc_800B5290:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    r11 = (r1 + 272);
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
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 100u, true, false);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r3 + 26));
    r6 = r5;
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r3);
    MemoryInline::FlatWriteRam32((r1 + 196), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 27u, (r3 + 27));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r3 + 24));
    MemoryInline::FlatWriteRam32((r1 + 128), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r3 + 28));
    MemoryInline::FlatWriteRam32((r1 + 132), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 29u, (r3 + 29));
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 196));
    MemoryInline::FlatWriteRam32((r1 + 136), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 30u, (r3 + 30));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 128));
    MemoryInline::FlatWriteRam32((r1 + 140), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 31u, (r3 + 31));
    MemoryInline::FlatWriteRam8((r1 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27804));
    MemoryInline::FlatWriteRam32((r1 + 144), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 32));
    MemoryInline::FlatWriteRam8((r1 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 136));
    MemoryInline::FlatWriteRam32((r1 + 148), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r3 + 36));
    MemoryInline::FlatWriteRam8((r1 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 140));
    MemoryInline::FlatWriteRam32((r1 + 152), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r3 + 40));
    MemoryInline::FlatWriteRam8((r1 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 144));
    MemoryInline::FlatWriteRam32((r1 + 156), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r3 + 44));
    MemoryInline::FlatWriteRam8((r1 + 55), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    MemoryInline::FlatWriteRam32((r1 + 160), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r3 + 48));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r0 = MemoryInline::FlatRead32((r1 + 152));
    MemoryInline::FlatWriteRam32((r1 + 164), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r3 + 52));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r0 = MemoryInline::FlatRead32((r1 + 156));
    MemoryInline::FlatWriteRam32((r1 + 168), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r3 + 56));
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r0 = MemoryInline::FlatRead32((r1 + 160));
    MemoryInline::FlatWriteRam32((r1 + 172), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r3 + 60));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = MemoryInline::FlatRead32((r1 + 164));
    MemoryInline::FlatWriteRam32((r1 + 176), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 64u, (r3 + 64));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r0 = MemoryInline::FlatRead32((r1 + 168));
    MemoryInline::FlatWriteRam32((r1 + 180), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 65u, (r3 + 65));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r0 = MemoryInline::FlatRead32((r1 + 172));
    MemoryInline::FlatWriteRam32((r1 + 184), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 66u, (r3 + 66));
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r0 = MemoryInline::FlatRead32((r1 + 176));
    MemoryInline::FlatWriteRam32((r1 + 188), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 67u, (r3 + 67));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = MemoryInline::FlatRead32((r1 + 180));
    MemoryInline::FlatWriteRam32((r1 + 192), r15);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 1));
    MemoryInline::FlatWriteRam8((r1 + 88), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 184));
    MemoryInline::FlatWriteRam8((r1 + 89), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 188));
    r17 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 2));
    r18 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 3));
    r19 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 4));
    r20 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
    r21 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 6));
    r22 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 7));
    r23 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 8));
    r24 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r3 + 9));
    r25 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r3 + 10));
    r26 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r3 + 11));
    r27 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r3 + 12));
    r28 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r3 + 13));
    r29 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r3 + 14));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r3 + 15));
    r31 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r3 + 16));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r3 + 17));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r3 + 18));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r3 + 19));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r3 + 20));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r3 + 21));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r3 + 22));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r3 + 23));
    r14 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r3 + 25));
    r15 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::FlatWriteRam8((r1 + 90), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 192));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r15));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r16));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r17));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r18));
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r19));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r20));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r21));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r22));
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r23));
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r24));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r14));
    MemoryInline::FlatWriteRam8((r1 + 91), static_cast<uint8_t>(r0));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r3 + 68));
    r5 = r4;
    r9 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r3 + 72));
    r4 = (r1 + 8);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 76u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r3 + 76));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r3 + 80));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 84u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            r8 = resolved_pair.second;
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 84u, (r3 + 84));
            r8 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r3 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 92u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r3 + 92));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r3 + 96));
        }
    }
    r3 = (r1 + 24);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f3.d);
    MemoryInline::FlatWriteRam32((r1 + 96), r9);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 112), r8);
    MemoryInline::FlatWriteRam32((r1 + 116), r7);
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    ctx->lr = 0x800B5504u;
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
    InvokeDirectCpu<0x800B6C90u>(ctx);
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
    r3 = (r1 + 24);
    r4 = 0;
    ctx->lr = 0x800B5510u;
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r11 = (r1 + 272);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
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
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE03E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFF0 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800B5290 func_800B5290 preserves=true fpr_mask=0x00000000
