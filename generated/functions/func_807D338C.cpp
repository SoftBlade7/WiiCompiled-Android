#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D338C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;

    goto loc_807D338C;

loc_807D338C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 26420));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D33A8:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D33D8;
    }
}

loc_807D33B4:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D33BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D33D8;
    }
}

loc_807D33C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D33C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D33D8;
    }
}

loc_807D33CC:
{
    r5 = r6;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    goto loc_807D3444;
}

loc_807D33D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f6.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 44));
    r5 = r6;
    f7.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f7.d);
    MemoryInline::FlatWriteFloat32((r4 + 12), f4.d);
    MemoryInline::FlatWriteFloat32((r4 + 28), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 44), f0.d);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
}

loc_807D3444:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007A gpr_write=0x800000F3 gpr_return=0x00000010 fpr_read=0x8000C003 fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D338C func_807D338C preserves=true fpr_mask=0x00000000
