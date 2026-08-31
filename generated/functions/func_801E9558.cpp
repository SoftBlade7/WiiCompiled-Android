#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E9558(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E9558;

loc_801E9558:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->lr = 0x801E957Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E8CF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E9580:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E9588;
    }
}

loc_801E9584:
{
    goto loc_801E95DC;
}

loc_801E9588:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_801E958C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E95CC;
    }
}

loc_801E9590:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r4 = MemoryInline::FlatRead16(r30);
}

loc_801E959C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E95A8;
    }
}

loc_801E95A0:
{
    r3 = (r3 + 13824);
    goto loc_801E95AC;
}

loc_801E95A8:
{
    r3 = 0;
}

loc_801E95AC:
{
    r0 = MemoryInline::FlatRead16((r3 + 18));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801E95B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E95D4;
    }
}

loc_801E95B8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 1073741824);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E95C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E95D4;
    }
}

loc_801E95C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(100));
}

loc_801E95C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E95D4;
    }
}

loc_801E95CC:
{
    r3 = -3;
    goto loc_801E95DC;
}

loc_801E95D4:
{
    MemoryInline::FlatWrite16((r30 + 24), static_cast<uint16_t>(r31));
    r3 = 0;
}

loc_801E95DC:
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
// RECOMP_REGISTRATION base 0x801E9558 func_801E9558 preserves=true fpr_mask=0x00000000
