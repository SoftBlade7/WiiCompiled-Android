#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057B028(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8057B028;

loc_8057B028:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = std::fabs(f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 112));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057B064:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057B0D8;
    }
}

loc_8057B068:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_8057B070:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057B0D8;
    }
}

loc_8057B074:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_8057B080:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057B0D8;
    }
}

loc_8057B084:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057B090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057B098;
    }
}

loc_8057B094:
{
    f1.d = f0.d;
}

loc_8057B098:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    r3 = r30;
    r4 = (r1 + 8);
    // inline leaf 0x80590C94 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 196));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C94
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 120));
    f1.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057B0B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057B0C4;
    }
}

loc_8057B0BC:
{
    f1.d = f0.d;
    goto loc_8057B0D4;
}

loc_8057B0C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057B0CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057B0D4;
    }
}

loc_8057B0D0:
{
    f1.d = f0.d;
}

loc_8057B0D4:
{
    f31.d = PpcFmulsInline(f31.d, f1.d);
}

loc_8057B0D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f1.d = f31.d;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057B028 func_8057B028 preserves=true fpr_mask=0x00000000
