#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021D860(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8021D860;

loc_8021D860:
{
    MemoryInline::FlatWriteRam32((r1 + -368), r1);
    r1 = (r1 + -368);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 372), r0);
    r11 = (r1 + 368);
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
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 8), 0, 156u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8021D87C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8021D88C;
    }
}

loc_8021D880:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8021D884:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8021DBC4;
    }
}

loc_8021D888:
{
    goto loc_8021DEF4;
}

loc_8021D88C:
{
    r15 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r4 + 96));
    MemoryInline::FlatWriteRam32((r1 + 288), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r4 + 100));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r4 + 88));
    MemoryInline::FlatWriteRam32((r1 + 8), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r4 + 104));
    MemoryInline::FlatWriteRam32((r1 + 12), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 100u, (r4 + 108));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 56), 0, 148u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r3 + 128), r0);
    r0 = MemoryInline::FlatRead32((r1 + 288));
    MemoryInline::FlatWriteRam32((r1 + 16), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 104u, (r4 + 112));
    MemoryInline::WriteResolved32(guest_range_2, 80u, (r3 + 136), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 108u, (r4 + 116));
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r3 + 140), r0);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 112u, (r4 + 120));
    MemoryInline::WriteResolved32(guest_range_2, 88u, (r3 + 144), r0);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 28), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 116u, (r4 + 124));
    MemoryInline::WriteResolved32(guest_range_2, 92u, (r3 + 148), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 32), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 120u, (r4 + 128));
    MemoryInline::WriteResolved32(guest_range_2, 96u, (r3 + 152), r0);
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 36), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 121u, (r4 + 129));
    MemoryInline::WriteResolved32(guest_range_2, 100u, (r3 + 156), r0);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 40), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 122u, (r4 + 130));
    MemoryInline::WriteResolved32(guest_range_2, 104u, (r3 + 160), r0);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 123u, (r4 + 131));
    MemoryInline::WriteResolved32(guest_range_2, 108u, (r3 + 164), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 48), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 124u, (r4 + 132));
    MemoryInline::WriteResolved8(guest_range_2, 112u, (r3 + 168), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 52), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 125u, (r4 + 133));
    MemoryInline::WriteResolved8(guest_range_2, 113u, (r3 + 169), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 56), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 126u, (r4 + 134));
    MemoryInline::WriteResolved8(guest_range_2, 114u, (r3 + 170), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 60), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 127u, (r4 + 135));
    MemoryInline::WriteResolved8(guest_range_2, 115u, (r3 + 171), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 64), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 128u, (r4 + 136));
    MemoryInline::WriteResolved8(guest_range_2, 116u, (r3 + 172), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 68), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 129u, (r4 + 137));
    MemoryInline::WriteResolved8(guest_range_2, 117u, (r3 + 173), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::FlatWriteRam32((r1 + 72), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 130u, (r4 + 138));
    MemoryInline::WriteResolved8(guest_range_2, 118u, (r3 + 174), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 76), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 131u, (r4 + 139));
    MemoryInline::WriteResolved8(guest_range_2, 119u, (r3 + 175), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 80), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 132u, (r4 + 140));
    MemoryInline::WriteResolved8(guest_range_2, 120u, (r3 + 176), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 72));
    MemoryInline::FlatWriteRam32((r1 + 84), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 133u, (r4 + 141));
    MemoryInline::WriteResolved8(guest_range_2, 121u, (r3 + 177), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 88), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 134u, (r4 + 142));
    MemoryInline::WriteResolved8(guest_range_2, 122u, (r3 + 178), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWriteRam32((r1 + 92), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 135u, (r4 + 143));
    MemoryInline::WriteResolved8(guest_range_2, 123u, (r3 + 179), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWriteRam32((r1 + 96), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 136u, (r4 + 144));
    MemoryInline::WriteResolved8(guest_range_2, 124u, (r3 + 180), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 100), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 137u, (r4 + 145));
    MemoryInline::WriteResolved8(guest_range_2, 125u, (r3 + 181), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWriteRam32((r1 + 104), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 138u, (r4 + 146));
    MemoryInline::WriteResolved8(guest_range_2, 126u, (r3 + 182), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 108), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 139u, (r4 + 147));
    MemoryInline::WriteResolved8(guest_range_2, 127u, (r3 + 183), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam32((r1 + 112), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 140u, (r4 + 148));
    MemoryInline::WriteResolved8(guest_range_2, 128u, (r3 + 184), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::FlatWriteRam32((r1 + 116), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 141u, (r4 + 149));
    MemoryInline::WriteResolved8(guest_range_2, 129u, (r3 + 185), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 108));
    MemoryInline::FlatWriteRam32((r1 + 120), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 142u, (r4 + 150));
    MemoryInline::WriteResolved8(guest_range_2, 130u, (r3 + 186), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::FlatWriteRam32((r1 + 124), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 143u, (r4 + 151));
    MemoryInline::WriteResolved8(guest_range_2, 131u, (r3 + 187), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::FlatWriteRam32((r1 + 128), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 144u, (r4 + 152));
    MemoryInline::WriteResolved8(guest_range_2, 132u, (r3 + 188), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 120));
    MemoryInline::FlatWriteRam32((r1 + 132), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 145u, (r4 + 153));
    MemoryInline::WriteResolved8(guest_range_2, 133u, (r3 + 189), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::FlatWriteRam32((r1 + 136), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 146u, (r4 + 154));
    MemoryInline::WriteResolved8(guest_range_2, 134u, (r3 + 190), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 128));
    MemoryInline::FlatWriteRam32((r1 + 140), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 147u, (r4 + 155));
    MemoryInline::WriteResolved8(guest_range_2, 135u, (r3 + 191), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    MemoryInline::WriteResolved8(guest_range_2, 136u, (r3 + 192), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 136));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 16));
    r16 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r4 + 20));
    r17 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r4 + 21));
    r18 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r4 + 22));
    r19 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r4 + 23));
    r20 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r4 + 24));
    r21 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r4 + 25));
    r22 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r4 + 26));
    r23 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r4 + 27));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r4 + 28));
            r25 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r4 + 30));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 32));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r4 + 40));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r4 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r4 + 48));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r4 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r4 + 56));
            r11 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r4 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r4 + 64));
            r9 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r4 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r4 + 72));
            r7 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r4 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 72u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r4 + 80));
            r5 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r4 + 84));
        }
    }
    r14 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r4 + 92));
    MemoryInline::WriteResolved8(guest_range_2, 137u, (r3 + 193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 140));
    MemoryInline::WriteResolved8(guest_range_2, 138u, (r3 + 194), static_cast<uint8_t>(r0));
    r0 = r15;
    MemoryInline::FlatWriteRam32((r1 + 144), r15);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r3 + 56), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 60), static_cast<uint8_t>(r16));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 61), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r3 + 62), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 63), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r3 + 64), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r3 + 65), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r3 + 66), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r3 + 67), static_cast<uint8_t>(r23));
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r24)) << 16) | static_cast<uint16_t>(r25)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 68), r24);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r3 + 70), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 72), r26);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 76), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 80), r28);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 84), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 88), r30);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r3 + 92), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r3 + 96), r12);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r3 + 100), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r3 + 104), r10);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r3 + 108), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r3 + 112), r8);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r3 + 116), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r3 + 120), r6);
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r3 + 124), r5);
    }
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r3 + 132), r14);
    MemoryInline::WriteResolved8(guest_range_2, 139u, (r3 + 195), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 148u, (r4 + 156));
    r0 = (r24 | 32);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r3 + 196), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25484));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 144u, (r3 + 200), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r3 + 196), f0.d);
    }
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 68), static_cast<uint16_t>(r0));
    goto loc_8021DEF4;
}

