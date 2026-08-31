#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_80629F30(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80629F30;

loc_80629F30:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r11 = (r1 + 176);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
    r29 = 0x808C0000u;
    r27 = r3;
    r29 = (r29 + -17864);
    ctx->lr = 0x80629F54u;
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
    r30 = 0;
    r3 = (r3 + -29320);
    r20 = (r27 + 84);
    MemoryInline::FlatWrite32(r27, r3);
    r3 = r20;
    MemoryInline::FlatWrite32((r27 + 76), r30);
    ctx->lr = 0x80629F74u;
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
    MemoryInline::FlatWrite32(r20, r4);
    r3 = (r27 + 788);
    MemoryInline::FlatWrite32((r20 + 596), r0);
    MemoryInline::FlatWrite32((r20 + 600), r30);
    MemoryInline::FlatWriteFloat32((r20 + 604), f0.d);
    MemoryInline::FlatWrite32((r27 + 784), r30);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_1771 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_1771[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_1771[1]);
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
    r9 = 2;
    r31 = 1;
    r0 = 3700;
    guest_range_2 = MemoryInline::ResolveRangeHost(r27, 0, 1069u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 984u, (r27 + 984), r9);
    r8 = (r29 + 2572);
    r7 = 0x808C0000u;
    r5 = 0x808C0000u;
    MemoryInline::WriteResolved8(guest_range_2, 988u, (r27 + 988), static_cast<uint8_t>(r31));
    r7 = (r7 + -11484);
    r6 = (r29 + 2584);
    r4 = 0x808E0000u;
    MemoryInline::WriteResolved8(guest_range_2, 989u, (r27 + 989), static_cast<uint8_t>(r30));
    r5 = (r5 + -11496);
    r4 = (r4 + -26952);
    r3 = (r27 + 1072);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 996u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 996u, (r27 + 996), r0);
        MemoryInline::WriteResolved32(guest_range_2, 1000u, (r27 + 1000), r12);
    }
    MemoryInline::WriteResolved32(guest_range_2, 1004u, (r27 + 1004), r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1012u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1012u, (r27 + 1012), r12);
        MemoryInline::WriteResolved32(guest_range_2, 1016u, (r27 + 1016), r9);
    }
    r11 = MemoryInline::FlatRead32((r29 + 2572));
    r10 = MemoryInline::FlatRead32((r8 + 4));
    r9 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 1036u, (r27 + 1036), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1020u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1020u, (r27 + 1020), r7);
        MemoryInline::WriteResolved32(guest_range_2, 1024u, (r27 + 1024), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1028u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1028u, (r27 + 1028), r11);
        MemoryInline::WriteResolved32(guest_range_2, 1032u, (r27 + 1032), r10);
    }
    r8 = MemoryInline::FlatRead32((r29 + 2584));
    r7 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 32), r11);
    MemoryInline::FlatWriteRam32((r1 + 36), r10);
    MemoryInline::FlatWriteRam32((r1 + 40), r9);
    MemoryInline::FlatWriteRam32((r1 + 44), r8);
    MemoryInline::FlatWriteRam32((r1 + 48), r7);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1040u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1040u, (r27 + 1040), r5);
        MemoryInline::WriteResolved32(guest_range_2, 1044u, (r27 + 1044), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1048u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1048u, (r27 + 1048), r8);
        MemoryInline::WriteResolved32(guest_range_2, 1052u, (r27 + 1052), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1056u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1056u, (r27 + 1056), r0);
        MemoryInline::WriteResolved32(guest_range_2, 1060u, (r27 + 1060), r12);
    }
    MemoryInline::WriteResolved32(guest_range_2, 1064u, (r27 + 1064), r30);
    MemoryInline::WriteResolved8(guest_range_2, 1068u, (r27 + 1068), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved32(guest_range_2, 0u, r27, r4);
    ctx->lr = 0x8062A064u;
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
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 1620), 0, 112u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r27 + 1620), r30);
    r3 = (r29 + 2596);
    r9 = 0x808C0000u;
    r7 = 0x808C0000u;
    guest_range_5 = MemoryInline::ResolveRangeHost((r29 + 2596), 0, 60u, true, false);
    r20 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r29 + 2596));
    r9 = (r9 + -12036);
    r21 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r3 + 4));
    r8 = (r29 + 2608);
    r22 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r3 + 8));
    r28 = (r27 + 1732);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r27 + 1640), r22);
    r6 = (r29 + 2620);
    r5 = (r29 + 2632);
    r7 = (r7 + -12048);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r27 + 1624), r9);
    r4 = (r29 + 2644);
    r3 = r28;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r27 + 1628), r27);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r27 + 1632), r20);
    }
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r27 + 1636), r21);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 12u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r29 + 2608));
            r24 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r8 + 4));
        }
    }
    r25 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r8 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r27 + 1660), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r27 + 1644), r9);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r27 + 1648), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r27 + 1652), r23);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r27 + 1656), r24);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r29 + 2620));
            r12 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r6 + 4));
        }
    }
    r11 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r6 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r27 + 1680), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r27 + 1664), r9);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r27 + 1668), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r27 + 1672), r26);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r27 + 1676), r12);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 36u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r29 + 2632));
            r9 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r5 + 4));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r27 + 1700), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r27 + 1684), r7);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r27 + 1688), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r27 + 1692), r10);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r27 + 1696), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 48u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r29 + 2644));
            r5 = MemoryInline::ReadResolved32(guest_range_5, 52u, (r4 + 4));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r4 + 8));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_6, 48u, (r1 + 104), r20);
        MemoryInline::WriteResolved32(guest_range_6, 52u, (r1 + 108), r21);
    }
    MemoryInline::WriteResolved32(guest_range_6, 56u, (r1 + 112), r22);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_6, 36u, (r1 + 92), r23);
        MemoryInline::WriteResolved32(guest_range_6, 40u, (r1 + 96), r24);
    }
    MemoryInline::WriteResolved32(guest_range_6, 44u, (r1 + 100), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_6, 24u, (r1 + 80), r26);
        MemoryInline::WriteResolved32(guest_range_6, 28u, (r1 + 84), r12);
    }
    MemoryInline::WriteResolved32(guest_range_6, 32u, (r1 + 88), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_6, 12u, (r1 + 68), r10);
        MemoryInline::WriteResolved32(guest_range_6, 16u, (r1 + 72), r9);
    }
    MemoryInline::WriteResolved32(guest_range_6, 20u, (r1 + 76), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_6, 0u, (r1 + 56), r6);
        MemoryInline::WriteResolved32(guest_range_6, 4u, (r1 + 60), r5);
    }
    MemoryInline::WriteResolved32(guest_range_6, 8u, (r1 + 64), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r27 + 1704), r7);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r27 + 1708), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r27 + 1712), r6);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r27 + 1716), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r27 + 1720), r0);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r27 + 1724), r31);
    }
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r27 + 1728), r31);
    ctx->lr = 0x8062A17Cu;
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
    r4 = 0x805C0000u;
    r3 = (r3 + 12972);
    r5 = 0x805C0000u;
    MemoryInline::FlatWrite32(r28, r3);
    r3 = (r28 + 372);
    r4 = (r4 + -11352);
    r5 = (r5 + -11088);
    r6 = 596;
    r7 = 8;
    ctx->lr = 0x8062A1A8u;
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
    InvokeDirectCpu<0x80020FF4u>(ctx);
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
    r3 = (r29 + 2656);
    r11 = MemoryInline::FlatRead32((r29 + 2656));
    r10 = MemoryInline::FlatRead32((r3 + 4));
    r8 = 0x808C0000u;
    r9 = MemoryInline::FlatRead32((r3 + 8));
    r8 = (r8 + -11592);
    guest_range_3 = MemoryInline::ResolveRangeHost((r28 + 5140), 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r28 + 5156), r9);
    r4 = 0x808D0000u;
    r5 = (r29 + 2668);
    r3 = (r28 + 5208);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r28 + 5140), r8);
    r4 = (r4 + 13832);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r28 + 5144), r28);
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r28 + 5148), r11);
    }
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r28 + 5152), r10);
    r7 = MemoryInline::FlatRead32((r29 + 2668));
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r11);
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    MemoryInline::FlatWriteRam32((r1 + 16), r9);
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r28 + 5160), r8);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r28 + 5164), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r28 + 5168), r7);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r28 + 5172), r6);
    }
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r28 + 5176), r0);
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r28 + 5184), r4);
    MemoryInline::WriteResolved8(guest_range_3, 56u, (r28 + 5196), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r28 + 5200), r30);
    ctx->lr = 0x8062A22Cu;
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
    r20 = (r27 + 7316);
    r3 = (r3 + 13488);
    MemoryInline::FlatWrite32((r28 + 5184), r3);
    r0 = (r3 + 24);
    MemoryInline::FlatWrite32((r28 + 5208), r0);
    r3 = r20;
    ctx->lr = 0x8062A24Cu;
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
    r4 = 0x80640000u;
    r3 = (r3 + 12912);
    r5 = 0x80640000u;
    MemoryInline::FlatWrite32(r20, r3);
    r3 = (r20 + 372);
    r4 = (r4 + -10344);
    r5 = (r5 + -10048);
    r6 = 372;
    r7 = 8;
    ctx->lr = 0x8062A278u;
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
    InvokeDirectCpu<0x80020FF4u>(ctx);
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
    r12 = MemoryInline::FlatRead32((r27 + 1072));
    r3 = (r27 + 1072);
    r4 = 1;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8062A294u;
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
    r3 = r27;
    r4 = (r27 + 1072);
    // inline leaf 0x80602474 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x80602474
    r3 = (r27 + 1072);
    r5 = (r27 + 1704);
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
    r3 = (r27 + 1072);
    r5 = (r27 + 1684);
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
    r11 = (r1 + 176);
    r3 = r27;
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
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
// RECOMP_REGISTRATION base 0x80629F30 func_80629F30 preserves=true fpr_mask=0x00000000
