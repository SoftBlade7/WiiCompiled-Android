#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008DC60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8008DC60;

loc_8008DC60:
{
    r6 = (r3 + 132);
    r5 = (r3 + 204);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -28720), 0, 8u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28716));
    r4 = 0x80270000u;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28720));
    r4 = (r4 + 16976);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_8008DC7C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 208u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r3 + 108), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r3 + 112), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r3 + 116), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r3 + 120), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r3 + 124), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r3 + 128), f0.d);
    }
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8008DE70;
    }
}

loc_8008DC9C:
{
    r8 = (r3 + 132);
    r4 = 715849728;
    r9 = (r5 - r8);
    r7 = (r3 + 12);
    r10 = (r9 + 23);
    r0 = (r4 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r11 = (r0 + r4);
    r12 = (r11 + 1);
}

loc_8008DCCC:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(8))) {
        goto loc_8008DE28;
    }
}

loc_8008DCD0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r5));
}

loc_8008DCD4:
{
    r4 = 0;
    r5 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8008DD04;
    }
}

loc_8008DCE0:
{
    r0 = (r9 & -2147483648);
}

loc_8008DCE4:
{
    r8 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8008DCF8;
    }
}

loc_8008DCEC:
{
    r0 = (r10 & -2147483648);
}

loc_8008DCF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008DCF8;
    }
}

loc_8008DCF4:
{
    r8 = 0;
}

loc_8008DCF8:
{
}

loc_8008DCFC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8008DD04;
    }
}

loc_8008DD00:
{
    r5 = 1;
}

loc_8008DD04:
{
}

loc_8008DD08:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8008DD34;
    }
}

loc_8008DD0C:
{
    r8 = (r11 & -2147483648);
}

loc_8008DD10:
{
    r5 = 1;
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008DD28;
    }
}

loc_8008DD18:
{
    r0 = (r12 & -2147483648);
}

loc_8008DD20:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(r0))) {
        goto loc_8008DD28;
    }
}

loc_8008DD24:
{
    r5 = 0;
}

loc_8008DD28:
{
}

loc_8008DD2C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8008DD34;
    }
}

loc_8008DD30:
{
    r4 = 1;
}

loc_8008DD34:
{
}

loc_8008DD38:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8008DE28;
    }
}

loc_8008DD3C:
{
    r4 = (r7 + 191);
    r0 = 192;
    r4 = (r4 - r6);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28720));
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28716));
    ctr = r4;
}

loc_8008DD5C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r7))) {
        goto loc_8008DE28;
    }
}

loc_8008DD60:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r6, 0, 192u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r6, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r6 + 4), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r6 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r6 + 12), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r6 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r6 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r6 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r6 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r6 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r6 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r6 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r6 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r6 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r6 + 52), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 56u, (r6 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r6 + 60), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r6 + 64), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r6 + 68), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r6 + 72), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r6 + 76), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r6 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r6 + 84), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r6 + 88), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 92u, (r6 + 92), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 96u, (r6 + 96), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 100u, (r6 + 100), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 104u, (r6 + 104), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 108u, (r6 + 108), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 112u, (r6 + 112), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r6 + 116), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 120u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 120u, (r6 + 120), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 124u, (r6 + 124), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 128u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 128u, (r6 + 128), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 132u, (r6 + 132), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r6 + 136), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r6 + 140), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 144u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 144u, (r6 + 144), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 148u, (r6 + 148), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 152u, (r6 + 152), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 156u, (r6 + 156), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 160u, (r6 + 160), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 164u, (r6 + 164), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 168u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 168u, (r6 + 168), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 172u, (r6 + 172), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 176u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 176u, (r6 + 176), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 180u, (r6 + 180), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 184u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 184u, (r6 + 184), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 188u, (r6 + 188), f0.d);
    }
    r6 = (r6 + 192);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8008DD60;
    }
}

loc_8008DE28:
{
    r5 = (r3 + 204);
    r0 = 24;
    r4 = (r5 + 23);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28720));
    r4 = (r4 - r6);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28716));
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_8008DE4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8008DE70;
    }
}

loc_8008DE50:
{
    MemoryInline::FlatWriteFloat32(r6, f1.d);
    MemoryInline::FlatWriteFloat32((r6 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r6 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r6 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r6 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r6 + 20), f0.d);
    r6 = (r6 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8008DE50;
    }
}

loc_8008DE70:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28716));
    r5 = 0;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28720));
    r4 = 1;
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_1, 204u, (r3 + 204), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f0.d);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r4);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f0.d);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r5);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r3 + 48), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r3 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 56), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r3 + 60), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 76), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r3 + 92), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r3 + 64), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r3 + 80), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r3 + 96), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 68), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r3 + 84), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r3 + 100), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r3 + 72), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r3 + 88), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r3 + 104), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r3 + 108), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r3 + 112), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r3 + 116), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r3 + 120), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r3 + 124), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r3 + 128), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r3 + 132), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r3 + 136), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 140u, (r3 + 140), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 144u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 144u, (r3 + 144), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 148u, (r3 + 148), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 152u, (r3 + 152), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 156u, (r3 + 156), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 160u, (r3 + 160), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 164u, (r3 + 164), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 168u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 168u, (r3 + 168), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 172u, (r3 + 172), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 176u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 176u, (r3 + 176), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 180u, (r3 + 180), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 184u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 184u, (r3 + 184), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 188u, (r3 + 188), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 192u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 192u, (r3 + 192), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 196u, (r3 + 196), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 200u, (r3 + 200), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFD gpr_write=0x00001FF1 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8008DC60 func_8008DC60 preserves=true fpr_mask=0x00000000
