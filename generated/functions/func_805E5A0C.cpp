#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E5A0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r27_stbu_ea_0 = 0;
    uint32_t r27_stbu_ea_1 = 0;
    uint32_t r27_stbu_ea_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805E5A0C;

loc_805E5A0C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 180u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 4));
    r31 = 0x80890000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 836), 0, 388u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 836), r0);
    r11 = 38;
    r29 = r5;
    r28 = r3;
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 8));
    r30 = r6;
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 840), static_cast<uint8_t>(r0));
    r31 = (r31 + 21216);
    r27 = (r3 + 847);
    r12 = (r4 + 15);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 841), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 56));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 844), r5);
    ctr = r11;
}

loc_805E5A68:
{
    r6 = MemoryInline::FlatRead8((r12 + 1));
    r12 = (r12 + 2);
    r5 = MemoryInline::FlatRead8(r12);
    MemoryInline::FlatWrite8((r27 + 1), static_cast<uint8_t>(r6));
    r27_stbu_ea_2 = (r27 + 2);
    MemoryInline::FlatWrite8(r27_stbu_ea_2, static_cast<uint8_t>(r5));
    r27 = r27_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E5A68;
    }
}

loc_805E5A7C:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r4 + 92));
}

loc_805E5A84:
{
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r3 + 924), r5);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 92u, (r4 + 96));
    MemoryInline::WriteResolved8(guest_range_1, 92u, (r3 + 928), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 93u, (r4 + 97));
    MemoryInline::WriteResolved8(guest_range_1, 93u, (r3 + 929), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 94u, (r4 + 98));
    MemoryInline::WriteResolved8(guest_range_1, 94u, (r3 + 930), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 95u, (r4 + 99));
    MemoryInline::WriteResolved8(guest_range_1, 95u, (r3 + 931), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r4 + 100));
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 932), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 100u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r4 + 104));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r4 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 940), r5);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 936), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 108u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r4 + 112));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r4 + 116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 948), r5);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 944), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 116u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r4 + 120));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r4 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r3 + 956), r5);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r3 + 952), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 124u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r4 + 128));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r4 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r3 + 964), r5);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r3 + 960), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 132u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r4 + 136));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 136u, (r4 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r3 + 972), r5);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r3 + 968), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 140u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r4 + 144));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r4 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r3 + 980), r5);
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r3 + 976), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 148u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 148u, (r4 + 152));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 152u, (r4 + 156));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r3 + 988), r5);
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r3 + 984), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_0, 156u, (r4 + 160));
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r3 + 992), r5);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 160u, (r4 + 164));
    MemoryInline::WriteResolved8(guest_range_1, 160u, (r3 + 996), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 161u, (r4 + 165));
    MemoryInline::WriteResolved8(guest_range_1, 161u, (r3 + 997), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 162u, (r4 + 166));
    MemoryInline::WriteResolved8(guest_range_1, 162u, (r3 + 998), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 164u, (r4 + 168));
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r3 + 1000), r5);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 168u, (r4 + 172));
    MemoryInline::WriteResolved8(guest_range_1, 168u, (r3 + 1004), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 169u, (r4 + 173));
    MemoryInline::WriteResolved8(guest_range_1, 169u, (r3 + 1005), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 170u, (r4 + 174));
    MemoryInline::WriteResolved8(guest_range_1, 170u, (r3 + 1006), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r4 + 176));
    MemoryInline::WriteResolved32(guest_range_1, 172u, (r3 + 1008), r5);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 176u, (r4 + 180));
    MemoryInline::WriteResolved32(guest_range_1, 176u, (r3 + 1012), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 192u, (r3 + 1028), r7);
        MemoryInline::WriteResolved32(guest_range_1, 188u, (r3 + 1024), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 200u, (r3 + 1036), r0);
        MemoryInline::WriteResolved32(guest_range_1, 196u, (r3 + 1032), r9);
    }
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_805E5CB8;
    }
}

loc_805E5B84:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r10 + 4), 0, 180u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r10 + 4));
    r0 = 38;
    MemoryInline::WriteResolved32(guest_range_1, 208u, (r3 + 1044), r4);
    r6 = (r3 + 1055);
    r5 = (r10 + 15);
    r4 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r10 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 212u, (r3 + 1048), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r10 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 213u, (r3 + 1049), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r10 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 216u, (r3 + 1052), r4);
    ctr = r0;
}

loc_805E5BB4:
{
    r4 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    r6_stbu_ea_2 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E5BB4;
    }
}

