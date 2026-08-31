#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059FC48(CpuContext* MKW_RESTRICT ctx)
{
    double leaf_stack_saved_f31_entry = 0.0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8059FC48;

loc_8059FC48:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    f10.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f31.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f13.d = MemoryInline::FlatReadFloat32(r4);
    f7.d = PpcFmulsInline(f10.d, f0.d);
    f12.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f5.d = PpcFmulsInline(f31.d, f0.d);
    f9.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f4.d = PpcFmulsInline(f10.d, f13.d);
    f11.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f8.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f31.d, f13.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    r3 = (r3 + 52);
    f3.d = PpcFmulsInline(f12.d, f0.d);
    f2.d = PpcFmulsInline(f10.d, f11.d);
    f1.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f10.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f7.d = PpcFmulsInline(f12.d, f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = PpcFmulsInline(f12.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f7.d));
    f1.d = PpcFmulsInline(f9.d, f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f4.d = PpcFmulsInline(f9.d, f13.d);
    f2.d = PpcFmulsInline(f31.d, f11.d);
    f6.d = PpcFmulsInline(f9.d, f11.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = PpcFmulsInline(f31.d, f8.d);
    f0.d = PpcFmulsInline(f12.d, f13.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = leaf_stack_saved_f31_entry;
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x80000000 fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059FC48 func_8059FC48 preserves=true fpr_mask=0x00000000
