#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805995C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f30_entry = 0.0;
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_805995C0;

loc_805995C0:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    f30.d = f1.d;
    f31.d = f2.d;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    // inline leaf 0x80590764 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80590764
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8048));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80599618:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80599620;
    }
}

loc_8059961C:
{
    MemoryInline::FlatWriteFloat32((r30 + 68), f31.d);
}

loc_80599620:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8040));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80599630:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80599638;
    }
}

loc_80599634:
{
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
}

loc_80599638:
{
    r3 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 26252));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 72), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805995C0 func_805995C0 preserves=true fpr_mask=0x00000000
