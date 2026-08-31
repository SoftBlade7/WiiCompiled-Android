#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_80628210(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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

    goto loc_80628210;

loc_80628210:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r11 = (r1 + 144);
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
    r28 = r3;
    r29 = (r29 + -17864);
    ctx->lr = 0x80628234u;
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
    r0 = 3;
    r3 = (r3 + -29320);
    r20 = (r28 + 84);
    MemoryInline::FlatWrite32(r28, r3);
    r3 = r20;
    MemoryInline::FlatWrite32((r28 + 76), r0);
    ctx->lr = 0x80628254u;
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
    r30 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32144));
    r3 = 0x808D0000u;
    r3 = (r3 + 14156);
    r0 = 2001;
    MemoryInline::FlatWrite32(r20, r3);
    r3 = (r28 + 788);
    MemoryInline::FlatWrite32((r20 + 596), r0);
    MemoryInline::FlatWrite32((r20 + 600), r30);
    MemoryInline::FlatWriteFloat32((r20 + 604), f0.d);
    MemoryInline::FlatWrite32((r28 + 784), r30);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_1756 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_1756[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_1756[1]);
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
    r31 = 1;
    r3 = 3409;
    r0 = 2;
    guest_range_2 = MemoryInline::ResolveRangeHost(r28, 0, 1069u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 996u, (r28 + 996), r3);
    r8 = (r29 + 1852);
    r7 = 0x808C0000u;
    r5 = 0x808C0000u;
    MemoryInline::WriteResolved32(guest_range_2, 984u, (r28 + 984), r30);
    r7 = (r7 + -11484);
    r6 = (r29 + 1864);
    r4 = 0x808E0000u;
    MemoryInline::WriteResolved8(guest_range_2, 988u, (r28 + 988), static_cast<uint8_t>(r31));
    r5 = (r5 + -11496);
    r4 = (r4 + -24008);
    r3 = (r28 + 1072);
    MemoryInline::WriteResolved8(guest_range_2, 989u, (r28 + 989), static_cast<uint8_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1000u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1000u, (r28 + 1000), r12);
        MemoryInline::WriteResolved32(guest_range_2, 1004u, (r28 + 1004), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1012u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1012u, (r28 + 1012), r12);
        MemoryInline::WriteResolved32(guest_range_2, 1016u, (r28 + 1016), r0);
    }
    r11 = MemoryInline::FlatRead32((r29 + 1852));
    r10 = MemoryInline::FlatRead32((r8 + 4));
    r9 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 1036u, (r28 + 1036), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1020u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1020u, (r28 + 1020), r7);
        MemoryInline::WriteResolved32(guest_range_2, 1024u, (r28 + 1024), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1028u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1028u, (r28 + 1028), r11);
        MemoryInline::WriteResolved32(guest_range_2, 1032u, (r28 + 1032), r10);
    }
    r8 = MemoryInline::FlatRead32((r29 + 1864));
    r7 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r11);
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    MemoryInline::FlatWriteRam32((r1 + 16), r9);
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    MemoryInline::FlatWriteRam32((r1 + 24), r7);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1040u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1040u, (r28 + 1040), r5);
        MemoryInline::WriteResolved32(guest_range_2, 1044u, (r28 + 1044), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1048u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1048u, (r28 + 1048), r8);
        MemoryInline::WriteResolved32(guest_range_2, 1052u, (r28 + 1052), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1056u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1056u, (r28 + 1056), r0);
        MemoryInline::WriteResolved32(guest_range_2, 1060u, (r28 + 1060), r12);
    }
    MemoryInline::WriteResolved32(guest_range_2, 1064u, (r28 + 1064), r30);
    MemoryInline::WriteResolved8(guest_range_2, 1068u, (r28 + 1068), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved32(guest_range_2, 0u, r28, r4);
    ctx->lr = 0x80628348u;
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
    guest_range_1 = MemoryInline::ResolveRangeHost((r28 + 1620), 0, 112u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r28 + 1620), r30);
    r3 = (r29 + 1876);
    r12 = 0x808C0000u;
    r10 = 0x808C0000u;
    guest_range_4 = MemoryInline::ResolveRangeHost((r29 + 1876), 0, 60u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r29 + 1876));
    r12 = (r12 + -11868);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
    r11 = (r29 + 1888);
    r20 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    r9 = (r29 + 1900);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r28 + 1640), r20);
    r8 = (r29 + 1912);
    r10 = (r10 + -11880);
    r7 = (r29 + 1924);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r28 + 1624), r12);
    r3 = (r28 + 1072);
    r4 = 1;
    r5 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r28 + 1628), r28);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r28 + 1632), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r28 + 1636), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 12u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r29 + 1888));
            r22 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + 4));
        }
    }
    r23 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r28 + 1660), r23);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r28 + 1644), r12);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r28 + 1648), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r28 + 1652), r21);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r28 + 1656), r22);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r29 + 1900));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r9 + 4));
        }
    }
    r26 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r9 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r28 + 1680), r26);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r28 + 1664), r12);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r28 + 1668), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r28 + 1672), r24);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r28 + 1676), r25);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 36u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r29 + 1912));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r8 + 4));
        }
    }
    r11 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r8 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r28 + 1700), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r28 + 1684), r10);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r28 + 1688), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r28 + 1692), r27);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r28 + 1696), r30);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.second;
            r9 = resolved_pair.first;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r7 + 4));
            r9 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r29 + 1924));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r28 + 1720), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r28 + 1704), r10);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r28 + 1708), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r28 + 1712), r9);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r28 + 1716), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r28 + 1724), r31);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r28 + 1728), r31);
    }
    r12 = MemoryInline::FlatRead32((r28 + 1072));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 48u, (r1 + 80), r6);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_5, 52u, (r1 + 84), r0);
        MemoryInline::WriteResolved32(guest_range_5, 56u, (r1 + 88), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r1 + 68), r21);
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r1 + 72), r22);
    }
    MemoryInline::WriteResolved32(guest_range_5, 44u, (r1 + 76), r23);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 56), r24);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 60), r25);
    }
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r1 + 64), r26);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 48), r30);
    }
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 52), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 36), r8);
    }
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 40), r7);
    ctr = r12;
    ctx->lr = 0x80628470u;
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
    r3 = r28;
    r4 = (r28 + 1072);
    // inline leaf 0x80602474 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x80602474
    r3 = (r28 + 1072);
    r5 = (r28 + 1704);
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
    r3 = (r28 + 1072);
    r5 = (r28 + 1684);
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
    r11 = (r1 + 144);
    r3 = r28;
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
// RECOMP_REGISTRATION base 0x80628210 func_80628210 preserves=true fpr_mask=0x00000000
