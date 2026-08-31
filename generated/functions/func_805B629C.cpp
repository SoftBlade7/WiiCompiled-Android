#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B629C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];

    goto loc_805B629C;

loc_805B629C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r5;
    r5 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    r4 = r31;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r3 = (r3 + 256);
    ctx->lr = 0x805B62D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f2.d = MemoryInline::FlatReadFloat32((r29 + 272));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 280));
    f11.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteFloat32((r29 + 272), f0.d);
    f8.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f6.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 284));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 288));
    MemoryInline::FlatWriteFloat32((r29 + 276), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 292));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteFloat32((r29 + 280), f3.d);
    f3.d = MemoryInline::FlatReadFloat32(r31);
    f10.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f7.d = PpcFmulsInline(f8.d, f3.d);
    f5.d = PpcFmulsInline(f6.d, f3.d);
    f3.d = PpcFmulsInline(f11.d, f4.d);
    f9.d = PpcFmulsInline(f11.d, f10.d);
    f4.d = PpcFmulsInline(f8.d, f4.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f7.d));
    f3.d = PpcFmulsInline(f6.d, f10.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f7.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    MemoryInline::FlatWriteFloat32((r29 + 292), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r29 + 288), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 284), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003A gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0xC0000000 fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B629C func_805B629C preserves=true fpr_mask=0x00000000
