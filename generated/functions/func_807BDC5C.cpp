#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BDC5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t xer = ctx->xer;

    goto loc_807BDC5C;

loc_807BDC5C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    r6 = (r3 + 138);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 26328));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 60u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 660u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r0);
    r11 = (r4 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    r10 = (r4 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r0);
    r9 = (r4 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    r5 = (r9 + 16);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    r8 = (r4 + r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    r0 = (r8 - r5);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f1.d);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r0_addze_src_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_0 + r0_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addze_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f1.d);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r12);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r12);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r12);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r12);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r12);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r4 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 52), r12);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r4 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 56), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r11);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r9);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r3 + 64), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r3 + 60), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r3 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 76), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r3 + 72), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r3 + 92), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r3 + 88), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r3 + 84), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r3 + 96), f0.d);
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 104), r7);
    MemoryInline::WriteResolved32(guest_range_1, 656u, (r3 + 656), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 112), r5);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 108), r0);
    }
    ctx->lr = 0x807BDD64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BDDFCu>(ctx);
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
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF00001A gpr_write=0xFF001FFB gpr_return=0x00000018 fpr_read=0x80000004 fpr_write=0x800007FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807BDC5C func_807BDC5C preserves=true fpr_mask=0x00000000
