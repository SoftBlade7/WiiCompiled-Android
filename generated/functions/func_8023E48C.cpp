#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023E48C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8023E48C;

loc_8023E48C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r6 = MemoryInline::FlatRead32((r13 + -23788));
    MemoryInline::FlatWrite32((r13 + -23792), r3);
}

loc_8023E4A4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8023E514;
    }
}

loc_8023E4A8:
{
    r4 = (r3 * 12);
    r3 = 1127219200;
    r5 = 0x802A0000u;
    r0 = MemoryInline::FlatRead16((r6 + 52));
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r5 = (r5 + 16104);
    r5_addr_1 = (r5 + r4);
    r4 = MemoryInline::FlatRead16(r5_addr_1);
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -24440));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWrite16((r6 + 52), static_cast<uint16_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteFloat32((r6 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r13 + -23792));
    r4 = MemoryInline::FlatRead32((r13 + -23788));
    r3 = (r0 * 12);
    r0 = MemoryInline::FlatRead16((r4 + 52));
    r3 = (r5 + r3);
    r0 = (r0 | 1);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWrite16((r4 + 52), static_cast<uint16_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
}

loc_8023E514:
{
    r12 = MemoryInline::FlatRead32((r13 + -23784));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8023E51C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023E52C;
    }
}

loc_8023E520:
{
    r3 = MemoryInline::FlatRead32((r13 + -23780));
    ctr = r12;
    ctx->lr = 0x8023E52Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8023E52C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023E48C func_8023E48C preserves=true fpr_mask=0x00000000
