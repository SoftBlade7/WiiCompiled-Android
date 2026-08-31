#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AA4EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AA4EC;

loc_801AA4EC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r30 + 712));
    r31 = r3;
    r4 = MemoryInline::FlatRead16((r30 + 714));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_801AA518:
{
    r3 = (r4 | 1);
    MemoryInline::FlatWrite16((r30 + 714), static_cast<uint16_t>(r3));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AA564;
    }
}

loc_801AA524:
{
    r4 = MemoryInline::FlatRead32((r30 + 764));
    r5 = MemoryInline::FlatRead32((r30 + 768));
}

loc_801AA530:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801AA540;
    }
}

loc_801AA534:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 224), r5);
    goto loc_801AA544;
}

loc_801AA540:
{
    MemoryInline::FlatWrite32((r4 + 768), r5);
}

loc_801AA544:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801AA548:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AA558;
    }
}

loc_801AA54C:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 220), r4);
    goto loc_801AA55C;
}

loc_801AA558:
{
    MemoryInline::FlatWrite32((r5 + 764), r4);
}

loc_801AA55C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 712), static_cast<uint16_t>(r0));
}

loc_801AA564:
{
    r3 = (r30 + 744);
    ctx->lr = 0x801AA56Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AAAA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AA4EC func_801AA4EC preserves=true fpr_mask=0x00000000
