#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023B2AC(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8023B2AC;

loc_8023B2AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8023B2D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023B324;
    }
}

loc_8023B2D8:
{
    r31 = MemoryInline::FlatRead32((r5 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8023B2E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023B304;
    }
}

loc_8023B2E4:
{
    r4 = MemoryInline::FlatRead32((r31 + 36));
    r30 = 1;
    ctx->lr = 0x8023B2F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023B3F0u>(ctx);
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
    r0 = MemoryInline::FlatRead32((r31 + 40));
    r3 = r29;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    // inline leaf 0x8023B910 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r0 = -1;
    r4 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite32((r3 + 28), r5);
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    // end of inlined leaf 0x8023B910
    goto loc_8023B324;
}

loc_8023B304:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8023B308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023B324;
    }
}

loc_8023B30C:
{
    r4 = r5;
    ctx->lr = 0x8023B314u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023B3F0u>(ctx);
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
    r0 = -1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r3 = r29;
    // inline leaf 0x8023B910 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r0 = -1;
    r4 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite32((r3 + 28), r5);
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    // end of inlined leaf 0x8023B910
}

loc_8023B324:
{
    r3 = r30;
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
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023B2AC func_8023B2AC preserves=true fpr_mask=0x00000000
