#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059CAB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8059CAB4;

loc_8059CAB4:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f2.d = MemoryInline::FlatReadFloat32(r30);
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = PpcFmulsInline(f31.d, f31.d);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8104));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f6.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f2.d = PpcFmulsInline(f6.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    f3.d = PpcFmulsInline(f5.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8059CB28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059CB30;
    }
}

loc_8059CB2C:
{
    r31 = 1;
}

loc_8059CB30:
{
    r3 = r31;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x8000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059CAB4 func_8059CAB4 preserves=true fpr_mask=0x00000000
