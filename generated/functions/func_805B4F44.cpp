#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B4F44(CpuContext* MKW_RESTRICT ctx)
{
    double leaf_stack_saved_f25_entry = 0.0;
    double leaf_stack_saved_f26_entry = 0.0;
    double leaf_stack_saved_f27_entry = 0.0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
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
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_805B4F44;

loc_805B4F44:
{
    leaf_stack_saved_f25_entry = f25.d;
    leaf_stack_saved_f26_entry = f26.d;
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 292u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 160u, (r3 + 164));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 20));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 4));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 36));
    f8.d = PpcFmulsInline(f0.d, f1.d);
    f5.d = PpcFmulsInline(f2.d, f1.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 40));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r3 + 168));
    f10.d = PpcFmulsInline(f3.d, f1.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 24));
    f9.d = PpcFmulsInline(f4.d, f0.d);
    f7.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 8));
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 44));
    f4.d = PpcFmulsInline(f2.d, f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 168u, (r3 + 172));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f9.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 28));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    f11.d = PpcFmulsInline(f11.d, f2.d);
    f12.d = PpcFmulsInline(f3.d, f2.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 280u, (r3 + 284));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f9.d));
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 284u, (r3 + 288));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f7.d));
    f9.d = PpcFmulsInline(f6.d, f2.d);
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 288u, (r3 + 292));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f27.d = PpcFmulsInline(f1.d, f3.d);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r3 + 84));
    f28.d = PpcFmulsInline(f0.d, f3.d);
    f25.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f6.d));
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r3 + 88));
    f29.d = PpcFmulsInline(f2.d, f26.d);
    f1.d = PpcFmulsInline(f1.d, f26.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 32), f25.d);
    f2.d = PpcFmulsInline(f2.d, f25.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f29.d));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r3 + 68));
    f0.d = PpcFmulsInline(f0.d, f25.d);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f27.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r3 + 72));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f28.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r3 + 52));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f27.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r3 + 56));
    f11.d = PpcFmulsInline(f11.d, f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 40), f3.d);
    f3.d = PpcFmulsInline(f8.d, f31.d);
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r3 + 92));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f25.d));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r3 + 76));
    f2.d = PpcFmulsInline(f7.d, f13.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r3 + 60));
    f0.d = PpcFmulsInline(f4.d, f13.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 36), f26.d);
    f1.d = PpcFmulsInline(f5.d, f31.d);
    f10.d = PpcFmulsInline(f10.d, f13.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 20), f28.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f7.d = PpcFmulsInline(f12.d, f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 24), f27.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f10.d));
    f4.d = PpcFmulsInline(f9.d, f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 28), f25.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f6.d, f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 8), f31.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 12), f13.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 16), f8.d);
    MemoryInline::FlatWriteFloat32((r3 + 160), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 156), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 152), f0.d);
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
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = leaf_stack_saved_f25_entry;
    r1 = (r1 + 160);
    ctx->gpr[1] = r1;
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
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00000002 gpr_return=0x00000000 fpr_read=0xFE000000 fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B4F44 func_805B4F44 preserves=true fpr_mask=0x00000000
