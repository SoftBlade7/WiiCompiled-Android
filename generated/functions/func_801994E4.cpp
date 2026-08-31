#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801994E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801994E4;

loc_801994E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_801994F0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80199514;
    }
}

loc_80199510:
{
    r30 = 1;
}

loc_80199514:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r4 = (r30 + 3);
    r30 = (r4 & -4);
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80199524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80199530;
    }
}

loc_80199528:
{
    r3 = (r3 + 32);
    ctx->lr = 0x80199530u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A7EE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80199530:
{
}

loc_80199534:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(0))) {
        goto loc_80199588;
    }
}

loc_80199538:
{
    r3 = MemoryInline::FlatRead32((r31 + 60));
    r0 = (r29 + -1);
    r5 = ~(r0 | r0);
    r0 = MemoryInline::FlatRead32((r31 + 64));
    r4 = (r29 + r3);
    r4 = (r4 + -1);
    r29 = (r5 & r4);
    r30 = (r30 + r29);
}

loc_8019955C:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(r0))) {
        goto loc_80199568;
    }
}

loc_80199560:
{
    r29 = 0;
    goto loc_801995D0;
}

loc_80199568:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r5 = (r30 - r3);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80199574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80199580;
    }
}

loc_80199578:
{
    r4 = 0;
    ctx->lr = 0x80199580u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80199580:
{
    MemoryInline::FlatWrite32((r31 + 60), r30);
    goto loc_801995D0;
}

loc_80199588:
{
    r5 = MemoryInline::FlatRead32((r31 + 64));
    r0 = (-1 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r4 = ~(r0 | r0);
    r0 = MemoryInline::FlatRead32((r31 + 60));
    r3 = (r5 - r30);
    r29 = (r4 & r3);
}

loc_801995A4:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r0))) {
        goto loc_801995B0;
    }
}

loc_801995A8:
{
    r29 = 0;
    goto loc_801995D0;
}

loc_801995B0:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r5 = (r5 - r29);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801995BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801995CC;
    }
}

loc_801995C0:
{
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x801995CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801995CC:
{
    MemoryInline::FlatWrite32((r31 + 64), r29);
}

loc_801995D0:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801995D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801995E4;
    }
}

loc_801995DC:
{
    r3 = (r31 + 32);
    ctx->lr = 0x801995E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801995E4:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r29;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801994E4 func_801994E4 preserves=true fpr_mask=0x00000000
