#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807630D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807630D0;

loc_807630D0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r7 = MemoryInline::FlatRead32((r3 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 236));
    r6 = MemoryInline::FlatRead32((r3 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r5 = (r0 | 1);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = MemoryInline::FlatRead32((r3 + 180));
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r5));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80763138:
{
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -11940));
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8076316C;
    }
}

loc_8076315C:
{
    r3 = (r3 + 176);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8076316Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8076316C:
{
    r4 = MemoryInline::FlatRead32((r31 + 184));
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = MemoryInline::FlatRead32(r4);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r0 = MemoryInline::FlatRead16((r4 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r4 + 44), static_cast<uint16_t>(r0));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r4 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 52), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r4 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11940));
    r0 = MemoryInline::FlatRead32((r31 + 180));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807631BC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807631DC;
    }
}

loc_807631C8:
{
    r12 = MemoryInline::FlatRead32((r31 + 176));
    r3 = (r31 + 176);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x807631DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807631DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 184));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f2.d);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807630D0 func_807630D0 preserves=true fpr_mask=0x00000000
