#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8068EA58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8068EA58;

loc_8068EA58:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 32u, (r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r5 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 5), 0, 2787u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 5), static_cast<uint8_t>(r5));
    r4 = 0x808B0000u;
    r31 = 0x808A0000u;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 6), static_cast<uint8_t>(r5));
    r30 = r3;
    r31 = (r31 + -10592);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 7), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 8), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 9), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 10), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 19440));
}

loc_8068EAA8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_8068EAB8;
    }
}

loc_8068EAAC:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 11), static_cast<uint8_t>(r0));
    goto loc_8068EABC;
}

loc_8068EAB8:
{
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 11), static_cast<uint8_t>(r5));
}

loc_8068EABC:
{
    r4 = 0x808B0000u;
    r0 = MemoryInline::FlatRead32((r4 + 19440));
}

loc_8068EAC8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(3))) {
        goto loc_8068EAD8;
    }
}

loc_8068EACC:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 12), static_cast<uint8_t>(r0));
    goto loc_8068EAE0;
}

loc_8068EAD8:
{
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 12), static_cast<uint8_t>(r0));
}

loc_8068EAE0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 32u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    r29 = 0;
    r5 = -1;
    r12 = 1000;
    r8 = 40;
    r7 = 3;
    r6 = 35;
    r4 = 10;
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 21), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_0, 17u, (r3 + 22), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 37), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r3 + 38), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r3 + 39), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r3 + 40), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r3 + 41), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r3 + 42), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r3 + 44), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 45), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r3 + 49), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_0, 21u, (r3 + 26), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved32(guest_range_0, 23u, (r3 + 28), r12);
    MemoryInline::WriteResolved8(guest_range_0, 53u, (r3 + 58), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r3 + 59), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 55u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_0, 57u, (r3 + 62), r8);
        MemoryInline::WriteResolved16(guest_range_0, 55u, (r3 + 60), r7);
    }
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r3 + 67), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 63u, (r3 + 68), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r3 + 69), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 91u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 91u, (r3 + 96), r6);
        MemoryInline::WriteResolved32(guest_range_0, 95u, (r3 + 100), r5);
    }
    MemoryInline::WriteResolved8(guest_range_0, 102u, (r3 + 107), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 103u, (r3 + 108), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 107u, (r3 + 112), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 115u, (r3 + 120), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 116u, (r3 + 121), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 117u, (r3 + 122), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 118u, (r3 + 123), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 120u, (r3 + 125), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 121u, (r3 + 126), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 123u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 123u, (r3 + 128), r29);
        MemoryInline::WriteResolved32(guest_range_0, 127u, (r3 + 132), r29);
    }
    MemoryInline::WriteResolved8(guest_range_0, 2779u, (r3 + 2784), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 131u, (r3 + 136), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved32(guest_range_0, 135u, (r3 + 140), r5);
    MemoryInline::WriteResolved8(guest_range_0, 139u, (r3 + 144), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 140u, (r3 + 145), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 142u, (r3 + 147), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 143u, (r3 + 148), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 141u, (r3 + 146), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 119u, (r3 + 124), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 144u, (r3 + 149), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r3 + 32), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r3 + 34), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 33), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r3 + 36), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r3 + 35), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 163u, (r3 + 168), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved32(guest_range_0, 2783u, (r3 + 2788), r0);
    MemoryInline::WriteResolved8(guest_range_0, 165u, (r3 + 170), static_cast<uint8_t>(r29));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r31 + 8));
    r9 = 255;
    r8 = 1;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r31 + 12));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r31 + 16));
        }
    }
    r11 = 690;
    r10 = 540;
    r7 = 0x802A0000u;
    MemoryInline::WriteResolved8(guest_range_0, 167u, (r3 + 172), static_cast<uint8_t>(r29));
    r4 = 1431633920;
    r6 = (r7 + 16640);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r31 + 20));
    MemoryInline::WriteResolved8(guest_range_0, 168u, (r3 + 173), static_cast<uint8_t>(r29));
    r5 = 0x809C0000u;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r31 + 24));
    r0 = (r4 + 21846);
    MemoryInline::WriteResolved8(guest_range_0, 169u, (r3 + 174), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 171u, (r3 + 176), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 71u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 71u, (r3 + 76), r11);
        MemoryInline::WriteResolved32(guest_range_0, 75u, (r3 + 80), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 79u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 79u, (r3 + 84), r12);
        MemoryInline::WriteResolved32(guest_range_0, 83u, (r3 + 88), r12);
    }
    MemoryInline::WriteResolved8(guest_range_0, 179u, (r3 + 184), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 2743u, (r3 + 2748), f4.d);
    MemoryInline::WriteResolved8(guest_range_0, 180u, (r3 + 185), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 181u, (r3 + 186), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 1935u, (r3 + 1940), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 182u, (r3 + 187), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 183u, (r3 + 188), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_0, 2459u, (r3 + 2464), static_cast<uint16_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 184u, (r3 + 189), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 185u, (r3 + 190), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 186u, (r3 + 191), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 187u, (r3 + 192), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 188u, (r3 + 193), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 189u, (r3 + 194), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 190u, (r3 + 195), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved32(guest_range_0, 299u, (r3 + 304), r29);
    MemoryInline::WriteResolved8(guest_range_0, 242u, (r3 + 247), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 241u, (r3 + 246), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 243u, (r3 + 248), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 244u, (r3 + 249), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 246u, (r3 + 251), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 245u, (r3 + 250), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 247u, (r3 + 252), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 248u, (r3 + 253), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2747u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2747u, (r3 + 2752), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2751u, (r3 + 2756), f2.d);
    }
    f2.d = MemoryInline::FlatReadFloat32((r7 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 251u, (r3 + 256), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 255u, (r3 + 260), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 259u, (r3 + 264), f2.d);
    MemoryInline::WriteResolved8(guest_range_0, 263u, (r3 + 268), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2755u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2755u, (r3 + 2760), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2759u, (r3 + 2764), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 164u, (r3 + 169), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 265u, (r3 + 270), static_cast<uint8_t>(r29));
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r5 = MemoryInline::FlatRead8((r4 + 36));
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r4 = (r4 + r0);
    r0 = (r4 * 3);
    r6 = (r4 & 255);
    r0 = (r5 - r0);
    r0 = (r0 & 255);
}

