#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022F90C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f26_entry = 0.0;
    double leaf_stack_saved_f27_entry = 0.0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8022F90C;

loc_8022F90C:
{
    leaf_stack_saved_f26_entry = f26.d;
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 44u, true, false);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r3);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 20));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 24));
    f4.d = PpcFmulsInline(f6.d, f5.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 16));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    f27.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 32));
    f29.d = PpcFmulsInline(f8.d, f2.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 40));
    f26.d = PpcFmulsInline(f9.d, f8.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 36));
    f28.d = PpcFmulsInline(f0.d, f5.d);
    f10.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f12.d = PpcFmulsInline(f3.d, f4.d);
    f11.d = PpcFmulsInline(f0.d, f27.d);
    f31.d = PpcFmulsInline(f7.d, f26.d);
    f13.d = PpcFmulsInline(f9.d, f28.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f11.d));
    f30.d = PpcFmulsInline(f6.d, f7.d);
    f12.d = PpcFmulsInline(f3.d, f29.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f11.d));
    f11.d = PpcFmulsInline(f1.d, f30.d);
    f13.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f13.d));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f12.d));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f11.d));
    SetCRFloatResident(cr, 0, f13.d, f10.d);
}

loc_8022F9B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022F9C8;
    }
}

loc_8022F9BC:
{
    r3 = r4;
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    goto loc_8022FA7C;
}

loc_8022F9C8:
{
    f10.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    f31.d = PpcFmulsInline(f5.d, f9.d);
    f11.d = PpcFmulsInline(f0.d, f2.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f13.d));
    f12.d = PpcFmulsInline(f6.d, f1.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f11.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f31.d));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f26.d));
    f12.d = PpcFmulsInline(f8.d, f7.d);
    f11.d = (-(f11.d));
    f13.d = (-(f13.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f29.d));
    f31.d = PpcFmulsInline(f10.d, f31.d);
    f13.d = PpcFmulsInline(f10.d, f13.d);
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r4 + 8), f31.d);
    f31.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r4 + 24), f13.d);
    f11.d = PpcFmulsInline(f10.d, f11.d);
    f4.d = PpcFmulsInline(f10.d, f4.d);
    f12.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f28.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r4 + 36), f11.d);
    f13.d = PpcFmulsInline(f7.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r4 + 40), f4.d);
    f8.d = PpcFmulsInline(f8.d, f3.d);
    f4.d = PpcFmulsInline(f7.d, f1.d);
    f5.d = PpcFmulsInline(f5.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f2.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f13.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f12.d = PpcFmulsInline(f10.d, f12.d);
    f2.d = (-(f11.d));
    f5.d = PpcFmulsInline(f10.d, f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r4 + 32), f12.d);
    f1.d = (-(f1.d));
    f4.d = PpcFmulsInline(f10.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r4, f5.d);
    f0.d = PpcFmulsInline(f0.d, f9.d);
    f2.d = PpcFmulsInline(f10.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r4 + 4), f4.d);
    f1.d = PpcFmulsInline(f6.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r4 + 16), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PpcFmulsInline(f10.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r4 + 20), f0.d);
}

loc_8022FA7C:
{
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
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 116));
    f26.d = leaf_stack_saved_f26_entry;
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022F90C func_8022F90C preserves=true fpr_mask=0x00000000
