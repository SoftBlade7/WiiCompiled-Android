#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023A404(CpuContext* MKW_RESTRICT ctx)
{
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8023A404;

loc_8023A404:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r6 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r5;
    r5 = r4;
    r4 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 16u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r3);
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 4));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    // inline leaf 0x8023A540 (33 guest instruction(s))
    f7.d = MemoryInline::FlatReadFloat32(r4);
    f6.d = MemoryInline::FlatReadFloat32(r5);
    f5.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = PpcFmulsInline(f7.d, f6.d);
    f10.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = PpcFmulsInline(f5.d, f6.d);
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f9.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = PpcFmulsInline(f7.d, f4.d);
    f8.d = PpcFmulsInline(f10.d, f9.d);
    f11.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f7.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f2.d));
    f2.d = PpcFmulsInline(f10.d, f6.d);
    f0.d = PpcFmulsInline(f11.d, f9.d);
    f3.d = (-(f3.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r6 + 12), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f0.d));
    f1.d = PpcFmulsInline(f11.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r6 + 8), f0.d);
    f3.d = PpcFmulsInline(f5.d, f9.d);
    f2.d = PpcFmulsInline(f10.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
    f0.d = PpcFmulsInline(f11.d, f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r6 + 4), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32(r6, f0.d);
    // end of inlined leaf 0x8023A540
    f12.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r30 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 4));
    f3.d = PpcFmulsInline(f12.d, f7.d);
    f30.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 8));
    f5.d = PpcFmulsInline(f1.d, f31.d);
    f9.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f4.d = PpcFmulsInline(f30.d, f7.d);
    f0.d = PpcFmulsInline(f1.d, f11.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    f6.d = PpcFmulsInline(f9.d, f7.d);
    f13.d = PpcFmulsInline(f30.d, f31.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f3.d = PpcFmulsInline(f1.d, f8.d);
    f1.d = PpcFmulsInline(f1.d, f7.d);
    f0.d = PpcFmulsInline(f30.d, f8.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f5.d = PpcFmulsInline(f9.d, f11.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PpcFmulsInline(f9.d, f31.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f2.d = PpcFmulsInline(f12.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PpcFmulsInline(f12.d, f11.d);
    f7.d = PpcFmulsInline(f12.d, f8.d);
    f4.d = PpcFmulsInline(f9.d, f8.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f10.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f8.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = PpcFmulsInline(f30.d, f11.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteFloat32(r31, f8.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003A gpr_write=0xC0000073 gpr_return=0x00000010 fpr_read=0xC0000000 fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023A404 func_8023A404 preserves=true fpr_mask=0x00000000
