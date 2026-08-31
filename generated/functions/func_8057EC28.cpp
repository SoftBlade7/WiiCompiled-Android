#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057EC28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8057EC28;

loc_8057EC28:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWrite32((r3 + 204), r5);
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r3 + 208), r5);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -524289);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWrite16((r3 + 252), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 256), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 254), static_cast<uint16_t>(r5));
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f31.d = MemoryInline::FlatReadFloat32((r3 + 104));
    r3 = r31;
    // inline leaf 0x80590D20 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 44));
    // end of inlined leaf 0x80590D20
    r0 = MemoryInline::FlatRead16((r3 + 204));
    r0 = (r0 & 8);
}

loc_8057EC9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057ECB4;
    }
}

loc_8057ECA0:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6848));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057ECB0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8057ED04;
    }
}

loc_8057ECB4:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 156));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 6656));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057ECC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057ECDC;
    }
}

loc_8057ECC8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteFloat32((r31 + 156), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057ECD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057ECDC;
    }
}

loc_8057ECD8:
{
    MemoryInline::FlatWriteFloat32((r31 + 156), f1.d);
}

loc_8057ECDC:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 156));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 6656));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057ECEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057ED04;
    }
}

loc_8057ECF0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r31 + 156), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057ECFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057ED04;
    }
}

loc_8057ED00:
{
    MemoryInline::FlatWriteFloat32((r31 + 156), f1.d);
}

loc_8057ED04:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = leaf_stack_saved_f31_entry;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057EC28 func_8057EC28 preserves=true fpr_mask=0x00000000
