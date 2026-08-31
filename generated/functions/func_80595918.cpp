#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80595918(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80595918;

loc_80595918:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r5 = 0x80890000u;
    r4 = 0x808B0000u;
    r0 = (r0 & 256);
}

loc_8059593C:
{
    r5 = (r5 + 7920);
    r4 = (r4 + 25832);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059596C;
    }
}

loc_80595948:
{
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 156));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 156), f0.d);
    goto loc_8059597C;
}

loc_8059596C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 156), f0.d);
}

loc_8059597C:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 156));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80595988:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80595994;
    }
}

loc_8059598C:
{
    MemoryInline::FlatWriteFloat32((r3 + 156), f0.d);
    goto loc_805959A4;
}

loc_80595994:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8059599C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805959A4;
    }
}

loc_805959A0:
{
    MemoryInline::FlatWriteFloat32((r3 + 156), f0.d);
}

loc_805959A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 156));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    f31.d = PpcFmulsInline(f1.d, f0.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    MemoryInline::FlatWriteFloat32((r3 + 548), f31.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80595918 func_80595918 preserves=true fpr_mask=0x00000000