loc_8068ECE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8068ECF8;
    }
}

loc_8068ECE4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 254);
    MemoryInline::WriteResolved8(guest_range_0, 271u, (r3 + 276), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 272u, (r3 + 277), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 273u, (r3 + 278), static_cast<uint8_t>(r5));
    goto loc_8068ED30;
}

loc_8068ECF8:
{
}

loc_8068ECFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8068ED14;
    }
}

loc_8068ED00:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 254);
    MemoryInline::WriteResolved8(guest_range_0, 271u, (r3 + 276), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 272u, (r3 + 277), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 273u, (r3 + 278), static_cast<uint8_t>(r5));
    goto loc_8068ED30;
}

loc_8068ED14:
{
}

loc_8068ED18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8068ED30;
    }
}

loc_8068ED1C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 510);
    MemoryInline::WriteResolved8(guest_range_0, 271u, (r3 + 276), static_cast<uint8_t>(r6));
    r0 = (r4 + 1);
    MemoryInline::WriteResolved8(guest_range_0, 272u, (r3 + 277), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 273u, (r3 + 278), static_cast<uint8_t>(r5));
}

loc_8068ED30:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r31 + 28));
    r5 = 0;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    r4 = -1;
    r0 = 200;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 2735u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 2735u, (r3 + 2740), r5);
        MemoryInline::WriteResolved16(guest_range_0, 2737u, (r3 + 2742), r5);
    }
    MemoryInline::WriteResolved16(guest_range_0, 2739u, (r3 + 2744), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 351u, (r3 + 356), r4);
    MemoryInline::WriteResolved32(guest_range_0, 367u, (r3 + 372), r4);
    MemoryInline::WriteResolved32(guest_range_0, 383u, (r3 + 388), r5);
    MemoryInline::WriteResolved32(guest_range_0, 355u, (r3 + 360), r4);
    MemoryInline::WriteResolved32(guest_range_0, 371u, (r3 + 376), r4);
    MemoryInline::WriteResolved32(guest_range_0, 387u, (r3 + 392), r5);
    MemoryInline::WriteResolved32(guest_range_0, 359u, (r3 + 364), r4);
    MemoryInline::WriteResolved32(guest_range_0, 375u, (r3 + 380), r4);
    MemoryInline::WriteResolved32(guest_range_0, 391u, (r3 + 396), r5);
    MemoryInline::WriteResolved32(guest_range_0, 363u, (r3 + 368), r4);
    MemoryInline::WriteResolved32(guest_range_0, 379u, (r3 + 384), r4);
    MemoryInline::WriteResolved32(guest_range_0, 395u, (r3 + 400), r5);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1771u, (r3 + 1776), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 1936u, (r3 + 1941), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 1943u, (r3 + 1948), r0);
    MemoryInline::WriteResolved16(guest_range_0, 1947u, (r3 + 1952), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 1963u, (r3 + 1968), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1743u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1747u, (r3 + 1752), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1743u, (r3 + 1748), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1739u, (r3 + 1744), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1755u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1759u, (r3 + 1764), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1755u, (r3 + 1760), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1751u, (r3 + 1756), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1763u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1763u, (r3 + 1768), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1767u, (r3 + 1772), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1955u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1959u, (r3 + 1964), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1955u, (r3 + 1960), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1951u, (r3 + 1956), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1979u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1983u, (r3 + 1988), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1979u, (r3 + 1984), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1975u, (r3 + 1980), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2003u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2007u, (r3 + 2012), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2003u, (r3 + 2008), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1999u, (r3 + 2004), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2027u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2031u, (r3 + 2036), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2027u, (r3 + 2032), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 2023u, (r3 + 2028), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 2047u, (r3 + 2052), f1.d);
    MemoryInline::WriteResolved8(guest_range_0, 1972u, (r3 + 1977), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1991u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1995u, (r3 + 2000), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1991u, (r3 + 1996), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1987u, (r3 + 1992), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2015u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2019u, (r3 + 2024), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2015u, (r3 + 2020), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 2011u, (r3 + 2016), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2039u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2043u, (r3 + 2048), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2039u, (r3 + 2044), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 2035u, (r3 + 2040), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 2051u, (r3 + 2056), f1.d);
    MemoryInline::WriteResolved8(guest_range_0, 1973u, (r3 + 1978), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2059u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2063u, (r3 + 2068), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2059u, (r3 + 2064), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 2055u, (r3 + 2060), f1.d);
    r3 = MemoryInline::FlatRead32((r3 + 280));
    // inline leaf 0x80590888 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590888
    r0 = MemoryInline::FlatRead32((r30 + 292));
    f0.d = MemoryInline::FlatReadFloat32(r3);
}

