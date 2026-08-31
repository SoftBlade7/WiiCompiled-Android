#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056E624(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8056E624;

loc_8056E624:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8056E654u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    r3 = (r31 + 4);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f31.d = MemoryInline::FlatReadFloat32((r3 + 372));
    r3 = (r31 + 4);
    // inline leaf 0x805907D8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x805907D8
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r5 = 0;
    r4 = 0x80890000u;
    r0 = -1;
    f2.d = PpcFmulsInline(f0.d, f31.d);
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 5936));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 5948));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 20), 0, 96u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r31 + 20), f2.d);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r31 + 24), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 28), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 32), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 44), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 52), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 48), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 64), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 60), f0.d);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 52u, (r31 + 72), r5);
        MemoryInline::WriteResolved16(guest_range_0, 54u, (r31 + 74), r5);
    }
    MemoryInline::WriteResolved16(guest_range_0, 56u, (r31 + 76), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 80), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r31 + 92), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r31 + 84), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 76u, (r31 + 96), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 68u, (r31 + 88), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 78u, (r31 + 98), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r31 + 100), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r31 + 104), f0.d);
    }
    MemoryInline::WriteResolved16(guest_range_0, 88u, (r31 + 108), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r31 + 112), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8056E624 func_8056E624 preserves=false fpr_mask=0x80000000
