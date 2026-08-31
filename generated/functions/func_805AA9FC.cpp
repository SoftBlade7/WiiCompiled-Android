#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AA9FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805AA9FC;

loc_805AA9FC:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805AAA24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32(r3);
    r30 = r3;
    r0 = MemoryInline::FlatRead16((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AAA34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AABCC;
    }
}

loc_805AAA38:
{
    f2.d = MemoryInline::FlatReadFloat32((r5 + 52));
    r3 = 0x80890000u;
    f3.d = MemoryInline::FlatReadFloat32((r5 + 48));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 9336));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f3.d);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805AAA60:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f2.d);
    r3 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805AAB88;
    }
}

loc_805AAA7C:
{
    f5.d = MemoryInline::FlatReadFloat32((r5 + 64));
    r3 = (r1 + 8);
    f6.d = MemoryInline::FlatReadFloat32((r5 + 60));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f7.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    r4 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r5 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f5.d);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x805AAACCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32(r30);
    r0 = 1127219200;
    r4 = 0x80890000u;
    r3 = 0x80890000u;
    r5 = MemoryInline::FlatRead16((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 76), r5);
    f1.d = MemoryInline::FlatReadFloat64((r4 + 9360));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 9348));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteFloat32((r31 + 56), f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r31 + 64), f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x805AAB50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805AAB58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805AAB64;
    }
}

loc_805AAB5C:
{
    r0 = 1;
    goto loc_805AAB68;
}

loc_805AAB64:
{
    r0 = 0;
}

loc_805AAB68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AAB6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AAB88;
    }
}

loc_805AAB70:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
}

loc_805AAB88:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 112), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 116), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
}

loc_805AABCC:
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805AA9FC func_805AA9FC preserves=true fpr_mask=0x00000000
