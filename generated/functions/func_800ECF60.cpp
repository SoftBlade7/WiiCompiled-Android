#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ECF60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800ECF60;

loc_800ECF60:
{
    r5 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r5 + 23012));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_800ECF6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ECF7C;
    }
}

loc_800ECF70:
{
    r0 = 19;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x800ED5A8u>(ctx);
    r0 = ctx->gpr[0];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_800ECF7C:
{
    r6 = 0x800F0000u;
    r3 = MemoryInline::FlatRead32((r13 + -31912));
    r4 = (r5 + 23204);
    r7 = (r5 + 23016);
    r6 = (r6 + -10544);
    r5 = 1;
    ctx->lr = 0x800ECF98u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019C990u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 2;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x800ED5A8u>(ctx);
    r0 = ctx->gpr[0];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF27 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800ECF60 func_800ECF60 preserves=true fpr_mask=0x00000000
