#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D3564(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801D3564;

loc_801D3564:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = -1;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    r4 = 4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = 20;
    ctx->lr = 0x801D3594u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D2EECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D3598:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D3610;
    }
}

loc_801D359C:
{
    r4 = MemoryInline::FlatRead32(r29);
}

loc_801D35A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801D35D0;
    }
}

loc_801D35A8:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r4 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r4 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32(r4, r3);
    goto loc_801D35DC;
}

loc_801D35D0:
{
    MemoryInline::FlatWriteRam32(r3, r3);
    MemoryInline::FlatWriteRam32((r3 + 4), r3);
    MemoryInline::FlatWrite32(r29, r3);
}

loc_801D35DC:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = -1;
    MemoryInline::FlatWriteRam32((r3 + 8), r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r4);
    MemoryInline::FlatWriteRam32((r3 + 12), r30);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r31 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D3604:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D3610;
    }
}

loc_801D3608:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_801D3610:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801D3564 func_801D3564 preserves=true fpr_mask=0x00000000
