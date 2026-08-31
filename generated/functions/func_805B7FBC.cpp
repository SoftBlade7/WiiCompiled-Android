#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B7FBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    goto loc_805B7FBC;

loc_805B7FBC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r7 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805B7FD4:
{
    f5.d = MemoryInline::FlatReadFloat32((r7 + 10152));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B7FFC;
    }
}

loc_805B7FEC:
{
    r6 = MemoryInline::FlatRead32(r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16));
    f5.d = PpcFmulsInline(f0.d, f1.d);
}

loc_805B7FFC:
{
    r7 = MemoryInline::FlatRead32(r3);
    r3 = r5;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r5 = (r30 + 36);
    r6 = MemoryInline::FlatRead32((r7 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r7 + 12));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    ctx->lr = 0x805B8060u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 12), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 16), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FA gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B7FBC func_805B7FBC preserves=true fpr_mask=0x00000000