loc_805E5BC8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_2, 88u, (r10 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 296u, (r3 + 1132), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 92u, (r10 + 96));
    MemoryInline::WriteResolved8(guest_range_1, 300u, (r3 + 1136), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 93u, (r10 + 97));
    MemoryInline::WriteResolved8(guest_range_1, 301u, (r3 + 1137), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 94u, (r10 + 98));
    MemoryInline::WriteResolved8(guest_range_1, 302u, (r3 + 1138), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 95u, (r10 + 99));
    MemoryInline::WriteResolved8(guest_range_1, 303u, (r3 + 1139), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r10 + 100));
    MemoryInline::WriteResolved32(guest_range_1, 304u, (r3 + 1140), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 100u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 100u, (r10 + 104));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 104u, (r10 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 312u, (r3 + 1148), r0);
        MemoryInline::WriteResolved32(guest_range_1, 308u, (r3 + 1144), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 108u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r10 + 112));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 112u, (r10 + 116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 320u, (r3 + 1156), r0);
        MemoryInline::WriteResolved32(guest_range_1, 316u, (r3 + 1152), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 116u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 116u, (r10 + 120));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 120u, (r10 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 328u, (r3 + 1164), r0);
        MemoryInline::WriteResolved32(guest_range_1, 324u, (r3 + 1160), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 124u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 124u, (r10 + 128));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 128u, (r10 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 332u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 336u, (r3 + 1172), r0);
        MemoryInline::WriteResolved32(guest_range_1, 332u, (r3 + 1168), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 132u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 132u, (r10 + 136));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 136u, (r10 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 340u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 344u, (r3 + 1180), r0);
        MemoryInline::WriteResolved32(guest_range_1, 340u, (r3 + 1176), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 140u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 140u, (r10 + 144));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 144u, (r10 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 348u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 352u, (r3 + 1188), r0);
        MemoryInline::WriteResolved32(guest_range_1, 348u, (r3 + 1184), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 148u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 148u, (r10 + 152));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 152u, (r10 + 156));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 356u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 360u, (r3 + 1196), r0);
        MemoryInline::WriteResolved32(guest_range_1, 356u, (r3 + 1192), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 156u, (r10 + 160));
    MemoryInline::WriteResolved32(guest_range_1, 364u, (r3 + 1200), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 160u, (r10 + 164));
    MemoryInline::WriteResolved8(guest_range_1, 368u, (r3 + 1204), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 161u, (r10 + 165));
    MemoryInline::WriteResolved8(guest_range_1, 369u, (r3 + 1205), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 162u, (r10 + 166));
    MemoryInline::WriteResolved8(guest_range_1, 370u, (r3 + 1206), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 164u, (r10 + 168));
    MemoryInline::WriteResolved32(guest_range_1, 372u, (r3 + 1208), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 168u, (r10 + 172));
    MemoryInline::WriteResolved8(guest_range_1, 376u, (r3 + 1212), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 169u, (r10 + 173));
    MemoryInline::WriteResolved8(guest_range_1, 377u, (r3 + 1213), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 170u, (r10 + 174));
    MemoryInline::WriteResolved8(guest_range_1, 378u, (r3 + 1214), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 172u, (r10 + 176));
    MemoryInline::WriteResolved32(guest_range_1, 380u, (r3 + 1216), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 176u, (r10 + 180));
    MemoryInline::WriteResolved32(guest_range_1, 384u, (r3 + 1220), r0);
}

loc_805E5CB8:
{
    r4 = 0;
    r3 = (r3 + 236);
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r27 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805E5CD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E5CE0;
    }
}

loc_805E5CD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805E5CD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E5D2C;
    }
}

loc_805E5CDC:
{
    goto loc_805E5D38;
}

loc_805E5CE0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // inline leaf 0x800829D0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800829D0
    r3 = (r3 & 65535);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = r27;
    f3.d = MemoryInline::FlatReadFloat64((r31 + 8));
    r4 = 3;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 60));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->lr = 0x805E5D28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805E5D38;
}

loc_805E5D2C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r4 = 3;
    ctx->lr = 0x805E5D38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805E5D38:
{
    r3 = (r28 + 456);
    ctx->lr = 0x805E5D40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DFC8u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r27 + 11448));
    ctx->lr = 0x805E5D4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807509D0u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80890000u;
    r3 = (r28 + 456);
    r4 = (r4 + 21384);
    r5 = 0;
    r4 = (r4 + 384);
    ctx->lr = 0x805E5D64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063E54Cu>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r3 = 1127219200;
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    f3.d = MemoryInline::FlatReadFloat64((r31 + 24));
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = (r0 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r4 = 2;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r3 = MemoryInline::FlatRead32((r27 + 11448));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x805E5DB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80750808u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r27 + 11448));
    r4 = (r28 + 832);
    ctx->lr = 0x805E5DC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807509A0u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 10;
    MemoryInline::FlatWrite32((r28 + 828), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805E5A0C func_805E5A0C preserves=true fpr_mask=0x00000000
