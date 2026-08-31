#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023883C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023883C;

loc_8023883C:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
    r31 = r4;
    r30 = r3;
    r4 = 4096;
    r5 = 4;
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x8023886Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802432E0u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 0x802A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24572));
    r5 = (r5 + 15584);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24568));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24576));
    r3 = -858980352;
    r0 = (r3 + -13057);
    r4 = (r5 + 24);
    guest_range_2 = MemoryInline::ResolveRangeHost(r30, 0, 339u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r30 + 72), r4);
    r3 = (r30 + 96);
    r4 = 32;
    MemoryInline::WriteResolved32(guest_range_2, 0u, r30, r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r30 + 76), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r30 + 80), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r30 + 84), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r30 + 88), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 92u, (r30 + 92), f0.d);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 96u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 104u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_2, 104u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_2, 106u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r4 = -11534336;
    r6 = 1358888960;
    r0 = (r4 + 20735);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = 1347485696;
    r6 = (r6 + 20735);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24600));
    r3 = (r3 + -1);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24576));
    r5 = (r30 + 200);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r6 = 13000;
    r22 = 0x802A0000u;
    r23 = MemoryInline::FlatRead8((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    r22 = (r22 + 15712);
    r11 = 0x802A0000u;
    r24 = MemoryInline::FlatRead8((r1 + 17));
    r18 = MemoryInline::FlatRead8((r1 + 20));
    r6 = 20;
    r19 = MemoryInline::FlatRead8((r1 + 21));
    r11 = (r11 + 15688);
    MemoryInline::WriteResolved32(guest_range_2, 200u, (r30 + 200), r22);
    r4 = (r30 + 156);
    r20 = MemoryInline::FlatRead8((r1 + 22));
    r3 = r30;
    r21 = MemoryInline::FlatRead8((r1 + 23));
    r25 = MemoryInline::FlatRead8((r1 + 18));
    r26 = MemoryInline::FlatRead8((r1 + 19));
    r27 = MemoryInline::FlatRead8((r1 + 8));
    r28 = MemoryInline::FlatRead8((r1 + 9));
    r29 = MemoryInline::FlatRead8((r1 + 10));
    r12 = MemoryInline::FlatRead8((r1 + 11));
    r10 = MemoryInline::FlatRead8((r1 + 12));
    r9 = MemoryInline::FlatRead8((r1 + 13));
    r8 = MemoryInline::FlatRead8((r1 + 14));
    r7 = MemoryInline::FlatRead8((r1 + 15));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24564));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r30 + 116), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 120u, (r30 + 120), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r30 + 124), r0);
        MemoryInline::WriteResolved32(guest_range_2, 128u, (r30 + 128), r0);
    }
    MemoryInline::WriteResolved8(guest_range_2, 132u, (r30 + 132), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_2, 133u, (r30 + 133), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_2, 134u, (r30 + 134), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_2, 135u, (r30 + 135), static_cast<uint8_t>(r21));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r30 + 136), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r30 + 140), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_2, 144u, (r30 + 144), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 156u, (r30 + 156), r22);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 160u, (r30 + 160), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 164u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 164u, (r30 + 164), f2.d);
        MemoryInline::WriteResolved32(guest_range_2, 168u, (r30 + 168), r0);
    }
    MemoryInline::WriteResolved32(guest_range_2, 172u, (r30 + 172), r0);
    MemoryInline::WriteResolved8(guest_range_2, 176u, (r30 + 176), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_2, 177u, (r30 + 177), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_2, 178u, (r30 + 178), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_2, 179u, (r30 + 179), static_cast<uint8_t>(r26));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 180u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 180u, (r30 + 180), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 184u, (r30 + 184), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_2, 188u, (r30 + 188), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 204u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 204u, (r30 + 204), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 208u, (r30 + 208), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 212u, (r30 + 212), r0);
        MemoryInline::WriteResolved32(guest_range_2, 216u, (r30 + 216), r0);
    }
    MemoryInline::WriteResolved8(guest_range_2, 220u, (r30 + 220), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 221u, (r30 + 221), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 222u, (r30 + 222), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 223u, (r30 + 223), static_cast<uint8_t>(r12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 224u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 224u, (r30 + 224), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 228u, (r30 + 228), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_2, 232u, (r30 + 232), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 200u, (r30 + 200), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 244u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 244u, (r30 + 244), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 248u, (r30 + 248), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 252u, (r30 + 252), r0);
        MemoryInline::WriteResolved32(guest_range_2, 256u, (r30 + 256), r0);
    }
    MemoryInline::WriteResolved8(guest_range_2, 260u, (r30 + 260), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_2, 261u, (r30 + 261), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 262u, (r30 + 262), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 263u, (r30 + 263), static_cast<uint8_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 264u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 264u, (r30 + 264), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 268u, (r30 + 268), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_2, 272u, (r30 + 272), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 284u, (r30 + 284), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 304u, (r30 + 304), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 320u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 320u, (r30 + 320), r5);
        MemoryInline::WriteResolved32(guest_range_2, 324u, (r30 + 324), r6);
    }
    MemoryInline::WriteResolved8(guest_range_2, 338u, (r30 + 338), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r30 + 108), r0);
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r30 + 112), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80238F48u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = r30;
    r4 = (r30 + 200);
    ctx->lr = 0x80238A38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80238F54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r30 + 338));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80238A40:
{
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r30 + 338), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80238A58;
    }
}

loc_80238A4C:
{
    r3 = 0x80230000u;
    r3 = (r3 + 18948);
    ctx->lr = 0x80238A58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016EC88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80238A58:
{
    // inline leaf 0x8016D39C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25660));
    // end of inlined leaf 0x8016D39C
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 720));
    r4 = (r4 + -1);
    ctx->lr = 0x80238A70u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801AAB98u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    ctx->lr = 0x80238A78u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801AA58Cu>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r11 = (r1 + 80);
    r3 = r30;
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023883C func_8023883C preserves=true fpr_mask=0x00000000
