#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8087B2F4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8087B2F4;

loc_8087B2F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80510000u;
    r4 = (r31 + 13824);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808B0000u;
    r30 = (r30 + 8896);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x809C0000u;
    r29 = (r29 + 18368);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 464));
    r3 = (r29 + 160);
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 148), 0, 96u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r29 + 160), f0.d);
    r5 = (r29 + 148);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f0.d = MemoryInline::FlatReadFloat32((r30 + 468));
    r3 = (r29 + 184);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r29 + 184), f0.d);
    r4 = (r31 + 13824);
    r5 = (r29 + 172);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f0.d = MemoryInline::FlatReadFloat32((r30 + 472));
    r3 = (r29 + 208);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r29 + 208), f0.d);
    r4 = (r31 + 13824);
    r5 = (r29 + 196);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::FlatReadFloat32(r30);
    r3 = (r29 + 232);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 476));
    r4 = (r31 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r29 + 232), f1.d);
    r5 = (r29 + 220);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 8), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    r4 = 0x808E0000u;
    r3 = 0x808E0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -14804));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -14920));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    MemoryInline::FlatWriteRam32((r29 + 256), r3);
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
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0000002 gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x0000001C fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8087B2F4 func_8087B2F4 preserves=true fpr_mask=0x00000000
