#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80616844(CpuContext* MKW_RESTRICT ctx)
{
    double leaf_stack_saved_f27_entry = 0.0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80616844;

loc_80616844:
{
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r8 = 0x80890000u;
    r6 = 15;
    r8 = (r8 + 30360);
    r5 = 20;
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 76u, true, false);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r8 + 44));
    r4 = 26;
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r8 + 48));
    r7 = 16;
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r8 + 4));
    r0 = 28;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            f10.d = PpcBitCastToFloatInline(resolved_pair.first);
            f9.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r8 + 32));
            f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r8 + 36));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r8 + 60));
    f27.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r8);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f29.d = PpcBitCastToFloatInline(resolved_pair.first);
            f30.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f29.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r8 + 8));
            f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r8 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f31.d = PpcBitCastToFloatInline(resolved_pair.first);
            f13.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r8 + 16));
            f13.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r8 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            f12.d = PpcBitCastToFloatInline(resolved_pair.first);
            f11.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f12.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r8 + 24));
            f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r8 + 28));
        }
    }
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r8 + 40));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 52u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r8 + 52));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r8 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r8 + 64));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r8 + 68));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r8 + 72));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 116u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f27.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f28.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f27.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f28.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f30.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f30.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f13.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f13.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f12.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f12.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f11.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f9.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r3 + 48), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r3 + 52), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 56), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r3 + 60), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r3 + 64), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 68), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r3 + 72), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 76), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r3 + 80), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r3 + 84), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r3 + 88), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r3 + 92), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r3 + 96), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r3 + 100), f7.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r3 + 104), f28.d);
    MemoryInline::WriteResolved8(guest_range_1, 108u, (r3 + 108), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 109u, (r3 + 109), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 110u, (r3 + 110), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 111u, (r3 + 111), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 112u, (r3 + 112), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 113u, (r3 + 113), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 114u, (r3 + 114), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 115u, (r3 + 115), static_cast<uint8_t>(r6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = leaf_stack_saved_f28_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = leaf_stack_saved_f27_entry;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0xF8000000 fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80616844 func_80616844 preserves=true fpr_mask=0x00000000