loc_8068EE38:
{
    MemoryInline::FlatWriteFloat32((r30 + 116), f0.d);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8068EE4C;
    }
}

loc_8068EE40:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 303), static_cast<uint8_t>(r0));
    goto loc_8068EE5C;
}

loc_8068EE4C:
{
}

loc_8068EE50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8068EE5C;
    }
}

loc_8068EE54:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 303), static_cast<uint8_t>(r0));
}

loc_8068EE5C:
{
    r0 = MemoryInline::FlatRead8((r30 + 296));
}

loc_8068EE64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068EE70;
    }
}

loc_8068EE68:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 303), static_cast<uint8_t>(r0));
}

loc_8068EE70:
{
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r30 + 1740));
    r3 = (r5 * 24);
    r0 = 1;
    r4_addr_0 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
}

loc_8068EE88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8068EE9C;
    }
}

loc_8068EE8C:
{
    MemoryInline::FlatWrite8((r30 + 2120), static_cast<uint8_t>(r0));
    r5 = 2;
    MemoryInline::FlatWrite8((r30 + 2121), static_cast<uint8_t>(r0));
    goto loc_8068EEC0;
}

loc_8068EE9C:
{
}

loc_8068EEA0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8068EEB0;
    }
}

loc_8068EEA4:
{
    MemoryInline::FlatWrite8((r30 + 2120), static_cast<uint8_t>(r0));
    r5 = 1;
    goto loc_8068EEC0;
}

loc_8068EEB0:
{
}

loc_8068EEB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8068EEC0;
    }
}

loc_8068EEB8:
{
    r5 = 1;
    MemoryInline::FlatWrite8((r30 + 2121), static_cast<uint8_t>(r0));
}

loc_8068EEC0:
{
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r30 + 1740));
    r3 = (r3 * 24);
    r4_addr_1 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_8068EED4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8068EEEC;
    }
}

