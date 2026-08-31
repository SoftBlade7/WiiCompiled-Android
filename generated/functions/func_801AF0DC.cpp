#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AF0DC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AF0DC;

loc_801AF0DC:
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
    r0 = MemoryInline::FlatRead32((r13 + -25176));
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r13 + -25168));
    r7 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -25172));
    r30 = (r30 | r0);
    r0 = MemoryInline::FlatRead32((r13 + -28904));
    r4 = (r4 | r3);
    r3 = MemoryInline::FlatRead32((r13 + -25160));
    r30 = (r30 & ~r4);
    r5 = MemoryInline::FlatRead32((r13 + -25156));
    r6 = (r3 | r30);
    r3 = MemoryInline::FlatRead32((r13 + -25180));
    r8 = ~(r30 | r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_801AF134:
{
    r0 = (r3 & r8);
    MemoryInline::FlatWrite32((r13 + -25176), r7);
    r4 = (r5 & r8);
    r3 = (r6 & r5);
    MemoryInline::FlatWrite32((r13 + -25160), r6);
    MemoryInline::FlatWrite32((r13 + -25156), r4);
    MemoryInline::FlatWrite32((r13 + -25180), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AF160;
    }
}

loc_801AF154:
{
    r0 = MemoryInline::FlatRead32((r13 + -25164));
    r0 = (r0 | r30);
    MemoryInline::FlatWrite32((r13 + -25164), r0);
}

loc_801AF160:
{
    ctx->lr = 0x801AF164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B31D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -28916));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_801AF16C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AF1C0;
    }
}

loc_801AF170:
{
    r5 = MemoryInline::FlatRead32((r13 + -25160));
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(32));
}

loc_801AF17C:
{
    MemoryInline::FlatWrite32((r13 + -28916), r6);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AF1C0;
    }
}

loc_801AF184:
{
    r0 = 0x80000000u;
    r3 = 0x80350000u;
    r0 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r4 = 0;
    r5 = (r5 & ~r0);
    r3 = (r3 + -32336);
    r0 = (r6 * 12);
    MemoryInline::FlatWrite32((r13 + -25160), r5);
    r5 = 12;
    r3 = (r3 + r0);
    ctx->lr = 0x801AF1B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
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
    r4 = 0x801B0000u;
    r3 = MemoryInline::FlatRead32((r13 + -28916));
    r4 = (r4 + -4992);
    ctx->lr = 0x801AF1C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B39BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AF1C0:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = 1;
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AF0DC func_801AF0DC preserves=true fpr_mask=0x00000000
