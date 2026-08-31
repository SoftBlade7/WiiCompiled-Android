#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80042170(CpuContext* MKW_RESTRICT ctx)
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
    uint8_t* guest_range_3 = nullptr;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    uint32_t xer = ctx->xer;

    goto loc_80042170;

loc_80042170:
{
    leaf_stack_saved_f26_entry = f26.d;
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800421A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80042278;
    }
}

loc_800421AC:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -30160));
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 44u, true, false);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    f0.d = PpcFmulsInline(f3.d, f1.d);
    f26.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 16));
    f31.d = PpcFmulsInline(f4.d, f5.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r5 + 32));
    f8.d = (-(f9.d));
    f27.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r5 + 40));
    f11.d = (-(f26.d));
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r5 + 24));
    f6.d = PpcFmulsInline(f4.d, f6.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    f8.d = PpcFmulsInline(f8.d, f0.d);
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 20));
    f13.d = PpcFmulsInline(f11.d, f0.d);
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r5 + 36));
    f5.d = PpcFmulsInline(f7.d, f6.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f11.d = PpcFmulsInline(f12.d, f6.d);
    f29.d = (-(f30.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f5.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f11.d));
    f27.d = PpcFmulsInline(f27.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f11.d));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f27.d);
    f5.d = PpcFmulsInline(f4.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 12), f1.d);
    f1.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = PpcFmulsInline(f28.d, f6.d);
    f2.d = PpcFmulsInline(f12.d, f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 28), f8.d);
    f27.d = PpcFmulsInline(f28.d, f31.d);
    f13.d = PpcFmulsInline(f30.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f2.d);
    f10.d = PpcFmulsInline(f10.d, f3.d);
    f8.d = PpcFmulsInline(f26.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f27.d);
    f4.d = PpcFmulsInline(f7.d, f31.d);
    f2.d = PpcFmulsInline(f9.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f10.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f13.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 44), f0.d);
    goto loc_80042330;
}

loc_80042278:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 44u, true, false);
    f26.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r5 + 32));
    f0.d = PpcFmulsInline(f3.d, f1.d);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r5);
    f5.d = PpcFmulsInline(f4.d, f2.d);
    f7.d = (-(f26.d));
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r5 + 40));
    f6.d = (-(f10.d));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r5 + 8));
    f29.d = PpcFmulsInline(f28.d, f5.d);
    f27.d = PpcFmulsInline(f7.d, f0.d);
    f9.d = PpcFmulsInline(f6.d, f0.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r5 + 16));
    f7.d = PpcFmulsInline(f8.d, f5.d);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r5 + 20));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f29.d));
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r5 + 36));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f7.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r5 + 4));
    f13.d = (-(f31.d));
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r5 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f7.d));
    f27.d = PpcFmulsInline(f30.d, f3.d);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r3 + 44), f2.d);
    f9.d = PpcFmulsInline(f26.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 12), f1.d);
    f1.d = PpcFmulsInline(f13.d, f0.d);
    f0.d = PpcFmulsInline(f12.d, f5.d);
    f2.d = PpcFmulsInline(f12.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r3 + 40), f27.d);
    f27.d = PpcFmulsInline(f28.d, f4.d);
    f11.d = PpcFmulsInline(f11.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 32), f9.d);
    f9.d = PpcFmulsInline(f31.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 20), f2.d);
    f6.d = PpcFmulsInline(f6.d, f3.d);
    f4.d = PpcFmulsInline(f8.d, f4.d);
    f2.d = PpcFmulsInline(f10.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 16), f9.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 24), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 28), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 36), f27.d);
}

loc_80042330:
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
    f26.d = leaf_stack_saved_f26_entry;
    r1 = (r1 + 112);
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x00000002 gpr_return=0x00000000 fpr_read=0xFC00003E fpr_write=0xFC003FF7 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80042170 func_80042170 preserves=true fpr_mask=0x00000000
