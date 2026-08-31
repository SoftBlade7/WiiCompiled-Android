#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_80626C10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;

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
    uint32_t ctr = ctx->ctr;

    goto loc_80626C10;

loc_80626C10:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    r11 = (r1 + 224);
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
    r27 = 0x808C0000u;
    r25 = r3;
    r27 = (r27 + -17864);
    ctx->lr = 0x80626C34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8060197Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = 0x808E0000u;
    r29 = 0;
    r3 = (r3 + -29320);
    r18 = (r25 + 84);
    MemoryInline::FlatWrite32(r25, r3);
    r3 = r18;
    MemoryInline::FlatWrite32((r25 + 76), r29);
    ctx->lr = 0x80626C54u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x805BD3A8u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = 0x80890000u;
    r4 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32144));
    r4 = (r4 + 14156);
    r0 = 2001;
    MemoryInline::FlatWrite32(r18, r4);
    r3 = (r25 + 788);
    MemoryInline::FlatWrite32((r18 + 596), r0);
    MemoryInline::FlatWrite32((r18 + 600), r29);
    MemoryInline::FlatWriteFloat32((r18 + 604), f0.d);
    MemoryInline::FlatWrite32((r25 + 784), r29);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_1943 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_1943[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_1943[1]);
    } else {
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
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
        ctr = ctx->ctr;
    }
    r12 = -1;
    r4 = 9;
    r28 = 1;
    r3 = 3402;
    r0 = 2;
    guest_range_2 = MemoryInline::ResolveRangeHost(r25, 0, 1069u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 984u, (r25 + 984), r4);
    r7 = 0x808C0000u;
    r8 = (r27 + 1312);
    MemoryInline::WriteResolved32(guest_range_2, 996u, (r25 + 996), r3);
    r7 = (r7 + -11484);
    r6 = (r27 + 1324);
    r5 = 0x808C0000u;
    MemoryInline::WriteResolved8(guest_range_2, 988u, (r25 + 988), static_cast<uint8_t>(r28));
    r4 = 0x808E0000u;
    r5 = (r5 + -11496);
    r3 = (r25 + 1072);
    MemoryInline::WriteResolved8(guest_range_2, 989u, (r25 + 989), static_cast<uint8_t>(r29));
    r4 = (r4 + -27968);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1000u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1000u, (r25 + 1000), r12);
        MemoryInline::WriteResolved32(guest_range_2, 1004u, (r25 + 1004), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1012u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1012u, (r25 + 1012), r12);
        MemoryInline::WriteResolved32(guest_range_2, 1016u, (r25 + 1016), r0);
    }
    r11 = MemoryInline::FlatRead32((r27 + 1312));
    r10 = MemoryInline::FlatRead32((r8 + 4));
    r9 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 1036u, (r25 + 1036), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1020u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1020u, (r25 + 1020), r7);
        MemoryInline::WriteResolved32(guest_range_2, 1024u, (r25 + 1024), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1028u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1028u, (r25 + 1028), r11);
        MemoryInline::WriteResolved32(guest_range_2, 1032u, (r25 + 1032), r10);
    }
    r8 = MemoryInline::FlatRead32((r27 + 1324));
    r7 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 80), r11);
    MemoryInline::FlatWriteRam32((r1 + 84), r10);
    MemoryInline::FlatWriteRam32((r1 + 88), r9);
    MemoryInline::FlatWriteRam32((r1 + 92), r8);
    MemoryInline::FlatWriteRam32((r1 + 96), r7);
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1040u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1040u, (r25 + 1040), r5);
        MemoryInline::WriteResolved32(guest_range_2, 1044u, (r25 + 1044), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1048u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1048u, (r25 + 1048), r8);
        MemoryInline::WriteResolved32(guest_range_2, 1052u, (r25 + 1052), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1056u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1056u, (r25 + 1056), r0);
        MemoryInline::WriteResolved32(guest_range_2, 1060u, (r25 + 1060), r12);
    }
    MemoryInline::WriteResolved32(guest_range_2, 1064u, (r25 + 1064), r29);
    MemoryInline::WriteResolved8(guest_range_2, 1068u, (r25 + 1068), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved32(guest_range_2, 0u, r25, r4);
    ctx->lr = 0x80626D48u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805F09A8u>(ctx);
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
    ctr = ctx->ctr;
    guest_range_1 = MemoryInline::ResolveRangeHost((r25 + 1620), 0, 112u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r25 + 1620), r29);
    r3 = (r27 + 1336);
    r9 = 0x808C0000u;
    r7 = 0x808C0000u;
    guest_range_5 = MemoryInline::ResolveRangeHost((r27 + 1336), 0, 60u, true, false);
    r24 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r27 + 1336));
    r9 = (r9 + -11820);
    r23 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r3 + 4));
    r8 = (r27 + 1348);
    r22 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r3 + 8));
    r26 = (r25 + 1732);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r25 + 1640), r22);
    r6 = (r27 + 1360);
    r5 = (r27 + 1372);
    r7 = (r7 + -11832);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r25 + 1624), r9);
    r4 = (r27 + 1384);
    r3 = r26;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r25 + 1628), r25);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r25 + 1632), r24);
    }
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r25 + 1636), r23);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 12u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r27 + 1348));
            r20 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r8 + 4));
        }
    }
    r19 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r8 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r25 + 1660), r19);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r25 + 1644), r9);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r25 + 1648), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r25 + 1652), r21);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r25 + 1656), r20);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r27 + 1360));
            r12 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r6 + 4));
        }
    }
    r11 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r6 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r25 + 1680), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r25 + 1664), r9);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r25 + 1668), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r25 + 1672), r18);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r25 + 1676), r12);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 36u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r27 + 1372));
            r9 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r5 + 4));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r25 + 1700), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r25 + 1684), r7);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r25 + 1688), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r25 + 1692), r10);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r25 + 1696), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 48u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r27 + 1384));
            r5 = MemoryInline::ReadResolved32(guest_range_5, 52u, (r4 + 4));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r4 + 8));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 104), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_6, 48u, (r1 + 152), r24);
        MemoryInline::WriteResolved32(guest_range_6, 52u, (r1 + 156), r23);
    }
    MemoryInline::WriteResolved32(guest_range_6, 56u, (r1 + 160), r22);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_6, 36u, (r1 + 140), r21);
        MemoryInline::WriteResolved32(guest_range_6, 40u, (r1 + 144), r20);
    }
    MemoryInline::WriteResolved32(guest_range_6, 44u, (r1 + 148), r19);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_6, 24u, (r1 + 128), r18);
        MemoryInline::WriteResolved32(guest_range_6, 28u, (r1 + 132), r12);
    }
    MemoryInline::WriteResolved32(guest_range_6, 32u, (r1 + 136), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_6, 12u, (r1 + 116), r10);
        MemoryInline::WriteResolved32(guest_range_6, 16u, (r1 + 120), r9);
    }
    MemoryInline::WriteResolved32(guest_range_6, 20u, (r1 + 124), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_6, 0u, (r1 + 104), r6);
        MemoryInline::WriteResolved32(guest_range_6, 4u, (r1 + 108), r5);
    }
    MemoryInline::WriteResolved32(guest_range_6, 8u, (r1 + 112), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r25 + 1704), r7);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r25 + 1708), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r25 + 1712), r6);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r25 + 1716), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r25 + 1720), r0);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r25 + 1724), r28);
    }
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r25 + 1728), r28);
    ctx->lr = 0x80626E60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8063D798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = 0x808D0000u;
    r12 = 0x808C0000u;
    r3 = (r3 + 12344);
    guest_range_3 = MemoryInline::ResolveRangeHost(r26, 0, 560u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r26, r3);
    r3 = (r27 + 1396);
    r12 = (r12 + -11580);
    guest_range_7 = MemoryInline::ResolveRangeHost((r27 + 1396), 0, 72u, true, false);
    r28 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r27 + 1396));
    r7 = (r27 + 1408);
    r29 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r3 + 4));
    r6 = (r27 + 1420);
    r30 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r3 + 8));
    r18 = (r27 + 1432);
    MemoryInline::WriteResolved32(guest_range_3, 456u, (r26 + 456), r30);
    r21 = (r27 + 1444);
    r24 = (r27 + 1456);
    r3 = (r25 + 1072);
    MemoryInline::WriteResolved32(guest_range_3, 440u, (r26 + 440), r12);
    r4 = 1;
    r5 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 444u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 444u, (r26 + 444), r26);
        MemoryInline::WriteResolved32(guest_range_3, 448u, (r26 + 448), r28);
    }
    MemoryInline::WriteResolved32(guest_range_3, 452u, (r26 + 452), r29);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 12u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r27 + 1408));
            r11 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r7 + 4));
        }
    }
    r10 = MemoryInline::ReadResolved32(guest_range_7, 20u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 476u, (r26 + 476), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 460u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 460u, (r26 + 460), r12);
        MemoryInline::WriteResolved32(guest_range_3, 464u, (r26 + 464), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 468u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_3, 468u, (r26 + 468), r31);
        MemoryInline::WriteResolved32(guest_range_3, 472u, (r26 + 472), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 24u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r27 + 1420));
            r8 = MemoryInline::ReadResolved32(guest_range_7, 28u, (r6 + 4));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_7, 32u, (r6 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 496u, (r26 + 496), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 480u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 480u, (r26 + 480), r12);
        MemoryInline::WriteResolved32(guest_range_3, 484u, (r26 + 484), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 488u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_3, 488u, (r26 + 488), r9);
        MemoryInline::WriteResolved32(guest_range_3, 492u, (r26 + 492), r8);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 36u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_7, 40u, (r18 + 4));
            r6 = MemoryInline::ReadResolved32(guest_range_7, 36u, (r27 + 1432));
        }
    }
    r18 = MemoryInline::ReadResolved32(guest_range_7, 44u, (r18 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 516u, (r26 + 516), r18);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 500u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 500u, (r26 + 500), r12);
        MemoryInline::WriteResolved32(guest_range_3, 504u, (r26 + 504), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 508u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 508u, (r26 + 508), r6);
        MemoryInline::WriteResolved32(guest_range_3, 512u, (r26 + 512), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 48u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.second;
            r19 = resolved_pair.first;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_7, 52u, (r21 + 4));
            r19 = MemoryInline::ReadResolved32(guest_range_7, 48u, (r27 + 1444));
        }
    }
    r21 = MemoryInline::ReadResolved32(guest_range_7, 56u, (r21 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 536u, (r26 + 536), r21);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 520u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 520u, (r26 + 520), r12);
        MemoryInline::WriteResolved32(guest_range_3, 524u, (r26 + 524), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 528u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_3, 528u, (r26 + 528), r19);
        MemoryInline::WriteResolved32(guest_range_3, 532u, (r26 + 532), r20);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 60u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_7, 60u, (r27 + 1456));
            r23 = MemoryInline::ReadResolved32(guest_range_7, 64u, (r24 + 4));
        }
    }
    r27 = MemoryInline::ReadResolved32(guest_range_7, 68u, (r24 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 556u, (r26 + 556), r27);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 540u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 540u, (r26 + 540), r12);
        MemoryInline::WriteResolved32(guest_range_3, 544u, (r26 + 544), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 548u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 548u, (r26 + 548), r22);
        MemoryInline::WriteResolved32(guest_range_3, 552u, (r26 + 552), r23);
    }
    r12 = MemoryInline::FlatRead32((r25 + 1072));
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_8, 0u, (r1 + 8), r28);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_8, 4u, (r1 + 12), r29);
        MemoryInline::WriteResolved32(guest_range_8, 8u, (r1 + 16), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_8, 12u, (r1 + 20), r31);
        MemoryInline::WriteResolved32(guest_range_8, 16u, (r1 + 24), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_8, 20u, (r1 + 28), r10);
        MemoryInline::WriteResolved32(guest_range_8, 24u, (r1 + 32), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_8, 28u, (r1 + 36), r8);
        MemoryInline::WriteResolved32(guest_range_8, 32u, (r1 + 40), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_8, 36u, (r1 + 44), r6);
        MemoryInline::WriteResolved32(guest_range_8, 40u, (r1 + 48), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_8, 44u, (r1 + 52), r18);
        MemoryInline::WriteResolved32(guest_range_8, 48u, (r1 + 56), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_8, 52u, (r1 + 60), r20);
        MemoryInline::WriteResolved32(guest_range_8, 56u, (r1 + 64), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_8, 60u, (r1 + 68), r22);
        MemoryInline::WriteResolved32(guest_range_8, 64u, (r1 + 72), r23);
    }
    MemoryInline::WriteResolved32(guest_range_8, 68u, (r1 + 76), r27);
    ctr = r12;
    ctx->lr = 0x80626FB0u;
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
    ctr = ctx->ctr;
    r3 = r25;
    r4 = (r25 + 1072);
    // inline leaf 0x80602474 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x80602474
    r3 = (r25 + 1072);
    r5 = (r25 + 1704);
    r4 = 2;
    r6 = 0;
    r7 = 0;
    // inline leaf 0x805F0D84 (7 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 28), r5);
    MemoryInline::FlatWrite8((r4 + 64), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 73), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x805F0D84
    r3 = (r25 + 1072);
    r5 = (r25 + 1684);
    r4 = 1;
    r6 = 0;
    r7 = 0;
    // inline leaf 0x805F0D84 (7 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r3 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 28), r5);
    MemoryInline::FlatWrite8((r4 + 64), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 73), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x805F0D84
    r11 = (r1 + 224);
    r3 = r25;
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE00E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFC fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80626C10 func_80626C10 preserves=true fpr_mask=0x00000000
