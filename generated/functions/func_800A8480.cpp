#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8480(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800A8480;

loc_800A8480:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r4 = r5;
    r5 = r6;
    // inline leaf 0x8008E0E0 (53 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28708));
    r8 = 0x80270000u;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28712));
    r8 = (r8 + 17016);
    r6 = -1;
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 256u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r8);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 52), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 60), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 64), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 68), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 80), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 84), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 88), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 92), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r7);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r3 + 104), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r3 + 108), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r6);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r3 + 148), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r3 + 152), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + 156), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r3 + 224), r7);
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r3 + 228), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r3 + 232), r7);
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r3 + 236), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r3 + 240), r7);
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r3 + 244), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r3 + 248), r7);
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r3 + 252), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r7);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r7);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r7);
    MemoryInline::WriteResolved8(guest_range_0, 141u, (r3 + 141), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 140u, (r3 + 140), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r5);
    // end of inlined leaf 0x8008E0E0
    r4 = 0x80270000u;
    r3 = (r31 + 256);
    r4 = (r4 + 19200);
    MemoryInline::FlatWrite32(r31, r4);
    ctx->lr = 0x800A84BCu;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800A5860u>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = (r31 + 3660);
    r3 = (r31 + 3772);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28040));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_800A84CC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 3636), r0);
    MemoryInline::FlatWrite32((r31 + 3640), r30);
    MemoryInline::FlatWriteFloat32((r31 + 3644), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 3648), f0.d);
    MemoryInline::FlatWrite32((r31 + 3652), r0);
    MemoryInline::FlatWrite32((r31 + 3656), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800A8660;
    }
}

loc_800A84EC:
{
    r6 = (r31 + 3660);
    r4 = (r31 + 3644);
    r7 = (r3 - r6);
    r8 = (r7 + 15);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r8) >> 4);
    r9_ca_1 = (xer >> 29) & 1u;
    r9 = (r0 + r9_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r9_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r10 = (r9 + 1);
}

loc_800A850C:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(8))) {
        goto loc_800A8624;
    }
}

loc_800A8510:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r3));
}

loc_800A8514:
{
    r3 = 0;
    r6 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800A8544;
    }
}

loc_800A8520:
{
    r0 = (r7 & -2147483648);
}

loc_800A8524:
{
    r7 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A8538;
    }
}

loc_800A852C:
{
    r0 = (r8 & -2147483648);
}

loc_800A8530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A8538;
    }
}

loc_800A8534:
{
    r7 = 0;
}

loc_800A8538:
{
}

loc_800A853C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800A8544;
    }
}

loc_800A8540:
{
    r6 = 1;
}

loc_800A8544:
{
}

loc_800A8548:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800A8574;
    }
}

loc_800A854C:
{
    r7 = (r9 & -2147483648);
}

loc_800A8550:
{
    r6 = 1;
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A8568;
    }
}

loc_800A8558:
{
    r0 = (r10 & -2147483648);
}

loc_800A8560:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_800A8568;
    }
}

loc_800A8564:
{
    r6 = 0;
}

loc_800A8568:
{
}

loc_800A856C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800A8574;
    }
}

loc_800A8570:
{
    r3 = 1;
}

loc_800A8574:
{
}

loc_800A8578:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A8624;
    }
}

loc_800A857C:
{
    r0 = (r4 + 127);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28040));
    r0 = (r0 - r5);
    r3 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 33554431);
    ctr = r0;
}

loc_800A8598:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_800A8624;
    }
}

loc_800A859C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r5, f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r5 + 4), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r5 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r5 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 28), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r5 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r5 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r5 + 40), r3);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r5 + 44), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r5 + 48), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r5 + 52), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r5 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r5 + 60), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r5 + 64), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r5 + 68), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r5 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r5 + 76), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r5 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r5 + 84), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r5 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r5 + 92), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r5 + 96), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r5 + 100), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r5 + 104), r3);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r5 + 108), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r5 + 112), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r5 + 116), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r5 + 120), r3);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r5 + 124), r3);
    }
    r5 = (r5 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800A859C;
    }
}

loc_800A8624:
{
    r3 = (r31 + 3772);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28040));
    r0 = (r3 + 15);
    r4 = 0;
    r0 = (r0 - r5);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 268435455);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_800A8644:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800A8660;
    }
}

loc_800A8648:
{
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    MemoryInline::FlatWrite32((r5 + 8), r4);
    MemoryInline::FlatWrite32((r5 + 12), r4);
    r5 = (r5 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800A8648;
    }
}

loc_800A8660:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800A8480 func_800A8480 preserves=true fpr_mask=0x00000000
