#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A0410(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_805A0410;

loc_805A0410:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8216));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80890000u;
    f3.d = f2.d;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8212));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    f4.d = f2.d;
    r29 = r3;
    r3 = (r3 + 36);
    // inline leaf 0x80239DFC (5 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8216));
    r3 = (r29 + 84);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8212));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000000A gpr_write=0xE000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A0410 func_805A0410 preserves=true fpr_mask=0x00000000
