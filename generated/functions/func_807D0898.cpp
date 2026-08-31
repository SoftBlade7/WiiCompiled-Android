#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D0898(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D0898;

loc_807D0898:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 116));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D08C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0918;
    }
}

loc_807D08C4:
{
    r3 = r0;
    // inline leaf 0x8055AFD0 (8 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = PpcFmulsInline(f1.d, f1.d);
    r4 = MemoryInline::FlatRead32((r4 + 72));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    // end of inlined leaf 0x8055AFD0
    r3 = MemoryInline::FlatRead32((r31 + 256));
}

loc_807D08D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D08E4;
    }
}

loc_807D08D8:
{
    f0.d = PpcFmulsInline(f31.d, f31.d);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_807D08E4:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
}

loc_807D08EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D0900;
    }
}

loc_807D08F0:
{
    r3 = MemoryInline::FlatRead32(r3);
    f0.d = PpcFmulsInline(f31.d, f31.d);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_807D0900:
{
    r3 = MemoryInline::FlatRead32((r31 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D0908:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0918;
    }
}

loc_807D090C:
{
    f0.d = PpcFmulsInline(f31.d, f31.d);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_807D0918:
{
    MemoryInline::FlatWriteFloat32((r31 + 172), f31.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D0898 func_807D0898 preserves=true fpr_mask=0x00000000
