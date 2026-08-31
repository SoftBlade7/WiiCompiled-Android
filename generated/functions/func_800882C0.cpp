#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800882C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r10_ca_0 = 0;
    uint32_t r10_ca_1 = 0;
    uint32_t r10_ca_2 = 0;
    uint32_t r10_ca_3 = 0;
    uint32_t r10_ca_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800882C0;

loc_800882C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0;
    r7 = (r3 + 100);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r3 + 132);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28824));
}

loc_800882E0:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r5 = 1;
    r0 = -1;
    r8 = (r3 + 12);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 148u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r6);
    r31 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r6);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r8);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r8);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 24), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r3 + 25), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r6);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r6);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 60), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 64), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r6);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 84), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 88), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r6);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r6);
    }
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r4))) {
        goto loc_800884D8;
    }
}

loc_80088364:
{
    r6 = (r3 + 100);
    r5 = (r3 + 4);
    r8 = (r4 - r6);
    r9 = (r8 + 15);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r9) >> 4);
    r10_ca_1 = (xer >> 29) & 1u;
    r10 = (r0 + r10_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r10_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r11 = (r10 + 1);
}

loc_80088384:
{
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(8))) {
        goto loc_8008849C;
    }
}

loc_80088388:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_8008838C:
{
    r4 = 0;
    r6 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800883BC;
    }
}

loc_80088398:
{
    r0 = (r8 & -2147483648);
}

loc_8008839C:
{
    r8 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800883B0;
    }
}

loc_800883A4:
{
    r0 = (r9 & -2147483648);
}

loc_800883A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800883B0;
    }
}

loc_800883AC:
{
    r8 = 0;
}

loc_800883B0:
{
}

loc_800883B4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_800883BC;
    }
}

loc_800883B8:
{
    r6 = 1;
}

loc_800883BC:
{
}

loc_800883C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800883EC;
    }
}

loc_800883C4:
{
    r8 = (r10 & -2147483648);
}

loc_800883C8:
{
    r6 = 1;
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800883E0;
    }
}

loc_800883D0:
{
    r0 = (r11 & -2147483648);
}

loc_800883D8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(r0))) {
        goto loc_800883E0;
    }
}

loc_800883DC:
{
    r6 = 0;
}

loc_800883E0:
{
}

loc_800883E4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800883EC;
    }
}

loc_800883E8:
{
    r4 = 1;
}

loc_800883EC:
{
}

loc_800883F0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8008849C;
    }
}

loc_800883F4:
{
    r0 = (r5 + 127);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28824));
    r0 = (r0 - r7);
    r4 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 33554431);
    ctr = r0;
}

loc_80088410:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5))) {
        goto loc_8008849C;
    }
}

loc_80088414:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r7, f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r7 + 4), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r7 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r7 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r7 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r7 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r7 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r7 + 28), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r7 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r7 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r7 + 40), r4);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r7 + 44), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r7 + 48), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r7 + 52), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r7 + 56), r4);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r7 + 60), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r7 + 64), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r7 + 68), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r7 + 72), r4);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r7 + 76), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r7 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r7 + 84), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r7 + 88), r4);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r7 + 92), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r7 + 96), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r7 + 100), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r7 + 104), r4);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r7 + 108), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r7 + 112), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r7 + 116), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r7 + 120), r4);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r7 + 124), r4);
    }
    r7 = (r7 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80088414;
    }
}

loc_8008849C:
{
    r4 = (r3 + 132);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28824));
    r0 = (r4 + 15);
    r5 = 0;
    r0 = (r0 - r7);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 268435455);
    ctr = r0;
}

loc_800884BC:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r4))) {
        goto loc_800884D8;
    }
}

loc_800884C0:
{
    MemoryInline::FlatWriteFloat32(r7, f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 4), f0.d);
    MemoryInline::FlatWrite32((r7 + 8), r5);
    MemoryInline::FlatWrite32((r7 + 12), r5);
    r7 = (r7 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800884C0;
    }
}

loc_800884D8:
{
    r6 = (r3 + 148);
    r4 = (r3 + 180);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28824));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_800884E8:
{
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 132u, (r3 + 132), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 136u, (r3 + 136), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 140), r0);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r0);
    }
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80088674;
    }
}

loc_80088500:
{
    r7 = (r3 + 148);
    r5 = (r3 + 52);
    r8 = (r4 - r7);
    r9 = (r8 + 15);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r9) >> 4);
    r10_ca_3 = (xer >> 29) & 1u;
    r10 = (r0 + r10_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r10_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r11 = (r10 + 1);
}

loc_80088520:
{
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(8))) {
        goto loc_80088638;
    }
}

loc_80088524:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80088528:
{
    r4 = 0;
    r7 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80088558;
    }
}

loc_80088534:
{
    r0 = (r8 & -2147483648);
}

loc_80088538:
{
    r8 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8008854C;
    }
}

loc_80088540:
{
    r0 = (r9 & -2147483648);
}

loc_80088544:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008854C;
    }
}

