#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059B260(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8059B260;

loc_8059B260:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 8088);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 124));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059B28C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059B3A0;
    }
}

loc_8059B290:
{
    // inline leaf 0x8059069C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8059069C
    r4 = MemoryInline::FlatRead32((r30 + 152));
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 556));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8059B2A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8059B2B0;
    }
}

loc_8059B2AC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
}

loc_8059B2B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 156));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f2.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8059B2C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8059B2D4;
    }
}

loc_8059B2C8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
    goto loc_8059B2E8;
}

loc_8059B2D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8059B2DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059B2E8;
    }
}

loc_8059B2E0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
}

loc_8059B2E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 156));
    r3 = (r30 + 76);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r4 = (r1 + 20);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    ctx->lr = 0x8059B308u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = (r30 + 28);
    r4 = (r30 + 76);
    r5 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r6 = MemoryInline::FlatRead32((r30 + 152));
    r3 = r30;
    r5 = MemoryInline::FlatRead32((r6 + 32));
    r4 = MemoryInline::FlatRead32((r6 + 36));
    r0 = MemoryInline::FlatRead32((r6 + 40));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r30 + 124));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8059B36Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = MemoryInline::FlatRead32((r30 + 124));
    r31 = 0;
}

loc_8059B374:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8059B380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059B390;
    }
}

loc_8059B384:
{
    r5 = (r1 + 32);
    r4 = 0;
    ctx->lr = 0x8059B390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_8059B390:
{
    r31 = (r31 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_8059B39C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8059B374;
    }
}

loc_8059B3A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFC01F fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8059B260 func_8059B260 preserves=true fpr_mask=0x00000000
