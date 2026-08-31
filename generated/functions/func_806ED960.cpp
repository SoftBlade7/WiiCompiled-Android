#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806ED960(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806ED960;

loc_806ED960:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 10));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806ED984:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806ED998;
    }
}

loc_806ED988:
{
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r0));
    goto loc_806ED9A0;
}

loc_806ED998:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r0));
}

loc_806ED9A0:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x806ED9ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EDA04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808A0000u;
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2836));
    r4 = 0;
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    goto loc_806ED9E4;
}

loc_806ED9C4:
{
    r0 = MemoryInline::FlatRead32((r31 + 44));
    r5 = (r5 + 1);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 64));
    r3 = (r0 + r4);
    r4 = (r4 + 56);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
}

loc_806ED9E4:
{
    r0 = MemoryInline::FlatRead16((r31 + 42));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_806ED9EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806ED9C4;
    }
}

loc_806ED9F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806ED960 func_806ED960 preserves=true fpr_mask=0x00000000
