#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014FDBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014FDBC;

loc_8014FDBC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r3 + -27840);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = (r3 + 8);
}

loc_8014FDE0:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_8014FDE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014FE00;
    }
}

loc_8014FDEC:
{
    r3 = MemoryInline::FlatRead16((r30 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_8014FDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014FE00;
    }
}

loc_8014FDF8:
{
    r4 = 255;
    ctx->lr = 0x8014FE00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014C548u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8014FE00:
{
    r31 = (r31 + 1);
    r30 = (r30 + 92);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(4));
}

loc_8014FE0C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014FDE0;
    }
}

loc_8014FE10:
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014FDBC func_8014FDBC preserves=true fpr_mask=0x00000000