loc_8021DBC4:
{
    r30 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r4 + 96));
    MemoryInline::FlatWriteRam32((r1 + 292), r30);
    r30 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r4 + 100));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r4 + 88));
    MemoryInline::FlatWriteRam32((r1 + 148), r30);
    r30 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r4 + 104));
    MemoryInline::FlatWriteRam32((r1 + 152), r30);
    r30 = MemoryInline::ReadResolved32(guest_range_1, 100u, (r4 + 108));
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 56), 0, 148u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 72u, (r3 + 128), r0);
    r0 = MemoryInline::FlatRead32((r1 + 292));
    MemoryInline::FlatWriteRam32((r1 + 156), r30);
    r30 = MemoryInline::ReadResolved32(guest_range_1, 104u, (r4 + 112));
    MemoryInline::WriteResolved32(guest_range_3, 80u, (r3 + 136), r0);
    r0 = MemoryInline::FlatRead32((r1 + 148));
    MemoryInline::FlatWriteRam32((r1 + 160), r30);
    r30 = MemoryInline::ReadResolved32(guest_range_1, 108u, (r4 + 116));
    MemoryInline::WriteResolved32(guest_range_3, 84u, (r3 + 140), r0);
    r0 = MemoryInline::FlatRead32((r1 + 152));
    MemoryInline::FlatWriteRam32((r1 + 164), r30);
    r30 = MemoryInline::ReadResolved32(guest_range_1, 112u, (r4 + 120));
    MemoryInline::WriteResolved32(guest_range_3, 88u, (r3 + 144), r0);
    r0 = MemoryInline::FlatRead32((r1 + 156));
    MemoryInline::FlatWriteRam32((r1 + 168), r30);
    r30 = MemoryInline::ReadResolved32(guest_range_1, 116u, (r4 + 124));
    MemoryInline::WriteResolved32(guest_range_3, 92u, (r3 + 148), r0);
    r0 = MemoryInline::FlatRead32((r1 + 160));
    MemoryInline::FlatWriteRam32((r1 + 172), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 120u, (r4 + 128));
    MemoryInline::WriteResolved32(guest_range_3, 96u, (r3 + 152), r0);
    r0 = MemoryInline::FlatRead32((r1 + 164));
    MemoryInline::FlatWriteRam32((r1 + 176), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 121u, (r4 + 129));
    MemoryInline::WriteResolved32(guest_range_3, 100u, (r3 + 156), r0);
    r0 = MemoryInline::FlatRead32((r1 + 168));
    MemoryInline::FlatWriteRam32((r1 + 180), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 122u, (r4 + 130));
    MemoryInline::WriteResolved32(guest_range_3, 104u, (r3 + 160), r0);
    r0 = MemoryInline::FlatRead32((r1 + 172));
    MemoryInline::FlatWriteRam32((r1 + 184), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 123u, (r4 + 131));
    MemoryInline::WriteResolved32(guest_range_3, 108u, (r3 + 164), r0);
    r0 = MemoryInline::FlatRead32((r1 + 176));
    MemoryInline::FlatWriteRam32((r1 + 188), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 124u, (r4 + 132));
    MemoryInline::WriteResolved8(guest_range_3, 112u, (r3 + 168), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 180));
    MemoryInline::FlatWriteRam32((r1 + 192), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 125u, (r4 + 133));
    MemoryInline::WriteResolved8(guest_range_3, 113u, (r3 + 169), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 184));
    MemoryInline::FlatWriteRam32((r1 + 196), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 126u, (r4 + 134));
    MemoryInline::WriteResolved8(guest_range_3, 114u, (r3 + 170), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 188));
    MemoryInline::FlatWriteRam32((r1 + 200), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 127u, (r4 + 135));
    MemoryInline::WriteResolved8(guest_range_3, 115u, (r3 + 171), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 192));
    MemoryInline::FlatWriteRam32((r1 + 204), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 128u, (r4 + 136));
    MemoryInline::WriteResolved8(guest_range_3, 116u, (r3 + 172), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 196));
    MemoryInline::FlatWriteRam32((r1 + 208), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 129u, (r4 + 137));
    MemoryInline::WriteResolved8(guest_range_3, 117u, (r3 + 173), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 200));
    MemoryInline::FlatWriteRam32((r1 + 212), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 130u, (r4 + 138));
    MemoryInline::WriteResolved8(guest_range_3, 118u, (r3 + 174), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 204));
    MemoryInline::FlatWriteRam32((r1 + 216), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 131u, (r4 + 139));
    MemoryInline::WriteResolved8(guest_range_3, 119u, (r3 + 175), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 208));
    MemoryInline::FlatWriteRam32((r1 + 220), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 132u, (r4 + 140));
    MemoryInline::WriteResolved8(guest_range_3, 120u, (r3 + 176), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 212));
    MemoryInline::FlatWriteRam32((r1 + 224), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 133u, (r4 + 141));
    MemoryInline::WriteResolved8(guest_range_3, 121u, (r3 + 177), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 216));
    MemoryInline::FlatWriteRam32((r1 + 228), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 134u, (r4 + 142));
    MemoryInline::WriteResolved8(guest_range_3, 122u, (r3 + 178), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 220));
    MemoryInline::FlatWriteRam32((r1 + 232), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 135u, (r4 + 143));
    MemoryInline::WriteResolved8(guest_range_3, 123u, (r3 + 179), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 224));
    MemoryInline::FlatWriteRam32((r1 + 236), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 136u, (r4 + 144));
    MemoryInline::WriteResolved8(guest_range_3, 124u, (r3 + 180), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 228));
    MemoryInline::FlatWriteRam32((r1 + 240), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 137u, (r4 + 145));
    MemoryInline::WriteResolved8(guest_range_3, 125u, (r3 + 181), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 232));
    MemoryInline::FlatWriteRam32((r1 + 244), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 138u, (r4 + 146));
    MemoryInline::WriteResolved8(guest_range_3, 126u, (r3 + 182), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 236));
    MemoryInline::FlatWriteRam32((r1 + 248), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 139u, (r4 + 147));
    MemoryInline::WriteResolved8(guest_range_3, 127u, (r3 + 183), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 240));
    MemoryInline::FlatWriteRam32((r1 + 252), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 140u, (r4 + 148));
    MemoryInline::WriteResolved8(guest_range_3, 128u, (r3 + 184), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 244));
    MemoryInline::FlatWriteRam32((r1 + 256), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 141u, (r4 + 149));
    MemoryInline::WriteResolved8(guest_range_3, 129u, (r3 + 185), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 248));
    MemoryInline::FlatWriteRam32((r1 + 260), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 142u, (r4 + 150));
    MemoryInline::WriteResolved8(guest_range_3, 130u, (r3 + 186), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 252));
    MemoryInline::FlatWriteRam32((r1 + 264), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 143u, (r4 + 151));
    MemoryInline::WriteResolved8(guest_range_3, 131u, (r3 + 187), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 256));
    MemoryInline::FlatWriteRam32((r1 + 268), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 144u, (r4 + 152));
    MemoryInline::WriteResolved8(guest_range_3, 132u, (r3 + 188), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 260));
    MemoryInline::FlatWriteRam32((r1 + 272), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 145u, (r4 + 153));
    MemoryInline::WriteResolved8(guest_range_3, 133u, (r3 + 189), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 264));
    MemoryInline::FlatWriteRam32((r1 + 276), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 146u, (r4 + 154));
    MemoryInline::WriteResolved8(guest_range_3, 134u, (r3 + 190), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 268));
    MemoryInline::FlatWriteRam32((r1 + 280), r30);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 147u, (r4 + 155));
    MemoryInline::WriteResolved8(guest_range_3, 135u, (r3 + 191), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 272));
    MemoryInline::WriteResolved8(guest_range_3, 136u, (r3 + 192), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 276));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 16));
    r29 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r4 + 20));
    r28 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r4 + 21));
    r27 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r4 + 22));
    r26 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r4 + 23));
    r25 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r4 + 24));
    r24 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r4 + 25));
    r23 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r4 + 26));
    r22 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r4 + 27));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r4 + 28));
            r20 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r4 + 30));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 32));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r4 + 40));
            r16 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r4 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r4 + 48));
            r14 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r4 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r4 + 56));
            r11 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r4 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r4 + 64));
            r9 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r4 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r4 + 72));
            r7 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r4 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 72u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r4 + 80));
            r5 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r4 + 84));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r4 + 92));
    MemoryInline::WriteResolved8(guest_range_3, 137u, (r3 + 193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 280));
    MemoryInline::WriteResolved8(guest_range_3, 138u, (r3 + 194), static_cast<uint8_t>(r0));
    r0 = r30;
    MemoryInline::FlatWriteRam32((r1 + 284), r30);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r3 + 56), f0.d);
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 60), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r3 + 61), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r3 + 62), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 63), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r3 + 64), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r3 + 65), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_3, 10u, (r3 + 66), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_3, 11u, (r3 + 67), static_cast<uint8_t>(r22));
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r21)) << 16) | static_cast<uint16_t>(r20)))) {
        MemoryInline::WriteResolved16(guest_range_3, 12u, (r3 + 68), r21);
        MemoryInline::WriteResolved16(guest_range_3, 14u, (r3 + 70), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 72), r19);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 76), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 80), r17);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 84), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r3 + 88), r15);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r3 + 92), r14);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r3 + 96), r12);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r3 + 100), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r3 + 104), r10);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r3 + 108), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r3 + 112), r8);
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r3 + 116), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r3 + 120), r6);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r3 + 124), r5);
    }
    MemoryInline::WriteResolved32(guest_range_3, 76u, (r3 + 132), r31);
    MemoryInline::WriteResolved8(guest_range_3, 139u, (r3 + 195), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 148u, (r4 + 156));
    r0 = (r21 | 32);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 152u, (r4 + 160));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 140u, (r3 + 196), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 144u, (r3 + 200), f0.d);
    }
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r3 + 68), static_cast<uint16_t>(r0));
}

loc_8021DEF4:
{
    r11 = (r1 + 368);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 372));
    ctx->lr = r0;
    r1 = (r1 + 368);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFE3 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021D860 func_8021D860 preserves=true fpr_mask=0x00000000
