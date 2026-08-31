#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073BD08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8073BD08;

loc_8073BD08:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073BD24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073BD3C;
    }
}

loc_8073BD28:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // inline leaf 0x8073D1F0 (14 guest instruction(s))
}

loc_inl0_0x8073D1F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = (-(f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_inl0_0x8073D208:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_0x8073D214;
    }
}

loc_inl0_0x8073D20C:
{
    f0.d = f2.d;
    goto loc_inl0_0x8073D220;
}

loc_inl0_0x8073D214:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl0_0x8073D218:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x8073D220;
    }
}

loc_inl0_0x8073D21C:
{
    f0.d = f1.d;
}

loc_inl0_0x8073D220:
{
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
}

loc_inl0_cont_8073D1F0:
{
    // end of inlined leaf 0x8073D1F0
    r3 = MemoryInline::FlatRead32((r31 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 56));
    ctx->lr = 0x8073BD3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073D98Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_8073BD3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001E gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073BD08 func_8073BD08 preserves=true fpr_mask=0x00000000
