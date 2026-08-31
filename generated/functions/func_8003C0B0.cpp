#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003C0B0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8003C0B0;

loc_8003C0B0:
{
    r6 = (r3 + 52);
    r5 = (r3 + 148);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30264));
    r4 = 0x80270000u;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    r0 = 0;
    r4 = (r4 + 9648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_8003C0D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8003C108:
{
    r8 = (r3 + 52);
    r4 = 715849728;
    r9 = (r5 - r8);
    r7 = (r3 + -236);
    r10 = (r9 + 47);
    r0 = (r4 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r11 = (r0 + r4);
    r12 = (r11 + 1);
}

loc_8003C138:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(8))) {
        goto loc_8003C358;
    }
}

loc_8003C13C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r5));
}

loc_8003C140:
{
    r4 = 0;
    r5 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8003C170;
    }
}

loc_8003C14C:
{
    r0 = (r9 & -2147483648);
}

loc_8003C150:
{
    r8 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8003C164;
    }
}

loc_8003C158:
{
    r0 = (r10 & -2147483648);
}

loc_8003C15C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003C164;
    }
}

loc_8003C160:
{
    r8 = 0;
}

loc_8003C164:
{
}

loc_8003C168:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8003C170;
    }
}

loc_8003C16C:
{
    r5 = 1;
}

loc_8003C170:
{
}

loc_8003C174:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8003C1A0;
    }
}

loc_8003C178:
{
    r8 = (r11 & -2147483648);
}

loc_8003C17C:
{
    r5 = 1;
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8003C194;
    }
}

loc_8003C184:
{
    r0 = (r12 & -2147483648);
}

loc_8003C18C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(r0))) {
        goto loc_8003C194;
    }
}

loc_8003C190:
{
    r5 = 0;
}

loc_8003C194:
{
}

loc_8003C198:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8003C1A0;
    }
}

loc_8003C19C:
{
    r4 = 1;
}

loc_8003C1A0:
{
}

loc_8003C1A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8003C358;
    }
}

loc_8003C1A8:
{
    r4 = (r7 + 383);
    r0 = 384;
    r4 = (r4 - r6);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30264));
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    r0 = 0;
    ctr = r4;
}

loc_8003C1CC:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r7))) {
        goto loc_8003C358;
    }
}

loc_8003C1D0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 384u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r6 + 4), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r6 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r6 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r6 + 16), f1.d);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r6 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r6 + 24), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r6 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r6 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r6 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r6 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r6 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r6 + 48), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r6 + 52), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r6 + 56), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r6 + 60), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r6 + 64), f1.d);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r6 + 68), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r6 + 72), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r6 + 76), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r6 + 80), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r6 + 84), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r6 + 88), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r6 + 92), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r6 + 96), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r6 + 100), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r6 + 104), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r6 + 108), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r6 + 112), f1.d);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r6 + 116), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r6 + 120), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r6 + 124), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r6 + 128), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r6 + 132), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r6 + 136), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 140u, (r6 + 140), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r6 + 144), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 148u, (r6 + 148), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 152u, (r6 + 152), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 156u, (r6 + 156), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 160u, (r6 + 160), f1.d);
        MemoryInline::WriteResolved32(guest_range_1, 164u, (r6 + 164), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 168u, (r6 + 168), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 172u, (r6 + 172), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 176u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 176u, (r6 + 176), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 180u, (r6 + 180), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 184u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 184u, (r6 + 184), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 188u, (r6 + 188), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 192u, (r6 + 192), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 196u, (r6 + 196), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 200u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 200u, (r6 + 200), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 204u, (r6 + 204), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 208u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 208u, (r6 + 208), f1.d);
        MemoryInline::WriteResolved32(guest_range_1, 212u, (r6 + 212), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 216u, (r6 + 216), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 220u, (r6 + 220), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 224u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 224u, (r6 + 224), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 228u, (r6 + 228), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 232u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 232u, (r6 + 232), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 236u, (r6 + 236), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 240u, (r6 + 240), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 244u, (r6 + 244), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 248u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 248u, (r6 + 248), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 252u, (r6 + 252), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 256u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 256u, (r6 + 256), f1.d);
        MemoryInline::WriteResolved32(guest_range_1, 260u, (r6 + 260), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 264u, (r6 + 264), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 268u, (r6 + 268), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 272u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 272u, (r6 + 272), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 276u, (r6 + 276), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 280u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 280u, (r6 + 280), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 284u, (r6 + 284), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 288u, (r6 + 288), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 292u, (r6 + 292), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 296u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 296u, (r6 + 296), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 300u, (r6 + 300), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 304u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 304u, (r6 + 304), f1.d);
        MemoryInline::WriteResolved32(guest_range_1, 308u, (r6 + 308), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 312u, (r6 + 312), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 316u, (r6 + 316), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 320u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 320u, (r6 + 320), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 324u, (r6 + 324), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 328u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 328u, (r6 + 328), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 332u, (r6 + 332), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 336u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 336u, (r6 + 336), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 340u, (r6 + 340), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 344u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 344u, (r6 + 344), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 348u, (r6 + 348), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 352u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 352u, (r6 + 352), f1.d);
        MemoryInline::WriteResolved32(guest_range_1, 356u, (r6 + 356), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 360u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 360u, (r6 + 360), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 364u, (r6 + 364), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 368u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 368u, (r6 + 368), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 372u, (r6 + 372), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 376u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 376u, (r6 + 376), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 380u, (r6 + 380), f0.d);
    }
    r6 = (r6 + 384);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8003C1D0;
    }
}

loc_8003C358:
{
    r5 = (r3 + 148);
    r0 = 48;
    r4 = (r5 + 47);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30264));
    r4 = (r4 - r6);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = 0;
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_8003C380:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8003C384:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r6, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r6, r0);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r6 + 4), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r6 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r6 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r6 + 16), f1.d);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r6 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r6 + 24), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r6 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r6 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r6 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r6 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r6 + 44), f0.d);
    }
    r6 = (r6 + 48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8003C384;
    }
}

loc_8003C3BC:
{
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

loc_return:
{
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
// RECOMP_REGISTRATION base 0x8003C0B0 func_8003C0B0 preserves=true fpr_mask=0x00000000
