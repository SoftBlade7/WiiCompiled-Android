#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E12E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E12E4;

loc_801E12E4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r9 = 0;
    r10 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r5 & -32);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWrite32((r3 + 16), r5);
    r5 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    r4 = r0;
    MemoryInline::FlatWrite32((r3 + 24), r6);
    MemoryInline::FlatWrite32((r3 + 4), r7);
    MemoryInline::FlatWrite32((r3 + 8), r8);
    MemoryInline::FlatWrite32((r3 + 20), r9);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = r10;
    ctx->lr = 0x801E1330u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E1334:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E133C;
    }
}

loc_801E1338:
{
    goto loc_801E1370;
}

loc_801E133C:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r5 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r0 - r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_801E1358:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E1364;
    }
}

loc_801E135C:
{
    r0 = (r3 + 31);
    r4 = (r0 & -32);
}

loc_801E1364:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r5 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x801E1370u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB344u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801E1370:
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E12E4 func_801E12E4 preserves=true fpr_mask=0x00000000