loc_80088548:
{
    r8 = 0;
}

loc_8008854C:
{
}

loc_80088550:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80088558;
    }
}

loc_80088554:
{
    r7 = 1;
}

loc_80088558:
{
}

loc_8008855C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80088588;
    }
}

loc_80088560:
{
    r8 = (r10 & -2147483648);
}

loc_80088564:
{
    r7 = 1;
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008857C;
    }
}

loc_8008856C:
{
    r0 = (r11 & -2147483648);
}

loc_80088574:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(r0))) {
        goto loc_8008857C;
    }
}

loc_80088578:
{
    r7 = 0;
}

loc_8008857C:
{
}

loc_80088580:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80088588;
    }
}

loc_80088584:
{
    r4 = 1;
}

loc_80088588:
{
}

loc_8008858C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80088638;
    }
}

loc_80088590:
{
    r0 = (r5 + 127);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28824));
    r0 = (r0 - r6);
    r4 = 0;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_5 & 33554431);
    ctr = r0;
}

loc_800885AC:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_80088638;
    }
}

loc_800885B0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r6, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r6, f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r6 + 4), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r6 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r6 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r6 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r6 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r6 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r6 + 28), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r6 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r6 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r6 + 40), r4);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r6 + 44), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r6 + 48), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r6 + 52), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r6 + 56), r4);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r6 + 60), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r6 + 64), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r6 + 68), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r6 + 72), r4);
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r6 + 76), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r6 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r6 + 84), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r6 + 88), r4);
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r6 + 92), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 96u, (r6 + 96), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 100u, (r6 + 100), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r6 + 104), r4);
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r6 + 108), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 112u, (r6 + 112), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r6 + 116), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 120u, (r6 + 120), r4);
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r6 + 124), r4);
    }
    r6 = (r6 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800885B0;
    }
}

loc_80088638:
{
    r4 = (r3 + 180);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28824));
    r0 = (r4 + 15);
    r5 = 0;
    r0 = (r0 - r6);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_7 & 268435455);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_80088658:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80088674;
    }
}

loc_8008865C:
{
    MemoryInline::FlatWriteFloat32(r6, f0.d);
    MemoryInline::FlatWriteFloat32((r6 + 4), f0.d);
    MemoryInline::FlatWrite32((r6 + 8), r5);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    r6 = (r6 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8008865C;
    }
}

loc_80088674:
{
    r4 = 0x80090000u;
    r5 = 0x80090000u;
    r4 = (r4 + -30864);
    r6 = 12;
    r5 = (r5 + -30832);
    r7 = 3;
    r3 = (r3 + 180);
    ctx->lr = 0x80088694u;
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80020FF4u>(ctx);
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
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28820));
    r0 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 28), 0, 228u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r31 + 52), r0);
    r3 = r31;
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r31 + 56), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r31 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r31 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r31 + 68), r0);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r31 + 72), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r31 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r31 + 48), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r31 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r31 + 32), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r31 + 60), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r31 + 64), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r31 + 84), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r31 + 88), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r31 + 92), r0);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r31 + 96), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 104u, (r31 + 132), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 108u, (r31 + 136), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 112u, (r31 + 140), r0);
        MemoryInline::WriteResolved32(guest_range_3, 116u, (r31 + 144), r0);
    }
    MemoryInline::WriteResolved32(guest_range_3, 188u, (r31 + 216), r0);
    MemoryInline::WriteResolved32(guest_range_3, 200u, (r31 + 228), r0);
    MemoryInline::WriteResolved32(guest_range_3, 216u, (r31 + 244), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, (r31 + 100), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r31 + 104), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 80u, (r31 + 108), r0);
        MemoryInline::WriteResolved32(guest_range_3, 84u, (r31 + 112), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 120u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 120u, (r31 + 148), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 124u, (r31 + 152), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 128u, (r31 + 156), r0);
        MemoryInline::WriteResolved32(guest_range_3, 132u, (r31 + 160), r0);
    }
    MemoryInline::WriteResolved32(guest_range_3, 192u, (r31 + 220), r0);
    MemoryInline::WriteResolved32(guest_range_3, 204u, (r31 + 232), r0);
    MemoryInline::WriteResolved32(guest_range_3, 220u, (r31 + 248), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r31 + 116), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, (r31 + 120), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 96u, (r31 + 124), r0);
        MemoryInline::WriteResolved32(guest_range_3, 100u, (r31 + 128), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 136u, (r31 + 164), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 140u, (r31 + 168), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 144u, (r31 + 172), r0);
        MemoryInline::WriteResolved32(guest_range_3, 148u, (r31 + 176), r0);
    }
    MemoryInline::WriteResolved32(guest_range_3, 196u, (r31 + 224), r0);
    MemoryInline::WriteResolved32(guest_range_3, 208u, (r31 + 236), r0);
    MemoryInline::WriteResolved32(guest_range_3, 224u, (r31 + 252), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800882C0 func_800882C0 preserves=true fpr_mask=0x00000000
