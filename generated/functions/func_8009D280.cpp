#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009D280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8009D280;

loc_8009D280:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    r7 = 16777216;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r7 = (r7 + 8);
    MemoryInline::FlatWriteRam32((r1 + 156), r31);
    MemoryInline::FlatWriteRam32((r1 + 152), r30);
    MemoryInline::FlatWriteRam32((r1 + 148), r29);
    r0 = MemoryInline::FlatRead32((r5 + 24));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8009D2A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009D2B0;
    }
}

loc_8009D2AC:
{
    r7 = (r7 & -9);
}

loc_8009D2B0:
{
    r10 = (r1 + 60);
    r0 = (r1 + 132);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28140));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r10), static_cast<uint32_t>(r0));
}

loc_8009D2C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28136));
    r8 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r8);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 40), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 48), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r1 + 52), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r1 + 56), f0.d);
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8009D4CC;
    }
}

loc_8009D300:
{
    r12 = (r0 - r10);
    r8 = 715849728;
    r31 = (r12 + 23);
    r9 = (r1 + -60);
    r0 = (r8 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r31))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    r30 = (r0 + r8);
    r29 = (r30 + 1);
}

loc_8009D32C:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_8009D484;
    }
}

loc_8009D330:
{
    r8 = 0;
    r11 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8009D360;
    }
}

loc_8009D33C:
{
    r0 = (r12 & -2147483648);
}

loc_8009D340:
{
    r12 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009D354;
    }
}

loc_8009D348:
{
    r0 = (r31 & -2147483648);
}

loc_8009D34C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009D354;
    }
}

loc_8009D350:
{
    r12 = 0;
}

loc_8009D354:
{
}

loc_8009D358:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8009D360;
    }
}

loc_8009D35C:
{
    r11 = 1;
}

loc_8009D360:
{
}

loc_8009D364:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8009D390;
    }
}

loc_8009D368:
{
    r12 = (r30 & -2147483648);
}

loc_8009D36C:
{
    r11 = 1;
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8009D384;
    }
}

loc_8009D374:
{
    r0 = (r29 & -2147483648);
}

loc_8009D37C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(r0))) {
        goto loc_8009D384;
    }
}

loc_8009D380:
{
    r11 = 0;
}

loc_8009D384:
{
}

loc_8009D388:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8009D390;
    }
}

loc_8009D38C:
{
    r8 = 1;
}

loc_8009D390:
{
}

loc_8009D394:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8009D484;
    }
}

loc_8009D398:
{
    r8 = (r9 + 191);
    r0 = 192;
    r8 = (r8 - r10);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28136));
    r8 = PPC_Divwu(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28140));
    ctr = r8;
}

loc_8009D3B8:
{
    if ((static_cast<uint32_t>(r10) >= static_cast<uint32_t>(r9))) {
        goto loc_8009D484;
    }
}

loc_8009D3BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r10, 0, 192u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r10, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r10 + 4), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r10 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r10 + 12), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r10 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r10 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r10 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r10 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r10 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r10 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r10 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r10 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r10 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r10 + 52), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r10 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r10 + 60), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r10 + 64), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r10 + 68), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r10 + 72), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r10 + 76), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r10 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r10 + 84), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r10 + 88), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r10 + 92), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r10 + 96), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r10 + 100), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r10 + 104), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r10 + 108), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r10 + 112), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r10 + 116), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r10 + 120), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (r10 + 124), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (r10 + 128), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 132u, (r10 + 132), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 136u, (r10 + 136), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 140u, (r10 + 140), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 144u, (r10 + 144), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r10 + 148), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r10 + 152), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 156u, (r10 + 156), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 160u, (r10 + 160), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 164u, (r10 + 164), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 168u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 168u, (r10 + 168), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 172u, (r10 + 172), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 176u, (r10 + 176), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 180u, (r10 + 180), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 184u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 184u, (r10 + 184), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 188u, (r10 + 188), f0.d);
    }
    r10 = (r10 + 192);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8009D3BC;
    }
}

loc_8009D484:
{
    r9 = (r1 + 132);
    r0 = 24;
    r8 = (r9 + 23);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28136));
    r8 = (r8 - r10);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28140));
    r8 = PPC_Divwu(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
    ctr = r8;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(r9));
}

loc_8009D4A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009D4CC;
    }
}

loc_8009D4AC:
{
    MemoryInline::FlatWriteFloat32(r10, f1.d);
    MemoryInline::FlatWriteFloat32((r10 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r10 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r10 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r10 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r10 + 20), f0.d);
    r10 = (r10 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8009D4AC;
    }
}

loc_8009D4CC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r8 = (r1 + 8);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8009D4E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    r29 = MemoryInline::FlatRead32((r1 + 148));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    r3 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8009D280 func_8009D280 preserves=true fpr_mask=0x00000000
