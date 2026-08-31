#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066B418(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8066B418;

loc_8066B418:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8066B438:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066B4A0;
    }
}

loc_8066B43C:
{
    r4 = MemoryInline::FlatRead32((r3 + 30072));
    r0 = (r4 + -13);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8066B448:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8066B460;
    }
}

loc_8066B44C:
{
    r0 = (r4 + -8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8066B454:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8066B470;
    }
}

loc_8066B458:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(17));
}

loc_8066B45C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066B498;
    }
}

loc_8066B460:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_8066B4A4;
}

loc_8066B470:
{
    r31 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r31);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8512));
    ctx->lr = 0x8066B484u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067721Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r30 + 40), static_cast<uint8_t>(r31));
    r3 = 1;
    MemoryInline::FlatWrite32((r30 + 30072), r31);
    MemoryInline::FlatWrite32((r30 + 16), r31);
    goto loc_8066B4A4;
}

loc_8066B498:
{
    r3 = 0;
    goto loc_8066B4A4;
}

loc_8066B4A0:
{
    r3 = 0;
}

loc_8066B4A4:
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
// RECOMP_REGISTRATION base 0x8066B418 func_8066B418 preserves=true fpr_mask=0x00000000
