#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802417FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802417FC;

loc_802417FC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801730CCu>(ctx);
    r3 = 0x80380000u;
    r0 = MemoryInline::FlatRead32((r3 + 17696));
    r0 = (r0 & 1);
}

loc_80241824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80241898;
    }
}

loc_80241828:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80241834:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80241898;
    }
}

loc_80241838:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80241844:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80241898;
    }
}

loc_80241848:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80241854:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80241898;
    }
}

loc_80241858:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80241864:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80241898;
    }
}

loc_80241868:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80241874:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80241898;
    }
}

loc_80241878:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80241884:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80241898;
    }
}

loc_80241888:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80241894:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802418BC;
    }
}

loc_80241898:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80173080u>(ctx);
    r0 = MemoryInline::FlatRead16((r13 + -27720));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802418A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802418BC;
    }
}

loc_802418AC:
{
    r3 = 0x80380000u;
    r0 = MemoryInline::FlatRead32((r3 + 17696));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r3 + 17696), r0);
}

loc_802418BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000200B gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802417FC func_802417FC preserves=true fpr_mask=0x00000000
