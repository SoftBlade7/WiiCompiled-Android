#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805330C0(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805330C0;

loc_805330C0:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 17200));
    r0 = MemoryInline::FlatRead32((r3 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805330F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053318C;
    }
}

loc_805330FC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_8053310C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053318C;
    }
}

loc_80533110:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 336));
    // inline leaf 0x8082B3D4 (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // end of inlined leaf 0x8082B3D4
    r0 = MemoryInline::FlatRead32((r30 + 32));
    f31.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    r0 = (r0 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
}

loc_80533130:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053318C;
    }
}

loc_80533138:
{
    // inline leaf 0x8082B420 (3 guest instruction(s))
    r3 = 0x808E0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -30116));
    // end of inlined leaf 0x8082B420
    r31 = 0x80890000u;
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 344));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80533150:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80533168;
    }
}

loc_80533154:
{
    // inline leaf 0x8082B420 (3 guest instruction(s))
    r3 = 0x808E0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -30116));
    // end of inlined leaf 0x8082B420
    f0.d = MemoryInline::FlatReadFloat32((r31 + 344));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80533164:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053318C;
    }
}

loc_80533168:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80533170:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80533180;
    }
}

loc_80533174:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 72), static_cast<uint8_t>(r0));
    goto loc_80533188;
}

loc_80533180:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 72), static_cast<uint8_t>(r0));
}

loc_80533188:
{
    MemoryInline::FlatWriteFloat32((r30 + 68), f31.d);
}

loc_8053318C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0xC0000003 fpr_write=0xC0000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805330C0 func_805330C0 preserves=true fpr_mask=0x00000000
