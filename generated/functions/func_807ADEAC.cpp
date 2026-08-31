#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807ADEAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807ADEAC;

loc_807ADEAC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 12104);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 656));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 652));
    // inline leaf 0x8079ED1C (12 guest instruction(s))
}

loc_inl0_0x8079ED1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl0_0x8079ED24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x8079ED44;
    }
}

loc_inl0_0x8079ED28:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl0_0x8079ED34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_0x8079ED3C;
    }
}

loc_inl0_0x8079ED38:
{
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
}

loc_inl0_0x8079ED3C:
{
    r3 = 1;
    goto loc_inl0_cont_8079ED1C;
}

loc_inl0_0x8079ED44:
{
    r3 = 0;
}

loc_inl0_cont_8079ED1C:
{
    // end of inlined leaf 0x8079ED1C
    r31 = r3;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079FD84u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807ADEE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807ADEFC;
    }
}

loc_807ADEEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807ADEF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807ADEFC;
    }
}

loc_807ADEF4:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8079ED4Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_807ADEFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000004A gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807ADEAC func_807ADEAC preserves=true fpr_mask=0x00000000