loc_8068EED8:
{
    MemoryInline::FlatWrite8((r30 + 2122), static_cast<uint8_t>(r0));
    r3 = (r5 + 2);
    r5 = (r3 & 255);
    MemoryInline::FlatWrite8((r30 + 2123), static_cast<uint8_t>(r0));
    goto loc_8068EF18;
}

loc_8068EEEC:
{
}

loc_8068EEF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8068EF04;
    }
}

loc_8068EEF4:
{
    r3 = (r5 + 1);
    MemoryInline::FlatWrite8((r30 + 2122), static_cast<uint8_t>(r0));
    r5 = (r3 & 255);
    goto loc_8068EF18;
}

loc_8068EF04:
{
}

loc_8068EF08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8068EF18;
    }
}

loc_8068EF0C:
{
    r3 = (r5 + 1);
    MemoryInline::FlatWrite8((r30 + 2123), static_cast<uint8_t>(r0));
    r5 = (r3 & 255);
}

loc_8068EF18:
{
    r0 = (r5 + -3);
    r3 = 3;
    r3 = (r5 | ~r3);
    MemoryInline::FlatWrite8((r30 + 56), static_cast<uint8_t>(r5));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    r0 = (r3 - r0);
    r28 = r30;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    MemoryInline::FlatWrite8((r30 + 57), static_cast<uint8_t>(r0));
    r27 = (r30 + 2220);
    r26 = 0;
    r29 = 0;
}

loc_8068EF4C:
{
    MemoryInline::FlatWriteFloat32((r28 + 2132), f31.d);
    r3 = r27;
    MemoryInline::FlatWriteFloat32((r28 + 2128), f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 2124), f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 2180), f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 2176), f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 2172), f31.d);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r3 = (r30 + r26);
    r26 = (r26 + 1);
}

loc_8068EF78:
{
    MemoryInline::FlatWrite8((r3 + 2413), static_cast<uint8_t>(r29));
    r28 = (r28 + 12);
    r27 = (r27 + 48);
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(4))) {
        goto loc_8068EF4C;
    }
}

loc_8068EF88:
{
    r29 = 0;
    MemoryInline::FlatWrite8((r30 + 2412), static_cast<uint8_t>(r29));
    r4 = MemoryInline::FlatRead32((r30 + 1740));
    r3 = MemoryInline::FlatRead32((r30 + 280));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    MemoryInline::FlatWriteFloat32((r30 + 1916), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 52));
    MemoryInline::FlatWriteFloat32((r30 + 1920), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 56));
    MemoryInline::FlatWriteFloat32((r30 + 1924), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 60));
    MemoryInline::FlatWriteFloat32((r30 + 1928), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 64));
    MemoryInline::FlatWriteFloat32((r30 + 1932), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 68));
    MemoryInline::FlatWriteFloat32((r30 + 1936), f0.d);
    // inline leaf 0x80590E04 (9 guest instruction(s))
}

loc_inl3_0x80590E04:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
}

loc_inl3_0x80590E10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x80590E20;
    }
}

loc_inl3_0x80590E14:
{
    r3 = MemoryInline::FlatRead32((r3 + 140));
    r3 = MemoryInline::FlatRead32((r3 + 104));
    goto loc_inl3_cont_80590E04;
}

loc_inl3_0x80590E20:
{
    r3 = -1;
}

loc_inl3_cont_80590E04:
{
    // end of inlined leaf 0x80590E04
    r0 = MemoryInline::FlatRead8((r30 + 315));
    MemoryInline::FlatWrite32((r30 + 1828), r3);
}

loc_8068EFD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068EFE0;
    }
}

loc_8068EFDC:
{
    MemoryInline::FlatWrite32((r30 + 1828), r29);
}

loc_8068EFE0:
{
    r0 = MemoryInline::FlatRead8((r30 + 298));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8068EFE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068F008;
    }
}

loc_8068EFEC:
{
    r0 = MemoryInline::FlatRead32((r30 + 1828));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8068EFF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068F008;
    }
}

loc_8068EFF8:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 297), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 298), static_cast<uint8_t>(r0));
}

loc_8068F008:
{
    r3 = r30;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B11B0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = r30;
    ctx->lr = 0x8068F018u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B171Cu>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r30 + 2420), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 2424), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 24u, (r1 + 32));
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r1 + 52));
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8068EA58 func_8068EA58 preserves=true fpr_mask=0x00000000
