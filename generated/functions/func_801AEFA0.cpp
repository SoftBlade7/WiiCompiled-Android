#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AEFA0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AEFA0;

loc_801AEFA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r13 + -25156));
    r0 = (r0 & r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AF0C0;
    }
}

loc_801AEFD0:
{
    r0 = (r4 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AEFD4:
{
    r6 = MemoryInline::FlatRead32((r13 + -25168));
    r7 = ~(r31 | r31);
    r5 = MemoryInline::FlatRead32((r13 + -25172));
    r6 = (r6 & r7);
    r4 = (r4 & -256);
    r0 = (r5 & r7);
    MemoryInline::FlatWrite32((r13 + -25168), r6);
    MemoryInline::FlatWrite32((r13 + -25172), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AF05C;
    }
}

loc_801AEFF8:
{
    r0 = (r4 & -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AEFFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AF05C;
    }
}

loc_801AF000:
{
    r0 = (r4 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AF004:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AF05C;
    }
}

loc_801AF008:
{
    r0 = (r4 & 1073741824);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AF00C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AF05C;
    }
}

loc_801AF010:
{
    r0 = (r4 & 67108864);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AF014:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AF05C;
    }
}

loc_801AF018:
{
    r0 = (r4 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AF01C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AF05C;
    }
}

loc_801AF020:
{
    r0 = (r4 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AF024:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AF05C;
    }
}

loc_801AF028:
{
    r0 = (r3 * 12);
    r4 = 0x80350000u;
    r8 = 0x801B0000u;
    r4 = (r4 + -32336);
    r6 = (r4 + r0);
    r8 = (r8 + -5404);
    r4 = (r13 + -28896);
    r5 = 1;
    r7 = 10;
    r10 = 0;
    r9 = 0;
    ctx->lr = 0x801AF058u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B33ECu>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801AF0C0;
}

loc_801AF05C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r3 = r31;
    ctx->lr = 0x801AF06Cu;
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
    r4 = MemoryInline::FlatRead32((r13 + -25156));
    r9 = ~(r31 | r31);
    r0 = MemoryInline::FlatRead32((r13 + -25168));
    r3 = r30;
    r8 = (r4 & r9);
    r5 = MemoryInline::FlatRead32((r13 + -25172));
    r7 = (r0 & r9);
    r0 = MemoryInline::FlatRead32((r13 + -25180));
    r6 = (r5 & r9);
    r4 = MemoryInline::FlatRead32((r13 + -25176));
    r0 = (r0 & r9);
    MemoryInline::FlatWrite32((r13 + -25156), r8);
    r5 = (r4 & r9);
    r4 = 0;
    MemoryInline::FlatWrite32((r13 + -25168), r7);
    MemoryInline::FlatWrite32((r13 + -25172), r6);
    MemoryInline::FlatWrite32((r13 + -25176), r5);
    MemoryInline::FlatWrite32((r13 + -25180), r0);
    ctx->lr = 0x801AF0B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A9260u>(ctx);
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
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801AF0C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AEFA0 func_801AEFA0 preserves=true fpr_mask=0x00000000
