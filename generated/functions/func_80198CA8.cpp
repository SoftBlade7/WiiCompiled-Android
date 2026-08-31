#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80198CA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80198CA8;

loc_80198CA8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = (r4 + r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 + 3);
    r6 = (r4 & -4);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r0 & -4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r6));
}

loc_80198CCC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80198CDC;
    }
}

loc_80198CD0:
{
    r0 = (r6 - r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(100));
}

loc_80198CD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80198CE4;
    }
}

loc_80198CDC:
{
    r3 = 0;
    goto loc_80198D44;
}

loc_80198CE4:
{
    r4 = 1163395072;
    r7 = r5;
    r3 = r31;
    r5 = (r31 + 80);
    r4 = (r4 + 20552);
    ctx->lr = 0x80198CFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019832Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 0;
    r4 = 18002;
    MemoryInline::FlatWrite16((r31 + 76), static_cast<uint16_t>(r5));
    r3 = r31;
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r5));
    r6 = MemoryInline::FlatRead32((r31 + 24));
    r7 = MemoryInline::FlatRead32((r31 + 28));
    r0 = (r6 + 16);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r4));
    r0 = (r7 - r0);
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r6 + 4), r0);
    MemoryInline::FlatWrite32((r6 + 8), r5);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    MemoryInline::FlatWrite32((r31 + 60), r6);
    MemoryInline::FlatWrite32((r31 + 64), r6);
    MemoryInline::FlatWrite32((r31 + 68), r5);
    MemoryInline::FlatWrite32((r31 + 72), r5);
}

loc_80198D44:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80198CA8 func_80198CA8 preserves=true fpr_mask=0x00000000
