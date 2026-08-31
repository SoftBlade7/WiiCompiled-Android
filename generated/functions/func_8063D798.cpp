#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8063D798(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8063D798;

loc_8063D798:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    r5 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 255;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -29736));
    r5 = (r5 + -4088);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + -29740));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 104u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 24), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r3 + 48), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 52), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 56), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 60), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 64), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 68), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 72u, (r3 + 72), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 80), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 84), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 88), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 92), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 96u, (r3 + 96), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r31);
    r3 = (r3 + 104);
    // inline leaf 0x805C23E4 (7 guest instruction(s))
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r0);
    }
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r0);
    // end of inlined leaf 0x805C23E4
    f0.d = MemoryInline::FlatReadFloat32((r30 + -29740));
    r4 = 0x808C0000u;
    r0 = -1;
    r5 = 1;
    r4 = (r4 + -4172);
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 152u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r29 + 124), f0.d);
    r3 = (r29 + 152);
    MemoryInline::WriteResolved8(guest_range_1, 128u, (r29 + 128), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r29 + 132), r31);
    MemoryInline::WriteResolved8(guest_range_1, 136u, (r29 + 136), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 140u, (r29 + 140), f0.d);
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r29 + 144), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r29 + 148), r0);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r29, r4);
    // inline leaf 0x8063C3EC (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r3 + 12), r0);
    }
    // end of inlined leaf 0x8063C3EC
    r3 = (r29 + 168);
    ctx->lr = 0x8063D888u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x805E85A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = (r29 + 324);
    // inline leaf 0x805F8B34 (7 guest instruction(s))
    r0 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    }
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r0);
    // end of inlined leaf 0x805F8B34
    r3 = (r29 + 344);
    // inline leaf 0x805F8B34 (7 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r3 + 12), r0);
    }
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r3 + 16), r0);
    // end of inlined leaf 0x805F8B34
    MemoryInline::WriteResolved32(guest_range_3, 40u, (r29 + 364), r31);
    r3 = r29;
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r29 + 368), r31);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000000E gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8063D798 func_8063D798 preserves=true fpr_mask=0x00000000
